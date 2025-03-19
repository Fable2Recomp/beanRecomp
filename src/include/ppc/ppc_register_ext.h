#pragma once

#include "ppc_forward_decls.h"
#include "ppc_register.h"

// Note: Conversion operators have been removed from this file
// They should be defined as member functions in the PPCRegister union itself

// Add arithmetic operators for PPCRegister
inline PPCRegister operator+(const PPCRegister& a, const PPCRegister& b) {
    PPCRegister result;
    result.u32 = a.u32 + b.u32;
    return result;
}

inline PPCRegister operator-(const PPCRegister& a, const PPCRegister& b) {
    PPCRegister result;
    result.u32 = a.u32 - b.u32;
    return result;
}

inline PPCRegister operator*(const PPCRegister& a, const PPCRegister& b) {
    PPCRegister result;
    result.u32 = a.u32 * b.u32;
    return result;
}

inline PPCRegister operator/(const PPCRegister& a, const PPCRegister& b) {
    PPCRegister result;
    result.u32 = a.u32 / b.u32;
    return result;
}

inline PPCRegister operator%(const PPCRegister& a, const PPCRegister& b) {
    PPCRegister result;
    result.u32 = a.u32 % b.u32;
    return result;
}

inline PPCRegister operator&(const PPCRegister& a, const PPCRegister& b) {
    PPCRegister result;
    result.u32 = a.u32 & b.u32;
    return result;
}

inline PPCRegister operator|(const PPCRegister& a, const PPCRegister& b) {
    PPCRegister result;
    result.u32 = a.u32 | b.u32;
    return result;
}

inline PPCRegister operator^(const PPCRegister& a, const PPCRegister& b) {
    PPCRegister result;
    result.u32 = a.u32 ^ b.u32;
    return result;
}

inline PPCRegister operator<<(const PPCRegister& a, const PPCRegister& b) {
    PPCRegister result;
    result.u32 = a.u32 << b.u32;
    return result;
}

inline PPCRegister operator>>(const PPCRegister& a, const PPCRegister& b) {
    PPCRegister result;
    result.u32 = a.u32 >> b.u32;
    return result;
}

// Comparison operators
inline bool operator==(const PPCRegister& a, const PPCRegister& b) {
    return a.u32 == b.u32;
}

inline bool operator!=(const PPCRegister& a, const PPCRegister& b) {
    return a.u32 != b.u32;
}

inline bool operator<(const PPCRegister& a, const PPCRegister& b) {
    return a.u32 < b.u32;
}

inline bool operator>(const PPCRegister& a, const PPCRegister& b) {
    return a.u32 > b.u32;
}

inline bool operator<=(const PPCRegister& a, const PPCRegister& b) {
    return a.u32 <= b.u32;
}

inline bool operator>=(const PPCRegister& a, const PPCRegister& b) {
    return a.u32 >= b.u32;
} 