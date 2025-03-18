#pragma once

#include "ppc_types.h"
#include "ppc_memory.h"

// Function-style macros for memory access with variadic arguments to handle extra parameters
#define PPC_LOAD_U8_FUNC(ctx_ptr, addr, ...) g_Memory.ReadMemory8(ctx_ptr, addr)
#define PPC_LOAD_U16_FUNC(ctx_ptr, addr, ...) g_Memory.ReadMemory16(ctx_ptr, addr)
#define PPC_LOAD_U32_FUNC(ctx_ptr, addr, ...) g_Memory.ReadMemory32(ctx_ptr, addr)
#define PPC_LOAD_U64_FUNC(ctx_ptr, addr, ...) g_Memory.ReadMemory64(ctx_ptr, addr)

#define PPC_LOAD_S8_FUNC(ctx_ptr, addr, ...) ((int8_t)g_Memory.ReadMemory8(ctx_ptr, addr))
#define PPC_LOAD_S16_FUNC(ctx_ptr, addr, ...) ((int16_t)g_Memory.ReadMemory16(ctx_ptr, addr))
#define PPC_LOAD_S32_FUNC(ctx_ptr, addr, ...) ((int32_t)g_Memory.ReadMemory32(ctx_ptr, addr))
#define PPC_LOAD_S64_FUNC(ctx_ptr, addr, ...) ((int64_t)g_Memory.ReadMemory64(ctx_ptr, addr))

#define PPC_STORE_U8_FUNC(ctx_ptr, addr, val, ...) g_Memory.WriteMemory8(ctx_ptr, addr, val)
#define PPC_STORE_U16_FUNC(ctx_ptr, addr, val, ...) g_Memory.WriteMemory16(ctx_ptr, addr, val)
#define PPC_STORE_U32_FUNC(ctx_ptr, addr, val, ...) g_Memory.WriteMemory32(ctx_ptr, addr, val)
#define PPC_STORE_U64_FUNC(ctx_ptr, addr, val, ...) g_Memory.WriteMemory64(ctx_ptr, addr, val)

#define PPC_STORE_S8_FUNC(ctx_ptr, addr, val, ...) g_Memory.WriteMemory8(ctx_ptr, addr, (uint8_t)(val))
#define PPC_STORE_S16_FUNC(ctx_ptr, addr, val, ...) g_Memory.WriteMemory16(ctx_ptr, addr, (uint16_t)(val))
#define PPC_STORE_S32_FUNC(ctx_ptr, addr, val, ...) g_Memory.WriteMemory32(ctx_ptr, addr, (uint32_t)(val))
#define PPC_STORE_S64_FUNC(ctx_ptr, addr, val, ...) g_Memory.WriteMemory64(ctx_ptr, addr, (uint64_t)(val))

// Array access macros with variadic arguments
#define PPC_LOAD_ARRAY_U8_FUNC(ctx_ptr, addr, index, ...) g_Memory.ReadMemory8(ctx_ptr, (addr) + (index))
#define PPC_LOAD_ARRAY_S8_FUNC(ctx_ptr, addr, index, ...) ((int8_t)g_Memory.ReadMemory8(ctx_ptr, (addr) + (index)))
#define PPC_LOAD_ARRAY_U16_FUNC(ctx_ptr, addr, index, ...) g_Memory.ReadMemory16(ctx_ptr, (addr) + ((index) * 2))
#define PPC_LOAD_ARRAY_S16_FUNC(ctx_ptr, addr, index, ...) ((int16_t)g_Memory.ReadMemory16(ctx_ptr, (addr) + ((index) * 2)))
#define PPC_LOAD_ARRAY_U32_FUNC(ctx_ptr, addr, index, ...) g_Memory.ReadMemory32(ctx_ptr, (addr) + ((index) * 4))
#define PPC_LOAD_ARRAY_S32_FUNC(ctx_ptr, addr, index, ...) ((int32_t)g_Memory.ReadMemory32(ctx_ptr, (addr) + ((index) * 4)))
#define PPC_LOAD_ARRAY_U64_FUNC(ctx_ptr, addr, index, ...) g_Memory.ReadMemory64(ctx_ptr, (addr) + ((index) * 8))
#define PPC_LOAD_ARRAY_S64_FUNC(ctx_ptr, addr, index, ...) ((int64_t)g_Memory.ReadMemory64(ctx_ptr, (addr) + ((index) * 8)))

#define PPC_STORE_ARRAY_U8_FUNC(ctx_ptr, addr, index, val, ...) g_Memory.WriteMemory8(ctx_ptr, (addr) + (index), val)
#define PPC_STORE_ARRAY_S8_FUNC(ctx_ptr, addr, index, val, ...) g_Memory.WriteMemory8(ctx_ptr, (addr) + (index), (uint8_t)(val))
#define PPC_STORE_ARRAY_U16_FUNC(ctx_ptr, addr, index, val, ...) g_Memory.WriteMemory16(ctx_ptr, (addr) + ((index) * 2), val)
#define PPC_STORE_ARRAY_S16_FUNC(ctx_ptr, addr, index, val, ...) g_Memory.WriteMemory16(ctx_ptr, (addr) + ((index) * 2), (uint16_t)(val))
#define PPC_STORE_ARRAY_U32_FUNC(ctx_ptr, addr, index, val, ...) g_Memory.WriteMemory32(ctx_ptr, (addr) + ((index) * 4), val)
#define PPC_STORE_ARRAY_S32_FUNC(ctx_ptr, addr, index, val, ...) g_Memory.WriteMemory32(ctx_ptr, (addr) + ((index) * 4), (uint32_t)(val))
#define PPC_STORE_ARRAY_U64_FUNC(ctx_ptr, addr, index, val, ...) g_Memory.WriteMemory64(ctx_ptr, (addr) + ((index) * 8), val)
#define PPC_STORE_ARRAY_S64_FUNC(ctx_ptr, addr, index, val, ...) g_Memory.WriteMemory64(ctx_ptr, (addr) + ((index) * 8), (uint64_t)(val)) 