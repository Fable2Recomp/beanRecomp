#pragma once

#include "../../include/ppc/ppc_extern.h"

// Wrapper function to handle calls that pass both context and base
template<typename Func>
inline void call_ppc_func(Func func, PPCContext* context, uint32_t base) {
    func(context);
}

// Define wrappers for all the sub_ functions that are called with context and base
#define DEFINE_SUB_WRAPPER(name) \
    inline void name(PPCContext* context, uint32_t base) { \
        name(context); \
    }

// Use this macro in ppc_recomp.cpp files to redirect function calls
#define sub_call(name, ctx, base) name(ctx) 