#pragma once
#ifndef PPC_RECOMP_PATCH_H_INCLUDED
#define PPC_RECOMP_PATCH_H_INCLUDED

// Include all necessary headers
#include "../include/ppc/ppc_types.h"
#include "../include/ppc/ppc_memory.h"
#include "../include/ppc/ppc_context.h"
#include "../include/ppc/ppc_register.h"
#include "../include/ppc/ppc_memory_macros.h"
#include <type_traits>
#include <cstdint>
#include <stdexcept>
#include "ppc_recomp_macros.h"

// Global memory instance
extern PPCMemory g_Memory;

// Forward declarations for all sub functions referenced in the recompiled code
extern "C" {
    void sub_82152C88(PPCContext* ctx, uint32_t addr);
    void sub_82152D08(PPCContext* ctx, uint32_t addr);
    void sub_821520D8(PPCContext* ctx, uint32_t addr);
    void sub_821538A8(PPCContext* ctx, uint32_t addr);
    void sub_82176EF0(PPCContext* ctx, uint32_t addr);
    void sub_82164770(PPCContext* ctx, uint32_t addr);
    void sub_82097860(PPCContext* ctx, uint32_t addr);
    void sub_8210D870(PPCContext* ctx, uint32_t addr);
    void sub_820B3DC0(PPCContext* ctx, uint32_t addr);
    void sub_82176E40(PPCContext* ctx, uint32_t addr);
    void sub_821519F0(PPCContext* ctx, uint32_t addr);
    void sub_82151AA8(PPCContext* ctx, uint32_t addr);
    void sub_821760C0(PPCContext* ctx, uint32_t addr);
    void sub_82177C38(PPCContext* ctx, uint32_t addr);
    void sub_82177C98(PPCContext* ctx, uint32_t addr);
    void sub_82178EF0(PPCContext* ctx, uint32_t addr);
}

// Define stub implementations for these functions if they're not defined elsewhere
#ifdef _MSC_VER
#pragma warning(disable: 4100) // Disable warning about unused parameters
#endif

// Stub implementations
#ifndef EXTERNAL_IMPLEMENTATION
inline void sub_82152C88(PPCContext* ctx, uint32_t addr) {}
inline void sub_82152D08(PPCContext* ctx, uint32_t addr) {}
inline void sub_821520D8(PPCContext* ctx, uint32_t addr) {}
inline void sub_821538A8(PPCContext* ctx, uint32_t addr) {}
inline void sub_82176EF0(PPCContext* ctx, uint32_t addr) {}
inline void sub_82164770(PPCContext* ctx, uint32_t addr) {}
inline void sub_82097860(PPCContext* ctx, uint32_t addr) {}
inline void sub_8210D870(PPCContext* ctx, uint32_t addr) {}
inline void sub_820B3DC0(PPCContext* ctx, uint32_t addr) {}
inline void sub_82176E40(PPCContext* ctx, uint32_t addr) {}
inline void sub_821519F0(PPCContext* ctx, uint32_t addr) {}
inline void sub_82151AA8(PPCContext* ctx, uint32_t addr) {}
inline void sub_821760C0(PPCContext* ctx, uint32_t addr) {}
inline void sub_82177C38(PPCContext* ctx, uint32_t addr) {}
inline void sub_82177C98(PPCContext* ctx, uint32_t addr) {}
inline void sub_82178EF0(PPCContext* ctx, uint32_t addr) {}
#endif

// Wrapper functions for sub functions
inline void sub_82152C88_wrapper(PPCContext* ctx, uint32_t addr) { sub_82152C88(ctx, addr); }
inline void sub_82152D08_wrapper(PPCContext* ctx, uint32_t addr) { sub_82152D08(ctx, addr); }
inline void sub_821520D8_wrapper(PPCContext* ctx, uint32_t addr) { sub_821520D8(ctx, addr); }
inline void sub_821538A8_wrapper(PPCContext* ctx, uint32_t addr) { sub_821538A8(ctx, addr); }
inline void sub_82176EF0_wrapper(PPCContext* ctx, uint32_t addr) { sub_82176EF0(ctx, addr); }
inline void sub_82164770_wrapper(PPCContext* ctx, uint32_t addr) { sub_82164770(ctx, addr); }
inline void sub_82097860_wrapper(PPCContext* ctx, uint32_t addr) { sub_82097860(ctx, addr); }
inline void sub_8210D870_wrapper(PPCContext* ctx, uint32_t addr) { sub_8210D870(ctx, addr); }
inline void sub_820B3DC0_wrapper(PPCContext* ctx, uint32_t addr) { sub_820B3DC0(ctx, addr); }
inline void sub_82176E40_wrapper(PPCContext* ctx, uint32_t addr) { sub_82176E40(ctx, addr); }
inline void sub_821519F0_wrapper(PPCContext* ctx, uint32_t addr) { sub_821519F0(ctx, addr); }
inline void sub_82151AA8_wrapper(PPCContext* ctx, uint32_t addr) { sub_82151AA8(ctx, addr); }
inline void sub_821760C0_wrapper(PPCContext* ctx, uint32_t addr) { sub_821760C0(ctx, addr); }
inline void sub_82177C38_wrapper(PPCContext* ctx, uint32_t addr) { sub_82177C38(ctx, addr); }
inline void sub_82177C98_wrapper(PPCContext* ctx, uint32_t addr) { sub_82177C98(ctx, addr); }
inline void sub_82178EF0_wrapper(PPCContext* ctx, uint32_t addr) { sub_82178EF0(ctx, addr); }

// Helper macros for converting between pointer and reference
#define PPC_CTX_PTR_TO_REF(ctx_ptr) (*ctx_ptr)
#define PPC_CTX_REF_TO_PTR(ctx_ref) (&ctx_ref)

// Fix for the '!' operator issue with PPCContext
inline bool operator!(const PPCContext& ctx) {
    return false; // PPCContext is always valid
}

// Smart pointer wrapper for context access
template<typename T>
class ContextWrapper {
private:
    T* ptr;
    PPCContext* ctx;
    
public:
    ContextWrapper(T* p, PPCContext* c) : ptr(p), ctx(c) {}
    
    T* operator->() {
        if (!ptr || !ctx) {
            throw std::runtime_error("Invalid context access");
        }
        return ptr;
    }
    
    T& operator*() {
        if (!ptr || !ctx) {
            throw std::runtime_error("Invalid context access");
        }
        return *ptr;
    }
    
    operator bool() const {
        return ptr != nullptr && ctx != nullptr;
    }
};

// Context access helper
#define ctx_arrow(ctx) ContextWrapper<PPCContext>(ctx, ctx)

// Memory access safety checks
#define PPC_CHECK_MEMORY_ACCESS(addr, size) \
    do { \
        if (!g_Memory || !g_Memory->is_valid_address(addr, size)) { \
            throw std::runtime_error("Invalid memory access at address " + std::to_string(addr)); \
        } \
    } while(0)

// Base memory access functions
template<typename T>
T ReadMemory8(PPCContext* ctx, uint32_t addr) {
    PPC_CHECK_MEMORY_ACCESS(addr, sizeof(T));
    return g_Memory->read<T>(addr);
}

template<typename T>
void WriteMemory8(PPCContext* ctx, uint32_t addr, T value) {
    PPC_CHECK_MEMORY_ACCESS(addr, sizeof(T));
    g_Memory->write<T>(addr, value);
}

// Primary memory access macros
#define PPC_LOAD_U8(ctx, addr) ReadMemory8<uint8_t>(ctx, addr)
#define PPC_LOAD_U16(ctx, addr) ReadMemory16(ctx, addr)
#define PPC_LOAD_U32(ctx, addr) ReadMemory32(ctx, addr)
#define PPC_LOAD_U64(ctx, addr) ReadMemory64(ctx, addr)

#define PPC_STORE_U8(ctx, addr, val) WriteMemory8<uint8_t>(ctx, addr, val)
#define PPC_STORE_U16(ctx, addr, val) WriteMemory16(ctx, addr, val)
#define PPC_STORE_U32(ctx, addr, val) WriteMemory32(ctx, addr, val)
#define PPC_STORE_U64(ctx, addr, val) WriteMemory64(ctx, addr, val)

// Function-style macros for variadic argument handling
#define PPC_LOAD_U8_FUNC(ctx_ptr, addr, ...) PPC_LOAD_U8(ctx_ptr, addr)
#define PPC_LOAD_U16_FUNC(ctx_ptr, addr, ...) PPC_LOAD_U16(ctx_ptr, addr)
#define PPC_LOAD_U32_FUNC(ctx_ptr, addr, ...) PPC_LOAD_U32(ctx_ptr, addr)
#define PPC_LOAD_U64_FUNC(ctx_ptr, addr, ...) PPC_LOAD_U64(ctx_ptr, addr)

#define PPC_STORE_U8_FUNC(ctx_ptr, addr, val, ...) PPC_STORE_U8(ctx_ptr, addr, val)
#define PPC_STORE_U16_FUNC(ctx_ptr, addr, val, ...) PPC_STORE_U16(ctx_ptr, addr, val)
#define PPC_STORE_U32_FUNC(ctx_ptr, addr, val, ...) PPC_STORE_U32(ctx_ptr, addr, val)
#define PPC_STORE_U64_FUNC(ctx_ptr, addr, val, ...) PPC_STORE_U64(ctx_ptr, addr, val)

// Legacy aliases for backward compatibility
#define PPC_Read_U8 PPC_LOAD_U8
#define PPC_Read_U16 PPC_LOAD_U16
#define PPC_Read_U32 PPC_LOAD_U32
#define PPC_Read_U64 PPC_LOAD_U64
#define PPC_Write_U8 PPC_STORE_U8
#define PPC_Write_U16 PPC_STORE_U16
#define PPC_Write_U32 PPC_STORE_U32
#define PPC_Write_U64 PPC_STORE_U64

// Register access safety checks
#define PPC_CHECK_REGISTER_ACCESS(reg) \
    do { \
        if (reg < 0 || reg >= 32) { \
            throw std::out_of_range("Invalid register index: " + std::to_string(reg)); \
        } \
    } while(0)

// Enhanced register access functions
template<typename T>
T GetRegisterValue(PPCContext* ctx, int reg) {
    PPC_CHECK_REGISTER_ACCESS(reg);
    return ctx->get_r(reg).as<T>();
}

template<typename T>
void SetRegisterValue(PPCContext* ctx, int reg, T value) {
    PPC_CHECK_REGISTER_ACCESS(reg);
    ctx->get_r(reg) = PPCRegister(value);
}

// Condition register access
bool GetCRBit(PPCContext* ctx, int bit) {
    if (bit < 0 || bit >= 32) {
        throw std::out_of_range("Invalid CR bit index: " + std::to_string(bit));
    }
    return (ctx->cr.value & (1 << bit)) != 0;
}

void SetCRBit(PPCContext* ctx, int bit, bool value) {
    if (bit < 0 || bit >= 32) {
        throw std::out_of_range("Invalid CR bit index: " + std::to_string(bit));
    }
    if (value) {
        ctx->cr.value |= (1 << bit);
    } else {
        ctx->cr.value &= ~(1 << bit);
    }
}

// XER register access
bool GetXERBit(PPCContext* ctx, int bit) {
    if (bit < 0 || bit >= 32) {
        throw std::out_of_range("Invalid XER bit index: " + std::to_string(bit));
    }
    return (ctx->xer.value & (1 << bit)) != 0;
}

void SetXERBit(PPCContext* ctx, int bit, bool value) {
    if (bit < 0 || bit >= 32) {
        throw std::out_of_range("Invalid XER bit index: " + std::to_string(bit));
    }
    if (value) {
        ctx->xer.value |= (1 << bit);
    } else {
        ctx->xer.value &= ~(1 << bit);
    }
}

// FPSCR register access
uint32_t GetFPSCRBit(PPCContext* ctx, int bit) {
    if (bit < 0 || bit >= 32) {
        throw std::out_of_range("Invalid FPSCR bit index: " + std::to_string(bit));
    }
    return (ctx->fpscr.u32 & (1 << bit)) != 0;
}

void SetFPSCRBit(PPCContext* ctx, int bit, bool value) {
    if (bit < 0 || bit >= 32) {
        throw std::out_of_range("Invalid FPSCR bit index: " + std::to_string(bit));
    }
    if (value) {
        ctx->fpscr.u32 |= (1 << bit);
    } else {
        ctx->fpscr.u32 &= ~(1 << bit);
    }
}

// Context validation
bool ValidateContext(PPCContext* ctx) {
    if (!ctx) {
        throw std::runtime_error("Null context pointer");
    }
    return ctx->is_valid();
}

// Context state management
void ResetContext(PPCContext* ctx) {
    if (!ctx) {
        throw std::runtime_error("Null context pointer");
    }
    ctx->reset();
}

void SaveContextState(PPCContext* ctx, uint8_t* buffer, size_t& size) {
    if (!ctx) {
        throw std::runtime_error("Null context pointer");
    }
    ctx->save_state(buffer, size);
}

void RestoreContextState(PPCContext* ctx, const uint8_t* buffer, size_t size) {
    if (!ctx) {
        throw std::runtime_error("Null context pointer");
    }
    ctx->restore_state(buffer, size);
}

// Debug helpers
void DumpContextState(PPCContext* ctx) {
    if (!ctx) {
        throw std::runtime_error("Null context pointer");
    }
    ctx->dump_state();
}

// Define a macro for the compare function
#define compare template compare

// Define XER and CR register types if not already defined
#ifndef PPCXERRegister_DEFINED
#define PPCXERRegister_DEFINED
typedef int PPCXERRegister;
#endif

#ifndef PPCCRRegister_DEFINED
#define PPCCRRegister_DEFINED
typedef int PPCCRRegister;
#endif

// Fix for context redefinition in recompiled code
#define context ctx

// Function implementation macros
#define PPC_FUNC_PROLOGUE() 
#define PPC_FUNC_IMPL(name) void name(PPCContext* ctx, uint32_t base_addr)
#define PPC_WEAK_FUNC(name) void name(PPCContext* ctx, uint32_t base_addr)
#define alias(name) 

#endif // PPC_RECOMP_PATCH_H_INCLUDED 