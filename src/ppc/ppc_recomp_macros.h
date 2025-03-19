#pragma once

#include "../include/ppc/ppc_types.h"
#include "../include/ppc/ppc_memory_macros.h"

// Function-style macros for memory access
#define PPC_LOAD_U8(ctx_ptr, addr) PPC_LOAD_U8_FUNC(ctx_ptr, addr)
#define PPC_LOAD_U16(ctx_ptr, addr) PPC_LOAD_U16_FUNC(ctx_ptr, addr)
#define PPC_LOAD_U32(ctx_ptr, addr) PPC_LOAD_U32_FUNC(ctx_ptr, addr)
#define PPC_LOAD_U64(ctx_ptr, addr) PPC_LOAD_U64_FUNC(ctx_ptr, addr)
#define PPC_STORE_U8(ctx_ptr, addr, val) PPC_STORE_U8_FUNC(ctx_ptr, addr, val)
#define PPC_STORE_U16(ctx_ptr, addr, val) PPC_STORE_U16_FUNC(ctx_ptr, addr, val)
#define PPC_STORE_U32(ctx_ptr, addr, val) PPC_STORE_U32_FUNC(ctx_ptr, addr, val)
#define PPC_STORE_U64(ctx_ptr, addr, val) PPC_STORE_U64_FUNC(ctx_ptr, addr, val)

// Signed memory access function-style macros
#define PPC_LOAD_S8(ctx_ptr, addr) PPC_LOAD_S8_FUNC(ctx_ptr, addr)
#define PPC_LOAD_S16(ctx_ptr, addr) PPC_LOAD_S16_FUNC(ctx_ptr, addr)
#define PPC_LOAD_S32(ctx_ptr, addr) PPC_LOAD_S32_FUNC(ctx_ptr, addr)
#define PPC_LOAD_S64(ctx_ptr, addr) PPC_LOAD_S64_FUNC(ctx_ptr, addr)
#define PPC_STORE_S8(ctx_ptr, addr, val) PPC_STORE_S8_FUNC(ctx_ptr, addr, val)
#define PPC_STORE_S16(ctx_ptr, addr, val) PPC_STORE_S16_FUNC(ctx_ptr, addr, val)
#define PPC_STORE_S32(ctx_ptr, addr, val) PPC_STORE_S32_FUNC(ctx_ptr, addr, val)
#define PPC_STORE_S64(ctx_ptr, addr, val) PPC_STORE_S64_FUNC(ctx_ptr, addr, val)

// Array access function-style macros
#define PPC_LOAD_ARRAY_U8(ctx_ptr, arr, idx) PPC_LOAD_ARRAY_U8_FUNC(ctx_ptr, (uint32_t)(arr), idx)
#define PPC_LOAD_ARRAY_S8(ctx_ptr, arr, idx) PPC_LOAD_ARRAY_S8_FUNC(ctx_ptr, (uint32_t)(arr), idx)
#define PPC_LOAD_ARRAY_U16(ctx_ptr, arr, idx) PPC_LOAD_ARRAY_U16_FUNC(ctx_ptr, (uint32_t)(arr), idx)
#define PPC_LOAD_ARRAY_S16(ctx_ptr, arr, idx) PPC_LOAD_ARRAY_S16_FUNC(ctx_ptr, (uint32_t)(arr), idx)
#define PPC_LOAD_ARRAY_U32(ctx_ptr, arr, idx) PPC_LOAD_ARRAY_U32_FUNC(ctx_ptr, (uint32_t)(arr), idx)
#define PPC_LOAD_ARRAY_S32(ctx_ptr, arr, idx) PPC_LOAD_ARRAY_S32_FUNC(ctx_ptr, (uint32_t)(arr), idx)
#define PPC_LOAD_ARRAY_U64(ctx_ptr, arr, idx) PPC_LOAD_ARRAY_U64_FUNC(ctx_ptr, (uint32_t)(arr), idx)
#define PPC_LOAD_ARRAY_S64(ctx_ptr, arr, idx) PPC_LOAD_ARRAY_S64_FUNC(ctx_ptr, (uint32_t)(arr), idx)

#define PPC_STORE_ARRAY_U8(ctx_ptr, arr, idx, val) PPC_STORE_ARRAY_U8_FUNC(ctx_ptr, (uint32_t)(arr), idx, val)
#define PPC_STORE_ARRAY_S8(ctx_ptr, arr, idx, val) PPC_STORE_ARRAY_S8_FUNC(ctx_ptr, (uint32_t)(arr), idx, val)
#define PPC_STORE_ARRAY_U16(ctx_ptr, arr, idx, val) PPC_STORE_ARRAY_U16_FUNC(ctx_ptr, (uint32_t)(arr), idx, val)
#define PPC_STORE_ARRAY_S16(ctx_ptr, arr, idx, val) PPC_STORE_ARRAY_S16_FUNC(ctx_ptr, (uint32_t)(arr), idx, val)
#define PPC_STORE_ARRAY_U32(ctx_ptr, arr, idx, val) PPC_STORE_ARRAY_U32_FUNC(ctx_ptr, (uint32_t)(arr), idx, val)
#define PPC_STORE_ARRAY_S32(ctx_ptr, arr, idx, val) PPC_STORE_ARRAY_S32_FUNC(ctx_ptr, (uint32_t)(arr), idx, val)
#define PPC_STORE_ARRAY_U64(ctx_ptr, arr, idx, val) PPC_STORE_ARRAY_U64_FUNC(ctx_ptr, (uint32_t)(arr), idx, val)
#define PPC_STORE_ARRAY_S64(ctx_ptr, arr, idx, val) PPC_STORE_ARRAY_S64_FUNC(ctx_ptr, (uint32_t)(arr), idx, val) 