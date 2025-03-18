#pragma once

#include "ppc_config.h"
#include "ppc_context.h"
#include "ppc_extern.h"
#include "ppc_memory.h"

// Platform-specific definitions
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

// Include all recompiler-specific functionality
#include "ppc_recomp_shared.h"

// Memory allocation hook
void MemoryAllocatorHook(PPCContext* context); 