#pragma once
#ifndef PPC_RECOMP_FIX_H_INCLUDED
#define PPC_RECOMP_FIX_H_INCLUDED

// Include standard headers
#include <cstdint>
#include <cstddef>
#include <type_traits>

// Define alias attribute based on compiler
#ifdef _MSC_VER
#define alias(name)
#else
#define alias(name) __attribute__((alias(#name)))
#endif

// Ensure the PPC_EXTERN_FUNC macro is properly defined for MSVC
#ifdef _MSC_VER
#ifndef PPC_EXTERN_FUNC
#define PPC_EXTERN_FUNC(name) \
    extern "C" void name(PPCContext& context, uint32_t base_addr)
#endif
#endif

// Function implementation macros
#define PPC_FUNC_PROLOGUE() 
#define PPC_FUNC_IMPL(name) void name(PPCContext& ctx, uint32_t base_addr)

#endif // PPC_RECOMP_FIX_H_INCLUDED 