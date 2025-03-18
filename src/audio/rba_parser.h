#pragma once

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>

namespace XenonRecomp {

/**
 * @brief Parser for RBA (Resource Bundle Archive) files
 * 
 * This class handles parsing the game's custom RBA format, which appears to be
 * a container format for various resources including textures and audio.
 */
class RBAParser {
public:
    /**
     * @brief Structure representing an entry in the RBA file
     */
    struct RBAEntry {
        std::string name;
        uint32_t offset;
        uint32_t size;
        uint32_t type;
        std::vector<uint8_t> data;
    };

    /**
     * @brief Load an RBA file
     * @param filename Path to the RBA file
     * @return true if loading was successful
     */
    bool LoadFile(const std::string& filename);

    /**
     * @brief Get the number of entries in the RBA file
     * @return Number of entries
     */
    size_t GetEntryCount() const;

    /**
     * @brief Get an entry by index
     * @param index Index of the entry
     * @return Pointer to the entry, or nullptr if not found
     */
    const RBAEntry* GetEntry(size_t index) const;

    /**
     * @brief Get an entry by name
     * @param name Name of the entry
     * @return Pointer to the entry, or nullptr if not found
     */
    const RBAEntry* GetEntryByName(const std::string& name) const;

    /**
     * @brief Extract an entry to a file
     * @param index Index of the entry
     * @param outputPath Path to save the extracted file
     * @return true if extraction was successful
     */
    bool ExtractEntry(size_t index, const std::string& outputPath) const;

    /**
     * @brief Extract an entry by name to a file
     * @param name Name of the entry
     * @param outputPath Path to save the extracted file
     * @return true if extraction was successful
     */
    bool ExtractEntryByName(const std::string& name, const std::string& outputPath) const;

    /**
     * @brief Get all audio entries in the RBA file
     * @return Vector of pointers to audio entries
     */
    std::vector<const RBAEntry*> GetAudioEntries() const;

private:
    std::vector<RBAEntry> entries;
    std::unordered_map<std::string, size_t> nameToIndex;

    /**
     * @brief Parse the RBA file header
     * @param data Pointer to the file data
     * @param size Size of the file data
     * @return true if parsing was successful
     */
    bool ParseHeader(const uint8_t* data, size_t size);

    /**
     * @brief Determine if an entry is an audio entry
     * @param entry The entry to check
     * @return true if the entry is an audio entry
     */
    bool IsAudioEntry(const RBAEntry& entry) const;
};

} // namespace XenonRecomp 