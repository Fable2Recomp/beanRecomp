#pragma once

#include <string>
#include <vector>
#include <cstdint>
#include <unordered_map>
#include "symbols.h"

namespace BeanRecomp
{
namespace PPC
{
    struct DisassembledInstruction
    {
        uint32_t address;
        uint32_t instruction;
        std::string mnemonic;
        std::string operands;
        std::string comment;
        bool isBranch;
        bool isCall;
        bool isReturn;
        uint32_t branchTarget;
        const Symbol* symbol;
    };

    class Disassembler
    {
    public:
        static bool Disassemble(uint32_t address, uint32_t instruction,
                              DisassembledInstruction& result);
        static bool DisassembleRange(uint32_t startAddress, uint32_t endAddress,
                                   std::vector<DisassembledInstruction>& result);
        static bool AnalyzeFunction(uint32_t address, std::vector<DisassembledInstruction>& result);
        
        static void SetSymbolTable(const SymbolTable* symbolTable) { s_SymbolTable = symbolTable; }
        static const SymbolTable* GetSymbolTable() { return s_SymbolTable; }
        
        static bool IsValidInstruction(uint32_t instruction);
        static bool IsBranchInstruction(uint32_t instruction);
        static bool IsCallInstruction(uint32_t instruction);
        static bool IsReturnInstruction(uint32_t instruction);
        static uint32_t GetBranchTarget(uint32_t address, uint32_t instruction);
        
        static std::string GetInstructionMnemonic(uint32_t instruction);
        static std::string GetInstructionOperands(uint32_t instruction);
        static std::string GetInstructionComment(const DisassembledInstruction& inst);

    private:
        static const SymbolTable* s_SymbolTable;
        static std::unordered_map<uint32_t, std::string> s_OpcodeMnemonics;
        static std::unordered_map<uint32_t, std::string> s_ExtendedOpcodeMnemonics;
        
        static void InitializeOpcodeTables();
        static bool DecodeInstruction(uint32_t instruction, PPCInstruction& decoded);
        static std::string FormatOperands(const PPCInstruction& decoded);
        static std::string FormatComment(const DisassembledInstruction& inst);
    };
}
} 