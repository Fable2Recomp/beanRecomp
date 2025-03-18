#pragma once

#include "ppc_context.h"

// Function type definitions
typedef void (*PPCFunc)(PPCContext*);

// Macro for function implementation
#define PPC_FUNC_IMPL(name) void name(PPCContext& ctx)

// Macro for function prologue
#define PPC_FUNC_PROLOGUE() 

// Wrapper function to handle calling functions with context
template<typename Func>
inline void call_ppc_func(Func func, PPCContext* ctx) {
    func(ctx);
}

// Define a macro to wrap all sub_XXXXXXXX functions
#define DEFINE_SUB_WRAPPER(addr) \
    inline void sub_##addr##_wrapper(PPCContext* ctx) { \
        call_ppc_func(sub_##addr, ctx); \
    }

// Replace all direct calls to sub_XXXXXXXX(ctx) with this macro
#define sub_call(addr) sub_##addr##_wrapper(&ctx)

// Function declarations
void sub_82090000(PPCContext* context);
void sub_82090070(PPCContext* context);
void sub_820900A8(PPCContext* context);
void sub_82090108(PPCContext* context);
void sub_82090158(PPCContext* context);
void sub_820901B0(PPCContext* context);
void sub_820901E0(PPCContext* context);
void sub_820901F0(PPCContext* context);
void sub_82090200(PPCContext* context);
void sub_82090210(PPCContext* context);

// Define wrappers for functions used in ppc_recomp.0.cpp
DEFINE_SUB_WRAPPER(82090000)
DEFINE_SUB_WRAPPER(82090070)
DEFINE_SUB_WRAPPER(820900A8)
DEFINE_SUB_WRAPPER(82090108)
DEFINE_SUB_WRAPPER(82090158)
DEFINE_SUB_WRAPPER(820901B0)
DEFINE_SUB_WRAPPER(820901E0)
DEFINE_SUB_WRAPPER(820901F0)
DEFINE_SUB_WRAPPER(82090200)
DEFINE_SUB_WRAPPER(82090210)

// Add more wrappers as needed for functions used in your code 