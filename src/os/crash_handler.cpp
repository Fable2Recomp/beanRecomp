#include "crash_handler.h"
#include "logger.h"
#include <filesystem>
#include <fstream>
#include <sstream>
#include <ctime>
#include <csignal>

#ifdef _WIN32
#include <Windows.h>
#include <DbgHelp.h>
#pragma comment(lib, "DbgHelp.lib")
#endif

namespace BeanRecomp
{
namespace OS
{
    bool CrashHandler::s_Initialized = false;
    bool CrashHandler::s_DumpOnCrash = true;
    std::string CrashHandler::s_DumpPath = "dumps";
    void (*CrashHandler::s_CrashCallback)(const char*) = nullptr;

    bool CrashHandler::Initialize()
    {
        if (s_Initialized)
            return true;

        // Create dump directory if it doesn't exist
        std::filesystem::create_directories(s_DumpPath);

#ifdef _WIN32
        // Set up Windows exception handler
        SetUnhandledExceptionFilter(UnhandledExceptionFilter);
#endif

        // Set up signal handlers
        signal(SIGABRT, HandleSignal);
        signal(SIGFPE, HandleSignal);
        signal(SIGILL, HandleSignal);
        signal(SIGINT, HandleSignal);
        signal(SIGSEGV, HandleSignal);
        signal(SIGTERM, HandleSignal);

        s_Initialized = true;
        return true;
    }

    void CrashHandler::Shutdown()
    {
        if (!s_Initialized)
            return;

        // Restore default signal handlers
        signal(SIGABRT, SIG_DFL);
        signal(SIGFPE, SIG_DFL);
        signal(SIGILL, SIG_DFL);
        signal(SIGINT, SIG_DFL);
        signal(SIGSEGV, SIG_DFL);
        signal(SIGTERM, SIG_DFL);

        s_Initialized = false;
    }

    void CrashHandler::SetDumpPath(const std::string& path)
    {
        s_DumpPath = path;
        std::filesystem::create_directories(s_DumpPath);
    }

    void CrashHandler::SetDumpOnCrash(bool enable)
    {
        s_DumpOnCrash = enable;
    }

    void CrashHandler::GenerateDump()
    {
        if (!s_DumpOnCrash)
            return;

        auto now = std::time(nullptr);
        auto tm = std::localtime(&now);
        char timestamp[32];
        std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", tm);

        std::string dumpFile = s_DumpPath + "/crash_" + timestamp + ".dmp";

#ifdef _WIN32
        HANDLE hFile = CreateFileA(dumpFile.c_str(), GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (hFile != INVALID_HANDLE_VALUE)
        {
            MINIDUMP_EXCEPTION_INFORMATION mei;
            mei.ThreadId = GetCurrentThreadId();
            mei.ExceptionPointers = nullptr;
            mei.ClientPointers = FALSE;

            MiniDumpWriteDump(GetCurrentProcess(), GetCurrentProcessId(), hFile, MiniDumpNormal, &mei, nullptr, nullptr);
            CloseHandle(hFile);
        }
#endif
    }

    void CrashHandler::HandleCrash(const char* message)
    {
        Logger::Error("Crash occurred: {}", message);
        
        if (s_CrashCallback)
            s_CrashCallback(message);

        GenerateDump();
    }

    void CrashHandler::SetCrashCallback(void (*callback)(const char*))
    {
        s_CrashCallback = callback;
    }

    void CrashHandler::HandleSignal(int signal)
    {
        const char* signalName = "Unknown";
        switch (signal)
        {
            case SIGABRT: signalName = "SIGABRT"; break;
            case SIGFPE:  signalName = "SIGFPE";  break;
            case SIGILL:  signalName = "SIGILL";  break;
            case SIGINT:  signalName = "SIGINT";  break;
            case SIGSEGV: signalName = "SIGSEGV"; break;
            case SIGTERM: signalName = "SIGTERM"; break;
        }

        std::stringstream ss;
        ss << "Signal " << signalName << " (" << signal << ") received";
        HandleCrash(ss.str().c_str());
    }

#ifdef _WIN32
    long WINAPI CrashHandler::UnhandledExceptionFilter(EXCEPTION_POINTERS* exceptionInfo)
    {
        HandleException(exceptionInfo);
        return EXCEPTION_CONTINUE_SEARCH;
    }

    void CrashHandler::HandleException(void* exceptionInfo)
    {
        EXCEPTION_POINTERS* ep = static_cast<EXCEPTION_POINTERS*>(exceptionInfo);
        EXCEPTION_RECORD* er = ep->ExceptionRecord;

        std::stringstream ss;
        ss << "Exception 0x" << std::hex << er->ExceptionCode << " at 0x" << er->ExceptionAddress;
        HandleCrash(ss.str().c_str());
    }
#endif
}
} 