#include "audio/audio_manager.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace XenonRecomp;

int main() {
    std::cout << "Audio Usage Example" << std::endl;
    std::cout << "===================" << std::endl;
    
    // Path to the data directory containing the XACT audio files
    std::string dataDir = "./data/game";
    
    // Initialize the audio manager
    if (!AudioManager::Initialize(dataDir)) {
        std::cerr << "Failed to initialize audio manager" << std::endl;
        return 1;
    }
    
    std::cout << "Audio manager initialized successfully" << std::endl;
    
    // Set initial volumes
    AudioManager::SetMasterVolume(0.8f);
    AudioManager::SetCategoryVolume(AudioManager::Category::Music, 0.7f);
    AudioManager::SetCategoryVolume(AudioManager::Category::SFX, 1.0f);
    
    // The audio banks (music.xwb, music.xsb, music.xgs, sfx.xwb, sfx.xsb, sfx.xgs)
    // are automatically loaded by the AudioManager::Initialize() function
    
    // Example of playing a sound effect
    // Note: You'll need to know the actual cue names from the sound banks
    // These are just examples and may not match the actual cue names in your game
    std::cout << "Playing a sound effect..." << std::endl;
    int sfxChannel = AudioManager::PlaySound("Explosion", AudioManager::Category::SFX, false, 1.0f);
    if (sfxChannel >= 0) {
        std::cout << "Sound effect playing on channel " << sfxChannel << std::endl;
    } else {
        std::cout << "Failed to play sound effect. Make sure the cue name exists in the sound bank." << std::endl;
    }
    
    // Wait a moment to let the sound effect play
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    // Example of playing background music
    std::cout << "Playing background music..." << std::endl;
    int musicChannel = AudioManager::PlayMusic("MainTheme", true, 0.7f);
    if (musicChannel >= 0) {
        std::cout << "Music playing on channel " << musicChannel << std::endl;
    } else {
        std::cout << "Failed to play music. Make sure the cue name exists in the sound bank." << std::endl;
    }
    
    // Wait a moment to let the music play
    std::this_thread::sleep_for(std::chrono::seconds(5));
    
    // Example of adjusting volume
    std::cout << "Adjusting music volume..." << std::endl;
    AudioManager::SetCategoryVolume(AudioManager::Category::Music, 0.4f);
    
    // Wait a moment to hear the volume change
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    // Example of muting a category
    std::cout << "Muting music..." << std::endl;
    AudioManager::MuteCategory(AudioManager::Category::Music, true);
    
    // Wait a moment to hear the muting
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    // Example of unmuting a category
    std::cout << "Unmuting music..." << std::endl;
    AudioManager::MuteCategory(AudioManager::Category::Music, false);
    
    // Wait a moment to hear the unmuting
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    // Example of stopping specific sounds
    if (sfxChannel >= 0) {
        std::cout << "Stopping sound effect..." << std::endl;
        AudioManager::StopSound(sfxChannel);
    }
    
    // Wait a moment
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    // Example of stopping all sounds in a category
    std::cout << "Stopping all music..." << std::endl;
    AudioManager::StopCategory(AudioManager::Category::Music);
    
    // Wait a moment
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    // Example of playing another sound
    std::cout << "Playing another sound effect..." << std::endl;
    sfxChannel = AudioManager::PlaySound("Footstep", AudioManager::Category::SFX, false, 1.0f);
    
    // Wait a moment
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    // Example of stopping all sounds
    std::cout << "Stopping all sounds..." << std::endl;
    AudioManager::StopAll();
    
    // Shutdown the audio manager
    AudioManager::Shutdown();
    std::cout << "Audio manager shut down" << std::endl;
    
    return 0;
} 