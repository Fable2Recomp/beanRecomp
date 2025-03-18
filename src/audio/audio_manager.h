#pragma once

#include "audio.h"
#include <string>
#include <unordered_map>
#include <memory>
#include <vector>
#include <functional>

namespace XenonRecomp {

/**
 * @brief Audio manager class that provides a higher-level interface for the game's audio system.
 * 
 * This class manages sound categories, volume control, and provides convenience methods for
 * playing sounds and music.
 */
class AudioManager {
public:
    /**
     * @brief Sound category enum.
     */
    enum class Category {
        Music,      ///< Background music
        SFX,        ///< Sound effects
        Voice,      ///< Voice/dialogue
        Ambient,    ///< Ambient sounds
        UI          ///< UI sounds
    };

    /**
     * @brief Initialize the audio manager.
     * 
     * @param dataDir The directory containing audio files
     * @return true if initialization was successful, false otherwise
     */
    static bool Initialize(const std::string& dataDir);

    /**
     * @brief Shutdown the audio manager.
     */
    static void Shutdown();

    /**
     * @brief Load audio banks from the data directory.
     * 
     * @param dataDir The directory containing audio files
     * @return true if loading was successful, false otherwise
     */
    static bool LoadAudioBanks(const std::string& dataDir);

    /**
     * @brief Play a sound by cue name.
     * 
     * @param cueName The name of the cue to play
     * @param category The category of the sound
     * @param loop Whether to loop the sound
     * @param volume The volume of the sound (0.0 to 1.0)
     * @return The channel ID of the sound, or -1 if the sound could not be played
     */
    static int PlaySound(const std::string& cueName, Category category = Category::SFX, bool loop = false, float volume = 1.0f);

    /**
     * @brief Play music by cue name.
     * 
     * @param cueName The name of the cue to play
     * @param loop Whether to loop the music (default: true)
     * @param volume The volume of the music (0.0 to 1.0)
     * @return The channel ID of the music, or -1 if the music could not be played
     */
    static int PlayMusic(const std::string& cueName, bool loop = true, float volume = 1.0f);

    /**
     * @brief Stop a sound by channel ID.
     * 
     * @param channel The channel ID of the sound to stop
     */
    static void StopSound(int channel);

    /**
     * @brief Stop all sounds in a category.
     * 
     * @param category The category of sounds to stop
     */
    static void StopCategory(Category category);

    /**
     * @brief Stop all sounds.
     */
    static void StopAll();

    /**
     * @brief Set the volume of a category.
     * 
     * @param category The category to set the volume for
     * @param volume The volume (0.0 to 1.0)
     */
    static void SetCategoryVolume(Category category, float volume);

    /**
     * @brief Get the volume of a category.
     * 
     * @param category The category to get the volume for
     * @return The volume (0.0 to 1.0)
     */
    static float GetCategoryVolume(Category category);

    /**
     * @brief Set the master volume.
     * 
     * @param volume The master volume (0.0 to 1.0)
     */
    static void SetMasterVolume(float volume);

    /**
     * @brief Get the master volume.
     * 
     * @return The master volume (0.0 to 1.0)
     */
    static float GetMasterVolume();

    /**
     * @brief Mute or unmute a category.
     * 
     * @param category The category to mute or unmute
     * @param mute Whether to mute (true) or unmute (false)
     */
    static void MuteCategory(Category category, bool mute);

    /**
     * @brief Check if a category is muted.
     * 
     * @param category The category to check
     * @return true if the category is muted, false otherwise
     */
    static bool IsCategoryMuted(Category category);

    /**
     * @brief Mute or unmute all audio.
     * 
     * @param mute Whether to mute (true) or unmute (false)
     */
    static void MuteAll(bool mute);

    /**
     * @brief Check if all audio is muted.
     * 
     * @return true if all audio is muted, false otherwise
     */
    static bool IsAllMuted();

    /**
     * @brief Update the audio manager.
     * 
     * This should be called once per frame to update the audio system.
     */
    static void Update();

private:
    struct ChannelInfo {
        int channelId;
        Category category;
        float volume;
    };

    static bool initialized;
    static std::string dataDirectory;
    static std::unordered_map<Category, float> categoryVolumes;
    static std::unordered_map<Category, bool> categoryMuted;
    static std::vector<ChannelInfo> activeChannels;
    static float masterVolume;
    static bool allMuted;
    static int currentMusicChannel;

    /**
     * @brief Apply volume settings to a channel.
     * 
     * @param channelId The channel ID
     * @param category The category of the channel
     * @param volume The base volume of the sound
     */
    static void ApplyVolumeSettings(int channelId, Category category, float volume);
};

} // namespace XenonRecomp 