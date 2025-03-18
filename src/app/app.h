#pragma once

#include <string>
#include <vector>

namespace XenonRecomp
{
    struct AppConfig
    {
        std::string appName;
        std::string appVersion;
        std::string logFilePath;
        bool enableConsole;
        bool enableFileLogging;
        bool enableCrashHandler;
        std::string dataPath;
        std::string userDataPath;
    };

    class App
    {
    public:
        static bool Initialize(const AppConfig& config);
        static void Shutdown();
        static void Run();
        static void Update();
        static bool IsRunning();
        static void Quit(int exitCode = 0);
        
        static const AppConfig& GetConfig();
        static void SetConfig(const AppConfig& config);
        
        static std::string GetAppName();
        static std::string GetAppVersion();
        static std::string GetDataPath();
        static std::string GetUserDataPath();
        static std::string GetLogFilePath();
        
        static bool IsDebugBuild();
        static bool IsReleaseBuild();
        static double GetDeltaTime();
        static double GetTotalTime();
        static double GetFrameRate();
        
        static int GetExitCode();

    private:
        static bool s_Initialized;
        static bool s_Running;
        static AppConfig s_Config;
        static int s_ExitCode;
        static double s_DeltaTime;
        static double s_TotalTime;
        static double s_LastFrameTime;
        static double s_FrameRate;
        
        static bool InitializeSubsystems();
        static void ShutdownSubsystems();
    };
} 