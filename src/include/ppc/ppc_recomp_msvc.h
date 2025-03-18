#pragma once

// This file provides MSVC compatibility for the PowerPC recompiler

#ifdef _MSC_VER

#include <cstdint>

// Define alias macro for MSVC compatibility
#define alias(name) 

// MSVC doesn't have these built-in functions, so we need to provide them
#ifndef __builtin_rotateleft32
inline uint32_t __builtin_rotateleft32(uint32_t x, uint32_t n) {
    return (x << n) | (x >> (32 - n));
}
#endif

#ifndef __builtin_rotateleft64
inline uint64_t __builtin_rotateleft64(uint64_t x, uint32_t n) {
    return (x << n) | (x >> (64 - n));
}
#endif

#ifndef __builtin_clz
inline int __builtin_clz(uint32_t x) {
    unsigned long index;
    return _BitScanReverse(&index, x) ? 31 - index : 32;
}
#endif

#ifndef __builtin_unreachable
#define __builtin_unreachable() __assume(0)
#endif

// Define attribute macros for MSVC
#ifndef __attribute__
#define __attribute__(x)
#endif

// Define weak function attribute for MSVC
#define PPC_WEAK_FUNC

// Ensure the PPC_EXTERN_FUNC macro is properly defined for MSVC
#ifndef PPC_EXTERN_FUNC
#define PPC_EXTERN_FUNC(name) \
    extern "C" void name(PPCContext* context, uint32_t base_addr)
#endif

#endif // _MSC_VER 