#pragma once

#include <vector>
#include <memory>
#include <functional>
#include <string>
#include "os/logger.h"
#include "ppc/ppc_memory.h"

namespace BeanRecomp
{
namespace CPU
{
    // CPU Core states
    enum class CoreState
    {
        Idle,
        Running,
        Paused,
        Halted,
        Error
    };

    // CPU Core flags
    enum class CoreFlags
    {
        None = 0,
        InterruptPending = 1 << 0,
        BreakpointHit = 1 << 1,
        SingleStep = 1 << 2,
        DebugMode = 1 << 3
    };

    // CPU Core events
    enum class CoreEventType
    {
        InstructionExecuted,
        BreakpointHit,
        InterruptOccurred,
        ErrorOccurred,
        StateChanged
    };

    // CPU Core event data
    struct CoreEvent
    {
        CoreEventType type;
        uint32_t coreId;
        uint32_t instructionAddress;
        std::string message;
    };

    // CPU Core class
    class CPUCore
    {
    public:
        CPUCore(uint32_t id);
        ~CPUCore();

        bool Initialize();
        void Shutdown();
        void Update();
        void Execute();
        void Reset();
        void Pause();
        void Resume();
        void Halt();
        void SetBreakpoint(uint32_t address);
        void RemoveBreakpoint(uint32_t address);
        void SetSingleStep(bool enable);
        void SetDebugMode(bool enable);

        bool IsInitialized() const { return m_Initialized; }
        CoreState GetState() const { return m_State; }
        uint32_t GetId() const { return m_Id; }
        uint32_t GetCurrentAddress() const { return m_CurrentAddress; }
        bool IsBreakpoint(uint32_t address) const;
        bool IsSingleStep() const { return m_Flags & static_cast<uint32_t>(CoreFlags::SingleStep); }
        bool IsDebugMode() const { return m_Flags & static_cast<uint32_t>(CoreFlags::DebugMode); }

    private:
        bool m_Initialized;
        CoreState m_State;
        uint32_t m_Flags;
        uint32_t m_Id;
        uint32_t m_CurrentAddress;
        std::vector<uint32_t> m_Breakpoints;
        std::vector<std::function<void(const CoreEvent&)>> m_EventHandlers;

        void HandleInstruction();
        void ProcessInterrupts();
        void EmitEvent(CoreEventType type, const std::string& message = "");
    };

    // CPU Manager class
    class CPUManager
    {
    public:
        static bool Initialize();
        static void Shutdown();
        
        // Core management
        static CPUCore* CreateCore();
        static void DestroyCore(CPUCore* core);
        static CPUCore* GetCore(uint32_t id);
        static void UpdateCores();
        static void ResetAllCores();
        static void PauseAllCores();
        static void ResumeAllCores();
        static void HaltAllCores();
        
        // Event handling
        static bool RegisterCoreEventHandler(CoreEventType type, std::function<void(const CoreEvent&)> handler);
        static bool UnregisterCoreEventHandler(CoreEventType type);
        
        // Memory management
        static bool MapMemory(uint32_t address, uint32_t size, void* data);
        static bool UnmapMemory(uint32_t address);
        static void* GetMemoryPointer(uint32_t address);
        
        // Debugging
        static void SetDebugMode(bool enable);
        static bool IsDebugMode();
        static void DumpCPUState();

    private:
        static bool s_Initialized;
        static bool s_DebugMode;
        static std::vector<std::unique_ptr<CPUCore>> s_Cores;
        static std::map<CoreEventType, std::vector<std::function<void(const CoreEvent&)>>> s_CoreEventHandlers;
        static std::mutex s_CPUMutex;
        
        static void InitializeCPU();
        static void CleanupCPU();
    };
}
} 