#pragma once

#include <string>
#include <unordered_map>
#include <vector>
#include <memory>
#include "xact_parser.h"

namespace XenonRecomp {

// Forward declarations
struct SDL_AudioStream;
typedef struct _SDL_AudioDevice SDL_AudioDevice;
typedef struct SDL_AudioSpec SDL_AudioSpec;

/**
 * @brief Audio system using SDL3
 */
class AudioSystem {
public:
    /**
     * @brief Initialize the audio system
     * @return true if initialization was successful
     */
    static bool Initialize();

    /**
     * @brief Shutdown the audio system
     */
    static void Shutdown();

    /**
     * @brief Load a sound from file
     * @param filename Path to the sound file
     * @param id Identifier for the sound
     * @return true if loading was successful
     */
    static bool LoadSound(const std::string& filename, const std::string& id);

    /**
     * @brief Load a sound from memory
     * @param data Sound data
     * @param size Size of the sound data
     * @param id Identifier for the sound
     * @return true if loading was successful
     */
    static bool LoadSoundFromMemory(const void* data, size_t size, const std::string& id);

    /**
     * @brief Play a sound
     * @param id Identifier of the sound
     * @param loop Whether to loop the sound
     * @param volume Volume of the sound (0.0 - 1.0)
     * @return Channel ID if successful, -1 otherwise
     */
    static int PlaySound(const std::string& id, bool loop = false, float volume = 1.0f);

    /**
     * @brief Stop a sound
     * @param channel Channel ID of the sound
     */
    static void StopSound(int channel);

    /**
     * @brief Set the volume of a sound
     * @param channel Channel ID of the sound
     * @param volume Volume of the sound (0.0 - 1.0)
     */
    static void SetVolume(int channel, float volume);

    /**
     * @brief Set the master volume
     * @param volume Master volume (0.0 - 1.0)
     */
    static void SetMasterVolume(float volume);

    /**
     * @brief Load a wave bank from file (.xwb)
     * @param filename Path to the wave bank file
     * @return true if loading was successful
     */
    static bool LoadWaveBank(const std::string& filename);

    /**
     * @brief Load a sound bank from file (.xsb)
     * @param filename Path to the sound bank file
     * @return true if loading was successful
     */
    static bool LoadSoundBank(const std::string& filename);

    /**
     * @brief Load global settings from file (.xgs)
     * @param filename Path to the global settings file
     * @return true if loading was successful
     */
    static bool LoadGlobalSettings(const std::string& filename);

    /**
     * @brief Play a cue from a sound bank
     * @param cueName Name of the cue
     * @param loop Whether to loop the sound
     * @param volume Volume of the sound (0.0 - 1.0)
     * @return Channel ID if successful, -1 otherwise
     */
    static int PlayCue(const std::string& cueName, bool loop = false, float volume = 1.0f);

    /**
     * @brief Extract all waves from a wave bank to a directory
     * @param waveBankFilename Path to the wave bank file
     * @param outputDir Directory to save the extracted files
     * @return true if extraction was successful
     */
    static bool ExtractWaveBank(const std::string& waveBankFilename, const std::string& outputDir);

private:
    struct Sound {
        std::vector<uint8_t> data;
        SDL_AudioSpec spec;
        int length;
    };

    struct Channel {
        bool active;
        bool loop;
        float volume;
        int position;
        std::shared_ptr<Sound> sound;
        SDL_AudioStream* stream;
    };

    static SDL_AudioDevice* audioDevice;
    static SDL_AudioSpec audioSpec;
    static std::unordered_map<std::string, std::shared_ptr<Sound>> sounds;
    static std::vector<Channel> channels;
    static float masterVolume;
    static bool initialized;
    static XACTParser xactParser;

    static void AudioCallback(void* userdata, uint8_t* stream, int len);
    static std::shared_ptr<Sound> LoadWavFile(const std::string& filename);
    static std::shared_ptr<Sound> LoadOggFile(const std::string& filename);
    static std::shared_ptr<Sound> LoadMp3File(const std::string& filename);
    static std::shared_ptr<Sound> LoadXWBSound(const std::string& filename, uint32_t index);
    static std::shared_ptr<Sound> ConvertXACTWaveToSound(const XACTParser::WaveEntry* wave);
};

} // namespace XenonRecomp 