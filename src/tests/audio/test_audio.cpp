#include <iostream>
#include <string>
#include <filesystem>
#include "xact_parser.h"

namespace fs = std::filesystem;
using namespace XenonRecomp;

int main(int argc, char* argv[]) {
    std::cout << "XACT Audio Test" << std::endl;
    std::cout << "==============" << std::endl;
    
    // Path to the data directory
    std::string dataDir = "../data/game";
    
    // Create the XACT parser
    XACTParser parser;
    
    // Test loading wave bank
    std::string waveBankPath = dataDir + "/music.xwb";
    std::cout << "\nTesting wave bank: " << waveBankPath << std::endl;
    if (parser.LoadWaveBank(waveBankPath)) {
        std::cout << "Successfully loaded wave bank!" << std::endl;
        std::cout << "Wave count: " << parser.GetWaveCount() << std::endl;
        
        // Print information about the first few waves
        size_t count = std::min(parser.GetWaveCount(), size_t(5));
        for (size_t i = 0; i < count; ++i) {
            const auto* wave = parser.GetWave(i);
            if (wave) {
                std::cout << "Wave " << i << ": " << wave->name 
                          << " (Size: " << wave->size << " bytes, "
                          << wave->channels << " channels, "
                          << wave->sampleRate << " Hz)" << std::endl;
            }
        }
        
        // Extract a wave to test
        if (parser.GetWaveCount() > 0) {
            const auto* wave = parser.GetWave(0);
            if (wave) {
                std::string outputPath = "extracted_" + wave->name + ".wav";
                std::cout << "Extracting wave to: " << outputPath << std::endl;
                if (parser.ExtractWave(0, outputPath)) {
                    std::cout << "Successfully extracted wave!" << std::endl;
                } else {
                    std::cerr << "Failed to extract wave" << std::endl;
                }
            }
        }
    } else {
        std::cerr << "Failed to load wave bank" << std::endl;
    }
    
    // Test loading sound bank
    std::string soundBankPath = dataDir + "/music.xsb";
    std::cout << "\nTesting sound bank: " << soundBankPath << std::endl;
    if (parser.LoadSoundBank(soundBankPath)) {
        std::cout << "Successfully loaded sound bank!" << std::endl;
        std::cout << "Cue count: " << parser.GetCueCount() << std::endl;
        
        // Print information about the first few cues
        size_t count = std::min(parser.GetCueCount(), size_t(5));
        for (size_t i = 0; i < count; ++i) {
            const auto* cue = parser.GetCue(i);
            if (cue) {
                std::cout << "Cue " << i << ": " << cue->name 
                          << " (Sound Index: " << cue->soundIndex << ")" << std::endl;
            }
        }
    } else {
        std::cerr << "Failed to load sound bank" << std::endl;
    }
    
    // Test loading global settings
    std::string globalSettingsPath = dataDir + "/music.xgs";
    std::cout << "\nTesting global settings: " << globalSettingsPath << std::endl;
    if (parser.LoadGlobalSettings(globalSettingsPath)) {
        std::cout << "Successfully loaded global settings!" << std::endl;
    } else {
        std::cerr << "Failed to load global settings" << std::endl;
    }
    
    // Test SFX files too
    std::cout << "\n\nTesting SFX files:" << std::endl;
    std::cout << "=================" << std::endl;
    
    // Test loading wave bank
    waveBankPath = dataDir + "/sfx.xwb";
    std::cout << "\nTesting wave bank: " << waveBankPath << std::endl;
    if (parser.LoadWaveBank(waveBankPath)) {
        std::cout << "Successfully loaded wave bank!" << std::endl;
        std::cout << "Wave count: " << parser.GetWaveCount() << std::endl;
        
        // Print information about the first few waves
        size_t count = std::min(parser.GetWaveCount(), size_t(5));
        for (size_t i = 0; i < count; ++i) {
            const auto* wave = parser.GetWave(i);
            if (wave) {
                std::cout << "Wave " << i << ": " << wave->name 
                          << " (Size: " << wave->size << " bytes, "
                          << wave->channels << " channels, "
                          << wave->sampleRate << " Hz)" << std::endl;
            }
        }
        
        // Extract a wave to test
        if (parser.GetWaveCount() > 0) {
            const auto* wave = parser.GetWave(0);
            if (wave) {
                std::string outputPath = "extracted_sfx_" + wave->name + ".wav";
                std::cout << "Extracting wave to: " << outputPath << std::endl;
                if (parser.ExtractWave(0, outputPath)) {
                    std::cout << "Successfully extracted wave!" << std::endl;
                } else {
                    std::cerr << "Failed to extract wave" << std::endl;
                }
            }
        }
    } else {
        std::cerr << "Failed to load wave bank" << std::endl;
    }
    
    return 0;
} 