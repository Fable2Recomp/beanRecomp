#include "../include/ppc/ppc_types.h"

// Example function demonstrating how to fix common array operation errors
void example_fix_patterns(PPCContext& ctx) {
    PPCRegister temp;
    PPCXERRegister xer;
    
    // EXAMPLE 1: Array assignment pattern
    // Original error: temp.u8 = some_value;
    // Fixed with:
    ASSIGN_ARRAY_U8(temp, 0, 0xFF);
    
    // EXAMPLE 2: Array binary operation
    // Original error: (temp.u8 + 1)
    // Fixed with:
    uint8_t result = ARRAY_U8_ADD(temp, 0, 1);
    
    // EXAMPLE 3: Array to scalar assignment
    // Original error: ctx.r9.s64 = ctx.r9.s8;
    // Fixed with:
    ctx.r9.s64 = ARRAY_S8_TO_S64(ctx.r9, 0);
    
    // EXAMPLE 4: Store array element to memory
    // Original error: PPC_STORE_U8(addr, temp.u8);
    // Fixed with:
    uint32_t addr = 0x12345678;
    STORE_ARRAY_U8(addr, temp, 0);
    
    // EXAMPLE 5: Binary operations on array elements
    // Original error: (temp.u8 & ~ctx.r9.u8)
    // Fixed with:
    uint8_t result2 = BINARY_OP_U8(temp, 0, &, ~ctx.r9.u8at(0));
    
    // EXAMPLE 6: Complex condition involving arrays
    // Original error: temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32);
    // Fixed with:
    ASSIGN_TEMP_U8(
        (ctx.r9.u32at(0) < ~ctx.r9.u32at(0)) |
        (ctx.r9.u32at(0) + xer.ca < xer.ca)
    );
    
    // EXAMPLE 7: Assignment from int16_t array to int64_t
    // Original error: ctx.r9.s64 = ctx.r9.s16;
    // Fixed with:
    ctx.r9.s64 = ARRAY_S16_TO_S64(ctx.r9, 0);
    
    // EXAMPLE 8: Array indexing
    // Original error: ctx.r9.u8[2] = value;
    // Fixed with:
    ASSIGN_ARRAY_U8(ctx.r9, 2, 0x42);
    
    // EXAMPLE 9: Combined operations with arrays
    // Original error: ctx.r9.s64 = (ctx.r9.s8 | ctx.r10.s8);
    // Fixed with:
    ctx.r9.s64 = BINARY_OP_S8(ctx.r9, 0, |, ctx.r10, 0);
    
    // EXAMPLE 10: Nested array operations
    // Original error: if (ctx.r9.u8 + ctx.r10.u8 > 0xFF) ...
    // Fixed with:
    if (ARRAY_U8_ADD(ctx.r9, 0, ctx.r10.u8at(0)) > 0xFF) {
        // ...
    }
} 