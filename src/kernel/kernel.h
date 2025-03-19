#pragma once

#include <string>
#include <vector>
#include <memory>
#include <functional>
#include "os/logger.h"

namespace BeanRecomp {
namespace Kernel {

class Kernel {
public:
    static bool Initialize();
    static void Shutdown();
    
    // Process management
    static bool CreateProcess(const std::string& name, const std::string& path);
    static bool TerminateProcess(const std::string& name);
    static bool IsProcessRunning(const std::string& name);
    
    // Thread management
    static bool CreateThread(const std::string& processName, const std::string& name, std::function<void()> entryPoint);
    static bool TerminateThread(const std::string& processName, const std::string& threadName);
    static bool IsThreadRunning(const std::string& processName, const std::string& threadName);
    
    // Memory management
    static void* AllocateMemory(size_t size);
    static void FreeMemory(void* ptr);
    static bool ProtectMemory(void* ptr, size_t size, uint32_t flags);
    
    // System calls
    static bool RegisterSyscall(uint32_t number, std::function<void(void*)> handler);
    static bool UnregisterSyscall(uint32_t number);
    static bool ExecuteSyscall(uint32_t number, void* params);
    
    // Interrupt handling
    static bool RegisterInterruptHandler(uint32_t number, std::function<void(void*)> handler);
    static bool UnregisterInterruptHandler(uint32_t number);
    static void TriggerInterrupt(uint32_t number, void* data);
    
    // System information
    static uint64_t GetSystemTime();
    static uint32_t GetProcessCount();
    static uint32_t GetThreadCount();
    static std::string GetSystemVersion();
    
    // Debugging
    static void SetDebugMode(bool enable);
    static bool IsDebugMode();
    static void DumpSystemState();

private:
    static bool s_Initialized;
    static bool s_DebugMode;
    static uint64_t s_SystemTime;
    static std::map<uint32_t, std::function<void(void*)>> s_Syscalls;
    static std::map<uint32_t, std::function<void(void*)>> s_InterruptHandlers;
    
    static void UpdateSystemTime();
    static void InitializeSyscalls();
    static void InitializeInterrupts();
};

} // namespace Kernel
} // namespace BeanRecomp 