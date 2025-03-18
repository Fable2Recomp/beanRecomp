// Example patterns for fixing array operation errors in recompiled PPC code
#include "../include/ppc/ppc_types.h"

void example_fix_patterns(PPCContext& ctx) {
    PPCRegister temp{};
    
    // EXAMPLE 1: Array assignment error
    // Original: temp.u8 = some_value;
    // Fix: Use ASSIGN_ARRAY_U8 macro
    ASSIGN_ARRAY_U8(temp, 0, 42);
    
    // EXAMPLE 2: Array addition error
    // Original: temp.u8 = ctx.r9.u8 + 1;
    // Fix: Use ARRAY_U8_ADD macro
    ASSIGN_ARRAY_U8(temp, 0, ARRAY_U8_ADD(ctx.r9, 0, 1));
    
    // EXAMPLE 3: Array to scalar conversion error
    // Original: ctx.r9.s64 = ctx.r9.s8;
    // Fix: Use ARRAY_S8_TO_S64 macro
    ctx.r9.s64 = ARRAY_S8_TO_S64(ctx.r9, 0);
    
    // EXAMPLE 4: Store array to memory error
    // Original: PPC_STORE_U8(addr, reg.u8);
    // Fix: Use STORE_ARRAY_U8 macro
    uint32_t addr = 0x1000;
    STORE_ARRAY_U8(addr, ctx.r9, 0);
    
    // EXAMPLE 5: Binary operation on arrays error
    // Original: temp.u8 = ctx.r9.u8 & ctx.r10.u8;
    // Fix: Use BINARY_OP_U8 macro
    ASSIGN_ARRAY_U8(temp, 0, BINARY_OP_U8(ctx.r9, 0, &, ctx.r10, 0));
    
    // EXAMPLE 6: Complex condition with arrays
    // Original: temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
    // Fix: Use ASSIGN_TEMP_U8 macro
    bool condition = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
    ASSIGN_TEMP_U8(condition);
    
    // EXAMPLE 7: Array to scalar conversion with different sizes
    // Original: ctx.r9.s64 = ctx.r9.s16;
    // Fix: Use ARRAY_S16_TO_S64 macro
    ctx.r9.s64 = ARRAY_S16_TO_S64(ctx.r9, 0);
    
    // EXAMPLE 8: Array indexing error
    // Original: temp.u8[1] = value;
    // Fix: Use ASSIGN_ARRAY_U8 macro with index
    ASSIGN_ARRAY_U8(temp, 1, 42);
    
    // EXAMPLE 9: Combined operations with arrays
    // Original: temp.s8 = -(ctx.r9.s8 + ctx.r10.s8);
    // Fix: Use BINARY_OP_S8 macro
    ASSIGN_ARRAY_S8(temp, 0, -BINARY_OP_S8(ctx.r9, 0, +, ctx.r10, 0));
    
    // EXAMPLE 10: Nested array operations
    // Original: temp.u8 = ctx.r9.u8 + (ctx.r10.u8 + 1);
    // Fix: Use ARRAY_U8_ADD macro multiple times
    ASSIGN_ARRAY_U8(temp, 0, ARRAY_U8_ADD(ctx.r9, 0, ARRAY_U8_ADD(ctx.r10, 0, 1)));
} 