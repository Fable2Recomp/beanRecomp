#pragma once

#include <string>
#include <vector>
#include <memory>
#include <functional>
#include <map>
#include "os/logger.h"
#include "cpu/cpu.h"
#include "ppc/ppc_memory.h"

namespace BeanRecomp
{
namespace API
{
    // API Command types
    enum class CommandType
    {
        Initialize,
        Shutdown,
        LoadROM,
        UnloadROM,
        StartEmulation,
        StopEmulation,
        PauseEmulation,
        ResumeEmulation,
        ResetEmulation,
        SaveState,
        LoadState,
        GetStatus,
        SetConfig,
        GetConfig,
        DebugCommand
    };

    // API Response types
    enum class ResponseType
    {
        Success,
        Error,
        Busy,
        InvalidCommand,
        InvalidParameter,
        NotInitialized,
        AlreadyInitialized,
        ROMNotLoaded,
        ROMAlreadyLoaded,
        EmulationRunning,
        EmulationNotRunning,
        StateError,
        ConfigError
    };

    // API Command data
    struct Command
    {
        CommandType type;
        std::string data;
        std::function<void(ResponseType, const std::string&)> callback;
    };

    // API Response data
    struct Response
    {
        ResponseType type;
        std::string data;
        std::string error;
    };

    // API Configuration
    struct Config
    {
        bool debugMode;
        bool enableLogging;
        std::string logLevel;
        uint32_t cpuSpeed;
        bool enableSound;
        bool enableVideo;
        std::string videoMode;
        std::string saveStatePath;
    };

    // API Manager class
    class APIManager
    {
    public:
        static bool Initialize();
        static void Shutdown();
        
        // Command handling
        static bool ExecuteCommand(const Command& command);
        static bool RegisterCommandHandler(CommandType type, std::function<Response(const Command&)> handler);
        static bool UnregisterCommandHandler(CommandType type);
        
        // Configuration management
        static bool LoadConfig(const std::string& filename);
        static bool SaveConfig(const std::string& filename);
        static bool SetConfig(const Config& config);
        static const Config& GetConfig();
        
        // State management
        static bool SaveState(const std::string& filename);
        static bool LoadState(const std::string& filename);
        
        // ROM management
        static bool LoadROM(const std::string& filename);
        static void UnloadROM();
        static bool IsROMLoaded();
        
        // Emulation control
        static bool StartEmulation();
        static void StopEmulation();
        static void PauseEmulation();
        static void ResumeEmulation();
        static void ResetEmulation();
        static bool IsEmulationRunning();
        static bool IsEmulationPaused();
        
        // Debugging
        static void SetDebugMode(bool enable);
        static bool IsDebugMode();
        static void DumpAPIState();

    private:
        static bool s_Initialized;
        static bool s_DebugMode;
        static bool s_ROMLoaded;
        static bool s_EmulationRunning;
        static bool s_EmulationPaused;
        static Config s_Config;
        static std::map<CommandType, std::vector<std::function<Response(const Command&)>>> s_CommandHandlers;
        static std::mutex s_APIMutex;
        
        static void InitializeAPI();
        static void CleanupAPI();
        static Response HandleCommand(const Command& command);
        static void ProcessCommandQueue();
    };
}
} 