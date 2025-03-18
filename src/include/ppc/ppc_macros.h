#pragma once

#include "ppc_types.h"
#include "ppc_context.h"
#include "ppc_memory.h"

// CR register access macros - using the correct method names
#define PPC_CR_GET_LT(cr) ((cr).lt())
#define PPC_CR_GET_GT(cr) ((cr).gt())
#define PPC_CR_GET_EQ(cr) ((cr).eq())
#define PPC_CR_GET_SO(cr) ((cr).so())

// CR register set macros
#define PPC_CR_SET_LT(cr, val) ((cr).set_lt(val))
#define PPC_CR_SET_GT(cr, val) ((cr).set_gt(val))
#define PPC_CR_SET_EQ(cr, val) ((cr).set_eq(val))
#define PPC_CR_SET_SO(cr, val) ((cr).set_so(val))

// Function attribute macro for MSVC compatibility
#ifdef _MSC_VER
#define PPC_FUNC_ALIAS(name) __declspec(dllexport)
#else
#define PPC_FUNC_ALIAS(name) __attribute__((alias(name)))
#endif 