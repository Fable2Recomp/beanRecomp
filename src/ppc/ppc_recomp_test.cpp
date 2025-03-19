#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_macros.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "ppc/ppc_context.h"
#include "ppc/ppc_memory.h"
#include "ppc/ppc_types.h"
#include <cstdio>

// Test function for adding registers and comparing
void sub_82090000(PPCContext* ctx) {
    PPCXERRegister xer{};
    
    // Add ctx_arrow(ctx)->r3 and ctx_arrow(ctx)->r4, store in ctx_arrow(ctx)->r5
    ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r3.s64 + ctx_arrow(ctx)->r4.s64;
    
    // Compare ctx_arrow(ctx)->r5 with ctx_arrow(ctx)->r3
    ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r5.s64, ctx_arrow(ctx)->r3.s64, xer);
    
    // Store result based on comparison
    if (ctx_arrow(ctx)->r6.gt()) {
        PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 0, 1);
    } else {
        PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 0, 0);
    }
    
    // Store the original value in memory
    PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 4, ctx_arrow(ctx)->r4.u32);
}

// Test function for multiplying registers and comparing
void sub_82090010(PPCContext* ctx, uint32_t) {
    PPCXERRegister xer{};
    
    // Multiply ctx_arrow(ctx)->r3 and ctx_arrow(ctx)->r4, store in ctx_arrow(ctx)->r5
    ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r3.s64 * ctx_arrow(ctx)->r4.s64;
    
    // Compare ctx_arrow(ctx)->r5 with ctx_arrow(ctx)->r4
    ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r5.s64, ctx_arrow(ctx)->r4.s64, xer);
    
    // Store result based on comparison
    if (ctx_arrow(ctx)->r6.lt()) {
        PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 4, 1);
    } else {
        PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 4, 0);
    }
}

// Test function for incrementing registers and comparing
void sub_82090020(PPCContext* ctx, uint32_t) {
    PPCXERRegister xer{};
    
    // Save original ctx_arrow(ctx)->r3 value
    uint64_t orig_r3 = ctx_arrow(ctx)->r3.s64;
    
    // Increment ctx_arrow(ctx)->r3
    ctx_arrow(ctx)->r3.s64++;
    
    // Compare new ctx_arrow(ctx)->r3 with original value
    ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r3.s64, orig_r3, xer);
    
    // Store result based on comparison
    if (ctx_arrow(ctx)->r6.gt()) {
        PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 8, 1);
    } else {
        PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 8, 0);
    }
    
    // Store the original and new values
    PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 12, orig_r3);
    PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 16, ctx_arrow(ctx)->r3.u32);
}

// Test function for memory operations
void sub_82090030(PPCContext* ctx) {
    // Load values from memory
    uint32_t val1 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32 + 0);
    uint32_t val2 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32 + 4);
    uint64_t val3 = PPC_Read_U64(ctx, ctx_arrow(ctx)->r1.u32 + 8);
    
    // Store values to registers
    ctx_arrow(ctx)->r3.u32 = val1;
    ctx_arrow(ctx)->r4.u32 = val2;
    ctx_arrow(ctx)->r5.u64 = val3;
    
    // Store values back to memory
    PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 20, val1 & 0xFF);
    PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 24, val2);
    PPC_Write_U64(ctx, ctx_arrow(ctx)->r1.u32 + 28, val3);
}

// Test function for register operations
void sub_82090040(PPCContext* ctx) {
    PPCXERRegister xer{};
    
    // Load values from memory
    uint32_t val1 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32 + 0);
    uint32_t val2 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32 + 4);
    
    // Perform operations
    ctx_arrow(ctx)->r3.u32 = val1;
    
    // Store results based on comparison
    ctx_arrow(ctx)->r6.compare<uint32_t>(val1, val2, xer);
    
    if (ctx_arrow(ctx)->r6.gt()) {
        PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 8, 1);
    } else {
        PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 8, 0);
    }
    
    PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 12, val1);
    PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 16, val2);
}

// Test function for floating point operations
void sub_82090050(PPCContext* ctx) {
    // Load values from memory
    uint32_t addr = ctx_arrow(ctx)->r1.u32;
    uint32_t val1 = PPC_Read_U32(ctx, addr);
    uint32_t val2 = PPC_Read_U32(ctx, addr + 4);
    
    // Store to floating point registers
    ctx_arrow(ctx)->f1.f32 = *(float*)&val1;
    ctx_arrow(ctx)->f2.f32 = *(float*)&val2;
    
    // Perform operation
    ctx_arrow(ctx)->f3.f32 = ctx_arrow(ctx)->f1.f32 + ctx_arrow(ctx)->f2.f32;
    
    // Store result
    PPC_Write_U32(ctx, addr + 8, *(uint32_t*)&ctx_arrow(ctx)->f3.f32);
}

// Test function for complex operations
void sub_82090060(PPCContext* ctx) {
    // Initialize registers
    ctx_arrow(ctx)->r3.u32 = 0;
    ctx_arrow(ctx)->r4.u32 = 10;
    ctx_arrow(ctx)->r5.u32 = 0;
    
    // Loop to accumulate values
    for (int i = 0; i < ctx_arrow(ctx)->r4.u32; i++) {
        ctx_arrow(ctx)->r5.u32 += i;
        ctx_arrow(ctx)->r3.u32++;
    }
    
    // Store results
    PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 0, ctx_arrow(ctx)->r3.u32);
    PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 4, ctx_arrow(ctx)->r5.u32);
}

#ifdef _MSC_VER
// For MSVC, implement the function directly
void sub_82090050(PPCContext* ctx, uint32_t addr) {
    sub_82090000(ctx);
}
#else
// For non-MSVC, use weak alias
__attribute__((weak, alias("sub_82090000"))) void sub_82090050(PPCContext*, uint32_t);
#endif

// Test function for checking condition register bits
void __imp__sub_820901B0(PPCContext* ctx) {
    printf("Executing sub_820901B0\n");
    if (ctx_arrow(ctx)->r6.eq()) {
        ctx_arrow(ctx)->r3.u32 = 1;
    } else if (ctx_arrow(ctx)->r6.lt()) {
        ctx_arrow(ctx)->r3.u32 = 2;
    } else if (ctx_arrow(ctx)->r6.gt()) {
        ctx_arrow(ctx)->r3.u32 = 3;
    }
}

// Weak alias for sub_820901B0
#ifdef _MSC_VER
void sub_820901B0(PPCContext* ctx) {
    __imp__sub_820901B0(ctx);
}
#else
void sub_820901B0(PPCContext*) __attribute__((weak, alias("__imp__sub_820901B0")));
#endif

// Test function for loading and storing memory with different sizes
void __imp__sub_820901E0(PPCContext* ctx) {
    printf("Executing sub_820901E0\n");
    uint32_t addr = ctx_arrow(ctx)->r3.u32;
    uint8_t val8 = PPC_Read_U8(ctx, addr);
    uint32_t val32 = PPC_Read_U32(ctx, addr + 1);
    uint64_t val64 = PPC_Read_U64(ctx, addr + 5);
    ctx_arrow(ctx)->r4.u32 = val8;
    ctx_arrow(ctx)->r5.u32 = val32;
    ctx_arrow(ctx)->r6.u64 = val64;
    PPC_Write_U8(ctx, addr + 13, val8);
    PPC_Write_U32(ctx, addr + 14, val32);
    PPC_Write_U64(ctx, addr + 18, val64);
}

// Test function for comparing registers with XER
void __imp__sub_820901F0(PPCContext* ctx) {
    printf("Executing sub_820901F0\n");
    ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->xer.value);
    ctx_arrow(ctx)->r7.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->xer.value);
}

// Weak alias for sub_820901F0
#ifdef _MSC_VER
void sub_820901F0(PPCContext* ctx) {
    __imp__sub_820901F0(ctx);
}
#else
void sub_820901F0(PPCContext*) __attribute__((weak, alias("__imp__sub_820901F0")));
#endif

// Test function for checking multiple condition register fields
void __imp__sub_82090200(PPCContext* ctx) {
    printf("Executing sub_82090200\n");
    if (ctx_arrow(ctx)->r6.eq() && ctx_arrow(ctx)->r7.eq()) {
        ctx_arrow(ctx)->r3.u32 = 1;
    } else if (ctx_arrow(ctx)->r6.lt() || ctx_arrow(ctx)->r7.lt()) {
        ctx_arrow(ctx)->r3.u32 = 2;
    } else if (ctx_arrow(ctx)->r6.gt() && ctx_arrow(ctx)->r7.gt()) {
        ctx_arrow(ctx)->r3.u32 = 3;
    }
}

// Weak alias for sub_82090200
#ifdef _MSC_VER
void sub_82090200(PPCContext* ctx) {
    __imp__sub_82090200(ctx);
}
#else
void sub_82090200(PPCContext*) __attribute__((weak, alias("__imp__sub_82090200")));
#endif

// Test function for complex memory operations
void __imp__sub_82090210(PPCContext* ctx) {
    printf("Executing sub_82090210\n");
    uint32_t addr = ctx_arrow(ctx)->r3.u32;
    uint32_t val1 = PPC_Read_U32(ctx, addr);
    uint32_t val2 = PPC_Read_U32(ctx, addr + 4);
    ctx_arrow(ctx)->r4.u32 = val1 + val2;
    PPC_Write_U32(ctx, addr + 8, ctx_arrow(ctx)->r4.u32);
    ctx_arrow(ctx)->r6.compare<uint32_t>(val1, val2, ctx_arrow(ctx)->xer.value);
}

// Weak alias for sub_82090210
#ifdef _MSC_VER
void sub_82090210(PPCContext* ctx) {
    __imp__sub_82090210(ctx);
}
#else
void sub_82090210(PPCContext*) __attribute__((weak, alias("__imp__sub_82090210")));
#endif 