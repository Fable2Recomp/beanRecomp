#pragma once
#ifndef PPC_REGISTER_H_INCLUDED
#define PPC_REGISTER_H_INCLUDED

#include <cstdint>
#include <type_traits>

// Forward declaration
class PPCXERRegister;

// Define the PPCRegister union
union PPCRegister {
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
    
    PPCRegister() : u64(0) {}
    PPCRegister(uint8_t val) : u32(val) {}
    PPCRegister(int8_t val) : s32(val) {}
    PPCRegister(uint16_t val) : u32(val) {}
    PPCRegister(int16_t val) : s32(val) {}
    PPCRegister(uint32_t val) : u32(val) {}
    PPCRegister(uint64_t val) : u64(val) {}
    PPCRegister(int32_t val) : s32(val) {}
    PPCRegister(int64_t val) : s64(val) {}
    PPCRegister(float val) : f32(val) {}
    PPCRegister(double val) : f64(val) {}

    // Comparison methods
    template<typename T>
    void compare(T value, uint32_t& xer) {
        // Implementation depends on the type
        if constexpr(std::is_same_v<T, uint32_t>) {
            // Unsigned comparison
            if (u32 < value) {
                // Set less than bit
                xer |= 0x80000000;
            } else if (u32 > value) {
                // Set greater than bit
                xer |= 0x40000000;
            } else {
                // Set equal bit
                xer |= 0x20000000;
            }
        } else if constexpr(std::is_same_v<T, int32_t>) {
            // Signed comparison
            if (s32 < value) {
                // Set less than bit
                xer |= 0x80000000;
            } else if (s32 > value) {
                // Set greater than bit
                xer |= 0x40000000;
            } else {
                // Set equal bit
                xer |= 0x20000000;
            }
        } else if constexpr(std::is_same_v<T, float>) {
            // Float comparison
            if (f32 < value) {
                xer |= 0x80000000;
            } else if (f32 > value) {
                xer |= 0x40000000;
            } else {
                xer |= 0x20000000;
            }
        } else if constexpr(std::is_same_v<T, double>) {
            // Double comparison
            if (f64 < value) {
                xer |= 0x80000000;
            } else if (f64 > value) {
                xer |= 0x40000000;
            } else {
                xer |= 0x20000000;
            }
        }
    }
    
    // Overload for 3-argument case used in recomp files
    template<typename T>
    void compare(T value, T value2, uint32_t& xer) {
        // This is actually a 2-argument compare, the middle argument is ignored
        compare(value, xer);
    }
    
    // Special overload for PPCXERRegister
    template<typename T>
    void compare(T value, PPCXERRegister& xer) {
        if constexpr (std::is_same_v<T, uint32_t>) {
            // Unsigned comparison
            bool lt = u32 < value;
            bool gt = u32 > value;
            bool eq = u32 == value;
            
            // Set XER bits
            xer.set_so(xer.so()); // Preserve SO bit
            if (lt) xer.value |= 0x80000000;
            if (gt) xer.value |= 0x40000000;
            if (eq) xer.value |= 0x20000000;
        } else if constexpr (std::is_same_v<T, int32_t>) {
            // Signed comparison
            bool lt = s32 < value;
            bool gt = s32 > value;
            bool eq = s32 == value;
            
            // Set XER bits
            xer.set_so(xer.so()); // Preserve SO bit
            if (lt) xer.value |= 0x80000000;
            if (gt) xer.value |= 0x40000000;
            if (eq) xer.value |= 0x20000000;
        } else {
            // Default comparison
            bool lt = value < value;
            bool gt = value > value;
            bool eq = value == value;
            
            // Set XER bits
            xer.set_so(xer.so()); // Preserve SO bit
            if (lt) xer.value |= 0x80000000;
            if (gt) xer.value |= 0x40000000;
            if (eq) xer.value |= 0x20000000;
        }
    }
    
    // Special overload for PPCXERRegister with 3 arguments
    template<typename T>
    void compare(T value, T value2, PPCXERRegister& xer) {
        if (std::is_unsigned<T>::value) {
            // Unsigned comparison
            u32 = (value < value2) ? 8 : (value > value2) ? 4 : 2;
        } else {
            // Signed comparison
            u32 = (value < value2) ? 8 : (value > value2) ? 4 : 2;
        }
        xer.value = (xer.value & ~0x80000000) | (u32 & 0x80000000);
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