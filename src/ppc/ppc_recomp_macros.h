#pragma once

#include "../include/ppc/ppc_types.h"
#include "../include/ppc/ppc_memory.h"

// Function-style macros for memory access
#define PPC_LOAD_U8_FUNC(ctx_ptr, addr) g_Memory.ReadMemory8(ctx_ptr, addr)
#define PPC_LOAD_U16_FUNC(ctx_ptr, addr) ((uint16_t)(g_Memory.ReadMemory32(ctx_ptr, addr) >> 16))
#define PPC_LOAD_U32_FUNC(ctx_ptr, addr) g_Memory.ReadMemory32(ctx_ptr, addr)
#define PPC_LOAD_U64_FUNC(ctx_ptr, addr) g_Memory.ReadMemory64(ctx_ptr, addr)
#define PPC_STORE_U8_FUNC(ctx_ptr, addr, val) g_Memory.WriteMemory8(ctx_ptr, addr, val)
#define PPC_STORE_U16_FUNC(ctx_ptr, addr, val) g_Memory.WriteMemory32(ctx_ptr, addr, ((val) & 0xFFFF) << 16)
#define PPC_STORE_U32_FUNC(ctx_ptr, addr, val) g_Memory.WriteMemory32(ctx_ptr, addr, val)
#define PPC_STORE_U64_FUNC(ctx_ptr, addr, val) g_Memory.WriteMemory64(ctx_ptr, addr, val)

// Signed memory access function-style macros
#define PPC_LOAD_S8_FUNC(ctx_ptr, addr) static_cast<int8_t>(g_Memory.ReadMemory8(ctx_ptr, addr))
#define PPC_LOAD_S16_FUNC(ctx_ptr, addr) static_cast<int16_t>(g_Memory.ReadMemory32(ctx_ptr, addr) >> 16)
#define PPC_LOAD_S32_FUNC(ctx_ptr, addr) static_cast<int32_t>(g_Memory.ReadMemory32(ctx_ptr, addr))
#define PPC_LOAD_S64_FUNC(ctx_ptr, addr) static_cast<int64_t>(g_Memory.ReadMemory64(ctx_ptr, addr))
#define PPC_STORE_S8_FUNC(ctx_ptr, addr, val) g_Memory.WriteMemory8(ctx_ptr, addr, static_cast<uint8_t>(val))
#define PPC_STORE_S16_FUNC(ctx_ptr, addr, val) g_Memory.WriteMemory32(ctx_ptr, addr, static_cast<uint16_t>(val) << 16)
#define PPC_STORE_S32_FUNC(ctx_ptr, addr, val) g_Memory.WriteMemory32(ctx_ptr, addr, static_cast<uint32_t>(val))
#define PPC_STORE_S64_FUNC(ctx_ptr, addr, val) g_Memory.WriteMemory64(ctx_ptr, addr, static_cast<uint64_t>(val))

// Array access function-style macros
#define PPC_LOAD_ARRAY_U8_FUNC(ctx_ptr, arr, idx) PPC_LOAD_U8_FUNC(ctx_ptr, (uint32_t)(arr) + (idx))
#define PPC_LOAD_ARRAY_S8_FUNC(ctx_ptr, arr, idx) PPC_LOAD_S8_FUNC(ctx_ptr, (uint32_t)(arr) + (idx))
#define PPC_LOAD_ARRAY_U16_FUNC(ctx_ptr, arr, idx) PPC_LOAD_U16_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 2))
#define PPC_LOAD_ARRAY_S16_FUNC(ctx_ptr, arr, idx) PPC_LOAD_S16_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 2))
#define PPC_LOAD_ARRAY_U32_FUNC(ctx_ptr, arr, idx) PPC_LOAD_U32_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 4))
#define PPC_LOAD_ARRAY_S32_FUNC(ctx_ptr, arr, idx) PPC_LOAD_S32_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 4))
#define PPC_LOAD_ARRAY_U64_FUNC(ctx_ptr, arr, idx) PPC_LOAD_U64_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 8))
#define PPC_LOAD_ARRAY_S64_FUNC(ctx_ptr, arr, idx) PPC_LOAD_S64_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 8))

#define PPC_STORE_ARRAY_U8_FUNC(ctx_ptr, arr, idx, val) PPC_STORE_U8_FUNC(ctx_ptr, (uint32_t)(arr) + (idx), val)
#define PPC_STORE_ARRAY_S8_FUNC(ctx_ptr, arr, idx, val) PPC_STORE_S8_FUNC(ctx_ptr, (uint32_t)(arr) + (idx), val)
#define PPC_STORE_ARRAY_U16_FUNC(ctx_ptr, arr, idx, val) PPC_STORE_U16_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 2), val)
#define PPC_STORE_ARRAY_S16_FUNC(ctx_ptr, arr, idx, val) PPC_STORE_S16_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 2), val)
#define PPC_STORE_ARRAY_U32_FUNC(ctx_ptr, arr, idx, val) PPC_STORE_U32_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 4), val)
#define PPC_STORE_ARRAY_S32_FUNC(ctx_ptr, arr, idx, val) PPC_STORE_S32_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 4), val)
#define PPC_STORE_ARRAY_U64_FUNC(ctx_ptr, arr, idx, val) PPC_STORE_U64_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 8), val)
#define PPC_STORE_ARRAY_S64_FUNC(ctx_ptr, arr, idx, val) PPC_STORE_S64_FUNC(ctx_ptr, (uint32_t)(arr) + ((idx) * 8), val) 