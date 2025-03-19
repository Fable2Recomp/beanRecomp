#pragma once

#include <vector>
#include <string>
#include <memory>
#include <unordered_map>

namespace BeanRecomp
{
namespace Recompiler
{
    // Forward declarations
    class X86Instruction;
    class X86Block;
    class X86Function;

    // X86 register enumeration
    enum class X86Register
    {
        EAX, EBX, ECX, EDX,
        ESI, EDI, ESP, EBP,
        R8D, R9D, R10D, R11D,
        R12D, R13D, R14D, R15D,
        XMM0, XMM1, XMM2, XMM3,
        XMM4, XMM5, XMM6, XMM7,
        XMM8, XMM9, XMM10, XMM11,
        XMM12, XMM13, XMM14, XMM15
    };

    // X86 instruction types
    enum class X86InstructionType
    {
        MOV,    // Move
        ADD,    // Add
        SUB,    // Subtract
        MUL,    // Multiply
        DIV,    // Divide
        AND,    // Logical AND
        OR,     // Logical OR
        XOR,    // Logical XOR
        SHL,    // Shift left
        SHR,    // Shift right
        SAR,    // Arithmetic shift right
        CMP,    // Compare
        TEST,   // Test
        JMP,    // Jump
        JE,     // Jump if equal
        JNE,    // Jump if not equal
        JG,     // Jump if greater
        JGE,    // Jump if greater or equal
        JL,     // Jump if less
        JLE,    // Jump if less or equal
        CALL,   // Call
        RET,    // Return
        PUSH,   // Push to stack
        POP,    // Pop from stack
        LEA,    // Load effective address
        MOVSS,  // Move scalar single-precision
        MOVSD,  // Move scalar double-precision
        ADDSS,  // Add scalar single-precision
        ADDSD,  // Add scalar double-precision
        SUBSS,  // Subtract scalar single-precision
        SUBSD,  // Subtract scalar double-precision
        MULSS,  // Multiply scalar single-precision
        MULSD,  // Multiply scalar double-precision
        DIVSS,  // Divide scalar single-precision
        DIVSD   // Divide scalar double-precision
    };

    // X86 operand types
    enum class X86OperandType
    {
        NONE,
        REGISTER,
        IMMEDIATE,
        MEMORY,
        LABEL
    };

    // X86 operand class
    struct X86Operand
    {
        X86OperandType type;
        union
        {
            X86Register reg;
            int64_t immediate;
            struct
            {
                X86Register base;
                X86Register index;
                int32_t scale;
                int32_t displacement;
            } memory;
            std::string* label;
        };

        X86Operand() : type(X86OperandType::NONE) {}
        explicit X86Operand(X86Register r) : type(X86OperandType::REGISTER), reg(r) {}
        explicit X86Operand(int64_t imm) : type(X86OperandType::IMMEDIATE), immediate(imm) {}
        explicit X86Operand(const std::string& l) : type(X86OperandType::LABEL), label(new std::string(l)) {}
    };

    // X86 instruction class
    class X86Instruction
    {
    public:
        X86Instruction(X86InstructionType type);
        X86Instruction(X86InstructionType type, const X86Operand& dest);
        X86Instruction(X86InstructionType type, const X86Operand& dest, const X86Operand& src);

        X86InstructionType GetType() const { return m_Type; }
        const X86Operand& GetDest() const { return m_Dest; }
        const X86Operand& GetSrc() const { return m_Src; }
        
        std::string ToString() const;

    private:
        X86InstructionType m_Type;
        X86Operand m_Dest;
        X86Operand m_Src;
    };

    // X86 basic block class
    class X86Block
    {
    public:
        X86Block(const std::string& label);
        ~X86Block();

        void AddInstruction(const X86Instruction& inst);
        const std::vector<X86Instruction>& GetInstructions() const { return m_Instructions; }
        const std::string& GetLabel() const { return m_Label; }
        
        void AddSuccessor(X86Block* block);
        void AddPredecessor(X86Block* block);
        const std::vector<X86Block*>& GetSuccessors() const { return m_Successors; }
        const std::vector<X86Block*>& GetPredecessors() const { return m_Predecessors; }

    private:
        std::string m_Label;
        std::vector<X86Instruction> m_Instructions;
        std::vector<X86Block*> m_Successors;
        std::vector<X86Block*> m_Predecessors;
    };

    // X86 function class
    class X86Function
    {
    public:
        X86Function(const std::string& name);
        ~X86Function();

        void AddBlock(X86Block* block);
        const std::vector<X86Block*>& GetBlocks() const { return m_Blocks; }
        const std::string& GetName() const { return m_Name; }
        
        void SetStackSize(uint32_t size) { m_StackSize = size; }
        uint32_t GetStackSize() const { return m_StackSize; }

    private:
        std::string m_Name;
        std::vector<X86Block*> m_Blocks;
        uint32_t m_StackSize;
    };

    // X86 code generator class
    class X86CodeGenerator
    {
    public:
        X86CodeGenerator();
        ~X86CodeGenerator();

        // Code generation
        X86Function* CreateFunction(const std::string& name);
        X86Block* CreateBlock(const std::string& label);
        
        // Instruction generation helpers
        X86Instruction CreateMove(X86Register dest, X86Register src);
        X86Instruction CreateMove(X86Register dest, int64_t immediate);
        X86Instruction CreateAdd(X86Register dest, X86Register src);
        X86Instruction CreateAdd(X86Register dest, int64_t immediate);
        X86Instruction CreateSub(X86Register dest, X86Register src);
        X86Instruction CreateSub(X86Register dest, int64_t immediate);
        X86Instruction CreateMul(X86Register dest, X86Register src);
        X86Instruction CreateDiv(X86Register dest, X86Register src);
        X86Instruction CreateAnd(X86Register dest, X86Register src);
        X86Instruction CreateAnd(X86Register dest, int64_t immediate);
        X86Instruction CreateOr(X86Register dest, X86Register src);
        X86Instruction CreateOr(X86Register dest, int64_t immediate);
        X86Instruction CreateXor(X86Register dest, X86Register src);
        X86Instruction CreateXor(X86Register dest, int64_t immediate);
        X86Instruction CreateCmp(X86Register left, X86Register right);
        X86Instruction CreateCmp(X86Register left, int64_t immediate);
        X86Instruction CreateTest(X86Register reg, X86Register reg2);
        X86Instruction CreateTest(X86Register reg, int64_t immediate);
        X86Instruction CreateJump(const std::string& label);
        X86Instruction CreateJumpZero(const std::string& label);
        X86Instruction CreateJumpNotZero(const std::string& label);
        X86Instruction CreateJumpRegister(X86Register reg);
        X86Instruction CreateCall(const std::string& label);
        X86Instruction CreateReturn();
        X86Instruction CreatePush(X86Register reg);
        X86Instruction CreatePop(X86Register reg);

        // Register allocation
        X86Register AllocateRegister();
        void FreeRegister(X86Register reg);
        bool IsRegisterFree(X86Register reg) const;

    private:
        std::vector<X86Function*> m_Functions;
        std::unordered_map<X86Register, bool> m_RegisterMap;
    };

} // namespace Recompiler
} // namespace BeanRecomp 