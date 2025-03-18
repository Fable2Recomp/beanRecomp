#pragma once
#ifndef PPC_RECOMP_PATCH_H
#define PPC_RECOMP_PATCH_H

// Include all necessary headers
#include "../include/ppc/ppc_types.h"
#include "../include/ppc/ppc_memory.h"
#include "../include/ppc/ppc_context.h"
#include "../include/ppc/ppc_register.h"
#include <type_traits>

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

// Fix for the -> operator issue with PPCContext
// This is a helper class that allows ctx->r1 to be converted to ctx.r1
class PPCContextWrapper {
public:
    PPCContextWrapper(PPCContext& ctx) : m_ctx(ctx) {}
    
    PPCContext* operator->() {
        return &m_ctx;
    }
    
private:
    PPCContext& m_ctx;
};

// Helper function to create a wrapper for reference
inline PPCContextWrapper ctx_arrow(PPCContext& ctx) {
    return PPCContextWrapper(ctx);
}

// Helper function to create a wrapper for pointer
inline PPCContextWrapper ctx_arrow(PPCContext* ctx) {
    return PPCContextWrapper(*ctx);
}

// Helper function to get a pointer from either a reference or a pointer
template<typename T>
inline PPCContext* get_context_ptr(T& ctx) {
    if constexpr (std::is_pointer_v<T>) {
        return ctx;
    } else {
        return &ctx;
    }
}

// Memory access functions for both PPCContext& and PPCContext*
template<typename T>
inline uint32_t ReadMemory32(T& ctx, uint32_t addr) {
    return g_Memory.ReadMemory32(get_context_ptr(ctx), addr);
}

template<typename T>
inline uint64_t ReadMemory64(T& ctx, uint32_t addr) {
    return g_Memory.ReadMemory64(get_context_ptr(ctx), addr);
}

template<typename T>
inline uint8_t ReadMemory8(T& ctx, uint32_t addr) {
    return g_Memory.ReadMemory8(get_context_ptr(ctx), addr);
}

template<typename T>
inline uint16_t ReadMemory16(T& ctx, uint32_t addr) {
    return g_Memory.ReadMemory16(get_context_ptr(ctx), addr);
}

template<typename T>
inline void WriteMemory32(T& ctx, uint32_t addr, uint32_t value) {
    g_Memory.WriteMemory32(get_context_ptr(ctx), addr, value);
}

template<typename T>
inline void WriteMemory64(T& ctx, uint32_t addr, uint64_t value) {
    g_Memory.WriteMemory64(get_context_ptr(ctx), addr, value);
}

template<typename T>
inline void WriteMemory8(T& ctx, uint32_t addr, uint8_t value) {
    g_Memory.WriteMemory8(get_context_ptr(ctx), addr, value);
}

template<typename T>
inline void WriteMemory16(T& ctx, uint32_t addr, uint16_t value) {
    g_Memory.WriteMemory16(get_context_ptr(ctx), addr, value);
}

// Special overloads for when the second argument is a PPCContext
template<typename T>
inline uint32_t ReadMemory32(T& ctx, PPCContext& base) {
    return ReadMemory32(ctx, base.r3.u32);
}

template<typename T>
inline uint64_t ReadMemory64(T& ctx, PPCContext& base) {
    return ReadMemory64(ctx, base.r3.u32);
}

template<typename T>
inline uint8_t ReadMemory8(T& ctx, PPCContext& base) {
    return ReadMemory8(ctx, base.r3.u32);
}

template<typename T>
inline uint16_t ReadMemory16(T& ctx, PPCContext& base) {
    return ReadMemory16(ctx, base.r3.u32);
}

template<typename T>
inline void WriteMemory32(T& ctx, PPCContext& base, uint32_t value) {
    WriteMemory32(ctx, base.r3.u32, value);
}

template<typename T>
inline void WriteMemory64(T& ctx, PPCContext& base, uint64_t value) {
    WriteMemory64(ctx, base.r3.u32, value);
}

template<typename T>
inline void WriteMemory8(T& ctx, PPCContext& base, uint8_t value) {
    WriteMemory8(ctx, base.r3.u32, value);
}

template<typename T>
inline void WriteMemory16(T& ctx, PPCContext& base, uint16_t value) {
    WriteMemory16(ctx, base.r3.u32, value);
}

// Add compare methods to PPCRegister
// These need to be template methods to handle different types
template<typename T>
inline bool PPCRegister::eq() const {
    return (this->u32 & 0x2) != 0;
}

template<typename T>
inline bool PPCRegister::lt() const {
    return (this->u32 & 0x8) != 0;
}

template<typename T>
inline bool PPCRegister::gt() const {
    return (this->u32 & 0x4) != 0;
}

template<typename T>
inline void PPCRegister::compare(T value1, T value2, int& xer) {
    uint32_t& xer_u32 = reinterpret_cast<uint32_t&>(xer);
    if (value1 < value2) {
        this->u32 = 0x8; // Set LT bit
    } else if (value1 > value2) {
        this->u32 = 0x4; // Set GT bit
    } else {
        this->u32 = 0x2; // Set EQ bit
    }
}

// Memory access macros for recompiled code
#define PPC_LOAD_U32(ctx, addr) ReadMemory32(ctx, addr)
#define PPC_LOAD_U16(ctx, addr) ReadMemory16(ctx, addr)
#define PPC_LOAD_U8(ctx, addr) ReadMemory8(ctx, addr)
#define PPC_LOAD_U64(ctx, addr) ReadMemory64(ctx, addr)

#define PPC_STORE_U32(ctx, addr, val) WriteMemory32(ctx, addr, val)
#define PPC_STORE_U16(ctx, addr, val) WriteMemory16(ctx, addr, val)
#define PPC_STORE_U8(ctx, addr, val) WriteMemory8(ctx, addr, val)
#define PPC_STORE_U64(ctx, addr, val) WriteMemory64(ctx, addr, val)

// Aliases for the memory access macros
#define PPC_Read_U32 PPC_LOAD_U32
#define PPC_Read_U16 PPC_LOAD_U16
#define PPC_Read_U8 PPC_LOAD_U8
#define PPC_Read_U64 PPC_LOAD_U64

#define PPC_Write_U32 PPC_STORE_U32
#define PPC_Write_U16 PPC_STORE_U16
#define PPC_Write_U8 PPC_STORE_U8
#define PPC_Write_U64 PPC_STORE_U64

// Function-style macros for memory access with variadic arguments to handle extra parameters
#define PPC_LOAD_U8_FUNC(ctx_ptr, addr, ...) ReadMemory8(ctx_ptr, addr)
#define PPC_LOAD_U16_FUNC(ctx_ptr, addr, ...) ReadMemory16(ctx_ptr, addr)
#define PPC_LOAD_U32_FUNC(ctx_ptr, addr, ...) ReadMemory32(ctx_ptr, addr)
#define PPC_LOAD_U64_FUNC(ctx_ptr, addr, ...) ReadMemory64(ctx_ptr, addr)

#define PPC_LOAD_S8_FUNC(ctx_ptr, addr, ...) ((int8_t)ReadMemory8(ctx_ptr, addr))
#define PPC_LOAD_S16_FUNC(ctx_ptr, addr, ...) ((int16_t)ReadMemory16(ctx_ptr, addr))
#define PPC_LOAD_S32_FUNC(ctx_ptr, addr, ...) ((int32_t)ReadMemory32(ctx_ptr, addr))
#define PPC_LOAD_S64_FUNC(ctx_ptr, addr, ...) ((int64_t)ReadMemory64(ctx_ptr, addr))

#define PPC_STORE_U8_FUNC(ctx_ptr, addr, val, ...) WriteMemory8(ctx_ptr, addr, val)
#define PPC_STORE_U16_FUNC(ctx_ptr, addr, val, ...) WriteMemory16(ctx_ptr, addr, val)
#define PPC_STORE_U32_FUNC(ctx_ptr, addr, val, ...) WriteMemory32(ctx_ptr, addr, val)
#define PPC_STORE_U64_FUNC(ctx_ptr, addr, val, ...) WriteMemory64(ctx_ptr, addr, val)

#define PPC_STORE_S8_FUNC(ctx_ptr, addr, val, ...) WriteMemory8(ctx_ptr, addr, (uint8_t)(val))
#define PPC_STORE_S16_FUNC(ctx_ptr, addr, val, ...) WriteMemory16(ctx_ptr, addr, (uint16_t)(val))
#define PPC_STORE_S32_FUNC(ctx_ptr, addr, val, ...) WriteMemory32(ctx_ptr, addr, (uint32_t)(val))
#define PPC_STORE_S64_FUNC(ctx_ptr, addr, val, ...) WriteMemory64(ctx_ptr, addr, (uint64_t)(val))

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

#endif // PPC_RECOMP_PATCH_H 