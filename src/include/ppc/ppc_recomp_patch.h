#pragma once
#ifndef PPC_RECOMP_PATCH_H
#define PPC_RECOMP_PATCH_H

// Include all necessary headers
#include "ppc_types.h"
#include "ppc_memory.h"
#include "ppc_context.h"
#include "ppc_register.h"

// Include MSVC compatibility header if needed
#ifdef _MSC_VER
#include "ppc_recomp_msvc.h"
#endif

// Global memory instance
extern PPCMemory g_Memory;

// Forward declarations for all sub functions referenced in the recompiled code
extern "C" {
    void sub_82152C88(PPCContext& ctx, uint32_t addr);
    void sub_82152D08(PPCContext& ctx, uint32_t addr);
    void sub_821520D8(PPCContext& ctx, uint32_t addr);
    void sub_821538A8(PPCContext& ctx, uint32_t addr);
    void sub_82176EF0(PPCContext& ctx, uint32_t addr);
    void sub_82164770(PPCContext& ctx, uint32_t addr);
    void sub_82097860(PPCContext& ctx, uint32_t addr);
    void sub_8210D870(PPCContext& ctx, uint32_t addr);
    void sub_820B3DC0(PPCContext& ctx, uint32_t addr);
    void sub_82176E40(PPCContext& ctx, uint32_t addr);
    void sub_821519F0(PPCContext& ctx, uint32_t addr);
    void sub_82151AA8(PPCContext& ctx, uint32_t addr);
    void sub_821760C0(PPCContext& ctx, uint32_t addr);
    void sub_82177C38(PPCContext& ctx, uint32_t addr);
    void sub_82177C98(PPCContext& ctx, uint32_t addr);
    void sub_82178EF0(PPCContext& ctx, uint32_t addr);
}

// Define stub implementations for these functions if they're not defined elsewhere
#ifdef _MSC_VER
#pragma warning(disable: 4100) // Disable warning about unused parameters
#endif

// Stub implementations
#ifndef EXTERNAL_IMPLEMENTATION
inline void sub_82152C88(PPCContext& ctx, uint32_t addr) {}
inline void sub_82152D08(PPCContext& ctx, uint32_t addr) {}
inline void sub_821520D8(PPCContext& ctx, uint32_t addr) {}
inline void sub_821538A8(PPCContext& ctx, uint32_t addr) {}
inline void sub_82176EF0(PPCContext& ctx, uint32_t addr) {}
inline void sub_82164770(PPCContext& ctx, uint32_t addr) {}
inline void sub_82097860(PPCContext& ctx, uint32_t addr) {}
inline void sub_8210D870(PPCContext& ctx, uint32_t addr) {}
inline void sub_820B3DC0(PPCContext& ctx, uint32_t addr) {}
inline void sub_82176E40(PPCContext& ctx, uint32_t addr) {}
inline void sub_821519F0(PPCContext& ctx, uint32_t addr) {}
inline void sub_82151AA8(PPCContext& ctx, uint32_t addr) {}
inline void sub_821760C0(PPCContext& ctx, uint32_t addr) {}
inline void sub_82177C38(PPCContext& ctx, uint32_t addr) {}
inline void sub_82177C98(PPCContext& ctx, uint32_t addr) {}
inline void sub_82178EF0(PPCContext& ctx, uint32_t addr) {}
#endif

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

// Helper function to create a wrapper
inline PPCContextWrapper ctx_arrow(PPCContext& ctx) {
    return PPCContextWrapper(ctx);
}

// Memory access functions that take PPCContext& instead of PPCContext*
inline uint32_t ReadMemory32(PPCContext& ctx, uint32_t addr) {
    return g_Memory.ReadMemory32(&ctx, addr);
}

inline uint64_t ReadMemory64(PPCContext& ctx, uint32_t addr) {
    return g_Memory.ReadMemory64(&ctx, addr);
}

inline uint8_t ReadMemory8(PPCContext& ctx, uint32_t addr) {
    return g_Memory.ReadMemory8(&ctx, addr);
}

inline uint16_t ReadMemory16(PPCContext& ctx, uint32_t addr) {
    return g_Memory.ReadMemory16(&ctx, addr);
}

inline void WriteMemory32(PPCContext& ctx, uint32_t addr, uint32_t value) {
    g_Memory.WriteMemory32(&ctx, addr, value);
}

inline void WriteMemory64(PPCContext& ctx, uint32_t addr, uint64_t value) {
    g_Memory.WriteMemory64(&ctx, addr, value);
}

inline void WriteMemory8(PPCContext& ctx, uint32_t addr, uint8_t value) {
    g_Memory.WriteMemory8(&ctx, addr, value);
}

inline void WriteMemory16(PPCContext& ctx, uint32_t addr, uint16_t value) {
    g_Memory.WriteMemory16(&ctx, addr, value);
}

// Compatibility compare functions for recompiled code
// These match the function signatures used in the recompiled code
namespace PPCRecompCompat {
    inline void compare(PPCRegister& reg, int value1, int value2, int& xer) {
        uint32_t& xer_u32 = reinterpret_cast<uint32_t&>(xer);
        if (value1 < value2) {
            xer_u32 |= 0x80000000;
        } else if (value1 > value2) {
            xer_u32 |= 0x40000000;
        } else {
            xer_u32 |= 0x20000000;
        }
    }

    inline void compare(PPCRegister& reg, uint32_t value1, uint32_t value2, int& xer) {
        uint32_t& xer_u32 = reinterpret_cast<uint32_t&>(xer);
        if (value1 < value2) {
            xer_u32 |= 0x80000000;
        } else if (value1 > value2) {
            xer_u32 |= 0x40000000;
        } else {
            xer_u32 |= 0x20000000;
        }
    }

    inline void compare(PPCRegister& reg, float value1, float value2, int& xer) {
        uint32_t& xer_u32 = reinterpret_cast<uint32_t&>(xer);
        if (value1 < value2) {
            xer_u32 |= 0x80000000;
        } else if (value1 > value2) {
            xer_u32 |= 0x40000000;
        } else {
            xer_u32 |= 0x20000000;
        }
    }

    inline void compare(PPCRegister& reg, double value1, double value2, int& xer) {
        uint32_t& xer_u32 = reinterpret_cast<uint32_t&>(xer);
        if (value1 < value2) {
            xer_u32 |= 0x80000000;
        } else if (value1 > value2) {
            xer_u32 |= 0x40000000;
        } else {
            xer_u32 |= 0x20000000;
        }
    }
}

// Define a macro for the compare function
#define compare PPCRecompCompat::compare

// Memory access macros for recompiled code
#define PPC_LOAD_U32(ctx, addr) ReadMemory32(ctx, addr)
#define PPC_LOAD_U16(ctx, addr) ReadMemory16(ctx, addr)
#define PPC_LOAD_U8(ctx, addr) ReadMemory8(ctx, addr)
#define PPC_LOAD_U64(ctx, addr) ReadMemory64(ctx, addr)

#define PPC_STORE_U32(ctx, addr, val) WriteMemory32(ctx, addr, val)
#define PPC_STORE_U16(ctx, addr, val) WriteMemory16(ctx, addr, val)
#define PPC_STORE_U8(ctx, addr, val) WriteMemory8(ctx, addr, val)
#define PPC_STORE_U64(ctx, addr, val) WriteMemory64(ctx, addr, val)

// Define macros for array access
#define PPC_LOAD_ARRAY_U8(ctx, addr, index) ReadMemory8(ctx, (addr) + (index))
#define PPC_LOAD_ARRAY_S8(ctx, addr, index) ((int8_t)ReadMemory8(ctx, (addr) + (index)))
#define PPC_LOAD_ARRAY_U16(ctx, addr, index) ReadMemory16(ctx, (addr) + ((index) * 2))
#define PPC_LOAD_ARRAY_S16(ctx, addr, index) ((int16_t)ReadMemory16(ctx, (addr) + ((index) * 2)))
#define PPC_LOAD_ARRAY_U32(ctx, addr, index) ReadMemory32(ctx, (addr) + ((index) * 4))
#define PPC_LOAD_ARRAY_S32(ctx, addr, index) ((int32_t)ReadMemory32(ctx, (addr) + ((index) * 4)))
#define PPC_LOAD_ARRAY_U64(ctx, addr, index) ReadMemory64(ctx, (addr) + ((index) * 8))
#define PPC_LOAD_ARRAY_S64(ctx, addr, index) ((int64_t)ReadMemory64(ctx, (addr) + ((index) * 8)))

#define PPC_STORE_ARRAY_U8(ctx, addr, index, val) WriteMemory8(ctx, (addr) + (index), val)
#define PPC_STORE_ARRAY_S8(ctx, addr, index, val) WriteMemory8(ctx, (addr) + (index), (uint8_t)(val))
#define PPC_STORE_ARRAY_U16(ctx, addr, index, val) WriteMemory16(ctx, (addr) + ((index) * 2), val)
#define PPC_STORE_ARRAY_S16(ctx, addr, index, val) WriteMemory16(ctx, (addr) + ((index) * 2), (uint16_t)(val))
#define PPC_STORE_ARRAY_U32(ctx, addr, index, val) WriteMemory32(ctx, (addr) + ((index) * 4), val)
#define PPC_STORE_ARRAY_S32(ctx, addr, index, val) WriteMemory32(ctx, (addr) + ((index) * 4), (uint32_t)(val))
#define PPC_STORE_ARRAY_U64(ctx, addr, index, val) WriteMemory64(ctx, (addr) + ((index) * 8), val)
#define PPC_STORE_ARRAY_S64(ctx, addr, index, val) WriteMemory64(ctx, (addr) + ((index) * 8), (uint64_t)(val))

// Function implementation macros
#define PPC_FUNC_PROLOGUE() 
#define PPC_FUNC_IMPL(name) void name(PPCContext& ctx, uint32_t base_addr)

#endif // PPC_RECOMP_PATCH_H 