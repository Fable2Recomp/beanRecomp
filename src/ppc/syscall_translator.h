#pragma once

#include <string>
#include <vector>
#include <cstdint>
#include <unordered_map>
#include "instruction_translator.h"

namespace BeanRecomp
{
namespace PPC
{
    struct SyscallInfo
    {
        std::string name;
        std::string description;
        std::vector<std::string> parameters;
        std::string returnType;
        bool isImplemented;
    };

    class SyscallTranslator
    {
    public:
        static bool Initialize();
        static void Shutdown();
        
        static bool TranslateSyscall(uint32_t syscallNumber,
                                   const std::vector<uint32_t>& parameters,
                                   TranslatedInstruction& result);
        
        static bool IsSyscallImplemented(uint32_t syscallNumber) const;
        static const SyscallInfo* GetSyscallInfo(uint32_t syscallNumber) const;
        
        static void SetDebugMode(bool enabled) { s_DebugMode = enabled; }
        static bool IsDebugMode() { return s_DebugMode; }

    private:
        static bool s_DebugMode;
        static std::unordered_map<uint32_t, SyscallInfo> s_Syscalls;
        
        // Xbox 360 system call categories
        static void InitializeKernelSyscalls();
        static void InitializeFileSyscalls();
        static void InitializeNetworkSyscalls();
        static void InitializeGraphicsSyscalls();
        static void InitializeAudioSyscalls();
        static void InitializeInputSyscalls();
        
        // Helper functions
        static void InitializeSyscallTable();
        static bool GenerateSyscallWrapper(const SyscallInfo& info,
                                         const std::vector<uint32_t>& parameters,
                                         TranslatedInstruction& result);
        static std::string GetParameterType(const std::string& param);
        static std::string GetReturnType(const std::string& type);
    };
}
} 