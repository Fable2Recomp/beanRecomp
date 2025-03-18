#pragma once

#ifdef _MSC_VER
#include <intrin.h>

// MSVC equivalents for GCC/Clang built-ins
static inline uint32_t __builtin_rotateleft32(uint32_t x, uint32_t n) {
    return _rotl(x, n);
}

static inline uint64_t __builtin_rotateleft64(uint64_t x, uint32_t n) {
    return _rotl64(x, n);
}

#define alias(x) [[msvc::alias(x)]]
#endif 