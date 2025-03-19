#pragma once

#include <string>
#include <fstream>
#include <mutex>

namespace BeanRecomp
{
namespace OS
{
    enum class LogLevel
    {
        Debug,
        Info,
        Warning,
        Error,
        Fatal
    };

    class Logger
    {
    public:
        static bool Initialize();
        static void Shutdown();
        
        static void SetLogLevel(LogLevel level);
        static void SetLogToConsole(bool enable);
        static void SetLogToFile(bool enable);
        static void SetLogFile(const std::string& path);
        
        static void LogDebug(const char* format, ...);
        static void LogInfo(const char* format, ...);
        static void LogWarning(const char* format, ...);
        static void LogError(const char* format, ...);
        static void LogFatal(const char* format, ...);

    private:
        static bool s_Initialized;
        static bool s_LogToConsole;
        static bool s_LogToFile;
        static LogLevel s_LogLevel;
        static std::string s_LogFilePath;
        static std::ofstream s_LogFile;
        static std::mutex s_Mutex;

        static void Log(LogLevel level, const char* format, va_list args);
        static const char* GetLevelString(LogLevel level);
        static const char* GetLevelColor(LogLevel level);
    };
}
} 