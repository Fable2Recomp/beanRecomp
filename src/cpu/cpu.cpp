#include "cpu.h"
#include "os/logger.h"
#include <algorithm>

namespace BeanRecomp
{
namespace CPU
{
    // CPUCore implementation
    CPUCore::CPUCore(uint32_t id)
        : m_Initialized(false)
        , m_State(CoreState::Idle)
        , m_Flags(0)
        , m_Id(id)
        , m_CurrentAddress(0)
    {
    }

    CPUCore::~CPUCore()
    {
        Shutdown();
    }

    bool CPUCore::Initialize()
    {
        if (m_Initialized)
            return true;

        Logger::LogInfo("Initializing CPU Core %u", m_Id);
        
        // TODO: Implement core initialization
        // This would typically involve:
        // 1. Setting up the core's registers
        // 2. Initializing the instruction decoder
        // 3. Setting up the execution pipeline
        
        m_Initialized = true;
        return true;
    }

    void CPUCore::Shutdown()
    {
        if (!m_Initialized)
            return;

        Logger::LogInfo("Shutting down CPU Core %u", m_Id);
        
        // TODO: Implement core cleanup
        // This would typically involve:
        // 1. Cleaning up the execution pipeline
        // 2. Saving core state if needed
        // 3. Releasing resources
        
        m_Initialized = false;
    }

    void CPUCore::Update()
    {
        if (!m_Initialized || m_State != CoreState::Running)
            return;

        ProcessInterrupts();
        HandleInstruction();
    }

    void CPUCore::Execute()
    {
        if (!m_Initialized)
            return;

        m_State = CoreState::Running;
        Update();
    }

    void CPUCore::Reset()
    {
        if (!m_Initialized)
            return;

        Logger::LogInfo("Resetting CPU Core %u", m_Id);
        
        // TODO: Implement core reset
        // This would typically involve:
        // 1. Resetting all registers to their initial values
        // 2. Clearing the instruction pipeline
        // 3. Resetting the program counter
        
        m_State = CoreState::Idle;
        m_CurrentAddress = 0;
        m_Flags = 0;
    }

    void CPUCore::Pause()
    {
        if (!m_Initialized)
            return;

        if (m_State == CoreState::Running)
        {
            m_State = CoreState::Paused;
            EmitEvent(CoreEventType::StateChanged, "Core paused");
        }
    }

    void CPUCore::Resume()
    {
        if (!m_Initialized)
            return;

        if (m_State == CoreState::Paused)
        {
            m_State = CoreState::Running;
            EmitEvent(CoreEventType::StateChanged, "Core resumed");
        }
    }

    void CPUCore::Halt()
    {
        if (!m_Initialized)
            return;

        m_State = CoreState::Halted;
        EmitEvent(CoreEventType::StateChanged, "Core halted");
    }

    void CPUCore::SetBreakpoint(uint32_t address)
    {
        if (!m_Initialized)
            return;

        if (std::find(m_Breakpoints.begin(), m_Breakpoints.end(), address) == m_Breakpoints.end())
        {
            m_Breakpoints.push_back(address);
            if (IsDebugMode())
                Logger::LogDebug("Set breakpoint at address 0x%08X on Core %u", address, m_Id);
        }
    }

    void CPUCore::RemoveBreakpoint(uint32_t address)
    {
        if (!m_Initialized)
            return;

        auto it = std::find(m_Breakpoints.begin(), m_Breakpoints.end(), address);
        if (it != m_Breakpoints.end())
        {
            m_Breakpoints.erase(it);
            if (IsDebugMode())
                Logger::LogDebug("Removed breakpoint at address 0x%08X from Core %u", address, m_Id);
        }
    }

    void CPUCore::SetSingleStep(bool enable)
    {
        if (!m_Initialized)
            return;

        if (enable)
            m_Flags |= static_cast<uint32_t>(CoreFlags::SingleStep);
        else
            m_Flags &= ~static_cast<uint32_t>(CoreFlags::SingleStep);
    }

    void CPUCore::SetDebugMode(bool enable)
    {
        if (!m_Initialized)
            return;

        if (enable)
            m_Flags |= static_cast<uint32_t>(CoreFlags::DebugMode);
        else
            m_Flags &= ~static_cast<uint32_t>(CoreFlags::DebugMode);
    }

    bool CPUCore::IsBreakpoint(uint32_t address) const
    {
        return std::find(m_Breakpoints.begin(), m_Breakpoints.end(), address) != m_Breakpoints.end();
    }

    void CPUCore::HandleInstruction()
    {
        // TODO: Implement instruction handling
        // This would typically involve:
        // 1. Fetching the next instruction
        // 2. Decoding the instruction
        // 3. Executing the instruction
        // 4. Updating the program counter
        // 5. Emitting instruction execution events
    }

    void CPUCore::ProcessInterrupts()
    {
        if (m_Flags & static_cast<uint32_t>(CoreFlags::InterruptPending))
        {
            // TODO: Implement interrupt handling
            // This would typically involve:
            // 1. Saving the current execution state
            // 2. Jumping to the interrupt handler
            // 3. Processing the interrupt
            // 4. Restoring the execution state
            
            m_Flags &= ~static_cast<uint32_t>(CoreFlags::InterruptPending);
            EmitEvent(CoreEventType::InterruptOccurred, "Interrupt processed");
        }
    }

    void CPUCore::EmitEvent(CoreEventType type, const std::string& message)
    {
        CoreEvent event;
        event.type = type;
        event.coreId = m_Id;
        event.instructionAddress = m_CurrentAddress;
        event.message = message;

        for (const auto& handler : m_EventHandlers)
        {
            handler(event);
        }
    }

    // CPUManager implementation
    bool CPUManager::s_Initialized = false;
    bool CPUManager::s_DebugMode = false;
    std::vector<std::unique_ptr<CPUCore>> CPUManager::s_Cores;
    std::map<CoreEventType, std::vector<std::function<void(const CoreEvent&)>>> CPUManager::s_CoreEventHandlers;
    std::mutex CPUManager::s_CPUMutex;

    bool CPUManager::Initialize()
    {
        if (s_Initialized)
            return true;

        std::lock_guard<std::mutex> lock(s_CPUMutex);

        Logger::LogInfo("Initializing CPU system");
        
        InitializeCPU();
        
        s_Initialized = true;
        return true;
    }

    void CPUManager::Shutdown()
    {
        if (!s_Initialized)
            return;

        std::lock_guard<std::mutex> lock(s_CPUMutex);

        Logger::LogInfo("Shutting down CPU system");
        
        CleanupCPU();
        
        s_Initialized = false;
    }

    CPUCore* CPUManager::CreateCore()
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        uint32_t id = static_cast<uint32_t>(s_Cores.size());
        auto core = std::make_unique<CPUCore>(id);
        
        if (!core->Initialize())
        {
            Logger::LogError("Failed to initialize CPU Core %u", id);
            return nullptr;
        }
        
        CPUCore* corePtr = core.get();
        s_Cores.push_back(std::move(core));
        
        if (s_DebugMode)
            Logger::LogDebug("Created CPU Core %u", id);
            
        return corePtr;
    }

    void CPUManager::DestroyCore(CPUCore* core)
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        auto it = std::find_if(s_Cores.begin(), s_Cores.end(),
            [core](const std::unique_ptr<CPUCore>& c) { return c.get() == core; });
            
        if (it != s_Cores.end())
        {
            if (s_DebugMode)
                Logger::LogDebug("Destroying CPU Core %u", core->GetId());
                
            s_Cores.erase(it);
        }
    }

    CPUCore* CPUManager::GetCore(uint32_t id)
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        auto it = std::find_if(s_Cores.begin(), s_Cores.end(),
            [id](const std::unique_ptr<CPUCore>& c) { return c->GetId() == id; });
            
        return it != s_Cores.end() ? it->get() : nullptr;
    }

    void CPUManager::UpdateCores()
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        for (auto& core : s_Cores)
        {
            core->Update();
        }
    }

    void CPUManager::ResetAllCores()
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        for (auto& core : s_Cores)
        {
            core->Reset();
        }
    }

    void CPUManager::PauseAllCores()
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        for (auto& core : s_Cores)
        {
            core->Pause();
        }
    }

    void CPUManager::ResumeAllCores()
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        for (auto& core : s_Cores)
        {
            core->Resume();
        }
    }

    void CPUManager::HaltAllCores()
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        for (auto& core : s_Cores)
        {
            core->Halt();
        }
    }

    bool CPUManager::RegisterCoreEventHandler(CoreEventType type, std::function<void(const CoreEvent&)> handler)
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        s_CoreEventHandlers[type].push_back(handler);
        
        if (s_DebugMode)
            Logger::LogDebug("Registered handler for core event type %d", static_cast<int>(type));
            
        return true;
    }

    bool CPUManager::UnregisterCoreEventHandler(CoreEventType type)
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        auto it = s_CoreEventHandlers.find(type);
        if (it == s_CoreEventHandlers.end())
        {
            Logger::LogWarning("No handlers registered for core event type %d", static_cast<int>(type));
            return false;
        }
        
        s_CoreEventHandlers.erase(it);
        
        if (s_DebugMode)
            Logger::LogDebug("Unregistered handler for core event type %d", static_cast<int>(type));
            
        return true;
    }

    bool CPUManager::MapMemory(uint32_t address, uint32_t size, void* data)
    {
        // TODO: Implement memory mapping
        return false;
    }

    bool CPUManager::UnmapMemory(uint32_t address)
    {
        // TODO: Implement memory unmapping
        return false;
    }

    void* CPUManager::GetMemoryPointer(uint32_t address)
    {
        // TODO: Implement memory pointer retrieval
        return nullptr;
    }

    void CPUManager::SetDebugMode(bool enable)
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        s_DebugMode = enable;
        Logger::LogInfo("CPU debug mode: %s", enable ? "enabled" : "disabled");
    }

    bool CPUManager::IsDebugMode()
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        return s_DebugMode;
    }

    void CPUManager::DumpCPUState()
    {
        std::lock_guard<std::mutex> lock(s_CPUMutex);
        
        Logger::LogInfo("CPU System State:");
        Logger::LogInfo("  Initialized: %s", s_Initialized ? "yes" : "no");
        Logger::LogInfo("  Debug Mode: %s", s_DebugMode ? "yes" : "no");
        Logger::LogInfo("  Cores: %zu", s_Cores.size());
        Logger::LogInfo("  Event Handlers: %zu", s_CoreEventHandlers.size());
        
        // Log core information
        for (const auto& core : s_Cores)
        {
            Logger::LogInfo("  Core: %u", core->GetId());
            Logger::LogInfo("    State: %d", static_cast<int>(core->GetState()));
            Logger::LogInfo("    Current Address: 0x%08X", core->GetCurrentAddress());
            Logger::LogInfo("    Debug Mode: %s", core->IsDebugMode() ? "yes" : "no");
            Logger::LogInfo("    Single Step: %s", core->IsSingleStep() ? "yes" : "no");
        }
    }

    void CPUManager::InitializeCPU()
    {
        // TODO: Implement CPU initialization
        // This would typically involve:
        // 1. Setting up the memory system
        // 2. Initializing the instruction decoder
        // 3. Creating the main CPU core
    }

    void CPUManager::CleanupCPU()
    {
        // TODO: Implement CPU cleanup
        // This would typically involve:
        // 1. Destroying all CPU cores
        // 2. Cleaning up the memory system
        // 3. Releasing resources
    }
}
} 