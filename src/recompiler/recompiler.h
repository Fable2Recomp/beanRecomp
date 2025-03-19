#pragma once

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>
#include "../ppc/ppc.h"

namespace BeanRecomp
{
namespace Recompiler
{
    // Forward declarations
    class X86Block;
    class X86Function;

    struct RecompilerConfig
    {
        bool enableOptimizations;
        bool enableInlining;
        bool enableRegisterAllocation;
        uint32_t optimizationLevel;
    };

    // Represents a basic block of PowerPC instructions
    struct PPCBlock
    {
        uint32_t startAddress;
        uint32_t endAddress;
        std::vector<PPC::PPCInstruction> instructions;
        std::vector<PPCBlock*> successors;
        std::vector<PPCBlock*> predecessors;
        X86Block* translatedBlock;
    };

    // Represents a PowerPC function
    struct PPCFunction
    {
        std::string name;
        uint32_t startAddress;
        uint32_t endAddress;
        std::vector<PPCBlock*> blocks;
        X86Function* translatedFunction;
    };

    class Recompiler
    {
    public:
        Recompiler();
        ~Recompiler();

        // Configuration
        bool Initialize(const RecompilerConfig& config);
        void Shutdown();

        // Main recompilation functions
        bool LoadBinary(const std::string& filename);
        bool AnalyzeCode();
        bool GenerateCode();
        bool WriteBinary(const std::string& filename);

    private:
        // Analysis functions
        bool IdentifyFunctions();
        bool BuildControlFlowGraph();
        bool AnalyzeDataFlow();
        bool AnalyzeRegisters();

        // Code generation functions
        bool TranslateFunction(PPCFunction* func);
        bool TranslateBlock(PPCBlock* block);
        bool TranslateInstruction(const PPC::PPCInstruction& inst);
        
        // Optimization functions
        bool OptimizeFunction(PPCFunction* func);
        bool OptimizeBlock(PPCBlock* block);
        bool AllocateRegisters(PPCFunction* func);

        // Helper functions
        bool IsBlockTerminator(const PPC::PPCInstruction& inst) const;
        bool IsFunctionCall(const PPC::PPCInstruction& inst) const;
        bool IsFunctionReturn(const PPC::PPCInstruction& inst) const;

    private:
        RecompilerConfig m_Config;
        std::vector<uint8_t> m_BinaryData;
        std::unordered_map<uint32_t, PPCFunction*> m_Functions;
        std::unordered_map<uint32_t, PPCBlock*> m_Blocks;
        bool m_Initialized;
    };

} // namespace Recompiler
} // namespace BeanRecomp 