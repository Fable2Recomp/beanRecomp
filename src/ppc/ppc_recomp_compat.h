#pragma once

// Include the necessary headers
#include "../include/ppc/ppc_types.h"

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
#define PPC_LOAD_U8(addr) g_Memory.ReadMemory8(&ctx, addr)
#define PPC_LOAD_U16(addr) g_Memory.ReadMemory16(&ctx, addr)
#define PPC_LOAD_U32(addr) g_Memory.ReadMemory32(&ctx, addr)
#define PPC_LOAD_U64(addr) g_Memory.ReadMemory64(&ctx, addr)
#define PPC_STORE_U8(addr, val) g_Memory.WriteMemory8(&ctx, addr, val)
#define PPC_STORE_U16(addr, val) g_Memory.WriteMemory16(&ctx, addr, val)
#define PPC_STORE_U32(addr, val) g_Memory.WriteMemory32(&ctx, addr, val)
#define PPC_STORE_U64(addr, val) g_Memory.WriteMemory64(&ctx, addr, val)

// Define signed versions as well
#define PPC_LOAD_S8(addr) ((int8_t)g_Memory.ReadMemory8(&ctx, addr))
#define PPC_LOAD_S16(addr) ((int16_t)g_Memory.ReadMemory16(&ctx, addr))
#define PPC_LOAD_S32(addr) ((int32_t)g_Memory.ReadMemory32(&ctx, addr))
#define PPC_LOAD_S64(addr) ((int64_t)g_Memory.ReadMemory64(&ctx, addr))
#define PPC_STORE_S8(addr, val) g_Memory.WriteMemory8(&ctx, addr, (uint8_t)(val))
#define PPC_STORE_S16(addr, val) g_Memory.WriteMemory16(&ctx, addr, (uint16_t)(val))
#define PPC_STORE_S32(addr, val) g_Memory.WriteMemory32(&ctx, addr, (uint32_t)(val))
#define PPC_STORE_S64(addr, val) g_Memory.WriteMemory64(&ctx, addr, (uint64_t)(val))

// Helper functions for register access
inline uint32_t& PPCRegister_u32_compat(PPCContext* ctx, int reg) {
    return ctx->regs[reg].u32;
}

inline int32_t& PPCRegister_s32_compat(PPCContext* ctx, int reg) {
    return ctx->regs[reg].s32;
}

inline uint8_t& PPCRegister_u8_compat(PPCContext* ctx, int reg) {
    return ctx->regs[reg].u8;
}

inline int8_t& PPCRegister_s8_compat(PPCContext* ctx, int reg) {
    return ctx->regs[reg].s8;
}

inline uint16_t& PPCRegister_u16_compat(PPCContext* ctx, int reg) {
    return ctx->regs[reg].u16;
}

inline int16_t& PPCRegister_s16_compat(PPCContext* ctx, int reg) {
    return ctx->regs[reg].s16;
}

inline uint64_t& PPCRegister_u64_compat(PPCContext* ctx, int reg) {
    return ctx->regs[reg].u64;
}

inline int64_t& PPCRegister_s64_compat(PPCContext* ctx, int reg) {
    return ctx->regs[reg].s64;
}

// Macros for recompiled code that use ctx directly
#define PPC_LOAD_U8_RECOMP(addr) g_Memory.ReadMemory8(&ctx, addr)
#define PPC_LOAD_U32_RECOMP(addr) g_Memory.ReadMemory32(&ctx, addr)
#define PPC_LOAD_U64_RECOMP(addr) g_Memory.ReadMemory64(&ctx, addr)
#define PPC_STORE_U8_RECOMP(addr, val) g_Memory.WriteMemory8(&ctx, addr, val)
#define PPC_STORE_U32_RECOMP(addr, val) g_Memory.WriteMemory32(&ctx, addr, val)
#define PPC_STORE_U64_RECOMP(addr, val) g_Memory.WriteMemory64(&ctx, addr, val)

// Signed memory access macros for recompiled code
#define PPC_LOAD_S8_RECOMP(addr) static_cast<int8_t>(g_Memory.ReadMemory8(&ctx, addr))
#define PPC_LOAD_S16_RECOMP(addr) static_cast<int16_t>(g_Memory.ReadMemory32(&ctx, addr) >> 16)
#define PPC_LOAD_S32_RECOMP(addr) static_cast<int32_t>(g_Memory.ReadMemory32(&ctx, addr))
#define PPC_LOAD_S64_RECOMP(addr) static_cast<int64_t>(g_Memory.ReadMemory64(&ctx, addr))
#define PPC_STORE_S8_RECOMP(addr, val) g_Memory.WriteMemory8(&ctx, addr, static_cast<uint8_t>(val))
#define PPC_STORE_S16_RECOMP(addr, val) g_Memory.WriteMemory32(&ctx, addr, static_cast<uint16_t>(val) << 16)
#define PPC_STORE_S32_RECOMP(addr, val) g_Memory.WriteMemory32(&ctx, addr, static_cast<uint32_t>(val))
#define PPC_STORE_S64_RECOMP(addr, val) g_Memory.WriteMemory64(&ctx, addr, static_cast<uint64_t>(val))

// Array access macros for recompiled code
#define PPC_LOAD_ARRAY_U8_RECOMP(base_addr, index) g_Memory.ReadMemory8(&ctx, (base_addr) + (index))
#define PPC_LOAD_ARRAY_U32_RECOMP(base_addr, index) g_Memory.ReadMemory32(&ctx, (base_addr) + ((index) * 4))
#define PPC_LOAD_ARRAY_U64_RECOMP(base_addr, index) g_Memory.ReadMemory64(&ctx, (base_addr) + ((index) * 8))
#define PPC_STORE_ARRAY_U8_RECOMP(base_addr, index, val) g_Memory.WriteMemory8(&ctx, (base_addr) + (index), val)
#define PPC_STORE_ARRAY_U32_RECOMP(base_addr, index, val) g_Memory.WriteMemory32(&ctx, (base_addr) + ((index) * 4), val)
#define PPC_STORE_ARRAY_U64_RECOMP(base_addr, index, val) g_Memory.WriteMemory64(&ctx, (base_addr) + ((index) * 8), val) 