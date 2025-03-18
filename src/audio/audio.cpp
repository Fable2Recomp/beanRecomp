#include "audio.h"
#include <SDL3/SDL.h>
#include <iostream>
#include <fstream>
#include <cstring>
#include <filesystem>

namespace XenonRecomp {

// Static member initialization
SDL_AudioDevice* AudioSystem::audioDevice = nullptr;
SDL_AudioSpec AudioSystem::audioSpec = {};
std::unordered_map<std::string, std::shared_ptr<AudioSystem::Sound>> AudioSystem::sounds;
std::vector<AudioSystem::Channel> AudioSystem::channels;
float AudioSystem::masterVolume = 1.0f;
bool AudioSystem::initialized = false;
XACTParser AudioSystem::xactParser;

bool AudioSystem::Initialize() {
    if (initialized) {
        return true;
    }

    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        std::cerr << "SDL audio initialization failed: " << SDL_GetError() << std::endl;
        return false;
    }

    // Set up audio specification
    SDL_AudioSpec desired = {};
    desired.freq = 48000;
    desired.format = SDL_AUDIO_S16;
    desired.channels = 2;
    desired.samples = 4096;
    desired.callback = AudioCallback;

    // Open audio device
    audioDevice = SDL_OpenAudioDevice(nullptr, 0, &desired, &audioSpec, 0);
    if (!audioDevice) {
        std::cerr << "Failed to open audio device: " << SDL_GetError() << std::endl;
        return false;
    }

    // Initialize channels
    channels.resize(16); // Support up to 16 simultaneous sounds
    for (auto& channel : channels) {
        channel.active = false;
        channel.stream = nullptr;
    }

    // Start audio playback
    SDL_PlayAudioDevice(audioDevice);

    initialized = true;
    return true;
}

void AudioSystem::Shutdown() {
    if (!initialized) {
        return;
    }

    // Stop all sounds
    for (auto& channel : channels) {
        if (channel.active) {
            if (channel.stream) {
                SDL_DestroyAudioStream(channel.stream);
                channel.stream = nullptr;
            }
            channel.active = false;
        }
    }

    // Close audio device
    if (audioDevice) {
        SDL_CloseAudioDevice(audioDevice);
        audioDevice = nullptr;
    }

    // Clear sound cache
    sounds.clear();

    // Quit SDL audio subsystem
    SDL_QuitSubSystem(SDL_INIT_AUDIO);

    initialized = false;
}

bool AudioSystem::LoadSound(const std::string& filename, const std::string& id) {
    if (!initialized) {
        std::cerr << "Audio system not initialized" << std::endl;
        return false;
    }

    std::shared_ptr<Sound> sound = nullptr;

    // Determine file type by extension
    size_t dotPos = filename.find_last_of('.');
    if (dotPos != std::string::npos) {
        std::string ext = filename.substr(dotPos);
        
        if (ext == ".wav") {
            sound = LoadWavFile(filename);
        } else if (ext == ".ogg") {
            sound = LoadOggFile(filename);
        } else if (ext == ".mp3") {
            sound = LoadMp3File(filename);
        } else if (ext == ".xwb") {
            // For XWB files, we need to load the entire wave bank
            if (!LoadWaveBank(filename)) {
                return false;
            }
            // Use the first wave in the bank
            if (xactParser.GetWaveCount() > 0) {
                sound = ConvertXACTWaveToSound(xactParser.GetWave(0));
            }
        } else {
            std::cerr << "Unsupported audio format: " << ext << std::endl;
            return false;
        }
    } else {
        std::cerr << "File has no extension: " << filename << std::endl;
        return false;
    }

    if (!sound) {
        std::cerr << "Failed to load sound: " << filename << std::endl;
        return false;
    }

    // Store the sound
    sounds[id] = sound;
    return true;
}

bool AudioSystem::LoadSoundFromMemory(const void* data, size_t size, const std::string& id) {
    if (!initialized) {
        std::cerr << "Audio system not initialized" << std::endl;
        return false;
    }

    // Create SDL_RWops from memory
    SDL_RWops* rw = SDL_RWFromConstMem(data, static_cast<int>(size));
    if (!rw) {
        std::cerr << "Failed to create RWops from memory: " << SDL_GetError() << std::endl;
        return false;
    }

    // Load WAV data
    SDL_AudioSpec spec;
    uint8_t* audioData;
    uint32_t audioLen;

    if (SDL_LoadWAV_RW(rw, 1, &spec, &audioData, &audioLen) == nullptr) {
        std::cerr << "Failed to load WAV from memory: " << SDL_GetError() << std::endl;
        return false;
    }

    // Create sound object
    auto sound = std::make_shared<Sound>();
    sound->spec = spec;
    sound->length = audioLen;
    sound->data.resize(audioLen);
    std::memcpy(sound->data.data(), audioData, audioLen);

    // Free the loaded data
    SDL_free(audioData);

    // Store the sound
    sounds[id] = sound;
    return true;
}

int AudioSystem::PlaySound(const std::string& id, bool loop, float volume) {
    if (!initialized) {
        std::cerr << "Audio system not initialized" << std::endl;
        return -1;
    }

    // Find the sound
    auto it = sounds.find(id);
    if (it == sounds.end()) {
        std::cerr << "Sound not found: " << id << std::endl;
        return -1;
    }

    // Find an available channel
    int channelId = -1;
    for (size_t i = 0; i < channels.size(); ++i) {
        if (!channels[i].active) {
            channelId = static_cast<int>(i);
            break;
        }
    }

    if (channelId == -1) {
        std::cerr << "No available channels" << std::endl;
        return -1;
    }

    // Set up the channel
    auto& channel = channels[channelId];
    channel.active = true;
    channel.loop = loop;
    channel.volume = volume;
    channel.position = 0;
    channel.sound = it->second;

    // Create audio stream for conversion if needed
    if (channel.stream) {
        SDL_DestroyAudioStream(channel.stream);
    }

    channel.stream = SDL_CreateAudioStream(
        channel.sound->spec.format, channel.sound->spec.channels, channel.sound->spec.freq,
        audioSpec.format, audioSpec.channels, audioSpec.freq
    );

    if (!channel.stream) {
        std::cerr << "Failed to create audio stream: " << SDL_GetError() << std::endl;
        channel.active = false;
        return -1;
    }

    return channelId;
}

void AudioSystem::StopSound(int channel) {
    if (!initialized || channel < 0 || channel >= static_cast<int>(channels.size())) {
        return;
    }

    SDL_LockAudioDevice(audioDevice);
    
    if (channels[channel].active) {
        if (channels[channel].stream) {
            SDL_DestroyAudioStream(channels[channel].stream);
            channels[channel].stream = nullptr;
        }
        channels[channel].active = false;
    }
    
    SDL_UnlockAudioDevice(audioDevice);
}

void AudioSystem::SetVolume(int channel, float volume) {
    if (!initialized || channel < 0 || channel >= static_cast<int>(channels.size())) {
        return;
    }

    SDL_LockAudioDevice(audioDevice);
    channels[channel].volume = volume;
    SDL_UnlockAudioDevice(audioDevice);
}

void AudioSystem::SetMasterVolume(float volume) {
    masterVolume = volume;
}

bool AudioSystem::LoadWaveBank(const std::string& filename) {
    if (!initialized) {
        std::cerr << "Audio system not initialized" << std::endl;
        return false;
    }

    if (!xactParser.LoadWaveBank(filename)) {
        std::cerr << "Failed to load wave bank: " << filename << std::endl;
        return false;
    }

    // Load all waves from the wave bank into the sound cache
    for (size_t i = 0; i < xactParser.GetWaveCount(); ++i) {
        const auto* wave = xactParser.GetWave(i);
        if (wave) {
            auto sound = ConvertXACTWaveToSound(wave);
            if (sound) {
                // Use the wave name as the sound ID
                sounds[wave->name] = sound;
            }
        }
    }

    return true;
}

bool AudioSystem::LoadSoundBank(const std::string& filename) {
    if (!initialized) {
        std::cerr << "Audio system not initialized" << std::endl;
        return false;
    }

    if (!xactParser.LoadSoundBank(filename)) {
        std::cerr << "Failed to load sound bank: " << filename << std::endl;
        return false;
    }

    return true;
}

bool AudioSystem::LoadGlobalSettings(const std::string& filename) {
    if (!initialized) {
        std::cerr << "Audio system not initialized" << std::endl;
        return false;
    }

    if (!xactParser.LoadGlobalSettings(filename)) {
        std::cerr << "Failed to load global settings: " << filename << std::endl;
        return false;
    }

    return true;
}

int AudioSystem::PlayCue(const std::string& cueName, bool loop, float volume) {
    if (!initialized) {
        std::cerr << "Audio system not initialized" << std::endl;
        return -1;
    }

    // Find the cue
    const auto* cue = xactParser.GetCueByName(cueName);
    if (!cue) {
        std::cerr << "Cue not found: " << cueName << std::endl;
        return -1;
    }

    // Get the sound associated with the cue
    const auto* sound = xactParser.GetSound(cue->soundIndex);
    if (!sound || sound->trackIndices.empty()) {
        std::cerr << "Sound not found for cue: " << cueName << std::endl;
        return -1;
    }

    // Get the first track of the sound
    uint32_t trackIndex = sound->trackIndices[0];
    const auto* track = xactParser.GetSound(trackIndex);
    if (!track) {
        std::cerr << "Track not found for sound: " << cue->soundIndex << std::endl;
        return -1;
    }

    // Get the wave associated with the track
    const auto* wave = xactParser.GetWave(track->waveIndex);
    if (!wave) {
        std::cerr << "Wave not found for track: " << trackIndex << std::endl;
        return -1;
    }

    // Convert the wave to a sound
    auto soundObj = ConvertXACTWaveToSound(wave);
    if (!soundObj) {
        std::cerr << "Failed to convert wave to sound: " << wave->name << std::endl;
        return -1;
    }

    // Store the sound with the cue name as the ID
    sounds[cueName] = soundObj;

    // Play the sound
    return PlaySound(cueName, loop, volume);
}

bool AudioSystem::ExtractWaveBank(const std::string& waveBankFilename, const std::string& outputDir) {
    if (!initialized) {
        std::cerr << "Audio system not initialized" << std::endl;
        return false;
    }

    if (!xactParser.LoadWaveBank(waveBankFilename)) {
        std::cerr << "Failed to load wave bank: " << waveBankFilename << std::endl;
        return false;
    }

    // Create output directory if it doesn't exist
    std::filesystem::create_directories(outputDir);

    // Extract all waves
    bool success = true;
    for (size_t i = 0; i < xactParser.GetWaveCount(); ++i) {
        const auto* wave = xactParser.GetWave(i);
        if (wave) {
            std::string outputPath = outputDir + "/" + wave->name + ".wav";
            if (!xactParser.ExtractWave(i, outputPath)) {
                std::cerr << "Failed to extract wave: " << wave->name << std::endl;
                success = false;
            }
        }
    }

    return success;
}

void AudioSystem::AudioCallback(void* userdata, uint8_t* stream, int len) {
    // Clear the stream
    SDL_memset(stream, 0, len);

    // Mix active channels
    for (auto& channel : channels) {
        if (!channel.active || !channel.sound || !channel.stream) {
            continue;
        }

        // Calculate remaining bytes in the sound
        int remaining = channel.sound->length - channel.position;
        
        if (remaining <= 0) {
            if (channel.loop) {
                // Loop back to the beginning
                channel.position = 0;
                remaining = channel.sound->length;
            } else {
                // Sound is finished
                channel.active = false;
                continue;
            }
        }

        // Calculate how many bytes to mix
        int bytesToMix = std::min(remaining, len);
        
        // Put data into the stream
        SDL_PutAudioStreamData(channel.stream, 
                              channel.sound->data.data() + channel.position, 
                              bytesToMix);
        
        // Get converted data
        uint8_t buffer[4096]; // Temporary buffer
        int got = SDL_GetAudioStreamData(channel.stream, buffer, len);
        
        if (got > 0) {
            // Mix with volume adjustment
            SDL_MixAudioFormat(stream, buffer, audioSpec.format, got, 
                              static_cast<int>(SDL_MIX_MAXVOLUME * channel.volume * masterVolume));
        }
        
        // Update position
        channel.position += bytesToMix;
    }
}

std::shared_ptr<AudioSystem::Sound> AudioSystem::LoadWavFile(const std::string& filename) {
    SDL_RWops* file = SDL_RWFromFile(filename.c_str(), "rb");
    if (!file) {
        std::cerr << "Failed to open WAV file: " << SDL_GetError() << std::endl;
        return nullptr;
    }

    SDL_AudioSpec spec;
    uint8_t* audioData;
    uint32_t audioLen;

    if (SDL_LoadWAV_RW(file, 1, &spec, &audioData, &audioLen) == nullptr) {
        std::cerr << "Failed to load WAV file: " << SDL_GetError() << std::endl;
        return nullptr;
    }

    auto sound = std::make_shared<Sound>();
    sound->spec = spec;
    sound->length = audioLen;
    sound->data.resize(audioLen);
    std::memcpy(sound->data.data(), audioData, audioLen);

    SDL_free(audioData);
    return sound;
}

std::shared_ptr<AudioSystem::Sound> AudioSystem::LoadOggFile(const std::string& filename) {
    // SDL3 doesn't have built-in OGG support, so we'd need to use a library like stb_vorbis
    // This is a placeholder
    std::cerr << "OGG loading not implemented yet" << std::endl;
    return nullptr;
}

std::shared_ptr<AudioSystem::Sound> AudioSystem::LoadMp3File(const std::string& filename) {
    // SDL3 doesn't have built-in MP3 support, so we'd need to use a library like minimp3
    // This is a placeholder
    std::cerr << "MP3 loading not implemented yet" << std::endl;
    return nullptr;
}

std::shared_ptr<AudioSystem::Sound> AudioSystem::LoadXWBSound(const std::string& filename, uint32_t index) {
    // Load the wave bank
    if (!xactParser.LoadWaveBank(filename)) {
        std::cerr << "Failed to load wave bank: " << filename << std::endl;
        return nullptr;
    }

    // Get the wave
    const auto* wave = xactParser.GetWave(index);
    if (!wave) {
        std::cerr << "Wave not found at index: " << index << std::endl;
        return nullptr;
    }

    // Convert the wave to a sound
    return ConvertXACTWaveToSound(wave);
}

std::shared_ptr<AudioSystem::Sound> AudioSystem::ConvertXACTWaveToSound(const XACTParser::WaveEntry* wave) {
    if (!wave || wave->data.empty()) {
        return nullptr;
    }

    auto sound = std::make_shared<Sound>();
    
    // Set up the audio spec
    sound->spec.freq = wave->sampleRate;
    sound->spec.format = SDL_AUDIO_S16; // Assuming PCM format
    sound->spec.channels = wave->channels;
    
    // Copy the audio data
    sound->length = wave->size;
    sound->data = wave->data;
    
    return sound;
}

} // namespace XenonRecomp 