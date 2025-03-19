#include "app.h"
#include "os/logger.h"
#include "os/user.h"
#include "os/process.h"
#include "os/media.h"
#include "os/version.h"
#include "cpu/cpu_info.h"
#include "cpu/memory_info.h"
#include "hid/input.h"
#include "ui/game_window.h"
#include "ui/message_window.h"

#include <chrono>
#include <thread>
#include <filesystem>
#include <iostream>

namespace BeanRecomp
{
    bool App::s_Initialized = false;
    bool App::s_Running = false;
    AppConfig App::s_Config = {};
    int App::s_ExitCode = 0;
    double App::s_DeltaTime = 0.0;
    double App::s_TotalTime = 0.0;
    double App::s_LastFrameTime = 0.0;
    double App::s_FrameRate = 0.0;

    bool App::Initialize(const AppConfig& config)
    {
        if (s_Initialized)
            return true;

        s_Config = config;

        // Create necessary directories
        std::filesystem::create_directories(s_Config.dataPath);
        std::filesystem::create_directories(s_Config.userDataPath);
        
        // Set up initial logging
        Logger::SetLogToConsole(config.enableConsole);
        Logger::SetLogToFile(config.enableFileLogging);
        
        if (config.enableFileLogging && !config.logFilePath.empty())
            Logger::SetLogFile(config.logFilePath);

        Logger::Initialize();
        Logger::LogInfo("Initializing %s %s", config.appName.c_str(), config.appVersion.c_str());

        // Initialize crash handler if enabled
        if (config.enableCrashHandler)
        {
            if (!CrashHandler::Initialize())
            {
                Logger::LogError("Failed to initialize crash handler");
                return false;
            }
            CrashHandler::SetCrashCallback(HandleCrash);
            CrashHandler::SetDumpPath(s_Config.userDataPath + "/dumps");
        }

        // Load configuration
        LoadConfig();

        // Initialize subsystems
        if (!InitializeSubsystems())
        {
            Logger::LogError("Failed to initialize subsystems");
            Shutdown();
            return false;
        }

        // Get system information and log it
        OSVersion osVersion = Version::GetOSVersion();
        CPUInfo cpuInfo = CPU::GetCPUInfo();
        MemoryInfo memInfo = Memory::GetMemoryInfo();

        Logger::LogInfo("Operating System: %s", Version::GetOSName().c_str());
        Logger::LogInfo("CPU: %s (%d cores, %d logical processors)", 
            cpuInfo.brandName.c_str(), 
            cpuInfo.numPhysicalCores, 
            cpuInfo.numLogicalCores);
        Logger::LogInfo("Memory: %.2f GB total, %.2f GB available", 
            memInfo.totalPhysical / (1024.0 * 1024.0 * 1024.0), 
            memInfo.availablePhysical / (1024.0 * 1024.0 * 1024.0));

        // Log initialization complete
        Logger::LogInfo("Initialization complete");

        s_Initialized = true;
        s_Running = true;
        s_LastFrameTime = GetCurrentTimeSeconds();

        return true;
    }

    void App::Shutdown()
    {
        if (!s_Initialized)
            return;

        Logger::LogInfo("Shutting down %s", s_Config.appName.c_str());

        s_Running = false;
        ShutdownSubsystems();

        // Save configuration
        SaveConfig();

        // Shutdown crash handler
        if (s_Config.enableCrashHandler)
        {
            CrashHandler::Shutdown();
        }

        Logger::LogInfo("Shutdown complete");
        Logger::Shutdown();

        s_Initialized = false;
    }

    void App::LoadConfig()
    {
        if (s_Config.configFilePath.empty())
            return;

        if (!Config::Initialize())
        {
            Logger::LogError("Failed to initialize config system");
            return;
        }

        if (!Config::Load(s_Config.configFilePath))
        {
            Logger::LogWarning("Failed to load config file, using defaults");
            return;
        }

        // Load configuration values
        if (Config::HasValue("appName"))
            s_Config.appName = Config::GetString("appName");
        if (Config::HasValue("appVersion"))
            s_Config.appVersion = Config::GetString("appVersion");
        if (Config::HasValue("logFilePath"))
            s_Config.logFilePath = Config::GetString("logFilePath");
        if (Config::HasValue("enableConsole"))
            s_Config.enableConsole = Config::GetBool("enableConsole");
        if (Config::HasValue("enableFileLogging"))
            s_Config.enableFileLogging = Config::GetBool("enableFileLogging");
        if (Config::HasValue("enableCrashHandler"))
            s_Config.enableCrashHandler = Config::GetBool("enableCrashHandler");
        if (Config::HasValue("dataPath"))
            s_Config.dataPath = Config::GetString("dataPath");
        if (Config::HasValue("userDataPath"))
            s_Config.userDataPath = Config::GetString("userDataPath");
    }

    void App::SaveConfig()
    {
        if (s_Config.configFilePath.empty())
            return;

        // Save configuration values
        Config::SetString("appName", s_Config.appName);
        Config::SetString("appVersion", s_Config.appVersion);
        Config::SetString("logFilePath", s_Config.logFilePath);
        Config::SetBool("enableConsole", s_Config.enableConsole);
        Config::SetBool("enableFileLogging", s_Config.enableFileLogging);
        Config::SetBool("enableCrashHandler", s_Config.enableCrashHandler);
        Config::SetString("dataPath", s_Config.dataPath);
        Config::SetString("userDataPath", s_Config.userDataPath);

        if (!Config::Save(s_Config.configFilePath))
        {
            Logger::LogError("Failed to save config file");
        }
    }

    void App::HandleCrash(const char* message)
    {
        Logger::LogError("Application crashed: %s", message);
        
        // Try to save any unsaved data
        SaveConfig();
        
        // Show error message to user
        MessageWindow::ShowError("Application Crash", message);
    }

    void App::Run()
    {
        if (!s_Initialized || !s_Running)
            return;

        Logger::LogInfo("Entering main loop");

        while (s_Running)
        {
            Update();

            // Check if the game window wants to close
            if (GameWindow::ShouldClose())
            {
                s_Running = false;
            }

            // Prevent CPU from running at 100%
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }

        Logger::LogInfo("Exiting main loop");
    }

    void App::Update()
    {
        if (!s_Initialized || !s_Running)
            return;

        // Calculate delta time and frame rate
        double currentTime = GetCurrentTimeSeconds();
        s_DeltaTime = currentTime - s_LastFrameTime;
        s_LastFrameTime = currentTime;
        s_TotalTime += s_DeltaTime;

        // Update frame rate (average over several frames)
        static double frameRateUpdateTime = 0.0;
        static int frameCount = 0;

        frameCount++;
        frameRateUpdateTime += s_DeltaTime;

        if (frameRateUpdateTime >= 1.0)
        {
            s_FrameRate = frameCount / frameRateUpdateTime;
            frameRateUpdateTime = 0.0;
            frameCount = 0;
        }

        // Update subsystems
        Input::Update();
        GameWindow::Update();
    }

    bool App::IsRunning()
    {
        return s_Initialized && s_Running;
    }

    void App::Quit(int exitCode)
    {
        s_ExitCode = exitCode;
        s_Running = false;
    }

    const AppConfig& App::GetConfig()
    {
        return s_Config;
    }

    void App::SetConfig(const AppConfig& config)
    {
        s_Config = config;
    }

    std::string App::GetAppName()
    {
        return s_Config.appName;
    }

    std::string App::GetAppVersion()
    {
        return s_Config.appVersion;
    }

    std::string App::GetDataPath()
    {
        return s_Config.dataPath;
    }

    std::string App::GetUserDataPath()
    {
        return s_Config.userDataPath;
    }

    std::string App::GetLogFilePath()
    {
        return s_Config.logFilePath;
    }

    bool App::IsDebugBuild()
    {
#ifdef _DEBUG
        return true;
#else
        return false;
#endif
    }

    bool App::IsReleaseBuild()
    {
        return !IsDebugBuild();
    }

    double App::GetDeltaTime()
    {
        return s_DeltaTime;
    }

    double App::GetTotalTime()
    {
        return s_TotalTime;
    }

    double App::GetFrameRate()
    {
        return s_FrameRate;
    }

    int App::GetExitCode()
    {
        return s_ExitCode;
    }

    bool App::InitializeSubsystems()
    {
        // Initialize OS subsystems
        if (!Version::Initialize())
        {
            Logger::LogError("Failed to initialize Version subsystem");
            return false;
        }

        if (!User::Initialize())
        {
            Logger::LogError("Failed to initialize User subsystem");
            return false;
        }

        if (!Process::Initialize())
        {
            Logger::LogError("Failed to initialize Process subsystem");
            return false;
        }

        if (!Media::Initialize())
        {
            Logger::LogError("Failed to initialize Media subsystem");
            return false;
        }

        // Initialize CPU subsystems
        if (!CPU::Initialize())
        {
            Logger::LogError("Failed to initialize CPU subsystem");
            return false;
        }

        if (!Memory::Initialize())
        {
            Logger::LogError("Failed to initialize Memory subsystem");
            return false;
        }

        // Initialize HID subsystem
        if (!Input::Initialize())
        {
            Logger::LogError("Failed to initialize Input subsystem");
            return false;
        }

        // Initialize UI subsystems
        if (!MessageWindow::Initialize())
        {
            Logger::LogError("Failed to initialize MessageWindow subsystem");
            return false;
        }

        // Configure and initialize the game window
        WindowConfig windowConfig;
        windowConfig.title = s_Config.appName;
        windowConfig.width = 1280;
        windowConfig.height = 720;
        windowConfig.mode = WindowMode::Windowed;
        windowConfig.vsync = true;
        windowConfig.resizable = true;
        windowConfig.refreshRate = 60;
        windowConfig.samples = 4;
        windowConfig.enableTransparency = false;

        if (!GameWindow::Initialize(windowConfig))
        {
            Logger::LogError("Failed to initialize GameWindow subsystem");
            return false;
        }

        return true;
    }

    void App::ShutdownSubsystems()
    {
        // Shutdown in reverse order of initialization
        
        // UI subsystems
        GameWindow::Shutdown();
        MessageWindow::Shutdown();

        // HID subsystem
        Input::Shutdown();

        // CPU subsystems
        Memory::Shutdown();
        CPU::Shutdown();

        // OS subsystems
        Media::Shutdown();
        Process::Shutdown();
        User::Shutdown();
        Version::Shutdown();
    }

    // Utility function to get current time in seconds
    double App::GetCurrentTimeSeconds()
    {
        auto now = std::chrono::high_resolution_clock::now();
        auto duration = now.time_since_epoch();
        auto seconds = std::chrono::duration_cast<std::chrono::microseconds>(duration).count() / 1000000.0;
        return seconds;
    }
} 