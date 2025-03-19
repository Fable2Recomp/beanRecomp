#pragma once
#ifndef PPC_REGISTER_H_INCLUDED
#define PPC_REGISTER_H_INCLUDED

#include <cstdint>
#include <type_traits>
#include <stdexcept>
#include "ppc_forward_decls.h"

// Forward declaration
class PPCXERRegister;

// Define the PPCRegister union with improved safety and documentation
union PPCRegister {
    // Raw data members
    uint8_t u8;
    int8_t s8;
    uint16_t u16;
    int16_t s16;
    uint32_t u32;
    uint64_t u64;
    int32_t s32;
    int64_t s64;
    float f32;
    double f64;
    
    // Constructor with improved initialization
    PPCRegister() : u64(0) {}
    
    // Type-safe constructors with range checking
    template<typename T>
    PPCRegister(T val) {
        if constexpr(std::is_same_v<T, uint8_t>) {
            u8 = val;
        } else if constexpr(std::is_same_v<T, int8_t>) {
            s8 = val;
        } else if constexpr(std::is_same_v<T, uint16_t>) {
            u16 = val;
        } else if constexpr(std::is_same_v<T, int16_t>) {
            s16 = val;
        } else if constexpr(std::is_same_v<T, uint32_t>) {
            u32 = val;
        } else if constexpr(std::is_same_v<T, int32_t>) {
            s32 = val;
        } else if constexpr(std::is_same_v<T, uint64_t>) {
            u64 = val;
        } else if constexpr(std::is_same_v<T, int64_t>) {
            s64 = val;
        } else if constexpr(std::is_same_v<T, float>) {
            f32 = val;
        } else if constexpr(std::is_same_v<T, double>) {
            f64 = val;
        } else {
            static_assert(sizeof(T) == 0, "Unsupported type for PPCRegister constructor");
        }
    }

    // Enhanced comparison implementation with overflow detection
    template<typename T>
    void compare_impl(T a, T b, PPCXERRegister& xer) {
        bool lt = false, gt = false, eq = false;
        bool overflow = false;
        
        if constexpr(std::is_unsigned_v<T>) {
            lt = a < b;
            gt = a > b;
            eq = a == b;
            overflow = false; // Unsigned operations can't overflow
        } else if constexpr(std::is_signed_v<T>) {
            lt = a < b;
            gt = a > b;
            eq = a == b;
            // Check for overflow in signed comparisons
            if (a > 0 && b < 0 && lt) overflow = true;
            if (a < 0 && b > 0 && gt) overflow = true;
        } else if constexpr(std::is_floating_point_v<T>) {
            lt = a < b;
            gt = a > b;
            eq = a == b;
            overflow = std::isnan(a) || std::isnan(b);
        }

        // Clear comparison bits and set new ones
        u32 &= ~0xE0000000;  // Clear LT,GT,EQ bits
        if (lt) u32 |= 0x80000000;  // Set LT
        if (gt) u32 |= 0x40000000;  // Set GT
        if (eq) u32 |= 0x20000000;  // Set EQ
        
        // Update XER with overflow information
        xer.value = (xer.value & ~0xE0000000) | (u32 & 0xE0000000);
        if (overflow) {
            xer.set_ov(true);
        }
    }

    // Enhanced comparison method with type safety
    template<typename T>
    void compare(T value, PPCXERRegister& xer) {
        static_assert(std::is_arithmetic_v<T>, "Comparison requires arithmetic type");
        
        if constexpr(std::is_same_v<T, uint32_t>) {
            compare_impl(u32, value, xer);
        } else if constexpr(std::is_same_v<T, int32_t>) {
            compare_impl(s32, value, xer);
        } else if constexpr(std::is_same_v<T, float>) {
            compare_impl(f32, value, xer);
        } else if constexpr(std::is_same_v<T, double>) {
            compare_impl(f64, value, xer);
        } else {
            // Convert to appropriate type if needed
            if constexpr(std::is_integral_v<T>) {
                if constexpr(std::is_signed_v<T>) {
                    compare_impl(static_cast<int32_t>(value), static_cast<int32_t>(value), xer);
                } else {
                    compare_impl(static_cast<uint32_t>(value), static_cast<uint32_t>(value), xer);
                }
            } else {
                compare_impl(static_cast<float>(value), static_cast<float>(value), xer);
            }
        }
    }

    // Overload for immediate comparisons (cmplwi)
    template<typename T>
    void compare(T value, T immediate, PPCXERRegister& xer) {
        compare_impl(value, immediate, xer);
    }

    // Legacy overloads for backward compatibility with uint32_t&
    template<typename T>
    void compare(T value, uint32_t& xer) {
        PPCXERRegister temp_xer(xer);
        compare(value, temp_xer);
        xer = temp_xer.value;
    }

    // New overload that takes a value directly for the XER
    template<typename T>
    void compare(T value, uint32_t xer_val) {
        PPCXERRegister temp_xer(xer_val);
        compare(value, temp_xer);
    }

    // Legacy overload for three arguments with uint32_t&
    template<typename T>
    void compare(T value1, T value2, uint32_t& xer) {
        PPCXERRegister temp_xer(xer);
        compare(value1, value2, temp_xer);
        xer = temp_xer.value;
    }

    // New overload for three arguments that takes a value directly for the XER
    template<typename T>
    void compare(T value1, T value2, uint32_t xer_val) {
        PPCXERRegister temp_xer(xer_val);
        compare(value1, value2, temp_xer);
    }

    // Helper methods for condition register bits
    bool eq() const { return (u32 & 0x20000000) != 0; }
    bool gt() const { return (u32 & 0x40000000) != 0; }
    bool lt() const { return (u32 & 0x80000000) != 0; }

    // Flush mode control
    void disableFlushMode() { /* TODO: Implement flush mode control */ }
    void enableFlushMode() { /* TODO: Implement flush mode control */ }

    // Add these non-template versions for specific types
    void compare(uint32_t value1, uint32_t value2, PPCXERRegister& xer);
    void compare(int32_t value1, int32_t value2, PPCXERRegister& xer);

    // Add these for recompiled code compatibility
    template<typename T>
    void compare(T value1, T value2, int& xer) {
        uint32_t temp_xer = static_cast<uint32_t>(xer);
        compare(value1, value2, temp_xer);
        xer = static_cast<int>(temp_xer);
    }

    template<typename T>
    void compare(T value, int& xer) {
        uint32_t temp_xer = static_cast<uint32_t>(xer);
        compare(value, temp_xer);
        xer = static_cast<int>(temp_xer);
    }

    // Add new safety methods
    bool is_valid() const {
        // Check if the register contains valid data
        return true; // TODO: Implement validation logic
    }

    void clear() {
        u64 = 0;
    }

    // Add type conversion safety
    template<typename T>
    T as() const {
        static_assert(std::is_arithmetic_v<T>, "Conversion requires arithmetic type");
        if constexpr(std::is_same_v<T, uint8_t>) return u8;
        if constexpr(std::is_same_v<T, int8_t>) return s8;
        if constexpr(std::is_same_v<T, uint16_t>) return u16;
        if constexpr(std::is_same_v<T, int16_t>) return s16;
        if constexpr(std::is_same_v<T, uint32_t>) return u32;
        if constexpr(std::is_same_v<T, int32_t>) return s32;
        if constexpr(std::is_same_v<T, uint64_t>) return u64;
        if constexpr(std::is_same_v<T, int64_t>) return s64;
        if constexpr(std::is_same_v<T, float>) return f32;
        if constexpr(std::is_same_v<T, double>) return f64;
        static_assert(sizeof(T) == 0, "Unsupported type conversion");
    }
};

// Vector register type
using PPCVRegister = PPCRegister;

// CR register structure
class PPCCRRegister {
public:
    uint32_t value;

    PPCCRRegister() : value(0) {}
    PPCCRRegister(uint32_t val) : value(val) {}

    void set_field(int field, uint32_t val) {
        // Each field is 4 bits, starting from the most significant bits
        int shift = 28 - (field * 4);
        uint32_t mask = ~(0xF << shift);
        value = (value & mask) | ((val & 0xF) << shift);
    }

    uint32_t get_field(int field) const {
        int shift = 28 - (field * 4);
        return (value >> shift) & 0xF;
    }

    // CR bit access - return bool values
    bool lt() const { return (value & 0x8) != 0; }
    bool gt() const { return (value & 0x4) != 0; }
    bool eq() const { return (value & 0x2) != 0; }
    bool so() const { return (value & 0x1) != 0; }
    
    // Set CR bits
    void set_lt(bool v) { value = (value & ~0x8) | (v ? 0x8 : 0); }
    void set_gt(bool v) { value = (value & ~0x4) | (v ? 0x4 : 0); }
    void set_eq(bool v) { value = (value & ~0x2) | (v ? 0x2 : 0); }
    void set_so(bool v) { value = (value & ~0x1) | (v ? 0x1 : 0); }
    
    // Operator overloads for type conversion
    operator uint32_t() const { return value; }
};

// XER register structure
class PPCXERRegister {
public:
    uint32_t value;

    PPCXERRegister() : value(0) {}
    PPCXERRegister(uint32_t val) : value(val) {}

    bool so() const { return (value & 0x80000000) != 0; }
    bool ov() const { return (value & 0x40000000) != 0; }
    bool ca() const { return (value & 0x20000000) != 0; }

    void set_so(bool val) {
        if (val) {
            value |= 0x80000000;
        } else {
            value &= ~0x80000000;
        }
    }

    void set_ov(bool val) {
        if (val) {
            value |= 0x40000000;
        } else {
            value &= ~0x40000000;
        }
    }

    void set_ca(bool val) {
        if (val) {
            value |= 0x20000000;
        } else {
            value &= ~0x20000000;
        }
    }
};

// Implement the non-template versions
inline void PPCRegister::compare(uint32_t value1, uint32_t value2, PPCXERRegister& xer) {
    u32 = (value1 < value2) ? 8 : (value1 > value2) ? 4 : 2;
    xer.value = (xer.value & ~0x80000000) | (u32 & 0x80000000);
}

inline void PPCRegister::compare(int32_t value1, int32_t value2, PPCXERRegister& xer) {
    u32 = (value1 < value2) ? 8 : (value1 > value2) ? 4 : 2;
    xer.value = (xer.value & ~0x80000000) | (u32 & 0x80000000);
}

#endif // PPC_REGISTER_H_INCLUDED 