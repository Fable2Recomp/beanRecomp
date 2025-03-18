#include "audio_manager.h"
#include <iostream>
#include <filesystem>
#include <algorithm>

namespace XenonRecomp {

// Static member initialization
bool AudioManager::initialized = false;
std::string AudioManager::dataDirectory = "";
std::unordered_map<AudioManager::Category, float> AudioManager::categoryVolumes = {
    {Category::Music, 1.0f},
    {Category::SFX, 1.0f},
    {Category::Voice, 1.0f},
    {Category::Ambient, 1.0f},
    {Category::UI, 1.0f}
};
std::unordered_map<AudioManager::Category, bool> AudioManager::categoryMuted = {
    {Category::Music, false},
    {Category::SFX, false},
    {Category::Voice, false},
    {Category::Ambient, false},
    {Category::UI, false}
};
std::vector<AudioManager::ChannelInfo> AudioManager::activeChannels;
float AudioManager::masterVolume = 1.0f;
bool AudioManager::allMuted = false;
int AudioManager::currentMusicChannel = -1;

bool AudioManager::Initialize(const std::string& dataDir) {
    if (initialized) {
        return true;
    }

    // Initialize the audio system
    if (!AudioSystem::Initialize()) {
        std::cerr << "Failed to initialize audio system" << std::endl;
        return false;
    }

    dataDirectory = dataDir;
    initialized = true;

    // Load audio banks
    LoadAudioBanks(dataDir);

    return true;
}

void AudioManager::Shutdown() {
    if (!initialized) {
        return;
    }

    // Stop all sounds
    StopAll();

    // Shutdown the audio system
    AudioSystem::Shutdown();

    initialized = false;
}

bool AudioManager::LoadAudioBanks(const std::string& dataDir) {
    if (!initialized) {
        std::cerr << "Audio manager not initialized" << std::endl;
        return false;
    }

    bool success = true;
    namespace fs = std::filesystem;

    // Check if the directory exists
    if (!fs::exists(dataDir)) {
        std::cerr << "Data directory does not exist: " << dataDir << std::endl;
        return false;
    }

    // Look for wave bank files
    for (const auto& entry : fs::directory_iterator(dataDir)) {
        if (entry.is_regular_file()) {
            std::string path = entry.path().string();
            std::string ext = entry.path().extension().string();
            
            if (ext == ".xwb") {
                std::cout << "Loading wave bank: " << path << std::endl;
                if (!AudioSystem::LoadWaveBank(path)) {
                    std::cerr << "Failed to load wave bank: " << path << std::endl;
                    success = false;
                }
            } else if (ext == ".xsb") {
                std::cout << "Loading sound bank: " << path << std::endl;
                if (!AudioSystem::LoadSoundBank(path)) {
                    std::cerr << "Failed to load sound bank: " << path << std::endl;
                    success = false;
                }
            } else if (ext == ".xgs") {
                std::cout << "Loading global settings: " << path << std::endl;
                if (!AudioSystem::LoadGlobalSettings(path)) {
                    std::cerr << "Failed to load global settings: " << path << std::endl;
                    success = false;
                }
            }
        }
    }

    return success;
}

int AudioManager::PlaySound(const std::string& cueName, Category category, bool loop, float volume) {
    if (!initialized) {
        std::cerr << "Audio manager not initialized" << std::endl;
        return -1;
    }

    // Check if the category is muted
    if (allMuted || categoryMuted[category]) {
        return -1;
    }

    // Play the sound
    int channelId = AudioSystem::PlayCue(cueName, loop, volume);
    if (channelId >= 0) {
        // Apply volume settings
        ApplyVolumeSettings(channelId, category, volume);

        // Add to active channels
        activeChannels.push_back({channelId, category, volume});
    }

    return channelId;
}

int AudioManager::PlayMusic(const std::string& cueName, bool loop, float volume) {
    if (!initialized) {
        std::cerr << "Audio manager not initialized" << std::endl;
        return -1;
    }

    // Stop current music if playing
    if (currentMusicChannel >= 0) {
        StopSound(currentMusicChannel);
        currentMusicChannel = -1;
    }

    // Play the music
    int channelId = PlaySound(cueName, Category::Music, loop, volume);
    if (channelId >= 0) {
        currentMusicChannel = channelId;
    }

    return channelId;
}

void AudioManager::StopSound(int channel) {
    if (!initialized || channel < 0) {
        return;
    }

    // Stop the sound
    AudioSystem::StopSound(channel);

    // Remove from active channels
    activeChannels.erase(
        std::remove_if(activeChannels.begin(), activeChannels.end(),
            [channel](const ChannelInfo& info) { return info.channelId == channel; }),
        activeChannels.end()
    );

    // Clear current music channel if needed
    if (channel == currentMusicChannel) {
        currentMusicChannel = -1;
    }
}

void AudioManager::StopCategory(Category category) {
    if (!initialized) {
        return;
    }

    // Copy the active channels to avoid iterator invalidation
    auto channelsCopy = activeChannels;
    
    // Stop all sounds in the category
    for (const auto& info : channelsCopy) {
        if (info.category == category) {
            StopSound(info.channelId);
        }
    }
}

void AudioManager::StopAll() {
    if (!initialized) {
        return;
    }

    // Copy the active channels to avoid iterator invalidation
    auto channelsCopy = activeChannels;
    
    // Stop all sounds
    for (const auto& info : channelsCopy) {
        StopSound(info.channelId);
    }

    // Clear active channels
    activeChannels.clear();
    currentMusicChannel = -1;
}

void AudioManager::SetCategoryVolume(Category category, float volume) {
    if (!initialized) {
        return;
    }

    // Clamp volume to valid range
    volume = std::max(0.0f, std::min(1.0f, volume));
    
    // Update category volume
    categoryVolumes[category] = volume;

    // Update all active sounds in the category
    for (const auto& info : activeChannels) {
        if (info.category == category) {
            ApplyVolumeSettings(info.channelId, category, info.volume);
        }
    }
}

float AudioManager::GetCategoryVolume(Category category) {
    if (!initialized) {
        return 0.0f;
    }

    return categoryVolumes[category];
}

void AudioManager::SetMasterVolume(float volume) {
    if (!initialized) {
        return;
    }

    // Clamp volume to valid range
    volume = std::max(0.0f, std::min(1.0f, volume));
    
    // Update master volume
    masterVolume = volume;
    AudioSystem::SetMasterVolume(volume);

    // Update all active sounds
    for (const auto& info : activeChannels) {
        ApplyVolumeSettings(info.channelId, info.category, info.volume);
    }
}

float AudioManager::GetMasterVolume() {
    if (!initialized) {
        return 0.0f;
    }

    return masterVolume;
}

void AudioManager::MuteCategory(Category category, bool mute) {
    if (!initialized) {
        return;
    }

    // Update category mute state
    categoryMuted[category] = mute;

    // Update all active sounds in the category
    for (const auto& info : activeChannels) {
        if (info.category == category) {
            if (mute) {
                AudioSystem::SetVolume(info.channelId, 0.0f);
            } else {
                ApplyVolumeSettings(info.channelId, category, info.volume);
            }
        }
    }
}

bool AudioManager::IsCategoryMuted(Category category) {
    if (!initialized) {
        return true;
    }

    return categoryMuted[category];
}

void AudioManager::MuteAll(bool mute) {
    if (!initialized) {
        return;
    }

    // Update global mute state
    allMuted = mute;

    // Update all active sounds
    for (const auto& info : activeChannels) {
        if (mute) {
            AudioSystem::SetVolume(info.channelId, 0.0f);
        } else {
            ApplyVolumeSettings(info.channelId, info.category, info.volume);
        }
    }
}

bool AudioManager::IsAllMuted() {
    if (!initialized) {
        return true;
    }

    return allMuted;
}

void AudioManager::Update() {
    if (!initialized) {
        return;
    }

    // Nothing to do here for now
    // This could be used for fading, positional audio, etc.
}

void AudioManager::ApplyVolumeSettings(int channelId, Category category, float volume) {
    if (!initialized || channelId < 0) {
        return;
    }

    // Calculate effective volume
    float effectiveVolume = volume * categoryVolumes[category] * masterVolume;
    
    // Apply muting if needed
    if (allMuted || categoryMuted[category]) {
        effectiveVolume = 0.0f;
    }

    // Set the volume
    AudioSystem::SetVolume(channelId, effectiveVolume);
}

} // namespace XenonRecomp 