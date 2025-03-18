#pragma once

#include "ppc_memory.h"
#include "ppc_context.h"

// Function call macro
#define PPC_CALL_FUNC(func) func(&ctx, 0)

// Function prologue macro
#define PPC_FUNC_PROLOGUE() PPCContext& ctx = g_PPCContext

// Function implementation macro for MSVC
#ifdef _MSC_VER
#define PPC_FUNC_IMPL(name) void name(PPCContext* context)
#define PPC_WEAK_FUNC(name) void name(PPCContext* context)
#else
#define PPC_FUNC_IMPL(name) void name(PPCContext* context)
#define PPC_WEAK_FUNC(name) void name(PPCContext* context) __attribute__((weak))
#endif 