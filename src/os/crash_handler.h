#pragma once

#include <string>
#ifdef _WIN32
#include <Windows.h>
#endif

namespace BeanRecomp
{
namespace OS
{
    class CrashHandler
    {
    public:
        static bool Initialize();
        static void Shutdown();
        static void SetDumpOnCrash(bool enable);
        static void SetDumpPath(const std::string& path);
        static void SetCrashCallback(void (*callback)(const char*));

    private:
        static bool s_Initialized;
        static bool s_DumpOnCrash;
        static std::string s_DumpPath;
        static void (*s_CrashCallback)(const char*);

        static void HandleSignal(int signal);
        static void HandleException(const char* message);
#ifdef _WIN32
        static LONG WINAPI UnhandledExceptionFilter(EXCEPTION_POINTERS* exceptionInfo);
#endif
    };
}
} 