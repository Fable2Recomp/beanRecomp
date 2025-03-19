#pragma once
#ifndef PPC_CONTEXT_H_INCLUDED
#define PPC_CONTEXT_H_INCLUDED

#include <cstdint>
#include <array>
#include <cstring> // For memset
#include <stdexcept>
#include "ppc_register.h" // Include the PPCRegister definition
#include "ppc_types.h"

// Forward declarations
class PPCContext;

// Global instance of PPCContext
extern PPCContext g_PPCContext;

// Helper functions for register access
PPCRegister* get_register_ptr(PPCContext* context, uint32_t reg);

// Memory access helper
void* GetMemoryPointer(uint32_t address);

// PPC Context class
class PPCContext {
public:
    // General Purpose Registers
    std::array<PPCRegister, 32> gpr;
    
    // Special Purpose Registers
    PPCCRRegister cr;
    PPCXERRegister xer;
    
    // Constructor
    PPCContext() {
        reset();
    }
    
    // Reset all registers to initial state
    void reset() {
        for (auto& reg : gpr) reg.clear();
        cr.value = 0;
        xer.value = 0;
    }
    
    // Register access methods
    PPCRegister& get_r(int reg) {
        return gpr[reg];
    }
    
    const PPCRegister& get_r(int reg) const {
        return gpr[reg];
    }
    
    // Type-specific register access methods
    u8 PPCRegister_u8(int index) { return get_r(index).u8; }
    s8 PPCRegister_s8(int index) { return get_r(index).s8; }
    u16 PPCRegister_u16(int index) { return get_r(index).u16; }
    s16 PPCRegister_s16(int index) { return get_r(index).s16; }
    u32 PPCRegister_u32(int index) { return get_r(index).u32; }
    s32 PPCRegister_s32(int index) { return get_r(index).s32; }
    u64 PPCRegister_u64(int index) { return get_r(index).u64; }
    s64 PPCRegister_s64(int index) { return get_r(index).s64; }
    f32 PPCRegister_f32(int index) { return get_r(index).f32; }
    f64 PPCRegister_f64(int index) { return get_r(index).f64; }
    
    // State management
    bool is_valid() const {
        return true; // TODO: Implement validation logic
    }
    
    void save_state(uint8_t* buffer, size_t& size);
    void restore_state(const uint8_t* buffer, size_t size);
};

// Helper function implementation
inline PPCRegister* get_register_ptr(PPCContext* context, uint32_t reg) {
    if (!context) return nullptr;
    if (reg >= 32) return nullptr;
    return &context->gpr[reg];
}

#endif // PPC_CONTEXT_H_INCLUDED
