#include "instruction_translator.h"
#include "os/logger.h"
#include <sstream>

namespace BeanRecomp
{
namespace PPC
{
    int InstructionTranslator::s_OptimizationLevel = 0;
    bool InstructionTranslator::s_DebugMode = false;
    std::unordered_map<uint32_t, std::string> InstructionTranslator::s_RegisterMap;

    bool InstructionTranslator::Initialize()
    {
        InitializeRegisterMap();
        return true;
    }

    void InstructionTranslator::Shutdown()
    {
        s_RegisterMap.clear();
    }

    void InstructionTranslator::InitializeRegisterMap()
    {
        // Map PPC GPRs to x86 registers
        // We'll use a simple mapping for now - can be optimized later
        for (uint32_t i = 0; i < 32; i++)
        {
            std::stringstream ss;
            if (i < 8) // Use callee-saved registers for first 8 GPRs
                ss << "r" << (i + 12); // r12-r19
            else if (i < 16) // Use caller-saved registers for next 8
                ss << "r" << (i - 8); // r0-r7
            else // Use remaining registers for the rest
                ss << "r" << (i - 8); // r8-r23
            s_RegisterMap[i] = ss.str();
        }
    }

    std::string InstructionTranslator::GetX86Register(uint32_t ppcReg)
    {
        auto it = s_RegisterMap.find(ppcReg);
        if (it != s_RegisterMap.end())
            return it->second;
        
        // Fallback to stack-based register
        std::stringstream ss;
        ss << "qword ptr [rsp + " << (ppcReg * 8) << "]";
        return ss.str();
    }

    bool InstructionTranslator::TranslateInstruction(const DisassembledInstruction& ppcInst,
                                                   TranslatedInstruction& result)
    {
        // Extract opcode from instruction
        uint32_t opcode = (ppcInst.instruction >> 26) & 0x3F;
        
        // Route to appropriate translation function based on opcode
        switch (opcode)
        {
            case 0x20: // lwz
            case 0x21: // lwzu
            case 0x22: // lbz
            case 0x23: // lbzu
            case 0x24: // stw
            case 0x25: // stwu
            case 0x26: // stb
            case 0x27: // stbu
                return TranslateLoadStore(ppcInst, result);
                
            case 0x1C: // addi
            case 0x1D: // addis
            case 0x1E: // subi
            case 0x1F: // subis
            case 0x28: // lhz
            case 0x29: // lhzu
            case 0x2A: // sth
            case 0x2B: // sthu
                return TranslateArithmetic(ppcInst, result);
                
            case 0x12: // b
            case 0x13: // bl
            case 0x14: // ba
            case 0x15: // bla
                return TranslateBranch(ppcInst, result);
                
            case 0x11: // sc
            case 0x12: // rfi
                return TranslateSystem(ppcInst, result);
                
            default:
                BeanRecomp::OS::Logger::LogError("Unsupported PPC opcode: 0x%02X", opcode);
                return false;
        }
    }

    bool InstructionTranslator::TranslateLoadStore(const DisassembledInstruction& ppcInst,
                                                 TranslatedInstruction& result)
    {
        uint32_t opcode = (ppcInst.instruction >> 26) & 0x3F;
        uint32_t rt = (ppcInst.instruction >> 21) & 0x1F;
        uint32_t ra = (ppcInst.instruction >> 16) & 0x1F;
        uint32_t d = ppcInst.instruction & 0xFFFF;
        
        std::string x86Reg = GetX86Register(rt);
        std::string baseReg = GetX86Register(ra);
        
        std::stringstream ss;
        switch (opcode)
        {
            case 0x20: // lwz
                ss << "mov " << x86Reg << ", dword ptr [" << baseReg;
                if (d != 0)
                    ss << " + " << d;
                ss << "]";
                break;
                
            case 0x24: // stw
                ss << "mov dword ptr [" << baseReg;
                if (d != 0)
                    ss << " + " << d;
                ss << "], " << x86Reg;
                break;
                
            default:
                BeanRecomp::OS::Logger::LogError("Unsupported load/store opcode: 0x%02X", opcode);
                return false;
        }
        
        GenerateX86Instruction(ss.str(), "", result);
        return true;
    }

    bool InstructionTranslator::TranslateArithmetic(const DisassembledInstruction& ppcInst,
                                                  TranslatedInstruction& result)
    {
        uint32_t opcode = (ppcInst.instruction >> 26) & 0x3F;
        uint32_t rt = (ppcInst.instruction >> 21) & 0x1F;
        uint32_t ra = (ppcInst.instruction >> 16) & 0x1F;
        uint32_t si = ppcInst.instruction & 0xFFFF;
        
        std::string x86Reg = GetX86Register(rt);
        std::string baseReg = GetX86Register(ra);
        
        std::stringstream ss;
        switch (opcode)
        {
            case 0x1C: // addi
                ss << "add " << x86Reg << ", " << si;
                break;
                
            case 0x1E: // subi
                ss << "sub " << x86Reg << ", " << si;
                break;
                
            default:
                BeanRecomp::OS::Logger::LogError("Unsupported arithmetic opcode: 0x%02X", opcode);
                return false;
        }
        
        GenerateX86Instruction(ss.str(), "", result);
        return true;
    }

    bool InstructionTranslator::TranslateBranch(const DisassembledInstruction& ppcInst,
                                              TranslatedInstruction& result)
    {
        uint32_t opcode = (ppcInst.instruction >> 26) & 0x3F;
        uint32_t li = ppcInst.instruction & 0x3FFFFFF;
        
        std::stringstream ss;
        switch (opcode)
        {
            case 0x12: // b
                ss << "jmp " << ppcInst.branchTarget;
                break;
                
            case 0x13: // bl
                ss << "call " << ppcInst.branchTarget;
                break;
                
            default:
                BeanRecomp::OS::Logger::LogError("Unsupported branch opcode: 0x%02X", opcode);
                return false;
        }
        
        GenerateX86Instruction(ss.str(), "", result);
        result.requiresRelocation = true;
        result.relocationTarget = ppcInst.branchTarget;
        return true;
    }

    bool InstructionTranslator::TranslateSystem(const DisassembledInstruction& ppcInst,
                                              TranslatedInstruction& result)
    {
        uint32_t opcode = (ppcInst.instruction >> 26) & 0x3F;
        
        std::stringstream ss;
        switch (opcode)
        {
            case 0x11: // sc (system call)
                ss << "syscall";
                break;
                
            case 0x12: // rfi (return from interrupt)
                ss << "iretq";
                break;
                
            default:
                BeanRecomp::OS::Logger::LogError("Unsupported system opcode: 0x%02X", opcode);
                return false;
        }
        
        GenerateX86Instruction(ss.str(), "", result);
        return true;
    }

    void InstructionTranslator::GenerateX86Instruction(const std::string& mnemonic,
                                                     const std::string& operands,
                                                     TranslatedInstruction& result)
    {
        // For now, we'll just store the instruction as a comment
        // In a real implementation, this would generate actual x86 machine code
        std::stringstream ss;
        ss << mnemonic;
        if (!operands.empty())
            ss << " " << operands;
        result.comment = ss.str();
    }

    void InstructionTranslator::GenerateRelocation(uint32_t target,
                                                 TranslatedInstruction& result)
    {
        result.requiresRelocation = true;
        result.relocationTarget = target;
    }
}
} 