#pragma once
#ifndef PPC_REGISTER_OPS_H_INCLUDED
#define PPC_REGISTER_OPS_H_INCLUDED

#include "ppc_register.h"
#include <cstdint>

// Extension methods for PPCRegister
namespace PPCRegisterOps {
    // Compare operations
    inline bool compare(const PPCRegister& reg, uint32_t value) {
        return reg.u32 == value;
    }
    
    inline bool compare(const PPCRegister& reg, int32_t value) {
        return reg.s32 == value;
    }
    
    // Equality check
    inline bool eq(const PPCRegister& reg) {
        return reg.u32 == 0;
    }
    
    // Less than check
    inline bool lt(const PPCRegister& reg) {
        return reg.s32 < 0;
    }
    
    // Greater than check
    inline bool gt(const PPCRegister& reg) {
        return reg.s32 > 0;
    }
}

// Free functions for use in recompiled code
inline bool eq(const PPCRegister& reg) {
    return PPCRegisterOps::eq(reg);
}

inline bool lt(const PPCRegister& reg) {
    return PPCRegisterOps::lt(reg);
}

inline bool gt(const PPCRegister& reg) {
    return PPCRegisterOps::gt(reg);
}

#endif // PPC_REGISTER_OPS_H_INCLUDED 