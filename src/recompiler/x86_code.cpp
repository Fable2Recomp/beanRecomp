#include "x86_code.h"
#include "../os/logger.h"
#include <sstream>

namespace BeanRecomp
{
namespace Recompiler
{
    // X86Instruction implementation
    X86Instruction::X86Instruction(X86InstructionType type)
        : m_Type(type)
    {
    }

    X86Instruction::X86Instruction(X86InstructionType type, const X86Operand& dest)
        : m_Type(type)
        , m_Dest(dest)
    {
    }

    X86Instruction::X86Instruction(X86InstructionType type, const X86Operand& dest, const X86Operand& src)
        : m_Type(type)
        , m_Dest(dest)
        , m_Src(src)
    {
    }

    std::string X86Instruction::ToString() const
    {
        std::stringstream ss;

        // Convert instruction type to string
        switch (m_Type)
        {
            case X86InstructionType::MOV: ss << "mov"; break;
            case X86InstructionType::ADD: ss << "add"; break;
            case X86InstructionType::SUB: ss << "sub"; break;
            case X86InstructionType::MUL: ss << "mul"; break;
            case X86InstructionType::DIV: ss << "div"; break;
            case X86InstructionType::AND: ss << "and"; break;
            case X86InstructionType::OR: ss << "or"; break;
            case X86InstructionType::XOR: ss << "xor"; break;
            case X86InstructionType::SHL: ss << "shl"; break;
            case X86InstructionType::SHR: ss << "shr"; break;
            case X86InstructionType::SAR: ss << "sar"; break;
            case X86InstructionType::CMP: ss << "cmp"; break;
            case X86InstructionType::TEST: ss << "test"; break;
            case X86InstructionType::JMP: ss << "jmp"; break;
            case X86InstructionType::JE: ss << "je"; break;
            case X86InstructionType::JNE: ss << "jne"; break;
            case X86InstructionType::JG: ss << "jg"; break;
            case X86InstructionType::JGE: ss << "jge"; break;
            case X86InstructionType::JL: ss << "jl"; break;
            case X86InstructionType::JLE: ss << "jle"; break;
            case X86InstructionType::CALL: ss << "call"; break;
            case X86InstructionType::RET: ss << "ret"; break;
            case X86InstructionType::PUSH: ss << "push"; break;
            case X86InstructionType::POP: ss << "pop"; break;
            case X86InstructionType::LEA: ss << "lea"; break;
            case X86InstructionType::MOVSS: ss << "movss"; break;
            case X86InstructionType::MOVSD: ss << "movsd"; break;
            case X86InstructionType::ADDSS: ss << "addss"; break;
            case X86InstructionType::ADDSD: ss << "addsd"; break;
            case X86InstructionType::SUBSS: ss << "subss"; break;
            case X86InstructionType::SUBSD: ss << "subsd"; break;
            case X86InstructionType::MULSS: ss << "mulss"; break;
            case X86InstructionType::MULSD: ss << "mulsd"; break;
            case X86InstructionType::DIVSS: ss << "divss"; break;
            case X86InstructionType::DIVSD: ss << "divsd"; break;
            default: ss << "unknown"; break;
        }

        // Add destination operand if present
        if (m_Dest.type != X86OperandType::NONE)
        {
            ss << " ";
            switch (m_Dest.type)
            {
                case X86OperandType::REGISTER:
                    ss << GetRegisterName(m_Dest.reg);
                    break;
                case X86OperandType::IMMEDIATE:
                    ss << m_Dest.immediate;
                    break;
                case X86OperandType::MEMORY:
                    ss << "[" << GetRegisterName(m_Dest.memory.base);
                    if (m_Dest.memory.index != X86Register::ESP)
                        ss << " + " << GetRegisterName(m_Dest.memory.index) << "*" << m_Dest.memory.scale;
                    if (m_Dest.memory.displacement != 0)
                        ss << " + " << m_Dest.memory.displacement;
                    ss << "]";
                    break;
                case X86OperandType::LABEL:
                    ss << *m_Dest.label;
                    break;
                default:
                    break;
            }
        }

        // Add source operand if present
        if (m_Src.type != X86OperandType::NONE)
        {
            ss << ", ";
            switch (m_Src.type)
            {
                case X86OperandType::REGISTER:
                    ss << GetRegisterName(m_Src.reg);
                    break;
                case X86OperandType::IMMEDIATE:
                    ss << m_Src.immediate;
                    break;
                case X86OperandType::MEMORY:
                    ss << "[" << GetRegisterName(m_Src.memory.base);
                    if (m_Src.memory.index != X86Register::ESP)
                        ss << " + " << GetRegisterName(m_Src.memory.index) << "*" << m_Src.memory.scale;
                    if (m_Src.memory.displacement != 0)
                        ss << " + " << m_Src.memory.displacement;
                    ss << "]";
                    break;
                case X86OperandType::LABEL:
                    ss << *m_Src.label;
                    break;
                default:
                    break;
            }
        }

        return ss.str();
    }

    // X86Block implementation
    X86Block::X86Block(const std::string& label)
        : m_Label(label)
    {
    }

    X86Block::~X86Block()
    {
    }

    void X86Block::AddInstruction(const X86Instruction& inst)
    {
        m_Instructions.push_back(inst);
    }

    void X86Block::AddSuccessor(X86Block* block)
    {
        if (block && std::find(m_Successors.begin(), m_Successors.end(), block) == m_Successors.end())
            m_Successors.push_back(block);
    }

    void X86Block::AddPredecessor(X86Block* block)
    {
        if (block && std::find(m_Predecessors.begin(), m_Predecessors.end(), block) == m_Predecessors.end())
            m_Predecessors.push_back(block);
    }

    // X86Function implementation
    X86Function::X86Function(const std::string& name)
        : m_Name(name)
        , m_StackSize(0)
    {
    }

    X86Function::~X86Function()
    {
        for (auto block : m_Blocks)
            delete block;
    }

    void X86Function::AddBlock(X86Block* block)
    {
        if (block)
            m_Blocks.push_back(block);
    }

    // X86CodeGenerator implementation
    X86CodeGenerator::X86CodeGenerator()
    {
        // Initialize register allocation map
        for (int i = 0; i < 16; i++)
        {
            m_RegisterMap[static_cast<X86Register>(i)] = true; // All registers start as free
        }

        // Reserve system registers
        m_RegisterMap[X86Register::ESP] = false; // Stack pointer
        m_RegisterMap[X86Register::EBP] = false; // Base pointer
    }

    X86CodeGenerator::~X86CodeGenerator()
    {
        for (auto func : m_Functions)
            delete func;
    }

    X86Function* X86CodeGenerator::CreateFunction(const std::string& name)
    {
        auto func = new X86Function(name);
        m_Functions.push_back(func);
        return func;
    }

    X86Block* X86CodeGenerator::CreateBlock(const std::string& label)
    {
        return new X86Block(label);
    }

    X86Instruction X86CodeGenerator::CreateMove(X86Register dest, X86Register src)
    {
        return X86Instruction(X86InstructionType::MOV, X86Operand(dest), X86Operand(src));
    }

    X86Instruction X86CodeGenerator::CreateMove(X86Register dest, int64_t immediate)
    {
        return X86Instruction(X86InstructionType::MOV, X86Operand(dest), X86Operand(immediate));
    }

    X86Instruction X86CodeGenerator::CreateAdd(X86Register dest, X86Register src)
    {
        return X86Instruction(X86InstructionType::ADD, X86Operand(dest), X86Operand(src));
    }

    X86Instruction X86CodeGenerator::CreateAdd(X86Register dest, int64_t immediate)
    {
        return X86Instruction(X86InstructionType::ADD, X86Operand(dest), X86Operand(immediate));
    }

    X86Instruction X86CodeGenerator::CreateSub(X86Register dest, X86Register src)
    {
        return X86Instruction(X86InstructionType::SUB, X86Operand(dest), X86Operand(src));
    }

    X86Instruction X86CodeGenerator::CreateSub(X86Register dest, int64_t immediate)
    {
        return X86Instruction(X86InstructionType::SUB, X86Operand(dest), X86Operand(immediate));
    }

    X86Instruction X86CodeGenerator::CreateMul(X86Register dest, X86Register src)
    {
        return X86Instruction(X86InstructionType::MUL, X86Operand(dest), X86Operand(src));
    }

    X86Instruction X86CodeGenerator::CreateDiv(X86Register dest, X86Register src)
    {
        return X86Instruction(X86InstructionType::DIV, X86Operand(dest), X86Operand(src));
    }

    X86Instruction X86CodeGenerator::CreateJump(const std::string& label)
    {
        return X86Instruction(X86InstructionType::JMP, X86Operand(label));
    }

    X86Instruction X86CodeGenerator::CreateCall(const std::string& label)
    {
        return X86Instruction(X86InstructionType::CALL, X86Operand(label));
    }

    X86Instruction X86CodeGenerator::CreateReturn()
    {
        return X86Instruction(X86InstructionType::RET);
    }

    X86Instruction X86CodeGenerator::CreateAnd(X86Register dest, X86Register src)
    {
        return X86Instruction(X86InstructionType::AND, X86Operand(dest), X86Operand(src));
    }

    X86Instruction X86CodeGenerator::CreateAnd(X86Register dest, int64_t immediate)
    {
        return X86Instruction(X86InstructionType::AND, X86Operand(dest), X86Operand(immediate));
    }

    X86Instruction X86CodeGenerator::CreateOr(X86Register dest, X86Register src)
    {
        return X86Instruction(X86InstructionType::OR, X86Operand(dest), X86Operand(src));
    }

    X86Instruction X86CodeGenerator::CreateOr(X86Register dest, int64_t immediate)
    {
        return X86Instruction(X86InstructionType::OR, X86Operand(dest), X86Operand(immediate));
    }

    X86Instruction X86CodeGenerator::CreateXor(X86Register dest, X86Register src)
    {
        return X86Instruction(X86InstructionType::XOR, X86Operand(dest), X86Operand(src));
    }

    X86Instruction X86CodeGenerator::CreateXor(X86Register dest, int64_t immediate)
    {
        return X86Instruction(X86InstructionType::XOR, X86Operand(dest), X86Operand(immediate));
    }

    X86Instruction X86CodeGenerator::CreateCmp(X86Register left, X86Register right)
    {
        return X86Instruction(X86InstructionType::CMP, X86Operand(left), X86Operand(right));
    }

    X86Instruction X86CodeGenerator::CreateCmp(X86Register left, int64_t immediate)
    {
        return X86Instruction(X86InstructionType::CMP, X86Operand(left), X86Operand(immediate));
    }

    X86Instruction X86CodeGenerator::CreateTest(X86Register reg, X86Register reg2)
    {
        return X86Instruction(X86InstructionType::TEST, X86Operand(reg), X86Operand(reg2));
    }

    X86Instruction X86CodeGenerator::CreateTest(X86Register reg, int64_t immediate)
    {
        return X86Instruction(X86InstructionType::TEST, X86Operand(reg), X86Operand(immediate));
    }

    X86Instruction X86CodeGenerator::CreateJumpZero(const std::string& label)
    {
        return X86Instruction(X86InstructionType::JE, X86Operand(label));
    }

    X86Instruction X86CodeGenerator::CreateJumpNotZero(const std::string& label)
    {
        return X86Instruction(X86InstructionType::JNE, X86Operand(label));
    }

    X86Instruction X86CodeGenerator::CreateJumpRegister(X86Register reg)
    {
        return X86Instruction(X86InstructionType::JMP, X86Operand(reg));
    }

    X86Instruction X86CodeGenerator::CreatePush(X86Register reg)
    {
        return X86Instruction(X86InstructionType::PUSH, X86Operand(reg));
    }

    X86Instruction X86CodeGenerator::CreatePop(X86Register reg)
    {
        return X86Instruction(X86InstructionType::POP, X86Operand(reg));
    }

    X86Register X86CodeGenerator::AllocateRegister()
    {
        // Find first free register
        for (const auto& pair : m_RegisterMap)
        {
            if (pair.second)
            {
                m_RegisterMap[pair.first] = false; // Mark as used
                return pair.first;
            }
        }

        Logger::Error("No free registers available");
        throw std::runtime_error("Register allocation failed");
    }

    void X86CodeGenerator::FreeRegister(X86Register reg)
    {
        if (reg != X86Register::ESP && reg != X86Register::EBP)
            m_RegisterMap[reg] = true;
    }

    bool X86CodeGenerator::IsRegisterFree(X86Register reg) const
    {
        auto it = m_RegisterMap.find(reg);
        return it != m_RegisterMap.end() && it->second;
    }

    // Helper function to convert register enum to string
    static std::string GetRegisterName(X86Register reg)
    {
        switch (reg)
        {
            case X86Register::EAX: return "eax";
            case X86Register::EBX: return "ebx";
            case X86Register::ECX: return "ecx";
            case X86Register::EDX: return "edx";
            case X86Register::ESI: return "esi";
            case X86Register::EDI: return "edi";
            case X86Register::ESP: return "esp";
            case X86Register::EBP: return "ebp";
            case X86Register::R8D: return "r8d";
            case X86Register::R9D: return "r9d";
            case X86Register::R10D: return "r10d";
            case X86Register::R11D: return "r11d";
            case X86Register::R12D: return "r12d";
            case X86Register::R13D: return "r13d";
            case X86Register::R14D: return "r14d";
            case X86Register::R15D: return "r15d";
            case X86Register::XMM0: return "xmm0";
            case X86Register::XMM1: return "xmm1";
            case X86Register::XMM2: return "xmm2";
            case X86Register::XMM3: return "xmm3";
            case X86Register::XMM4: return "xmm4";
            case X86Register::XMM5: return "xmm5";
            case X86Register::XMM6: return "xmm6";
            case X86Register::XMM7: return "xmm7";
            case X86Register::XMM8: return "xmm8";
            case X86Register::XMM9: return "xmm9";
            case X86Register::XMM10: return "xmm10";
            case X86Register::XMM11: return "xmm11";
            case X86Register::XMM12: return "xmm12";
            case X86Register::XMM13: return "xmm13";
            case X86Register::XMM14: return "xmm14";
            case X86Register::XMM15: return "xmm15";
            default: return "unknown";
        }
    }

} // namespace Recompiler
} // namespace BeanRecomp 