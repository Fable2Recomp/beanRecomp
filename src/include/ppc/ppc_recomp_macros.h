#pragma once
#ifndef PPC_RECOMP_MACROS_H_INCLUDED
#define PPC_RECOMP_MACROS_H_INCLUDED

#include "ppc_memory_macros.h"
#include <cstdint>
#include <type_traits>
#include <stdexcept>
#include <string>

// Recompiler-specific macros
#define PPC_FUNC_IMPL(name) \
    void name(PPCContext* ctx) 

#define PPC_EXTERN_FUNC(name) \
    extern void name(PPCContext* ctx)

// Context wrapper macros
#define ctx_arrow(ctx) \
    (reinterpret_cast<PPCContext*>(ctx))

#define ctx_ref(ctx) \
    (*reinterpret_cast<PPCContext*>(ctx))

// Register access macros
#define get_gpr(ctx, n) \
    (ctx_arrow(ctx)->gpr[n])

#define get_fpr(ctx, n) \
    (ctx_arrow(ctx)->fpr[n])

#define get_cr(ctx) \
    (ctx_arrow(ctx)->cr)

#define get_xer(ctx) \
    (ctx_arrow(ctx)->xer)

#define get_lr(ctx) \
    (ctx_arrow(ctx)->lr)

#define get_ctr(ctx) \
    (ctx_arrow(ctx)->ctr)

#endif // PPC_RECOMP_MACROS_H_INCLUDED 