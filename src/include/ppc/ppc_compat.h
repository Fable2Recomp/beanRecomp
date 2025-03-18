#pragma once

// Condition register method compatibility macros
#define getEQ() eq()
#define getLT() lt()
#define getGT() gt()
#define getSO() so()

// Memory access compatibility macros are now handled in ppc_types.h 