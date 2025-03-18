#pragma once

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>

namespace XenonRecomp {

/**
 * @brief Parser for XACT (Xbox Audio Creation Tool) files
 * 
 * This class handles parsing the XACT audio formats used by the game:
 * - XWB (Wave Bank): Contains actual audio data
 * - XSB (Sound Bank): Contains sound definitions and metadata
 * - XGS (Global Settings): Contains global audio settings
 */
class XACTParser {
public:
    /**
     * @brief Structure representing a wave in a wave bank
     */
    struct WaveEntry {
        uint32_t index;
        std::string name;
        uint32_t offset;
        uint32_t size;
        uint32_t format;        // Format tag (e.g., WAVE_FORMAT_PCM)
        uint16_t channels;      // Number of channels
        uint32_t sampleRate;    // Sample rate
        uint32_t avgBytesPerSec; // Average bytes per second
        uint16_t blockAlign;    // Block alignment
        uint16_t bitsPerSample; // Bits per sample
        uint32_t loopStart;     // Loop start point
        uint32_t loopLength;    // Loop length
        uint32_t playRegion;    // Play region offset
        uint32_t playLength;    // Play region length
        std::vector<uint8_t> data; // Audio data
    };

    /**
     * @brief Structure representing a cue in a sound bank
     */
    struct CueEntry {
        uint32_t index;
        std::string name;
        uint32_t soundIndex;
        uint32_t flags;
    };

    /**
     * @brief Structure representing a sound in a sound bank
     */
    struct SoundEntry {
        uint32_t index;
        uint32_t flags;
        uint32_t category;
        uint32_t volume;
        uint32_t pitch;
        uint32_t priority;
        std::vector<uint32_t> trackIndices;
    };

    /**
     * @brief Structure representing a track in a sound bank
     */
    struct TrackEntry {
        uint32_t index;
        uint32_t waveIndex;
        uint32_t waveBank;
        uint32_t loopCount;
        uint32_t volume;
        uint32_t pitch;
    };

    /**
     * @brief Load a wave bank file (.xwb)
     * @param filename Path to the wave bank file
     * @return true if loading was successful
     */
    bool LoadWaveBank(const std::string& filename);

    /**
     * @brief Load a sound bank file (.xsb)
     * @param filename Path to the sound bank file
     * @return true if loading was successful
     */
    bool LoadSoundBank(const std::string& filename);

    /**
     * @brief Load a global settings file (.xgs)
     * @param filename Path to the global settings file
     * @return true if loading was successful
     */
    bool LoadGlobalSettings(const std::string& filename);

    /**
     * @brief Get the number of waves in the wave bank
     * @return Number of waves
     */
    size_t GetWaveCount() const;

    /**
     * @brief Get a wave by index
     * @param index Index of the wave
     * @return Pointer to the wave, or nullptr if not found
     */
    const WaveEntry* GetWave(size_t index) const;

    /**
     * @brief Get a wave by name
     * @param name Name of the wave
     * @return Pointer to the wave, or nullptr if not found
     */
    const WaveEntry* GetWaveByName(const std::string& name) const;

    /**
     * @brief Get the number of cues in the sound bank
     * @return Number of cues
     */
    size_t GetCueCount() const;

    /**
     * @brief Get a cue by index
     * @param index Index of the cue
     * @return Pointer to the cue, or nullptr if not found
     */
    const CueEntry* GetCue(size_t index) const;

    /**
     * @brief Get a cue by name
     * @param name Name of the cue
     * @return Pointer to the cue, or nullptr if not found
     */
    const CueEntry* GetCueByName(const std::string& name) const;

    /**
     * @brief Get a sound by index
     * @param index Index of the sound
     * @return Pointer to the sound, or nullptr if not found
     */
    const SoundEntry* GetSound(size_t index) const;

    /**
     * @brief Extract a wave to a WAV file
     * @param index Index of the wave
     * @param outputPath Path to save the extracted file
     * @return true if extraction was successful
     */
    bool ExtractWave(size_t index, const std::string& outputPath) const;

    /**
     * @brief Extract a wave by name to a WAV file
     * @param name Name of the wave
     * @param outputPath Path to save the extracted file
     * @return true if extraction was successful
     */
    bool ExtractWaveByName(const std::string& name, const std::string& outputPath) const;

private:
    std::vector<WaveEntry> waves;
    std::unordered_map<std::string, size_t> waveNameToIndex;
    
    std::vector<CueEntry> cues;
    std::unordered_map<std::string, size_t> cueNameToIndex;
    
    std::vector<SoundEntry> sounds;
    std::vector<TrackEntry> tracks;

    /**
     * @brief Parse a wave bank header
     * @param data Pointer to the file data
     * @param size Size of the file data
     * @return true if parsing was successful
     */
    bool ParseWaveBankHeader(const uint8_t* data, size_t size);

    /**
     * @brief Parse a sound bank header
     * @param data Pointer to the file data
     * @param size Size of the file data
     * @return true if parsing was successful
     */
    bool ParseSoundBankHeader(const uint8_t* data, size_t size);

    /**
     * @brief Parse a global settings header
     * @param data Pointer to the file data
     * @param size Size of the file data
     * @return true if parsing was successful
     */
    bool ParseGlobalSettingsHeader(const uint8_t* data, size_t size);

    /**
     * @brief Write a WAV file header
     * @param file Output file stream
     * @param wave Wave entry to write
     * @return true if writing was successful
     */
    bool WriteWAVHeader(std::ofstream& file, const WaveEntry& wave) const;
};

} // namespace XenonRecomp 