#include "xact_parser.h"
#include <iostream>
#include <filesystem>
#include <string>
#include <vector>
#include <regex>

using namespace XenonRecomp;
namespace fs = std::filesystem;

// Function to search for audio files in a directory
std::vector<fs::path> findAudioFiles(const fs::path& directory) {
    std::vector<fs::path> audioFiles;
    
    // Regular expressions for audio file extensions
    std::regex audioPattern("\\.(xwb|xsb|xgs)$", std::regex::icase);
    
    // Recursively search for audio files
    for (const auto& entry : fs::recursive_directory_iterator(directory)) {
        if (entry.is_regular_file()) {
            std::string path = entry.path().string();
            if (std::regex_search(path, audioPattern)) {
                audioFiles.push_back(entry.path());
            }
        }
    }
    
    return audioFiles;
}

// Function to extract waves from a wave bank
bool extractWaveBank(const fs::path& waveBankPath, const fs::path& outputDir) {
    XACTParser parser;
    
    std::cout << "Loading wave bank: " << waveBankPath.string() << std::endl;
    if (!parser.LoadWaveBank(waveBankPath.string())) {
        std::cerr << "Failed to load wave bank" << std::endl;
        return false;
    }
    
    // Create output directory
    fs::create_directories(outputDir);
    
    // Extract all waves
    bool success = true;
    size_t waveCount = parser.GetWaveCount();
    std::cout << "Found " << waveCount << " waves in the wave bank" << std::endl;
    
    for (size_t i = 0; i < waveCount; ++i) {
        const auto* wave = parser.GetWave(i);
        if (wave) {
            std::string outputPath = (outputDir / (wave->name + ".wav")).string();
            std::cout << "Extracting wave " << i << ": " << wave->name << " to " << outputPath << std::endl;
            
            if (!parser.ExtractWave(i, outputPath)) {
                std::cerr << "Failed to extract wave: " << wave->name << std::endl;
                success = false;
            }
        }
    }
    
    return success;
}

// Function to print information about a sound bank
bool analyzeSoundBank(const fs::path& soundBankPath) {
    XACTParser parser;
    
    std::cout << "Loading sound bank: " << soundBankPath.string() << std::endl;
    if (!parser.LoadSoundBank(soundBankPath.string())) {
        std::cerr << "Failed to load sound bank" << std::endl;
        return false;
    }
    
    // Print cue information
    size_t cueCount = parser.GetCueCount();
    std::cout << "Found " << cueCount << " cues in the sound bank" << std::endl;
    
    for (size_t i = 0; i < cueCount; ++i) {
        const auto* cue = parser.GetCue(i);
        if (cue) {
            std::cout << "Cue " << i << ": " << cue->name << " (Sound Index: " << cue->soundIndex << ")" << std::endl;
        }
    }
    
    return true;
}

// Function to print information about global settings
bool analyzeGlobalSettings(const fs::path& globalSettingsPath) {
    XACTParser parser;
    
    std::cout << "Loading global settings: " << globalSettingsPath.string() << std::endl;
    if (!parser.LoadGlobalSettings(globalSettingsPath.string())) {
        std::cerr << "Failed to load global settings" << std::endl;
        return false;
    }
    
    std::cout << "Global settings loaded successfully" << std::endl;
    
    return true;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: extract_audio <data_directory> [output_directory]" << std::endl;
        std::cout << "  data_directory: Directory containing game data" << std::endl;
        std::cout << "  output_directory: Directory to extract audio files to (default: ./extracted_audio)" << std::endl;
        return 1;
    }
    
    fs::path dataDir = argv[1];
    fs::path outputDir = (argc > 2) ? argv[2] : "./extracted_audio";
    
    if (!fs::exists(dataDir)) {
        std::cerr << "Data directory does not exist: " << dataDir << std::endl;
        return 1;
    }
    
    // Search for audio files
    std::cout << "Searching for audio files in: " << dataDir << std::endl;
    auto audioFiles = findAudioFiles(dataDir);
    
    if (audioFiles.empty()) {
        std::cout << "No audio files found" << std::endl;
        return 0;
    }
    
    std::cout << "Found " << audioFiles.size() << " audio files" << std::endl;
    
    // Process each audio file
    for (const auto& file : audioFiles) {
        std::string extension = file.extension().string();
        std::transform(extension.begin(), extension.end(), extension.begin(), ::tolower);
        
        if (extension == ".xwb") {
            // Extract wave bank
            fs::path bankOutputDir = outputDir / file.stem();
            extractWaveBank(file, bankOutputDir);
        } else if (extension == ".xsb") {
            // Analyze sound bank
            analyzeSoundBank(file);
        } else if (extension == ".xgs") {
            // Analyze global settings
            analyzeGlobalSettings(file);
        }
    }
    
    std::cout << "Audio extraction complete" << std::endl;
    return 0;
} 