#pragma once
#ifndef PPC_MEMORY_MACROS_H_INCLUDED
#define PPC_MEMORY_MACROS_H_INCLUDED

#include "ppc_types.h"
#include "ppc_context.h"
#include "ppc_memory.h"

// Memory access safety check
#define PPC_CHECK_MEMORY_ACCESS(addr, size) \
    do { \
        if (!g_Memory || !g_Memory->is_valid_address(addr, size)) { \
            throw std::runtime_error("Invalid memory access at address " + std::to_string(addr)); \
        } \
    } while(0)

// Load functions with context pointer
#define PPC_LOAD_U8_FUNC(ctx_ptr, addr) \
    ({ \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(uint8_t)); \
        g_Memory->read_u8(addr); \
    })

#define PPC_LOAD_S8_FUNC(ctx_ptr, addr) \
    ({ \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(int8_t)); \
        g_Memory->read_s8(addr); \
    })

#define PPC_LOAD_U16_FUNC(ctx_ptr, addr) \
    ({ \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(uint16_t)); \
        g_Memory->read_u16(addr); \
    })

#define PPC_LOAD_S16_FUNC(ctx_ptr, addr) \
    ({ \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(int16_t)); \
        g_Memory->read_s16(addr); \
    })

#define PPC_LOAD_U32_FUNC(ctx_ptr, addr) \
    ({ \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(uint32_t)); \
        g_Memory->read_u32(addr); \
    })

#define PPC_LOAD_S32_FUNC(ctx_ptr, addr) \
    ({ \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(int32_t)); \
        g_Memory->read_s32(addr); \
    })

#define PPC_LOAD_U64_FUNC(ctx_ptr, addr) \
    ({ \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(uint64_t)); \
        g_Memory->read_u64(addr); \
    })

#define PPC_LOAD_S64_FUNC(ctx_ptr, addr) \
    ({ \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(int64_t)); \
        g_Memory->read_s64(addr); \
    })

#define PPC_LOAD_F32_FUNC(ctx_ptr, addr) \
    ({ \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(float)); \
        g_Memory->read_f32(addr); \
    })

#define PPC_LOAD_F64_FUNC(ctx_ptr, addr) \
    ({ \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(double)); \
        g_Memory->read_f64(addr); \
    })

// Store functions with context pointer
#define PPC_STORE_U8_FUNC(ctx_ptr, addr, value) \
    do { \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(uint8_t)); \
        g_Memory->write_u8(addr, value); \
    } while(0)

#define PPC_STORE_S8_FUNC(ctx_ptr, addr, value) \
    do { \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(int8_t)); \
        g_Memory->write_s8(addr, value); \
    } while(0)

#define PPC_STORE_U16_FUNC(ctx_ptr, addr, value) \
    do { \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(uint16_t)); \
        g_Memory->write_u16(addr, value); \
    } while(0)

#define PPC_STORE_S16_FUNC(ctx_ptr, addr, value) \
    do { \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(int16_t)); \
        g_Memory->write_s16(addr, value); \
    } while(0)

#define PPC_STORE_U32_FUNC(ctx_ptr, addr, value) \
    do { \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(uint32_t)); \
        g_Memory->write_u32(addr, value); \
    } while(0)

#define PPC_STORE_S32_FUNC(ctx_ptr, addr, value) \
    do { \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(int32_t)); \
        g_Memory->write_s32(addr, value); \
    } while(0)

#define PPC_STORE_U64_FUNC(ctx_ptr, addr, value) \
    do { \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(uint64_t)); \
        g_Memory->write_u64(addr, value); \
    } while(0)

#define PPC_STORE_S64_FUNC(ctx_ptr, addr, value) \
    do { \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(int64_t)); \
        g_Memory->write_s64(addr, value); \
    } while(0)

#define PPC_STORE_F32_FUNC(ctx_ptr, addr, value) \
    do { \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(float)); \
        g_Memory->write_f32(addr, value); \
    } while(0)

#define PPC_STORE_F64_FUNC(ctx_ptr, addr, value) \
    do { \
        PPC_CHECK_MEMORY_ACCESS(addr, sizeof(double)); \
        g_Memory->write_f64(addr, value); \
    } while(0)

// Array access functions
#define PPC_LOAD_ARRAY_U8_FUNC(ctx_ptr, base, index) \
    PPC_LOAD_U8_FUNC(ctx_ptr, (base) + (index))

#define PPC_LOAD_ARRAY_S8_FUNC(ctx_ptr, base, index) \
    PPC_LOAD_S8_FUNC(ctx_ptr, (base) + (index))

#define PPC_LOAD_ARRAY_U16_FUNC(ctx_ptr, base, index) \
    PPC_LOAD_U16_FUNC(ctx_ptr, (base) + ((index) * 2))

#define PPC_LOAD_ARRAY_S16_FUNC(ctx_ptr, base, index) \
    PPC_LOAD_S16_FUNC(ctx_ptr, (base) + ((index) * 2))

#define PPC_LOAD_ARRAY_U32_FUNC(ctx_ptr, base, index) \
    PPC_LOAD_U32_FUNC(ctx_ptr, (base) + ((index) * 4))

#define PPC_LOAD_ARRAY_S32_FUNC(ctx_ptr, base, index) \
    PPC_LOAD_S32_FUNC(ctx_ptr, (base) + ((index) * 4))

#define PPC_LOAD_ARRAY_U64_FUNC(ctx_ptr, base, index) \
    PPC_LOAD_U64_FUNC(ctx_ptr, (base) + ((index) * 8))

#define PPC_LOAD_ARRAY_S64_FUNC(ctx_ptr, base, index) \
    PPC_LOAD_S64_FUNC(ctx_ptr, (base) + ((index) * 8))

#define PPC_STORE_ARRAY_U8_FUNC(ctx_ptr, base, index, value) \
    PPC_STORE_U8_FUNC(ctx_ptr, (base) + (index), value)

#define PPC_STORE_ARRAY_S8_FUNC(ctx_ptr, base, index, value) \
    PPC_STORE_S8_FUNC(ctx_ptr, (base) + (index), value)

#define PPC_STORE_ARRAY_U16_FUNC(ctx_ptr, base, index, value) \
    PPC_STORE_U16_FUNC(ctx_ptr, (base) + ((index) * 2), value)

#define PPC_STORE_ARRAY_S16_FUNC(ctx_ptr, base, index, value) \
    PPC_STORE_S16_FUNC(ctx_ptr, (base) + ((index) * 2), value)

#define PPC_STORE_ARRAY_U32_FUNC(ctx_ptr, base, index, value) \
    PPC_STORE_U32_FUNC(ctx_ptr, (base) + ((index) * 4), value)

#define PPC_STORE_ARRAY_S32_FUNC(ctx_ptr, base, index, value) \
    PPC_STORE_S32_FUNC(ctx_ptr, (base) + ((index) * 4), value)

#define PPC_STORE_ARRAY_U64_FUNC(ctx_ptr, base, index, value) \
    PPC_STORE_U64_FUNC(ctx_ptr, (base) + ((index) * 8), value)

#define PPC_STORE_ARRAY_S64_FUNC(ctx_ptr, base, index, value) \
    PPC_STORE_S64_FUNC(ctx_ptr, (base) + ((index) * 8), value)

#define PPC_STORE_ARRAY_F32_FUNC(ctx_ptr, base, index, value) \
    PPC_STORE_F32_FUNC(ctx_ptr, (base) + ((index) * 4), value)

#define PPC_STORE_ARRAY_F64_FUNC(ctx_ptr, base, index, value) \
    PPC_STORE_F64_FUNC(ctx_ptr, (base) + ((index) * 8), value)

#endif // PPC_MEMORY_MACROS_H_INCLUDED 