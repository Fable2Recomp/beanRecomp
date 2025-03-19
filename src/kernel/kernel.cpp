#include "kernel.h"
#include "os/logger.h"
#include <chrono>
#include <thread>
#include <mutex>

namespace BeanRecomp
{
namespace Kernel
{
    bool Kernel::s_Initialized = false;
    bool Kernel::s_DebugMode = false;
    uint64_t Kernel::s_SystemTime = 0;
    std::map<uint32_t, std::function<void(void*)>> Kernel::s_Syscalls;
    std::map<uint32_t, std::function<void(void*)>> Kernel::s_InterruptHandlers;
    std::mutex s_KernelMutex;

    bool Kernel::Initialize()
    {
        if (s_Initialized)
            return true;

        std::lock_guard<std::mutex> lock(s_KernelMutex);

        Logger::LogInfo("Initializing Kernel");
        
        // Initialize system time
        s_SystemTime = 0;
        
        // Initialize system calls and interrupts
        InitializeSyscalls();
        InitializeInterrupts();
        
        s_Initialized = true;
        return true;
    }

    void Kernel::Shutdown()
    {
        if (!s_Initialized)
            return;

        std::lock_guard<std::mutex> lock(s_KernelMutex);

        Logger::LogInfo("Shutting down Kernel");
        
        // Clear all handlers
        s_Syscalls.clear();
        s_InterruptHandlers.clear();
        
        s_Initialized = false;
    }

    bool Kernel::CreateProcess(const std::string& name, const std::string& path)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        if (s_DebugMode)
            Logger::LogDebug("Creating process: %s at %s", name.c_str(), path.c_str());
            
        // TODO: Implement process creation
        return true;
    }

    bool Kernel::TerminateProcess(const std::string& name)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        if (s_DebugMode)
            Logger::LogDebug("Terminating process: %s", name.c_str());
            
        // TODO: Implement process termination
        return true;
    }

    bool Kernel::IsProcessRunning(const std::string& name)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        // TODO: Implement process status check
        return false;
    }

    bool Kernel::CreateThread(const std::string& processName, const std::string& name, std::function<void()> entryPoint)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        if (s_DebugMode)
            Logger::LogDebug("Creating thread: %s in process %s", name.c_str(), processName.c_str());
            
        // TODO: Implement thread creation
        return true;
    }

    bool Kernel::TerminateThread(const std::string& processName, const std::string& threadName)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        if (s_DebugMode)
            Logger::LogDebug("Terminating thread: %s in process %s", threadName.c_str(), processName.c_str());
            
        // TODO: Implement thread termination
        return true;
    }

    bool Kernel::IsThreadRunning(const std::string& processName, const std::string& threadName)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        // TODO: Implement thread status check
        return false;
    }

    void* Kernel::AllocateMemory(size_t size)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        if (s_DebugMode)
            Logger::LogDebug("Allocating memory: %zu bytes", size);
            
        // TODO: Implement memory allocation
        return nullptr;
    }

    void Kernel::FreeMemory(void* ptr)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        if (s_DebugMode)
            Logger::LogDebug("Freeing memory at: %p", ptr);
            
        // TODO: Implement memory deallocation
    }

    bool Kernel::ProtectMemory(void* ptr, size_t size, uint32_t flags)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        if (s_DebugMode)
            Logger::LogDebug("Protecting memory at: %p, size: %zu, flags: 0x%x", ptr, size, flags);
            
        // TODO: Implement memory protection
        return true;
    }

    bool Kernel::RegisterSyscall(uint32_t number, std::function<void(void*)> handler)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        if (s_Syscalls.find(number) != s_Syscalls.end())
        {
            Logger::LogWarning("Syscall %u already registered", number);
            return false;
        }
        
        s_Syscalls[number] = handler;
        return true;
    }

    bool Kernel::UnregisterSyscall(uint32_t number)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        auto it = s_Syscalls.find(number);
        if (it == s_Syscalls.end())
        {
            Logger::LogWarning("Syscall %u not registered", number);
            return false;
        }
        
        s_Syscalls.erase(it);
        return true;
    }

    bool Kernel::ExecuteSyscall(uint32_t number, void* params)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        auto it = s_Syscalls.find(number);
        if (it == s_Syscalls.end())
        {
            Logger::LogError("Syscall %u not found", number);
            return false;
        }
        
        try
        {
            it->second(params);
            return true;
        }
        catch (const std::exception& e)
        {
            Logger::LogError("Syscall %u failed: %s", number, e.what());
            return false;
        }
    }

    bool Kernel::RegisterInterruptHandler(uint32_t number, std::function<void(void*)> handler)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        if (s_InterruptHandlers.find(number) != s_InterruptHandlers.end())
        {
            Logger::LogWarning("Interrupt handler %u already registered", number);
            return false;
        }
        
        s_InterruptHandlers[number] = handler;
        return true;
    }

    bool Kernel::UnregisterInterruptHandler(uint32_t number)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        auto it = s_InterruptHandlers.find(number);
        if (it == s_InterruptHandlers.end())
        {
            Logger::LogWarning("Interrupt handler %u not registered", number);
            return false;
        }
        
        s_InterruptHandlers.erase(it);
        return true;
    }

    void Kernel::TriggerInterrupt(uint32_t number, void* data)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        auto it = s_InterruptHandlers.find(number);
        if (it == s_InterruptHandlers.end())
        {
            Logger::LogWarning("No handler for interrupt %u", number);
            return;
        }
        
        try
        {
            it->second(data);
        }
        catch (const std::exception& e)
        {
            Logger::LogError("Interrupt handler %u failed: %s", number, e.what());
        }
    }

    uint64_t Kernel::GetSystemTime()
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        return s_SystemTime;
    }

    uint32_t Kernel::GetProcessCount()
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        // TODO: Implement process count
        return 0;
    }

    uint32_t Kernel::GetThreadCount()
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        // TODO: Implement thread count
        return 0;
    }

    std::string Kernel::GetSystemVersion()
    {
        return "BeanRecomp Kernel v0.1.0";
    }

    void Kernel::SetDebugMode(bool enable)
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        s_DebugMode = enable;
        Logger::LogInfo("Kernel debug mode: %s", enable ? "enabled" : "disabled");
    }

    bool Kernel::IsDebugMode()
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        return s_DebugMode;
    }

    void Kernel::DumpSystemState()
    {
        std::lock_guard<std::mutex> lock(s_KernelMutex);
        
        Logger::LogInfo("Kernel System State:");
        Logger::LogInfo("  Initialized: %s", s_Initialized ? "yes" : "no");
        Logger::LogInfo("  Debug Mode: %s", s_DebugMode ? "yes" : "no");
        Logger::LogInfo("  System Time: %llu", s_SystemTime);
        Logger::LogInfo("  Registered Syscalls: %zu", s_Syscalls.size());
        Logger::LogInfo("  Registered Interrupt Handlers: %zu", s_InterruptHandlers.size());
    }

    void Kernel::UpdateSystemTime()
    {
        auto now = std::chrono::steady_clock::now();
        auto duration = now.time_since_epoch();
        s_SystemTime = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    }

    void Kernel::InitializeSyscalls()
    {
        // Register basic system calls
        RegisterSyscall(0, [](void* params) { /* TODO: Implement */ });
        RegisterSyscall(1, [](void* params) { /* TODO: Implement */ });
        // Add more system calls as needed
    }

    void Kernel::InitializeInterrupts()
    {
        // Register basic interrupt handlers
        RegisterInterruptHandler(0, [](void* data) { /* TODO: Implement */ });
        RegisterInterruptHandler(1, [](void* data) { /* TODO: Implement */ });
        // Add more interrupt handlers as needed
    }
}
} 