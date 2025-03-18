#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_macros.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "ppc/ppc_context.h"
#include "ppc/ppc_memory.h"
#include "ppc/ppc_types.h"
#include <cstdio>

// Example memory allocator hook
void MemoryAllocatorHook(PPCContext* ctx, PPCRegister& ctx_arrow(ctx)->r3, PPCRegister& ctx_arrow(ctx)->r4) {
    printf("Memory allocator hook called with size: %u\n", ctx_arrow(ctx)->r3.u32);
    // Allocate memory and return address in ctx_arrow(ctx)->r3
    ctx_arrow(ctx)->r3.u32 = 0x10000000;
}

// Example of a recompiled function
void __imp__sub_82090000(PPCContext* ctx) {
    // Local register copies for better performance
    PPCRegister r0 = ctx_arrow(ctx)->r0;
    PPCRegister r1 = ctx_arrow(ctx)->r1;
    PPCRegister r2 = ctx_arrow(ctx)->r2;
    PPCRegister r3 = ctx_arrow(ctx)->r3;
    PPCRegister r4 = ctx_arrow(ctx)->r4;
    PPCRegister r5 = ctx_arrow(ctx)->r5;
    PPCRegister r12 = ctx_arrow(ctx)->r12;
    PPCRegister lr = ctx_arrow(ctx)->lr;
    PPCCRRegister cr = ctx_arrow(ctx)->cr[0];
    
    // Function prologue
    ctx_arrow(ctx)->r12 = ctx_arrow(ctx)->r1;
    ctx_arrow(ctx)->r1.u32 = ctx_arrow(ctx)->r1.u32 - 0x20;
    
    // Store link register and ctx_arrow(ctx)->r12 to stack
    PPC_STORE_U32_FUNC(ctx, ctx_arrow(ctx)->r1.u32 + 0x14, lr.u32);
    PPC_STORE_U32_FUNC(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r12.u32);
    
    // Load parameters from memory
    uint32_t param1 = PPC_LOAD_U32_FUNC(ctx, ctx_arrow(ctx)->r3.u32);
    uint32_t param2 = PPC_LOAD_U32_FUNC(ctx, ctx_arrow(ctx)->r3.u32 + 4);
    
    // Perform operation
    ctx_arrow(ctx)->r4.u32 = param1 + param2;
    
    // Store result
    PPC_STORE_U32_FUNC(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
    
    // Compare values
    cr.compare<uint32_t>(param1, param2, 0);
    
    // Conditional execution based on comparison
    if (cr.gt()) {
        // Call a function if param1 > param2
        ctx_arrow(ctx)->r3.u32 = param1;
        ctx_arrow(ctx)->r4.u32 = param2;
        MemoryAllocatorHook(ctx, ctx_arrow(ctx)->r3, ctx_arrow(ctx)->r4);
        
        // Store allocated address
        PPC_STORE_U32_FUNC(ctx, ctx_arrow(ctx)->r12.u32 + 0x8, ctx_arrow(ctx)->r3.u32);
    }
    
    // Function epilogue
    ctx_arrow(ctx)->r1 = ctx_arrow(ctx)->r12;
    lr.u32 = PPC_LOAD_U32_FUNC(ctx, ctx_arrow(ctx)->r1.u32 + 0x14);
    
    // Return
    ctx_arrow(ctx)->r0 = ctx_arrow(ctx)->r0;
    ctx_arrow(ctx)->r1 = ctx_arrow(ctx)->r1;
    ctx_arrow(ctx)->r2 = ctx_arrow(ctx)->r2;
    ctx_arrow(ctx)->r3 = ctx_arrow(ctx)->r3;
    ctx_arrow(ctx)->r4 = ctx_arrow(ctx)->r4;
    ctx_arrow(ctx)->r5 = ctx_arrow(ctx)->r5;
    ctx_arrow(ctx)->r12 = ctx_arrow(ctx)->r12;
    ctx_arrow(ctx)->lr = lr;
    ctx_arrow(ctx)->cr[0] = cr;
}

// Weak alias for sub_82090000
#ifdef _MSC_VER
void sub_82090000(PPCContext* ctx) {
    __imp__sub_82090000(ctx);
}
#else
void sub_82090000(PPCContext*) __attribute__((weak, alias("__imp__sub_82090000"))); 