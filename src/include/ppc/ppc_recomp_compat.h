#pragma once
#ifndef PPC_RECOMP_COMPAT_H_INCLUDED
#define PPC_RECOMP_COMPAT_H_INCLUDED

#include "ppc_types.h"
#include "ppc_memory.h"
#include "ppc_context.h"
#include "ppc_register.h"

// Global memory instance
extern PPCMemory g_Memory;

// Helper function to convert PPCContext* to PPCContext&
inline PPCContext& to_ref(PPCContext* ctx) {
    return *ctx;
}

// Wrapper for sub_* functions that take PPCContext& but are called with PPCContext*
template<typename Func>
inline void call_sub_func(Func func, PPCContext* ctx, uint32_t addr) {
    func(*ctx, addr);
}

// Define macros for calling sub functions with pointer to reference conversion
#define CALL_SUB_FUNC(func, ctx_ptr, addr) call_sub_func(func, ctx_ptr, addr)

#endif // PPC_RECOMP_COMPAT_H_INCLUDED 