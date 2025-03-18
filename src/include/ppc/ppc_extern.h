#pragma once

#include "ppc_types.h"
#include "ppc_context.h"
#include "ppc_memory.h"

// Forward declarations for function types
typedef void (*PPCFuncPtr)(PPCContext*);
typedef void (*PPCFuncPtrWithBase)(PPCContext*, uint32_t);
typedef void (*PPCFuncPtrWithBaseRef)(PPCContext&, uint32_t);

// Global memory instance
extern PPCMemory g_Memory;

// CR register operation macros
#define PPC_CR_LT(cr) ((cr).getLT())
#define PPC_CR_GT(cr) ((cr).getGT())
#define PPC_CR_EQ(cr) ((cr).getEQ())
#define PPC_CR_SO(cr) ((cr).getSO())

// Function implementation macros
#define PPC_FUNC_PROLOGUE() \
    if (!context) return; \
    PPCContext& ctx = *context

#define PPC_FUNC_IMPL(name) \
    void name(PPCContext& ctx, uint32_t base_addr)

#define PPC_WEAK_FUNC(name) \
    void name(PPCContext& ctx, uint32_t base_addr)

// Define the PPC_EXTERN_FUNC macro based on compiler
#ifdef _MSC_VER
#define PPC_EXTERN_FUNC(name) extern void __imp__##name(PPCContext& ctx, uint32_t base_addr); \
                              extern void name(PPCContext& ctx, uint32_t base_addr)
#else
#define PPC_EXTERN_FUNC(name) extern void __imp__##name(PPCContext& ctx, uint32_t base_addr) __attribute__((weak)); \
                              extern void name(PPCContext& ctx, uint32_t base_addr) __attribute__((weak))
#endif

// Macro to implement a PPC function
#define PPC_FUNC(name) \
    extern "C" void name(PPCContext* context)

// Macro for calling an indirect function through a function pointer
#define PPC_CALL_INDIRECT_FUNC(func_ptr) \
    ((PPCFuncPtr)(func_ptr))(context)

// Macro for calling a function with context
#define PPC_CALL_FUNC(func_name) \
    func_name(context)

// Macro for calling a function with both context and base args
#define PPC_CALL_FUNC_WITH_BASE(func_name, base_addr) \
    func_name(*context, base_addr)

// Helper function for function mapping
typedef struct {
    uint32_t address;
    PPCFuncPtrWithBaseRef func;
} PPCFuncMapping; 