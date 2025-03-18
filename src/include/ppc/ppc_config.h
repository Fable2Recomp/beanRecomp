#pragma once
#ifndef PPC_CONFIG_H_INCLUDED
#define PPC_CONFIG_H_INCLUDED

#include <cstdint>

#define PPC_CONFIG_SKIP_LR
#define PPC_CONFIG_CTR_AS_LOCAL
#define PPC_CONFIG_XER_AS_LOCAL
#define PPC_CONFIG_RESERVED_AS_LOCAL
#define PPC_CONFIG_SKIP_MSR
#define PPC_CONFIG_CR_AS_LOCAL
#define PPC_CONFIG_NON_ARGUMENT_AS_LOCAL
#define PPC_CONFIG_NON_VOLATILE_AS_LOCAL

#define PPC_IMAGE_BASE 0x82000000ull
#define PPC_IMAGE_SIZE 0x10F0000ull
#define PPC_CODE_BASE 0x82090000ull
#define PPC_CODE_SIZE 0x380DE0ull

#ifdef PPC_INCLUDE_DETAIL
#include "ppc_detail.h"
#endif

// Configuration options for the PPC recompilation

// Define the memory size (in bytes)
#define PPC_MEMORY_SIZE (256 * 1024 * 1024)  // 256MB

// Define the stack size (in bytes)
#define PPC_STACK_SIZE (1 * 1024 * 1024)  // 1MB

// Define the heap size (in bytes)
#define PPC_HEAP_SIZE (64 * 1024 * 1024)  // 64MB

// Define the base address for the PPC code
#define PPC_BASE_ADDRESS 0x82000000

// Define the stack address
#define PPC_STACK_ADDRESS 0x10000000

// Define the heap address
#define PPC_HEAP_ADDRESS 0x20000000

// Define debug options
#define PPC_DEBUG_ENABLED 1
#define PPC_DEBUG_TRACE 1
#define PPC_DEBUG_MEMORY 1

// Define optimization options
#define PPC_OPT_LEVEL 2  // 0=None, 1=Basic, 2=Full

#endif
