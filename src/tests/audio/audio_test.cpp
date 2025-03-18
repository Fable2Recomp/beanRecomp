#include <iostream>
#include <filesystem>
#include <string>
#include <regex>
#include <vector>

namespace fs = std::filesystem;

// Function to search for audio files in a directory
std::vector<fs::path> findAudioFiles(const fs::path& directory) {
    std::vector<fs::path> audioFiles;
    
    // Regular expressions for audio file extensions
    std::regex audioPattern("\\.(xwb|xsb|xgs|wav|mp3|ogg)$", std::regex::icase);
    
    std::cout << "Searching for audio files in: " << directory.string() << std::endl;
    
    try {
        // Recursively search for audio files
        for (const auto& entry : fs::recursive_directory_iterator(directory)) {
            if (entry.is_regular_file()) {
                std::string path = entry.path().string();
                if (std::regex_search(path, audioPattern)) {
                    audioFiles.push_back(entry.path());
                }
            }
        }
    } catch (const std::exception& e) {
        std::cerr << "Error searching directory: " << e.what() << std::endl;
    }
    
    return audioFiles;
}

int main(int argc, char* argv[]) {
    // Get data directory from command line or use default
    std::string dataDir = (argc > 1) ? argv[1] : "./data";
    
    std::cout << "Audio File Test" << std::endl;
    std::cout << "===============" << std::endl;
    
    // Check if the directory exists
    if (!fs::exists(dataDir)) {
        std::cerr << "Data directory does not exist: " << dataDir << std::endl;
        return 1;
    }
    
    // Search for audio files
    auto audioFiles = findAudioFiles(dataDir);
    
    if (audioFiles.empty()) {
        std::cout << "No audio files found in " << dataDir << std::endl;
    } else {
        std::cout << "Found " << audioFiles.size() << " audio files:" << std::endl;
        
        // Group files by extension
        std::unordered_map<std::string, std::vector<fs::path>> filesByExt;
        
        for (const auto& file : audioFiles) {
            std::string ext = file.extension().string();
            std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
            filesByExt[ext].push_back(file);
        }
        
        // Print files by extension
        for (const auto& [ext, files] : filesByExt) {
            std::cout << "\n" << ext << " files (" << files.size() << "):" << std::endl;
            for (const auto& file : files) {
                std::cout << "  " << file.string() << std::endl;
            }
        }
    }
    
    return 0;
} 