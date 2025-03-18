#pragma once
#include <cstdint>
#include <array>
#include <cstring> // For memset
#include "ppc_register.h" // Include the PPCRegister definition

// Forward declarations
struct PPCContext;
struct PPCXERRegister;

// Global instance of PPCContext
extern PPCContext g_PPCContext;

// Helper functions for register access
PPCRegister* get_register_ptr(PPCContext* context, uint32_t reg);

// Memory access helper
void* GetMemoryPointer(uint32_t address);

// CR register structure
struct PPCCRRegister {
    uint32_t value;
    
    PPCCRRegister() : value(0) {}
    PPCCRRegister(uint32_t val) : value(val) {}
    
    // CR bit access - return bool values
    bool lt() const { return (value & 0x8) != 0; }
    bool gt() const { return (value & 0x4) != 0; }
    bool eq() const { return (value & 0x2) != 0; }
    bool so() const { return (value & 0x1) != 0; }
    
    // Legacy method names for compatibility
    bool getLT() const { return lt(); }
    bool getGT() const { return gt(); }
    bool getEQ() const { return eq(); }
    bool getSO() const { return so(); }
    
    // Set CR bits
    void set_lt(bool v) { value = (value & ~0x8) | (v ? 0x8 : 0); }
    void set_gt(bool v) { value = (value & ~0x4) | (v ? 0x4 : 0); }
    void set_eq(bool v) { value = (value & ~0x2) | (v ? 0x2 : 0); }
    void set_so(bool v) { value = (value & ~0x1) | (v ? 0x1 : 0); }
    
    // Compare operations with explicit types
    void compare_u32(uint32_t a, uint32_t b, uint32_t xer = 0) {
        set_lt(a < b);
        set_gt(a > b);
        set_eq(a == b);
        set_so((xer & 0x80000000) != 0);
    }
    
    void compare_u64(uint64_t a, uint64_t b, uint32_t xer = 0) {
        set_lt(a < b);
        set_gt(a > b);
        set_eq(a == b);
        set_so((xer & 0x80000000) != 0);
    }
    
    void compare_s32(int32_t a, int32_t b, uint32_t xer = 0) {
        set_lt(a < b);
        set_gt(a > b);
        set_eq(a == b);
        set_so((xer & 0x80000000) != 0);
    }
    
    void compare_s64(int64_t a, int64_t b, uint32_t xer = 0) {
        set_lt(a < b);
        set_gt(a > b);
        set_eq(a == b);
        set_so((xer & 0x80000000) != 0);
    }
    
    void compare_f32(float a, float b, uint32_t xer = 0) {
        set_lt(a < b);
        set_gt(a > b);
        set_eq(a == b);
        set_so((xer & 0x80000000) != 0);
    }
    
    void compare_f64(double a, double b, uint32_t xer = 0) {
        set_lt(a < b);
        set_gt(a > b);
        set_eq(a == b);
        set_so((xer & 0x80000000) != 0);
    }
    
    // Template version for backward compatibility
    template<typename T>
    void compare(T a, T b, uint32_t xer = 0) {
        if constexpr (std::is_same_v<T, uint32_t>) compare_u32(a, b, xer);
        else if constexpr (std::is_same_v<T, uint64_t>) compare_u64(a, b, xer);
        else if constexpr (std::is_same_v<T, int32_t>) compare_s32(a, b, xer);
        else if constexpr (std::is_same_v<T, int64_t>) compare_s64(a, b, xer);
        else if constexpr (std::is_same_v<T, float>) compare_f32(a, b, xer);
        else if constexpr (std::is_same_v<T, double>) compare_f64(a, b, xer);
        else {
            // Default comparison for other types
            set_lt(a < b);
            set_gt(a > b);
            set_eq(a == b);
            set_so((xer & 0x80000000) != 0);
        }
    }
    
    // Operator overloads for type conversion
    operator uint32_t() const { return value; }
    
    // Logical operations
    bool operator!() const { return value == 0; }
    bool operator&&(const PPCCRRegister& other) const { return value && other.value; }
    bool operator||(const PPCCRRegister& other) const { return value || other.value; }
};

// XER register structure
struct PPCXERRegister {
    uint32_t value;
    
    PPCXERRegister() : value(0) {}
    PPCXERRegister(uint32_t val) : value(val) {}
    
    // XER field access
    uint32_t so() const { return (value >> 31) & 1; }
    uint32_t ov() const { return (value >> 30) & 1; }
    uint32_t ca() const { return (value >> 29) & 1; }
    uint32_t byte_count() const { return value & 0x7F; }
    
    // Set XER fields
    void set_so(uint32_t v) { value = (value & ~(1 << 31)) | ((v & 1) << 31); }
    void set_ov(uint32_t v) { value = (value & ~(1 << 30)) | ((v & 1) << 30); }
    void set_ca(uint32_t v) { value = (value & ~(1 << 29)) | ((v & 1) << 29); }
    void set_byte_count(uint32_t v) { value = (value & ~0x7F) | (v & 0x7F); }
    
    // Operator overloads for type conversion
    operator uint32_t() const { return value; }
};

// PowerPC context structure
struct PPCContext {
    // General purpose registers
    PPCRegister r0, r1, r2, r3, r4, r5, r6, r7;
    PPCRegister r8, r9, r10, r11, r12, r13, r14, r15;
    PPCRegister r16, r17, r18, r19, r20, r21, r22, r23;
    PPCRegister r24, r25, r26, r27, r28, r29, r30, r31;
    
    // Floating point registers
    PPCRegister f0, f1, f2, f3, f4, f5, f6, f7;
    PPCRegister f8, f9, f10, f11, f12, f13, f14, f15;
    PPCRegister f16, f17, f18, f19, f20, f21, f22, f23;
    PPCRegister f24, f25, f26, f27, f28, f29, f30, f31;
    
    // Condition registers
    PPCCRRegister cr[8];
    
    // Special registers
    PPCRegister lr;
    PPCRegister ctr;
    PPCRegister fpscr;
    PPCXERRegister xer;
    
    // Memory base address
    uint32_t mem_base;
    
    // Initialize context
    void init() {
        memset(this, 0, sizeof(PPCContext));
    }

    // Helper methods for register access in recompiled code
    uint8_t PPCRegister_u8(int reg) {
        // Map register number to the actual register
        PPCRegister* regs[] = {
            &r0, &r1, &r2, &r3, &r4, &r5, &r6, &r7,
            &r8, &r9, &r10, &r11, &r12, &r13, &r14, &r15,
            &r16, &r17, &r18, &r19, &r20, &r21, &r22, &r23,
            &r24, &r25, &r26, &r27, &r28, &r29, &r30, &r31
        };
        return regs[reg]->u8;
    }

    uint16_t PPCRegister_u16(int reg) {
        PPCRegister* regs[] = {
            &r0, &r1, &r2, &r3, &r4, &r5, &r6, &r7,
            &r8, &r9, &r10, &r11, &r12, &r13, &r14, &r15,
            &r16, &r17, &r18, &r19, &r20, &r21, &r22, &r23,
            &r24, &r25, &r26, &r27, &r28, &r29, &r30, &r31
        };
        return regs[reg]->u16;
    }

    uint32_t PPCRegister_u32(int reg) {
        PPCRegister* regs[] = {
            &r0, &r1, &r2, &r3, &r4, &r5, &r6, &r7,
            &r8, &r9, &r10, &r11, &r12, &r13, &r14, &r15,
            &r16, &r17, &r18, &r19, &r20, &r21, &r22, &r23,
            &r24, &r25, &r26, &r27, &r28, &r29, &r30, &r31
        };
        return regs[reg]->u32;
    }

    uint64_t PPCRegister_u64(int reg) {
        PPCRegister* regs[] = {
            &r0, &r1, &r2, &r3, &r4, &r5, &r6, &r7,
            &r8, &r9, &r10, &r11, &r12, &r13, &r14, &r15,
            &r16, &r17, &r18, &r19, &r20, &r21, &r22, &r23,
            &r24, &r25, &r26, &r27, &r28, &r29, &r30, &r31
        };
        return regs[reg]->u64;
    }

    int8_t PPCRegister_s8(int reg) {
        PPCRegister* regs[] = {
            &r0, &r1, &r2, &r3, &r4, &r5, &r6, &r7,
            &r8, &r9, &r10, &r11, &r12, &r13, &r14, &r15,
            &r16, &r17, &r18, &r19, &r20, &r21, &r22, &r23,
            &r24, &r25, &r26, &r27, &r28, &r29, &r30, &r31
        };
        return regs[reg]->s8;
    }

    int16_t PPCRegister_s16(int reg) {
        PPCRegister* regs[] = {
            &r0, &r1, &r2, &r3, &r4, &r5, &r6, &r7,
            &r8, &r9, &r10, &r11, &r12, &r13, &r14, &r15,
            &r16, &r17, &r18, &r19, &r20, &r21, &r22, &r23,
            &r24, &r25, &r26, &r27, &r28, &r29, &r30, &r31
        };
        return regs[reg]->s16;
    }

    int32_t PPCRegister_s32(int reg) {
        PPCRegister* regs[] = {
            &r0, &r1, &r2, &r3, &r4, &r5, &r6, &r7,
            &r8, &r9, &r10, &r11, &r12, &r13, &r14, &r15,
            &r16, &r17, &r18, &r19, &r20, &r21, &r22, &r23,
            &r24, &r25, &r26, &r27, &r28, &r29, &r30, &r31
        };
        return regs[reg]->s32;
    }

    int64_t PPCRegister_s64(int reg) {
        PPCRegister* regs[] = {
            &r0, &r1, &r2, &r3, &r4, &r5, &r6, &r7,
            &r8, &r9, &r10, &r11, &r12, &r13, &r14, &r15,
            &r16, &r17, &r18, &r19, &r20, &r21, &r22, &r23,
            &r24, &r25, &r26, &r27, &r28, &r29, &r30, &r31
        };
        return regs[reg]->s64;
    }

    // Array access for registers
    PPCRegister* regs[32] = {
        &r0, &r1, &r2, &r3, &r4, &r5, &r6, &r7,
        &r8, &r9, &r10, &r11, &r12, &r13, &r14, &r15,
        &r16, &r17, &r18, &r19, &r20, &r21, &r22, &r23,
        &r24, &r25, &r26, &r27, &r28, &r29, &r30, &r31
    };
};

// Implementation of get_register_ptr
inline PPCRegister* get_register_ptr(PPCContext* context, uint32_t reg) {
    switch (reg) {
        case 0: return &context->r0;
        case 1: return &context->r1;
        case 2: return &context->r2;
        case 3: return &context->r3;
        case 4: return &context->r4;
        case 5: return &context->r5;
        case 6: return &context->r6;
        case 7: return &context->r7;
        case 8: return &context->r8;
        case 9: return &context->r9;
        case 10: return &context->r10;
        case 11: return &context->r11;
        case 12: return &context->r12;
        case 13: return &context->r13;
        case 14: return &context->r14;
        case 15: return &context->r15;
        case 16: return &context->r16;
        case 17: return &context->r17;
        case 18: return &context->r18;
        case 19: return &context->r19;
        case 20: return &context->r20;
        case 21: return &context->r21;
        case 22: return &context->r22;
        case 23: return &context->r23;
        case 24: return &context->r24;
        case 25: return &context->r25;
        case 26: return &context->r26;
        case 27: return &context->r27;
        case 28: return &context->r28;
        case 29: return &context->r29;
        case 30: return &context->r30;
        case 31: return &context->r31;
        default: return nullptr;
    }
}
