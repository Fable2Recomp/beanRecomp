#pragma once

#include <string>
#include <vector>
#include <memory>
#include <functional>
#include <mutex>
#include "os/logger.h"
#include <unordered_map>

namespace BeanRecomp
{
namespace PPC
{
    enum class CPUState : uint32_t
    {
        STOPPED,
        RUNNING,
        PAUSED,
        HALTED,
        BREAKPOINT
    };

    enum CPUFlags : uint32_t
    {
        CPU_FLAG_NONE = 0,
        CPU_FLAG_CARRY = 0x00000001,
        CPU_FLAG_OVERFLOW = 0x00000002,
        CPU_FLAG_ZERO = 0x00000004,
        CPU_FLAG_NEGATIVE = 0x00000008,
        CPU_FLAG_SUMMARY_OVERFLOW = 0x00000010,
        CPU_FLAG_FLOATING_POINT_EXCEPTION = 0x00000020,
        CPU_FLAG_RESERVED = 0x00000040,
        CPU_FLAG_FLOATING_POINT_ENABLED = 0x00000080
    };

    enum class CPUEvents : uint32_t
    {
        RESET,
        INTERRUPT,
        EXCEPTION,
        BREAKPOINT,
        DEBUG
    };

    struct CPUConfig
    {
        uint32_t coreCount;
        bool enableMMU;
        bool enableFPU;
        bool enableAltivec;
        bool enableDebug;
    };

    struct PPCInstruction
    {
        uint32_t opcode;    // Primary opcode (bits 0-5)
        uint32_t rD;        // Destination register (bits 6-10)
        uint32_t rA;        // Source register A (bits 11-15)
        uint32_t rB;        // Source register B (bits 16-20)
        uint32_t rC;        // Source register C (bits 21-25)
        uint32_t imm;       // Immediate value (bits 16-31)
        uint32_t xo;        // Extended opcode (bits 21-30)
        uint32_t oe;        // Overflow enable (bit 10)
        uint32_t rc;        // Record bit (bit 0)
        uint32_t aa;        // Absolute address bit
        uint32_t lk;        // Link bit
        uint32_t li;        // Branch target (bits 0-23)
        uint32_t bo;        // Branch condition options
        uint32_t bi;        // Branch condition bit
        uint32_t bd;        // Branch displacement
        uint32_t frt;       // FP destination register
        uint32_t fra;       // FP source register A
        uint32_t frb;       // FP source register B
        uint32_t frc;       // FP source register C
        uint32_t frs;       // FP source register
        uint32_t fcr;       // FP condition register
        uint32_t vrt;       // Vector destination register
        uint32_t vra;       // Vector source register A
        uint32_t vrb;       // Vector source register B
        uint32_t vrc;       // Vector source register C
        uint32_t vrs;       // Vector source register
        uint32_t vsh;       // Vector shift amount
        uint32_t crfD;      // Condition register field
    };

    struct PageTableEntry
    {
        uint32_t virtualAddress;
        uint32_t physicalAddress;
        uint32_t size;
        uint32_t flags;
        bool valid;
    };

    // CPU core class
    class CPUCore
    {
    public:
        CPUCore();
        ~CPUCore() = default;

        void Reset();
        bool LoadProgram(const std::vector<uint8_t>& program, uint32_t loadAddress);
        bool MapMemory(uint32_t virtualAddr, uint32_t physicalAddr, uint32_t size, uint32_t flags);
        bool UnmapMemory(uint32_t virtualAddr);
        bool Step();

    private:
        // Registers
        uint32_t gpr[32];     // General Purpose Registers
        double fpr[32];       // Floating Point Registers
        uint32_t vr[32][4];   // Vector Registers (128-bit)
        uint32_t cr[8];       // Condition Register fields
        
        // Special Purpose Registers
        uint32_t pc;          // Program Counter
        uint32_t lr;          // Link Register
        uint32_t ctr;         // Count Register
        uint32_t xer;         // Fixed-Point Exception Register
        uint32_t fpscr;       // Floating-Point Status and Control Register
        uint32_t vscr;        // Vector Status and Control Register
        uint32_t msr;         // Machine State Register
        
        // Memory management
        std::vector<uint8_t> memory;
        std::unordered_map<uint32_t, PageTableEntry> pageTable;
        
        // Helper functions
        uint32_t TranslateAddress(uint32_t virtualAddr);
        PPCInstruction DecodeInstruction(uint32_t rawInstruction);
        void ExecuteInstruction(const PPCInstruction& inst);
    };

    // PPC Manager class
    class PPCManager
    {
    public:
        static bool Initialize();
        static void Shutdown();

        // Core management
        static std::shared_ptr<CPUCore> CreateCore();
        static void DestroyCore(std::shared_ptr<CPUCore> core);
        static void UpdateCores();
        static void ResetCores();

        // Memory management
        static bool AllocateMemory(uint32_t size);
        static void FreeMemory();
        static bool ReadMemory(uint32_t address, void* data, uint32_t size);
        static bool WriteMemory(uint32_t address, const void* data, uint32_t size);
        static bool MapMemory(uint32_t address, uint32_t size, uint32_t flags);
        static bool UnmapMemory(uint32_t address);

        // Instruction handling
        static bool DecodeInstruction(uint32_t instruction);
        static bool ExecuteInstruction(uint32_t instruction);
        static bool CompileInstruction(uint32_t instruction);
        static void InvalidateCodeCache(uint32_t address, uint32_t size);

        // Interrupt handling
        static void RaiseInterrupt(uint32_t vector);
        static void ClearInterrupt(uint32_t vector);
        static bool HasPendingInterrupts();

        // Configuration
        static bool SetCPUConfig(const CPUConfig& config);
        static const CPUConfig& GetCPUConfig();
        static void SetMMUEnabled(bool enable);
        static bool IsMMUEnabled();

        // Debugging
        static void SetDebugMode(bool enable);
        static bool IsDebugMode();
        static void DumpCPUState();

    private:
        static bool s_Initialized;
        static bool s_DebugMode;
        static CPUConfig s_CPUConfig;
        static std::vector<std::shared_ptr<CPUCore>> s_Cores;
        static std::vector<uint8_t> s_Memory;
        static std::vector<uint32_t> s_PendingInterrupts;
        static std::mutex s_PPCMutex;
        static std::unordered_map<uint32_t, PageTableEntry> s_PageTable;

        static void InitializePPC();
        static void CleanupPPC();
        static void ProcessInterrupts();
        static void UpdateMemory();
    };
}
} 