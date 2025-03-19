#pragma once

// Include the necessary headers
#include "../include/ppc/ppc_types.h"
#include "../include/ppc/ppc_memory_macros.h"

// Redefine the memory access macros for recompiled code
#undef PPC_LOAD_U8
#undef PPC_LOAD_U16
#undef PPC_LOAD_U32
#undef PPC_LOAD_U64
#undef PPC_STORE_U8
#undef PPC_STORE_U16
#undef PPC_STORE_U32
#undef PPC_STORE_U64

// Define macros that use the ctx variable directly
#define PPC_LOAD_U8(addr) PPC_LOAD_U8_FUNC(&ctx, addr)
#define PPC_LOAD_U16(addr) PPC_LOAD_U16_FUNC(&ctx, addr)
#define PPC_LOAD_U32(addr) PPC_LOAD_U32_FUNC(&ctx, addr)
#define PPC_LOAD_U64(addr) PPC_LOAD_U64_FUNC(&ctx, addr)
#define PPC_STORE_U8(addr, val) PPC_STORE_U8_FUNC(&ctx, addr, val)
#define PPC_STORE_U16(addr, val) PPC_STORE_U16_FUNC(&ctx, addr, val)
#define PPC_STORE_U32(addr, val) PPC_STORE_U32_FUNC(&ctx, addr, val)
#define PPC_STORE_U64(addr, val) PPC_STORE_U64_FUNC(&ctx, addr, val)

// Define signed versions as well
#define PPC_LOAD_S8(addr) ((int8_t)PPC_LOAD_U8(addr))
#define PPC_LOAD_S16(addr) ((int16_t)PPC_LOAD_U16(addr))
#define PPC_LOAD_S32(addr) ((int32_t)PPC_LOAD_U32(addr))
#define PPC_LOAD_S64(addr) ((int64_t)PPC_LOAD_U64(addr))
#define PPC_STORE_S8(addr, val) PPC_STORE_U8(addr, (uint8_t)(val))
#define PPC_STORE_S16(addr, val) PPC_STORE_U16(addr, (uint16_t)(val))
#define PPC_STORE_S32(addr, val) PPC_STORE_U32(addr, (uint32_t)(val))
#define PPC_STORE_S64(addr, val) PPC_STORE_U64(addr, (uint64_t)(val))

// Helper functions for register access
inline uint32_t& PPCRegister_u32_compat(PPCContext* ctx, int reg) {
    return ctx->get_r(reg).u32;
}

inline int32_t& PPCRegister_s32_compat(PPCContext* ctx, int reg) {
    return ctx->get_r(reg).s32;
}

inline uint8_t& PPCRegister_u8_compat(PPCContext* ctx, int reg) {
    return ctx->get_r(reg).u8;
}

inline int8_t& PPCRegister_s8_compat(PPCContext* ctx, int reg) {
    return ctx->get_r(reg).s8;
}

inline uint16_t& PPCRegister_u16_compat(PPCContext* ctx, int reg) {
    return ctx->get_r(reg).u16;
}

inline int16_t& PPCRegister_s16_compat(PPCContext* ctx, int reg) {
    return ctx->get_r(reg).s16;
}

inline uint64_t& PPCRegister_u64_compat(PPCContext* ctx, int reg) {
    return ctx->get_r(reg).u64;
}

inline int64_t& PPCRegister_s64_compat(PPCContext* ctx, int reg) {
    return ctx->get_r(reg).s64;
}

// Array access macros for recompiled code
#define PPC_LOAD_ARRAY_U8(base_addr, index) PPC_LOAD_ARRAY_U8_FUNC(&ctx, base_addr, index)
#define PPC_LOAD_ARRAY_U32(base_addr, index) PPC_LOAD_ARRAY_U32_FUNC(&ctx, base_addr, index)
#define PPC_LOAD_ARRAY_U64(base_addr, index) PPC_LOAD_ARRAY_U64_FUNC(&ctx, base_addr, index)
#define PPC_STORE_ARRAY_U8(base_addr, index, val) PPC_STORE_ARRAY_U8_FUNC(&ctx, base_addr, index, val)
#define PPC_STORE_ARRAY_U32(base_addr, index, val) PPC_STORE_ARRAY_U32_FUNC(&ctx, base_addr, index, val)
#define PPC_STORE_ARRAY_U64(base_addr, index, val) PPC_STORE_ARRAY_U64_FUNC(&ctx, base_addr, index, val)

// Legacy aliases for backward compatibility
#define PPC_Read_U8 PPC_LOAD_U8
#define PPC_Read_U16 PPC_LOAD_U16
#define PPC_Read_U32 PPC_LOAD_U32
#define PPC_Read_U64 PPC_LOAD_U64
#define PPC_Write_U8 PPC_STORE_U8
#define PPC_Write_U16 PPC_STORE_U16
#define PPC_Write_U32 PPC_STORE_U32
#define PPC_Write_U64 PPC_STORE_U64 