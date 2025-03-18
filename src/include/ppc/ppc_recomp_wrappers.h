#pragma once
#ifndef PPC_RECOMP_WRAPPERS_H
#define PPC_RECOMP_WRAPPERS_H

#include "ppc_context.h"
#include "ppc_recomp_shared.h"
#include "ppc_recomp_fix.h"

// Wrapper functions for all the external functions
// These convert PPCContext* to PPCContext& for function calls

// Define a macro to generate wrapper functions
#define DEFINE_WRAPPER(func) \
    inline void func##_wrapper(PPCContext* ctx, uint32_t addr) { \
        func(*ctx, addr); \
    }

// Generate wrapper functions for external functions
DEFINE_WRAPPER(sub_82152C88)
DEFINE_WRAPPER(sub_82152D08)
DEFINE_WRAPPER(sub_821520D8)
DEFINE_WRAPPER(sub_821538A8)
DEFINE_WRAPPER(sub_82176EF0)
DEFINE_WRAPPER(sub_82164770)
DEFINE_WRAPPER(sub_82097860)
DEFINE_WRAPPER(sub_8210D870)
DEFINE_WRAPPER(sub_820B3DC0)
DEFINE_WRAPPER(sub_82176E40)
DEFINE_WRAPPER(sub_821519F0)
DEFINE_WRAPPER(sub_82151AA8)
DEFINE_WRAPPER(sub_821760C0)
DEFINE_WRAPPER(sub_82177C38)
DEFINE_WRAPPER(sub_82177C98)

// Add more wrapper functions as needed

#endif // PPC_RECOMP_WRAPPERS_H 