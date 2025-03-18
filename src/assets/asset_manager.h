#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
#include <filesystem>

namespace XenonRecomp {

/**
 * @brief Asset manager class for loading and managing game assets
 * 
 * This class handles loading assets from the data/game directory,
 * including audio files, textures, and other game resources.
 */
class AssetManager {
public:
    /**
     * @brief Initialize the asset manager
     * 
     * @param basePath Base path to the game data directory
     * @return true if initialization was successful
     */
    static bool Initialize(const std::string& basePath = "data/game");

    /**
     * @brief Shutdown the asset manager and release resources
     */
    static void Shutdown();

    /**
     * @brief Get the base path to the game data directory
     * 
     * @return The base path
     */
    static const std::string& GetBasePath();

    /**
     * @brief Get the full path to a file in the game data directory
     * 
     * @param relativePath Relative path to the file
     * @return Full path to the file
     */
    static std::string GetFullPath(const std::string& relativePath);

    /**
     * @brief Check if a file exists in the game data directory
     * 
     * @param relativePath Relative path to the file
     * @return true if the file exists
     */
    static bool FileExists(const std::string& relativePath);

    /**
     * @brief Load a binary file from the game data directory
     * 
     * @param relativePath Relative path to the file
     * @param data Output vector to store the file data
     * @return true if the file was loaded successfully
     */
    static bool LoadBinaryFile(const std::string& relativePath, std::vector<uint8_t>& data);

    /**
     * @brief Load a text file from the game data directory
     * 
     * @param relativePath Relative path to the file
     * @param text Output string to store the file text
     * @return true if the file was loaded successfully
     */
    static bool LoadTextFile(const std::string& relativePath, std::string& text);

    /**
     * @brief Get a list of files in a directory
     * 
     * @param relativePath Relative path to the directory
     * @param extension Optional file extension filter (e.g., ".xwb")
     * @return Vector of file paths
     */
    static std::vector<std::string> GetFilesInDirectory(const std::string& relativePath, const std::string& extension = "");

private:
    static std::string basePath;
    static bool initialized;
};

} // namespace XenonRecomp 