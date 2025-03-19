#include "disassembler.h"
#include "ppc.h"
#include "os/logger.h"
#include <sstream>
#include <iomanip>
#include <algorithm>

namespace BeanRecomp
{
namespace PPC
{
    const SymbolTable* Disassembler::s_SymbolTable = nullptr;
    std::unordered_map<uint32_t, std::string> Disassembler::s_OpcodeMnemonics;
    std::unordered_map<uint32_t, std::string> Disassembler::s_ExtendedOpcodeMnemonics;

    bool Disassembler::Disassemble(uint32_t address, uint32_t instruction,
                                  DisassembledInstruction& result)
    {
        if (!IsValidInstruction(instruction))
            return false;

        result.address = address;
        result.instruction = instruction;
        result.symbol = s_SymbolTable ? s_SymbolTable->GetSymbol(address) : nullptr;

        PPCInstruction decoded;
        if (!DecodeInstruction(instruction, decoded))
            return false;

        result.mnemonic = GetInstructionMnemonic(instruction);
        result.operands = FormatOperands(decoded);
        result.isBranch = IsBranchInstruction(instruction);
        result.isCall = IsCallInstruction(instruction);
        result.isReturn = IsReturnInstruction(instruction);
        result.branchTarget = GetBranchTarget(address, instruction);
        result.comment = FormatComment(result);

        return true;
    }

    bool Disassembler::DisassembleRange(uint32_t startAddress, uint32_t endAddress,
                                      std::vector<DisassembledInstruction>& result)
    {
        if (startAddress >= endAddress)
            return false;

        result.clear();
        result.reserve((endAddress - startAddress) / 4);

        for (uint32_t addr = startAddress; addr < endAddress; addr += 4)
        {
            uint32_t instruction;
            if (!PPCManager::ReadMemory(addr, &instruction, sizeof(instruction)))
                continue;

            DisassembledInstruction disasm;
            if (Disassemble(addr, instruction, disasm))
            {
                result.push_back(disasm);
            }
        }

        return true;
    }

    bool Disassembler::AnalyzeFunction(uint32_t address, std::vector<DisassembledInstruction>& result)
    {
        // Find function end by looking for return instruction
        uint32_t currentAddr = address;
        bool foundReturn = false;
        std::vector<uint32_t> branchTargets;

        while (!foundReturn)
        {
            uint32_t instruction;
            if (!PPCManager::ReadMemory(currentAddr, &instruction, sizeof(instruction)))
                break;

            DisassembledInstruction disasm;
            if (!Disassemble(currentAddr, instruction, disasm))
                break;

            result.push_back(disasm);

            if (disasm.isReturn)
            {
                foundReturn = true;
            }
            else if (disasm.isBranch)
            {
                branchTargets.push_back(disasm.branchTarget);
            }

            currentAddr += 4;
        }

        // Sort and remove duplicate branch targets
        std::sort(branchTargets.begin(), branchTargets.end());
        branchTargets.erase(std::unique(branchTargets.begin(), branchTargets.end()),
                          branchTargets.end());

        // Recursively analyze branch targets
        for (uint32_t target : branchTargets)
        {
            if (target < address || target >= currentAddr)
            {
                std::vector<DisassembledInstruction> branchResult;
                if (AnalyzeFunction(target, branchResult))
                {
                    result.insert(result.end(), branchResult.begin(), branchResult.end());
                }
            }
        }

        return true;
    }

    bool Disassembler::IsValidInstruction(uint32_t instruction)
    {
        // Check for common invalid instruction patterns
        if (instruction == 0 || instruction == 0xFFFFFFFF)
            return false;

        // Check opcode field
        uint32_t opcode = (instruction >> 26) & 0x3F;
        if (opcode > 0x3F)
            return false;

        return true;
    }

    bool Disassembler::IsBranchInstruction(uint32_t instruction)
    {
        uint32_t opcode = (instruction >> 26) & 0x3F;
        return (opcode == 0x12 || opcode == 0x10); // Branch and Branch Conditional
    }

    bool Disassembler::IsCallInstruction(uint32_t instruction)
    {
        uint32_t opcode = (instruction >> 26) & 0x3F;
        return (opcode == 0x12 && (instruction & 0x1)); // Branch with Link
    }

    bool Disassembler::IsReturnInstruction(uint32_t instruction)
    {
        uint32_t opcode = (instruction >> 26) & 0x3F;
        uint32_t xo = (instruction >> 1) & 0x3FF;

        // Check for blr instruction
        if (opcode == 0x4C && xo == 0x20)
            return true;

        // Check for bclr instruction
        if (opcode == 0x4C && xo == 0x0)
            return true;

        return false;
    }

    uint32_t Disassembler::GetBranchTarget(uint32_t address, uint32_t instruction)
    {
        uint32_t opcode = (instruction >> 26) & 0x3F;
        uint32_t target = 0;

        switch (opcode)
        {
            case 0x12: // Branch
                target = instruction & 0x3FFFFFC;
                if (!(instruction & 0x2)) // Check AA bit
                    target += address;
                break;

            case 0x10: // Branch Conditional
                target = instruction & 0xFFFC;
                if (!(instruction & 0x2)) // Check AA bit
                    target += address;
                break;
        }

        return target;
    }

    std::string Disassembler::GetInstructionMnemonic(uint32_t instruction)
    {
        uint32_t opcode = (instruction >> 26) & 0x3F;
        uint32_t xo = (instruction >> 1) & 0x3FF;

        // Check extended opcode table first
        auto it = s_ExtendedOpcodeMnemonics.find((opcode << 10) | xo);
        if (it != s_ExtendedOpcodeMnemonics.end())
            return it->second;

        // Check regular opcode table
        it = s_OpcodeMnemonics.find(opcode);
        if (it != s_OpcodeMnemonics.end())
            return it->second;

        return "unknown";
    }

    std::string Disassembler::GetInstructionOperands(uint32_t instruction)
    {
        PPCInstruction decoded;
        if (!DecodeInstruction(instruction, decoded))
            return "";

        return FormatOperands(decoded);
    }

    std::string Disassembler::GetInstructionComment(const DisassembledInstruction& inst)
    {
        return FormatComment(inst);
    }

    void Disassembler::InitializeOpcodeTables()
    {
        // Initialize regular opcode mnemonics
        s_OpcodeMnemonics[0x12] = "b";      // Branch
        s_OpcodeMnemonics[0x10] = "bc";     // Branch Conditional
        s_OpcodeMnemonics[0x13] = "sc";     // System Call
        s_OpcodeMnemonics[0x1C] = "f";      // Floating-point
        s_OpcodeMnemonics[0x1D] = "v";      // Vector
        s_OpcodeMnemonics[0x1F] = "x";      // Extended

        // Initialize extended opcode mnemonics
        s_ExtendedOpcodeMnemonics[(0x1F << 10) | 0x0] = "add";    // Add
        s_ExtendedOpcodeMnemonics[(0x1F << 10) | 0x8] = "subf";   // Subtract
        s_ExtendedOpcodeMnemonics[(0x1F << 10) | 0x18] = "and";   // And
        s_ExtendedOpcodeMnemonics[(0x1F << 10) | 0x1C] = "or";    // Or
        s_ExtendedOpcodeMnemonics[(0x1F << 10) | 0x20] = "nand";  // Nand
        s_ExtendedOpcodeMnemonics[(0x1F << 10) | 0x24] = "nor";   // Nor
        s_ExtendedOpcodeMnemonics[(0x1F << 10) | 0x28] = "xor";   // Xor
        s_ExtendedOpcodeMnemonics[(0x1F << 10) | 0x2C] = "eqv";   // Equivalent
    }

    bool Disassembler::DecodeInstruction(uint32_t instruction, PPCInstruction& decoded)
    {
        // Extract opcode (bits 0-5)
        decoded.opcode = (instruction >> 26) & 0x3F;

        // Extract rD (bits 6-10)
        decoded.rD = (instruction >> 21) & 0x1F;

        // Extract rA (bits 11-15)
        decoded.rA = (instruction >> 16) & 0x1F;

        // Extract rB (bits 16-20)
        decoded.rB = (instruction >> 11) & 0x1F;

        // Extract rC (bits 21-25)
        decoded.rC = (instruction >> 6) & 0x1F;

        // Extract immediate (bits 16-31)
        decoded.imm = instruction & 0xFFFF;

        // Extract extended opcode (bits 21-30)
        decoded.xo = (instruction >> 1) & 0x3FF;

        // Extract other fields based on instruction type
        switch (decoded.opcode)
        {
            case 0x1F: // Extended opcode
                decoded.oe = (instruction >> 10) & 0x1;
                decoded.rc = (instruction >> 0) & 0x1;
                break;

            case 0x12: // Branch
                decoded.aa = (instruction >> 1) & 0x1;
                decoded.lk = (instruction >> 0) & 0x1;
                decoded.li = instruction & 0x3FFFFFC;
                break;

            case 0x10: // Branch conditional
                decoded.bo = (instruction >> 21) & 0x1F;
                decoded.bi = (instruction >> 16) & 0x1F;
                decoded.aa = (instruction >> 1) & 0x1;
                decoded.lk = (instruction >> 0) & 0x1;
                decoded.bd = instruction & 0xFFFC;
                break;
        }

        return true;
    }

    std::string Disassembler::FormatOperands(const PPCInstruction& decoded)
    {
        std::ostringstream oss;

        switch (decoded.opcode)
        {
            case 0x1F: // Extended opcode
                oss << "r" << decoded.rD << ", r" << decoded.rA << ", r" << decoded.rB;
                break;

            case 0x12: // Branch
                if (decoded.lk)
                    oss << "lr";
                oss << " 0x" << std::hex << std::uppercase << decoded.li;
                break;

            case 0x10: // Branch conditional
                oss << decoded.bo << ", " << decoded.bi << ", 0x" 
                    << std::hex << std::uppercase << decoded.bd;
                break;

            case 0x13: // System call
                oss << decoded.imm;
                break;

            case 0x1C: // Floating-point
                oss << "fr" << decoded.frt << ", fr" << decoded.fra 
                    << ", fr" << decoded.frb;
                break;

            case 0x1D: // Vector
                oss << "vr" << decoded.vrt << ", vr" << decoded.vra 
                    << ", vr" << decoded.vrb;
                break;
        }

        return oss.str();
    }

    std::string Disassembler::FormatComment(const DisassembledInstruction& inst)
    {
        std::ostringstream oss;

        if (inst.symbol)
        {
            oss << "// " << inst.symbol->name;
            if (inst.symbol->isFunction)
                oss << " (function)";
        }

        if (inst.isBranch)
        {
            if (!oss.str().empty())
                oss << " ";
            oss << "// Branch to 0x" << std::hex << std::uppercase << inst.branchTarget;
        }

        return oss.str();
    }
}
} 