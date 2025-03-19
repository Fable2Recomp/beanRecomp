#pragma once

#include <string>
#include <vector>
#include <cstdint>
#include <unordered_map>
#include "disassembler.h"

namespace BeanRecomp
{
namespace PPC
{
    struct TranslatedInstruction
    {
        std::vector<uint8_t> x86Code;
        std::string comment;
        bool requiresRelocation;
        uint32_t relocationTarget;
    };

    class InstructionTranslator
    {
    public:
        static bool Initialize();
        static void Shutdown();
        
        static bool TranslateInstruction(const DisassembledInstruction& ppcInst,
                                       TranslatedInstruction& result);
        static bool TranslateBlock(const std::vector<DisassembledInstruction>& ppcBlock,
                                 std::vector<TranslatedInstruction>& result);
        
        static void SetOptimizationLevel(int level) { s_OptimizationLevel = level; }
        static int GetOptimizationLevel() { return s_OptimizationLevel; }
        
        static void SetDebugMode(bool enabled) { s_DebugMode = enabled; }
        static bool IsDebugMode() { return s_DebugMode; }

    private:
        static int s_OptimizationLevel;
        static bool s_DebugMode;
        
        // Register mapping
        static std::unordered_map<uint32_t, std::string> s_RegisterMap;
        
        // Instruction translation functions
        static bool TranslateLoadStore(const DisassembledInstruction& ppcInst,
                                     TranslatedInstruction& result);
        static bool TranslateArithmetic(const DisassembledInstruction& ppcInst,
                                      TranslatedInstruction& result);
        static bool TranslateBranch(const DisassembledInstruction& ppcInst,
                                  TranslatedInstruction& result);
        static bool TranslateSystem(const DisassembledInstruction& ppcInst,
                                  TranslatedInstruction& result);
        static bool TranslateFloatingPoint(const DisassembledInstruction& ppcInst,
                                         TranslatedInstruction& result);
        static bool TranslateVector(const DisassembledInstruction& ppcInst,
                                  TranslatedInstruction& result);
        
        // Helper functions
        static void InitializeRegisterMap();
        static std::string GetX86Register(uint32_t ppcReg);
        static void GenerateX86Instruction(const std::string& mnemonic,
                                         const std::string& operands,
                                         TranslatedInstruction& result);
        static void GenerateRelocation(uint32_t target,
                                     TranslatedInstruction& result);
    };
}
} 