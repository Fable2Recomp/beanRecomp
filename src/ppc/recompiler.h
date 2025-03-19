#pragma once

#include <vector>
#include <unordered_map>
#include <memory>
#include <string>
#include "disassembler.h"

namespace BeanRecomp
{
namespace PPC
{
    struct RecompiledBlock
    {
        uint32_t startAddress;
        uint32_t endAddress;
        std::vector<uint8_t> nativeCode;
        std::vector<uint32_t> branchTargets;
        bool isFunction;
        std::string name;
    };

    class Recompiler
    {
    public:
        static bool Initialize();
        static void Shutdown();
        
        static bool RecompileBlock(uint32_t address, RecompiledBlock& result);
        static bool RecompileFunction(uint32_t address, RecompiledBlock& result);
        static bool RecompileRange(uint32_t startAddress, uint32_t endAddress,
                                 std::vector<RecompiledBlock>& result);
        
        static bool IsBlockRecompiled(uint32_t address) const;
        static const RecompiledBlock* GetRecompiledBlock(uint32_t address) const;
        static void ClearCache();
        
        static void SetOptimizationLevel(int level) { s_OptimizationLevel = level; }
        static int GetOptimizationLevel() { return s_OptimizationLevel; }
        
        static void SetDebugMode(bool enabled) { s_DebugMode = enabled; }
        static bool IsDebugMode() { return s_DebugMode; }

    private:
        static std::unordered_map<uint32_t, RecompiledBlock> s_BlockCache;
        static int s_OptimizationLevel;
        static bool s_DebugMode;
        
        static bool AnalyzeBlock(uint32_t address, std::vector<DisassembledInstruction>& instructions);
        static bool GenerateNativeCode(const std::vector<DisassembledInstruction>& instructions,
                                     RecompiledBlock& result);
        static bool OptimizeBlock(RecompiledBlock& block);
        static bool ValidateBlock(const RecompiledBlock& block);
        
        // Native code generation helpers
        static void GeneratePrologue(RecompiledBlock& block);
        static void GenerateEpilogue(RecompiledBlock& block);
        static void GenerateInstruction(const DisassembledInstruction& inst,
                                      RecompiledBlock& block);
        static void GenerateBranch(const DisassembledInstruction& inst,
                                 RecompiledBlock& block);
        static void GenerateCall(const DisassembledInstruction& inst,
                                RecompiledBlock& block);
        static void GenerateReturn(const DisassembledInstruction& inst,
                                 RecompiledBlock& block);
    };
}
} 