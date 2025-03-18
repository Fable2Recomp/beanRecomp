#include <iostream>
#include <string>

// OS Components
#include "os/logger.h"
#include "os/version.h"
#include "os/win32/version_win32.h"
#include "os/win32/user_win32.h"

// Kernel Components
#include "kernel/xdm.h"

// Audio Components
#include "audio/audio_manager.h"

using namespace XenonRecomp;

int main(int argc, char* argv[]) {
    try {
        // Initialize components
        OS::Logger::Initialize("beanrecomp.log");
        OS::Logger::SetLogLevel(OS::LogLevel::Info);
        OS::Logger::LogInfo("Starting BeanRecomp Application");
        
        Version::Initialize();
        OSVersion osVersion = Version::GetOSVersion();
        OS::Logger::LogInfo("Running on %s", Version::GetOSName().c_str());
        OS::Logger::LogInfo("OS Version: %s", osVersion.versionString.c_str());
        
        OS::Win32::User::Initialize();
        OS::Logger::LogInfo("User: %s", OS::Win32::User::GetUsername().c_str());
        
        Kernel::InitializeXdm();
        OS::Logger::LogInfo("XDM system initialized");
        
        // Mount default drives
        Kernel::XdmMountDrive('C', ".");
        Kernel::XdmMountDrive('D', "./data");
        OS::Logger::LogInfo("Drives mounted successfully");
        
        // Initialize audio manager
        std::string dataDir = "./data";
        if (AudioManager::Initialize(dataDir)) {
            OS::Logger::LogInfo("Audio manager initialized successfully");
            
            // Set initial volumes
            AudioManager::SetMasterVolume(0.8f);
            AudioManager::SetCategoryVolume(AudioManager::Category::Music, 0.7f);
            AudioManager::SetCategoryVolume(AudioManager::Category::SFX, 1.0f);
            AudioManager::SetCategoryVolume(AudioManager::Category::Voice, 1.0f);
            AudioManager::SetCategoryVolume(AudioManager::Category::Ambient, 0.5f);
            AudioManager::SetCategoryVolume(AudioManager::Category::UI, 0.9f);
            
            OS::Logger::LogInfo("Audio volumes configured");
            
            // Try to play a test sound if available
            int channel = AudioManager::PlaySound("UISelect", AudioManager::Category::UI, false, 1.0f);
            if (channel >= 0) {
                OS::Logger::LogInfo("Test sound played on channel %d", channel);
            } else {
                OS::Logger::LogWarning("Failed to play test sound");
            }
        } else {
            OS::Logger::LogError("Failed to initialize audio manager");
        }
        
        // Application main loop would go here
        OS::Logger::LogInfo("BeanRecomp application started successfully");
        std::cout << "BeanRecomp application initialized successfully." << std::endl;
        std::cout << "Press Enter to exit..." << std::endl;
        std::cin.get();
        
        // Shutdown components in reverse order
        AudioManager::Shutdown();
        OS::Logger::LogInfo("Audio manager shut down");
        
        Kernel::ShutdownXdm();
        OS::Win32::User::Shutdown();
        Version::Shutdown();
        OS::Logger::LogInfo("Shutting down BeanRecomp Application");
        OS::Logger::Shutdown();
        
        return 0;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        OS::Logger::LogError("Exception in main: %s", e.what());
        OS::Logger::Shutdown();
        return 1;
    }
    catch (...) {
        std::cerr << "Unknown exception" << std::endl;
        OS::Logger::LogError("Unknown exception in main");
        OS::Logger::Shutdown();
        return 1;
    }
} 