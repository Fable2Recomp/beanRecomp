#include "logger.h"
#include <iostream>
#include <cstdarg>
#include <ctime>
#include <iomanip>

namespace BeanRecomp
{
namespace OS
{
    bool Logger::s_Initialized = false;
    bool Logger::s_LogToConsole = true;
    bool Logger::s_LogToFile = false;
    LogLevel Logger::s_LogLevel = LogLevel::Info;
    std::string Logger::s_LogFilePath = "beanrecomp.log";
    std::ofstream Logger::s_LogFile;
    std::mutex Logger::s_Mutex;

    bool Logger::Initialize()
    {
        std::lock_guard<std::mutex> lock(s_Mutex);
        
        if (s_Initialized)
            return true;
            
        if (s_LogToFile)
        {
            s_LogFile.open(s_LogFilePath, std::ios::out | std::ios::app);
            if (!s_LogFile.is_open())
                return false;
        }
        
        s_Initialized = true;
        return true;
    }

    void Logger::Shutdown()
    {
        std::lock_guard<std::mutex> lock(s_Mutex);
        
        if (!s_Initialized)
            return;
            
        if (s_LogFile.is_open())
            s_LogFile.close();
            
        s_Initialized = false;
    }

    void Logger::SetLogLevel(LogLevel level)
    {
        std::lock_guard<std::mutex> lock(s_Mutex);
        s_LogLevel = level;
    }

    void Logger::SetLogToConsole(bool enable)
    {
        std::lock_guard<std::mutex> lock(s_Mutex);
        s_LogToConsole = enable;
    }

    void Logger::SetLogToFile(bool enable)
    {
        std::lock_guard<std::mutex> lock(s_Mutex);
        
        if (enable == s_LogToFile)
            return;
            
        s_LogToFile = enable;
        
        if (enable)
        {
            s_LogFile.open(s_LogFilePath, std::ios::out | std::ios::app);
        }
        else if (s_LogFile.is_open())
        {
            s_LogFile.close();
        }
    }

    void Logger::SetLogFile(const std::string& path)
    {
        std::lock_guard<std::mutex> lock(s_Mutex);
        
        s_LogFilePath = path;
        
        if (s_LogToFile && s_LogFile.is_open())
        {
            s_LogFile.close();
            s_LogFile.open(s_LogFilePath, std::ios::out | std::ios::app);
        }
    }

    void Logger::LogDebug(const char* format, ...)
    {
        va_list args;
        va_start(args, format);
        Log(LogLevel::Debug, format, args);
        va_end(args);
    }

    void Logger::LogInfo(const char* format, ...)
    {
        va_list args;
        va_start(args, format);
        Log(LogLevel::Info, format, args);
        va_end(args);
    }

    void Logger::LogWarning(const char* format, ...)
    {
        va_list args;
        va_start(args, format);
        Log(LogLevel::Warning, format, args);
        va_end(args);
    }

    void Logger::LogError(const char* format, ...)
    {
        va_list args;
        va_start(args, format);
        Log(LogLevel::Error, format, args);
        va_end(args);
    }

    void Logger::LogFatal(const char* format, ...)
    {
        va_list args;
        va_start(args, format);
        Log(LogLevel::Fatal, format, args);
        va_end(args);
    }

    void Logger::Log(LogLevel level, const char* format, va_list args)
    {
        if (!s_Initialized || level < s_LogLevel)
            return;
            
        std::lock_guard<std::mutex> lock(s_Mutex);
        
        // Get current time
        auto now = std::time(nullptr);
        auto tm = *std::localtime(&now);
        
        // Format message
        char buffer[4096];
        vsnprintf(buffer, sizeof(buffer), format, args);
        
        // Create log message
        std::stringstream ss;
        ss << "[" << std::put_time(&tm, "%Y-%m-%d %H:%M:%S") << "] "
           << "[" << GetLevelString(level) << "] "
           << buffer << std::endl;
           
        // Output to console
        if (s_LogToConsole)
        {
            if (level >= LogLevel::Warning)
                std::cerr << GetLevelColor(level) << ss.str() << "\033[0m";
            else
                std::cout << GetLevelColor(level) << ss.str() << "\033[0m";
        }
        
        // Output to file
        if (s_LogToFile && s_LogFile.is_open())
        {
            s_LogFile << ss.str();
            s_LogFile.flush();
        }
    }

    const char* Logger::GetLevelString(LogLevel level)
    {
        switch (level)
        {
            case LogLevel::Debug:   return "DEBUG";
            case LogLevel::Info:    return "INFO";
            case LogLevel::Warning: return "WARNING";
            case LogLevel::Error:   return "ERROR";
            case LogLevel::Fatal:   return "FATAL";
            default:                return "UNKNOWN";
        }
    }

    const char* Logger::GetLevelColor(LogLevel level)
    {
        switch (level)
        {
            case LogLevel::Debug:   return "\033[37m"; // White
            case LogLevel::Info:    return "\033[32m"; // Green
            case LogLevel::Warning: return "\033[33m"; // Yellow
            case LogLevel::Error:   return "\033[31m"; // Red
            case LogLevel::Fatal:   return "\033[35m"; // Magenta
            default:                return "\033[0m";  // Reset
        }
    }
}
} 