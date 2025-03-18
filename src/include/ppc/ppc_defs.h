#pragma once
#include <cstdint>
#include "ppc_types.h"

// Forward declarations
struct PPCContext;
extern PPCContext g_PPCContext;

// Function type for PPC recompiled functions
using PPCFunc = void (*)(PPCContext* ctx, uintptr_t base);

// Function macros for recompiled code
#define PPC_FUNC_PROLOGUE() \
    if (!context) return; \
    PPCContext& ctx = *context

#define PPC_FUNC_IMPL(name) void name(PPCContext* context, uintptr_t base)
#define PPC_WEAK_FUNC(name) void name(PPCContext* context, uintptr_t base)

// Register class with proper operators
class PPCRegister {
public:
    union {
        uint64_t u64;
        int64_t s64;
        uint32_t u32;
        int32_t s32;
        float f32;
        double f64;
    };

    PPCRegister() : u64(0) {}
    
    PPCRegister& operator=(uint64_t val) { u64 = val; return *this; }
    PPCRegister& operator=(int64_t val) { s64 = val; return *this; }
    PPCRegister& operator=(uint32_t val) { u64 = val; return *this; }
    PPCRegister& operator=(int32_t val) { s64 = val; return *this; }
    
    void disableFlushMode() {} // Stub for now
};

// Condition register field class
class PPCConditionField {
private:
    bool lt{}, gt{}, eq{}, so{};
    
public:
    bool getLT() const { return lt; }
    bool getGT() const { return gt; }
    bool getEQ() const { return eq; }
    bool getSO() const { return so; }
    
    template<typename T>
    void compare(T a, T b, uint32_t xer = 0) {
        lt = a < b;
        gt = a > b;
        eq = a == b;
        so = (xer & 0x80000000) != 0;
    }
};

// Main PPC context structure
struct PPCContext {
    // General purpose registers
    PPCRegister r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12;
    PPCRegister r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23;
    PPCRegister r24, r25, r26, r27, r28, r29, r30, r31;
    
    // Special registers
    PPCRegister lr;    // Link Register
    PPCRegister ctr;   // Count Register
    uint32_t xer{};    // XER Register
    
    // Condition register fields
    PPCConditionField cr0, cr1, cr2, cr3, cr4, cr5, cr6, cr7;
    
    // Floating point registers
    PPCRegister f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13;
    PPCRegister f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24;
    PPCRegister f25, f26, f27, f28, f29, f30, f31;
}; 