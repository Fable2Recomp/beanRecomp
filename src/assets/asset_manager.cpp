#include "asset_manager.h"
#include <iostream>
#include <fstream>
#include <sstream>

namespace XenonRecomp {

// Static member initialization
std::string AssetManager::basePath = "data/game";
bool AssetManager::initialized = false;

bool AssetManager::Initialize(const std::string& basePath) {
    if (initialized) {
        return true;
    }

    AssetManager::basePath = basePath;

    // Check if the base path exists
    if (!std::filesystem::exists(basePath)) {
        std::cerr << "Asset manager initialization failed: Base path does not exist: " << basePath << std::endl;
        return false;
    }

    std::cout << "Asset manager initialized with base path: " << basePath << std::endl;
    initialized = true;
    return true;
}

void AssetManager::Shutdown() {
    if (!initialized) {
        return;
    }

    // Clean up any resources if needed
    initialized = false;
    std::cout << "Asset manager shut down" << std::endl;
}

const std::string& AssetManager::GetBasePath() {
    return basePath;
}

std::string AssetManager::GetFullPath(const std::string& relativePath) {
    if (relativePath.empty()) {
        return basePath;
    }

    // Handle both forward and backward slashes
    std::string normalizedPath = relativePath;
    std::replace(normalizedPath.begin(), normalizedPath.end(), '\\', '/');

    // Ensure there's a slash between base path and relative path
    if (basePath.back() != '/' && normalizedPath.front() != '/') {
        return basePath + "/" + normalizedPath;
    } else if (basePath.back() == '/' && normalizedPath.front() == '/') {
        return basePath + normalizedPath.substr(1);
    } else {
        return basePath + normalizedPath;
    }
}

bool AssetManager::FileExists(const std::string& relativePath) {
    std::string fullPath = GetFullPath(relativePath);
    return std::filesystem::exists(fullPath);
}

bool AssetManager::LoadBinaryFile(const std::string& relativePath, std::vector<uint8_t>& data) {
    if (!initialized) {
        std::cerr << "Asset manager not initialized" << std::endl;
        return false;
    }

    std::string fullPath = GetFullPath(relativePath);
    
    // Check if the file exists
    if (!std::filesystem::exists(fullPath)) {
        std::cerr << "File not found: " << fullPath << std::endl;
        return false;
    }

    // Open the file in binary mode
    std::ifstream file(fullPath, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << fullPath << std::endl;
        return false;
    }

    // Get file size
    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);

    // Resize the data vector to fit the file
    data.resize(size);

    // Read the file
    if (!file.read(reinterpret_cast<char*>(data.data()), size)) {
        std::cerr << "Failed to read file: " << fullPath << std::endl;
        return false;
    }

    return true;
}

bool AssetManager::LoadTextFile(const std::string& relativePath, std::string& text) {
    if (!initialized) {
        std::cerr << "Asset manager not initialized" << std::endl;
        return false;
    }

    std::string fullPath = GetFullPath(relativePath);
    
    // Check if the file exists
    if (!std::filesystem::exists(fullPath)) {
        std::cerr << "File not found: " << fullPath << std::endl;
        return false;
    }

    // Open the file
    std::ifstream file(fullPath);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << fullPath << std::endl;
        return false;
    }

    // Read the file
    std::stringstream buffer;
    buffer << file.rdbuf();
    text = buffer.str();

    return true;
}

std::vector<std::string> AssetManager::GetFilesInDirectory(const std::string& relativePath, const std::string& extension) {
    std::vector<std::string> files;
    
    if (!initialized) {
        std::cerr << "Asset manager not initialized" << std::endl;
        return files;
    }

    std::string fullPath = GetFullPath(relativePath);
    
    // Check if the directory exists
    if (!std::filesystem::exists(fullPath) || !std::filesystem::is_directory(fullPath)) {
        std::cerr << "Directory not found: " << fullPath << std::endl;
        return files;
    }

    // Iterate through the directory
    for (const auto& entry : std::filesystem::directory_iterator(fullPath)) {
        if (entry.is_regular_file()) {
            std::string filePath = entry.path().string();
            
            // Replace backslashes with forward slashes for consistency
            std::replace(filePath.begin(), filePath.end(), '\\', '/');
            
            // If an extension filter is provided, check if the file has that extension
            if (extension.empty() || entry.path().extension() == extension) {
                // Convert to relative path
                if (filePath.find(basePath) == 0) {
                    filePath = filePath.substr(basePath.length());
                    if (!filePath.empty() && filePath[0] == '/') {
                        filePath = filePath.substr(1);
                    }
                }
                
                files.push_back(filePath);
            }
        }
    }

    return files;
}

} // namespace XenonRecomp 