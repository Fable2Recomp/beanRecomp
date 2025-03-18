#include "audio_manager.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace XenonRecomp;

// Helper function to print menu
void printMenu() {
    std::cout << "\nAudio Manager Test Menu:" << std::endl;
    std::cout << "1. Play sound" << std::endl;
    std::cout << "2. Play music" << std::endl;
    std::cout << "3. Stop sound" << std::endl;
    std::cout << "4. Stop all sounds" << std::endl;
    std::cout << "5. Set master volume" << std::endl;
    std::cout << "6. Set category volume" << std::endl;
    std::cout << "7. Mute/unmute category" << std::endl;
    std::cout << "8. Mute/unmute all" << std::endl;
    std::cout << "9. List audio files" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Enter choice: ";
}

// Helper function to print categories
void printCategories() {
    std::cout << "Categories:" << std::endl;
    std::cout << "1. Music" << std::endl;
    std::cout << "2. SFX" << std::endl;
    std::cout << "3. Voice" << std::endl;
    std::cout << "4. Ambient" << std::endl;
    std::cout << "5. UI" << std::endl;
    std::cout << "Enter category: ";
}

// Helper function to get category from user input
AudioManager::Category getCategory(int choice) {
    switch (choice) {
        case 1: return AudioManager::Category::Music;
        case 2: return AudioManager::Category::SFX;
        case 3: return AudioManager::Category::Voice;
        case 4: return AudioManager::Category::Ambient;
        case 5: return AudioManager::Category::UI;
        default: return AudioManager::Category::SFX;
    }
}

int main(int argc, char* argv[]) {
    // Get data directory from command line or use default
    std::string dataDir = (argc > 1) ? argv[1] : "./data";
    
    std::cout << "Initializing audio manager with data directory: " << dataDir << std::endl;
    
    // Initialize audio manager
    if (!AudioManager::Initialize(dataDir)) {
        std::cerr << "Failed to initialize audio manager" << std::endl;
        return 1;
    }
    
    std::cout << "Audio manager initialized successfully" << std::endl;
    
    // Set initial volumes
    AudioManager::SetMasterVolume(0.8f);
    
    // Main loop
    bool running = true;
    int lastChannel = -1;
    
    while (running) {
        printMenu();
        
        int choice;
        std::cin >> choice;
        
        switch (choice) {
            case 1: { // Play sound
                std::string cueName;
                std::cout << "Enter cue name: ";
                std::cin >> cueName;
                
                printCategories();
                int categoryChoice;
                std::cin >> categoryChoice;
                
                float volume;
                std::cout << "Enter volume (0.0-1.0): ";
                std::cin >> volume;
                
                bool loop;
                std::cout << "Loop sound? (0/1): ";
                std::cin >> loop;
                
                int channel = AudioManager::PlaySound(cueName, getCategory(categoryChoice), loop, volume);
                if (channel >= 0) {
                    std::cout << "Sound playing on channel " << channel << std::endl;
                    lastChannel = channel;
                } else {
                    std::cerr << "Failed to play sound" << std::endl;
                }
                break;
            }
            
            case 2: { // Play music
                std::string cueName;
                std::cout << "Enter cue name: ";
                std::cin >> cueName;
                
                float volume;
                std::cout << "Enter volume (0.0-1.0): ";
                std::cin >> volume;
                
                bool loop;
                std::cout << "Loop music? (0/1): ";
                std::cin >> loop;
                
                int channel = AudioManager::PlayMusic(cueName, loop, volume);
                if (channel >= 0) {
                    std::cout << "Music playing on channel " << channel << std::endl;
                    lastChannel = channel;
                } else {
                    std::cerr << "Failed to play music" << std::endl;
                }
                break;
            }
            
            case 3: { // Stop sound
                int channel;
                std::cout << "Enter channel to stop (or -1 for last channel): ";
                std::cin >> channel;
                
                if (channel == -1) {
                    channel = lastChannel;
                }
                
                if (channel >= 0) {
                    AudioManager::StopSound(channel);
                    std::cout << "Stopped sound on channel " << channel << std::endl;
                    if (channel == lastChannel) {
                        lastChannel = -1;
                    }
                } else {
                    std::cerr << "Invalid channel" << std::endl;
                }
                break;
            }
            
            case 4: { // Stop all sounds
                AudioManager::StopAll();
                std::cout << "Stopped all sounds" << std::endl;
                lastChannel = -1;
                break;
            }
            
            case 5: { // Set master volume
                float volume;
                std::cout << "Enter master volume (0.0-1.0): ";
                std::cin >> volume;
                
                AudioManager::SetMasterVolume(volume);
                std::cout << "Master volume set to " << volume << std::endl;
                break;
            }
            
            case 6: { // Set category volume
                printCategories();
                int categoryChoice;
                std::cin >> categoryChoice;
                
                float volume;
                std::cout << "Enter volume (0.0-1.0): ";
                std::cin >> volume;
                
                AudioManager::Category category = getCategory(categoryChoice);
                AudioManager::SetCategoryVolume(category, volume);
                std::cout << "Category volume set to " << volume << std::endl;
                break;
            }
            
            case 7: { // Mute/unmute category
                printCategories();
                int categoryChoice;
                std::cin >> categoryChoice;
                
                bool mute;
                std::cout << "Mute (1) or unmute (0): ";
                std::cin >> mute;
                
                AudioManager::Category category = getCategory(categoryChoice);
                AudioManager::MuteCategory(category, mute);
                std::cout << "Category " << (mute ? "muted" : "unmuted") << std::endl;
                break;
            }
            
            case 8: { // Mute/unmute all
                bool mute;
                std::cout << "Mute (1) or unmute (0): ";
                std::cin >> mute;
                
                AudioManager::MuteAll(mute);
                std::cout << "All audio " << (mute ? "muted" : "unmuted") << std::endl;
                break;
            }
            
            case 9: { // List audio files
                std::cout << "Listing audio files is not implemented in this test program." << std::endl;
                std::cout << "Use the extract_audio utility to list and extract audio files." << std::endl;
                break;
            }
            
            case 0: // Exit
                running = false;
                break;
                
            default:
                std::cerr << "Invalid choice" << std::endl;
                break;
        }
        
        // Small delay to prevent console spam
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    
    // Shutdown audio manager
    AudioManager::Shutdown();
    std::cout << "Audio manager shut down" << std::endl;
    
    return 0;
} 