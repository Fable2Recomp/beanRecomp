#include "audio.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace XenonRecomp;

int main(int argc, char* argv[]) {
    // Initialize the audio system
    if (!AudioSystem::Initialize()) {
        std::cerr << "Failed to initialize audio system" << std::endl;
        return 1;
    }

    std::cout << "Audio system initialized successfully" << std::endl;

    // Check if a wave bank file was provided
    if (argc > 1) {
        std::string waveBankFile = argv[1];
        std::cout << "Loading wave bank: " << waveBankFile << std::endl;
        
        if (AudioSystem::LoadWaveBank(waveBankFile)) {
            std::cout << "Wave bank loaded successfully" << std::endl;
            
            // If a sound bank file was provided
            if (argc > 2) {
                std::string soundBankFile = argv[2];
                std::cout << "Loading sound bank: " << soundBankFile << std::endl;
                
                if (AudioSystem::LoadSoundBank(soundBankFile)) {
                    std::cout << "Sound bank loaded successfully" << std::endl;
                    
                    // If a cue name was provided
                    if (argc > 3) {
                        std::string cueName = argv[3];
                        std::cout << "Playing cue: " << cueName << std::endl;
                        
                        int channel = AudioSystem::PlayCue(cueName, false, 1.0f);
                        if (channel >= 0) {
                            std::cout << "Cue playing on channel " << channel << std::endl;
                            
                            // Wait for the sound to finish (5 seconds)
                            std::this_thread::sleep_for(std::chrono::seconds(5));
                        } else {
                            std::cerr << "Failed to play cue" << std::endl;
                        }
                    } else {
                        std::cout << "No cue name provided, extracting wave bank instead" << std::endl;
                        
                        // Extract the wave bank to a directory
                        if (AudioSystem::ExtractWaveBank(waveBankFile, "extracted_waves")) {
                            std::cout << "Wave bank extracted successfully to 'extracted_waves' directory" << std::endl;
                        } else {
                            std::cerr << "Failed to extract wave bank" << std::endl;
                        }
                    }
                } else {
                    std::cerr << "Failed to load sound bank" << std::endl;
                }
            } else {
                std::cout << "No sound bank provided, playing first wave" << std::endl;
                
                // Play the first wave in the bank
                int channel = AudioSystem::PlaySound("Wave0", false, 1.0f);
                if (channel >= 0) {
                    std::cout << "Wave playing on channel " << channel << std::endl;
                    
                    // Wait for the sound to finish (5 seconds)
                    std::this_thread::sleep_for(std::chrono::seconds(5));
                } else {
                    std::cerr << "Failed to play wave" << std::endl;
                }
            }
        } else {
            std::cerr << "Failed to load wave bank" << std::endl;
        }
    } else {
        std::cout << "No wave bank file provided" << std::endl;
        std::cout << "Usage: audio_test <wave_bank_file> [sound_bank_file] [cue_name]" << std::endl;
    }

    // Shutdown the audio system
    AudioSystem::Shutdown();
    std::cout << "Audio system shut down" << std::endl;

    return 0;
} 