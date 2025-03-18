#include "../../audio/audio_manager.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

int main(int argc, char* argv[]) {
    std::cout << "XACT Audio Test Program" << std::endl;
    std::cout << "=======================" << std::endl;
    
    // Initialize the audio manager with the data directory
    AudioManager audioManager;
    if (!audioManager.Initialize("./src/data/game")) {
        std::cerr << "Failed to initialize audio manager!" << std::endl;
        return 1;
    }
    
    // Set initial volumes
    audioManager.SetMasterVolume(1.0f);
    audioManager.SetCategoryVolume(AudioCategory::Music, 0.8f);
    audioManager.SetCategoryVolume(AudioCategory::SFX, 1.0f);
    
    std::cout << "Audio manager initialized successfully." << std::endl;
    std::cout << "Data directory: ./src/data/game" << std::endl;
    
    bool running = true;
    while (running) {
        std::cout << "\nMenu Options:" << std::endl;
        std::cout << "1. Play music cue" << std::endl;
        std::cout << "2. Play SFX cue" << std::endl;
        std::cout << "3. Stop all sounds" << std::endl;
        std::cout << "4. Set master volume" << std::endl;
        std::cout << "5. Set music volume" << std::endl;
        std::cout << "6. Set SFX volume" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << "Enter choice: ";
        
        int choice;
        std::cin >> choice;
        std::cin.ignore(); // Clear the newline
        
        switch (choice) {
            case 1: {
                std::cout << "Enter music cue name (e.g. KBDS): ";
                std::string cueName;
                std::getline(std::cin, cueName);
                
                std::cout << "Loop? (y/n): ";
                char loop;
                std::cin >> loop;
                bool shouldLoop = (loop == 'y' || loop == 'Y');
                
                if (audioManager.PlayMusic(cueName.c_str(), shouldLoop)) {
                    std::cout << "Playing music cue: " << cueName << (shouldLoop ? " (looping)" : "") << std::endl;
                } else {
                    std::cout << "Failed to play music cue: " << cueName << std::endl;
                }
                break;
            }
            case 2: {
                std::cout << "Enter SFX cue name (e.g. 1_ROCKET_LAUNCH_SFX): ";
                std::string cueName;
                std::getline(std::cin, cueName);
                
                if (audioManager.PlaySFX(cueName.c_str())) {
                    std::cout << "Playing SFX cue: " << cueName << std::endl;
                } else {
                    std::cout << "Failed to play SFX cue: " << cueName << std::endl;
                }
                break;
            }
            case 3:
                audioManager.StopAllSounds();
                std::cout << "Stopped all sounds." << std::endl;
                break;
            case 4: {
                std::cout << "Enter master volume (0.0-1.0): ";
                float volume;
                std::cin >> volume;
                audioManager.SetMasterVolume(volume);
                std::cout << "Master volume set to: " << volume << std::endl;
                break;
            }
            case 5: {
                std::cout << "Enter music volume (0.0-1.0): ";
                float volume;
                std::cin >> volume;
                audioManager.SetCategoryVolume(AudioCategory::Music, volume);
                std::cout << "Music volume set to: " << volume << std::endl;
                break;
            }
            case 6: {
                std::cout << "Enter SFX volume (0.0-1.0): ";
                float volume;
                std::cin >> volume;
                audioManager.SetCategoryVolume(AudioCategory::SFX, volume);
                std::cout << "SFX volume set to: " << volume << std::endl;
                break;
            }
            case 7:
                running = false;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }
    
    // Shutdown the audio manager
    audioManager.Shutdown();
    std::cout << "Audio manager shut down. Exiting..." << std::endl;
    
    return 0;
} 