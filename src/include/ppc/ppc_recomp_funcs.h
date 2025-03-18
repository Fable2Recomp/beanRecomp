#pragma once

#include "ppc_types.h"
#include "ppc_memory.h"
#include "ppc_recomp_macros.h"

// Common function types
typedef void (*PPCFunc)(PPCContext* ctx);
typedef uint32_t (*PPCFuncU32)(PPCContext* ctx);
typedef uint64_t (*PPCFuncU64)(PPCContext* ctx);
typedef int32_t (*PPCFuncS32)(PPCContext* ctx);
typedef int64_t (*PPCFuncS64)(PPCContext* ctx);

// Macros for weak function declarations
#define DECLARE_WEAK_FUNCTION(addr) \
    void sub_##addr(PPCContext* ctx);

#define DECLARE_WEAK_FUNCTION_U32(addr) \
    uint32_t sub_##addr(PPCContext* ctx);

#define DECLARE_WEAK_FUNCTION_U64(addr) \
    uint64_t sub_##addr(PPCContext* ctx);

#define DECLARE_WEAK_FUNCTION_S32(addr) \
    int32_t sub_##addr(PPCContext* ctx);

#define DECLARE_WEAK_FUNCTION_S64(addr) \
    int64_t sub_##addr(PPCContext* ctx);

// Macros for function implementation
#define IMPLEMENT_FUNCTION(addr) \
    void sub_##addr(PPCContext* ctx)

#define IMPLEMENT_FUNCTION_U32(addr) \
    uint32_t sub_##addr(PPCContext* ctx)

#define IMPLEMENT_FUNCTION_U64(addr) \
    uint64_t sub_##addr(PPCContext* ctx)

#define IMPLEMENT_FUNCTION_S32(addr) \
    int32_t sub_##addr(PPCContext* ctx)

#define IMPLEMENT_FUNCTION_S64(addr) \
    int64_t sub_##addr(PPCContext* ctx)

// Function prologue/epilogue macros
#define FUNCTION_PROLOGUE \
    /* Save context state if needed */

#define FUNCTION_EPILOGUE \
    /* Restore context state if needed */ 