#pragma once
#ifndef PPC_TYPES_H_INCLUDED
#define PPC_TYPES_H_INCLUDED

#include <cstdint>
#include <limits.h>  // For INT_MAX, LLONG_MAX
#include <cmath>     // For sqrt and other math functions
#include <cstring>   // For memset, memcpy, etc.
#include <setjmp.h>  // For jmp_buf
#include <algorithm> // For std::min
#include "ppc_config.h"
#include "ppc_memory.h"
#include "ppc_register.h" // Include the PPCRegister definition
#include <stdint.h>
#include <math.h>

// Include SIMDE for cross-platform SIMD intrinsics if available
#ifdef HAS_SIMDE
#define SIMDE_ENABLE_NATIVE_ALIASES
#include "../../simde/simde/x86/sse.h"
#include "../../simde/simde/x86/sse2.h"
#include "../../simde/simde/x86/sse3.h"
#include "../../simde/simde/x86/ssse3.h"
#include "../../simde/simde/x86/sse4.1.h"
#include "../../simde/simde/x86/avx.h"
#else
// Minimal SIMD type definitions when SIMDE is not available
#include <xmmintrin.h> // For __m128 type
#endif

// Forward declare PPCRegister for macros
union PPCRegister;

// Common types
using u8 = unsigned char;
using u16 = unsigned short;
using u32 = unsigned int;
using u64 = unsigned long long;
using i8 = signed char;
using i16 = signed short;
using i32 = signed int;
using i64 = signed long long;
using f32 = float;
using f64 = double;

// Base address for recompiled code
extern uint32_t base;

// Memory access macros
#define PPC_LOAD_U8(ctx_ptr, addr) g_Memory.ReadMemory8(ctx_ptr, addr)
#define PPC_LOAD_U32(ctx_ptr, addr) g_Memory.ReadMemory32(ctx_ptr, addr)
#define PPC_LOAD_U64(ctx_ptr, addr) g_Memory.ReadMemory64(ctx_ptr, addr)
#define PPC_STORE_U8(ctx_ptr, addr, val) g_Memory.WriteMemory8(ctx_ptr, addr, val)
#define PPC_STORE_U32(ctx_ptr, addr, val) g_Memory.WriteMemory32(ctx_ptr, addr, val)
#define PPC_STORE_U64(ctx_ptr, addr, val) g_Memory.WriteMemory64(ctx_ptr, addr, val)

// Signed memory access macros
#define PPC_LOAD_S8(ctx_ptr, addr) static_cast<int8_t>(g_Memory.ReadMemory8((ctx_ptr), (addr)))
#define PPC_LOAD_S16(ctx_ptr, addr) static_cast<int16_t>(g_Memory.ReadMemory32((ctx_ptr), (addr)) >> 16)
#define PPC_LOAD_S32(ctx_ptr, addr) static_cast<int32_t>(g_Memory.ReadMemory32((ctx_ptr), (addr)))
#define PPC_LOAD_S64(ctx_ptr, addr) static_cast<int64_t>(g_Memory.ReadMemory64((ctx_ptr), (addr)))
#define PPC_STORE_S8(ctx_ptr, addr, val) g_Memory.WriteMemory8((ctx_ptr), (addr), static_cast<uint8_t>(val))
#define PPC_STORE_S16(ctx_ptr, addr, val) g_Memory.WriteMemory32((ctx_ptr), (addr), static_cast<uint16_t>(val) << 16)
#define PPC_STORE_S32(ctx_ptr, addr, val) g_Memory.WriteMemory32((ctx_ptr), (addr), static_cast<uint32_t>(val))
#define PPC_STORE_S64(ctx_ptr, addr, val) g_Memory.WriteMemory64((ctx_ptr), (addr), static_cast<uint64_t>(val))

// SIMD types and functions
#ifdef HAS_SIMDE
    #include <simde/x86/sse.h>
#else
    #ifdef _MSC_VER
        // Use actual MSVC intrinsics
        #include <xmmintrin.h>
    #else
        // Minimal implementation for when SIMDE is not available
        typedef float __m128 __attribute__((__vector_size__(16)));

        static inline __m128 _mm_setzero_ps(void) {
            __m128 r;
            r[0] = r[1] = r[2] = r[3] = 0.0f;
            return r;
        }

        static inline __m128 _mm_set_ps1(float a) {
            __m128 r;
            r[0] = r[1] = r[2] = r[3] = a;
            return r;
        }

        static inline void _mm_store_ps(float *p, __m128 a) {
            p[0] = a[0]; p[1] = a[1]; p[2] = a[2]; p[3] = a[3];
        }

        static inline __m128 _mm_load_ps(const float *p) {
            __m128 r;
            r[0] = p[0]; r[1] = p[1]; r[2] = p[2]; r[3] = p[3];
            return r;
        }
    #endif
#endif

// Helper function for _mm_cvttsd_si64 which might not be available
inline int64_t mm_cvttsd_si64(__m128d val) {
    double d;
    _mm_store_sd(&d, val);
    return static_cast<int64_t>(d);
}

// Define _mm_cvttsd_si64 if it's not available
#ifndef _mm_cvttsd_si64
#define _mm_cvttsd_si64 mm_cvttsd_si64
#endif

// Add missing SIMD wrappers
#ifndef _MM_FROUND_TO_NEG_INF
#define _MM_FROUND_TO_NEG_INF 0x01
#endif

#ifndef _MM_FROUND_NO_EXC
#define _MM_FROUND_NO_EXC 0x08
#endif

// SIMD wrapper functions
inline __m128 _mm_safe_load_ps(const float* ptr) {
    if (!ptr) return _mm_setzero_ps();
    __m128 result;
    memcpy(&result, ptr, sizeof(__m128));
    return result;
}

inline void _mm_safe_store_ps(float* ptr, __m128 val) {
    if (!ptr) return;
    memcpy(ptr, &val, sizeof(__m128));
}

// Handle indirect addresses and other types
inline __m128 _mm_safe_load_ps(const void* ptr) {
    return _mm_safe_load_ps(static_cast<const float*>(ptr));
}

inline void _mm_safe_store_ps(void* ptr, __m128 val) {
    _mm_safe_store_ps(static_cast<float*>(ptr), val);
}

// Handle scalar float values
inline __m128 _mm_safe_load_ps(float val) {
    return _mm_set1_ps(val);
}

// Helper function to convert uint32_t to pointer
template<typename T>
inline T* ptr_from_uint32(uint32_t addr) {
    return reinterpret_cast<T*>(static_cast<uintptr_t>(addr));
}

// Memory helpers for consistent behavior
inline void ppc_memset(void* ptr, int val, size_t size) {
    memset(ptr, val, size);
}

inline void ppc_memset(uint32_t addr, int val, size_t size) {
    memset(ptr_from_uint32<uint8_t>(addr), val, size);
}

// Override the SIMD macros
#undef _mm_load_ps
#undef _mm_store_ps
#define _mm_load_ps(addr) _mm_safe_load_ps(addr)
#define _mm_store_ps(addr, val) _mm_safe_store_ps(addr, val)

// Define a wrapper for _mm_dp_ps if needed
inline __m128 _mm_dp_ps_wrapper(__m128 a, __m128 b, const int imm8) {
    __m128 mul = _mm_mul_ps(a, b);
    __m128 sum = _mm_add_ps(
        _mm_add_ps(
            _mm_shuffle_ps(mul, mul, _MM_SHUFFLE(0, 0, 0, 0)),
            _mm_shuffle_ps(mul, mul, _MM_SHUFFLE(1, 1, 1, 1))
        ),
        _mm_add_ps(
            _mm_shuffle_ps(mul, mul, _MM_SHUFFLE(2, 2, 2, 2)),
            _mm_shuffle_ps(mul, mul, _MM_SHUFFLE(3, 3, 3, 3))
        )
    );
    
    // Apply the high 4 bits of imm8
    __m128 mask = _mm_set_ps(
        (imm8 & 0x80) ? 1.0f : 0.0f,
        (imm8 & 0x40) ? 1.0f : 0.0f,
        (imm8 & 0x20) ? 1.0f : 0.0f,
        (imm8 & 0x10) ? 1.0f : 0.0f
    );
    return _mm_and_ps(sum, mask);
}

#ifndef _mm_dp_ps
#define _mm_dp_ps _mm_dp_ps_wrapper
#endif

// Helper functions for array access
template<typename T>
inline T& array_element(T* arr, size_t idx) {
    constexpr size_t size = sizeof(u64) / sizeof(T);
    return arr[idx % size];
}

// Array utility functions
template<typename T, size_t N>
bool compare_array(const T (&a)[N], const T (&b)[N]) {
    for (size_t i = 0; i < N; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

template<typename T, size_t N>
void copy_array(T (&dest)[N], const T (&src)[N]) {
    for (size_t i = 0; i < N; i++) {
        dest[i] = src[i];
    }
}

template<typename T, size_t N, typename Op>
void binary_op_array(T (&result)[N], const T (&a)[N], const T (&b)[N], Op op) {
    for (size_t i = 0; i < N; i++) {
        result[i] = op(a[i], b[i]);
    }
}

template<typename T, size_t N, typename Op>
void binary_op_array(T (&result)[N], const T (&a)[N], const T& b, Op op) {
    for (size_t i = 0; i < N; i++) {
        result[i] = op(a[i], b);
    }
}

// Forward declarations
struct PPCContext;
struct PPCCRRegister;
struct PPCXERRegister;

// Vector register type
using PPCVRegister = PPCRegister;

// External declaration of the global context
extern PPCContext g_PPCContext;

// Pointer conversion helpers
template<typename T>
inline T* ptr_from_array(T* arr) {
    return arr;
}

template<typename T>
inline T* ptr_from_val(T& val) {
    return &val;
}

// Helper to determine if a value is a pointer or not
template<typename T>
inline PPCRegister* get_register_ptr(T* ptr) {
    return reinterpret_cast<PPCRegister*>(ptr);
}

template<typename T>
inline PPCRegister* get_register_ptr(T val) {
    return ptr_from_uint32<PPCRegister>(val);
}

// Array access macros
#define PPC_LOAD_ARRAY_U8(arr, idx) PPC_LOAD_U8(reinterpret_cast<uintptr_t>(arr) + (idx))
#define PPC_LOAD_ARRAY_S8(arr, idx) static_cast<int8_t>(PPC_LOAD_U8(reinterpret_cast<uintptr_t>(arr) + (idx)))
#define PPC_LOAD_ARRAY_U16(arr, idx) static_cast<uint16_t>(PPC_LOAD_U32(reinterpret_cast<uintptr_t>(arr) + ((idx) * 2)) >> 16)
#define PPC_LOAD_ARRAY_S16(arr, idx) static_cast<int16_t>(PPC_LOAD_U32(reinterpret_cast<uintptr_t>(arr) + ((idx) * 2)) >> 16)
#define PPC_LOAD_ARRAY_U32(arr, idx) PPC_LOAD_U32(reinterpret_cast<uintptr_t>(arr) + ((idx) * 4))
#define PPC_LOAD_ARRAY_S32(arr, idx) static_cast<int32_t>(PPC_LOAD_U32(reinterpret_cast<uintptr_t>(arr) + ((idx) * 4)))
#define PPC_LOAD_ARRAY_U64(arr, idx) PPC_LOAD_U64(reinterpret_cast<uintptr_t>(arr) + ((idx) * 8))
#define PPC_LOAD_ARRAY_S64(arr, idx) static_cast<int64_t>(PPC_LOAD_U64(reinterpret_cast<uintptr_t>(arr) + ((idx) * 8)))

#define PPC_STORE_ARRAY_U8(arr, idx, val) PPC_STORE_U8(reinterpret_cast<uintptr_t>(arr) + (idx), val)
#define PPC_STORE_ARRAY_S8(arr, idx, val) PPC_STORE_U8(reinterpret_cast<uintptr_t>(arr) + (idx), static_cast<uint8_t>(val))
#define PPC_STORE_ARRAY_U16(arr, idx, val) PPC_STORE_U32(reinterpret_cast<uintptr_t>(arr) + ((idx) * 2), ((val) & 0xFFFF) << 16)
#define PPC_STORE_ARRAY_S16(arr, idx, val) PPC_STORE_U32(reinterpret_cast<uintptr_t>(arr) + ((idx) * 2), static_cast<uint16_t>(val) << 16)
#define PPC_STORE_ARRAY_U32(arr, idx, val) PPC_STORE_U32(reinterpret_cast<uintptr_t>(arr) + ((idx) * 4), val)
#define PPC_STORE_ARRAY_S32(arr, idx, val) PPC_STORE_U32(reinterpret_cast<uintptr_t>(arr) + ((idx) * 4), static_cast<uint32_t>(val))
#define PPC_STORE_ARRAY_U64(arr, idx, val) PPC_STORE_U64(reinterpret_cast<uintptr_t>(arr) + ((idx) * 8), val)
#define PPC_STORE_ARRAY_S64(arr, idx, val) PPC_STORE_U64(reinterpret_cast<uintptr_t>(arr) + ((idx) * 8), static_cast<uint64_t>(val))

// Type conversion macros for scalar to array to assist with macro patterns
#define ARRAY_U8_TO_U64(addr, idx) ((uint64_t)PPC_LOAD_ARRAY_U8(addr, idx))
#define ARRAY_S8_TO_S64(addr, idx) ((int64_t)PPC_LOAD_ARRAY_S8(addr, idx))
#define ARRAY_U16_TO_U64(addr, idx) ((uint64_t)PPC_LOAD_ARRAY_U16(addr, idx))
#define ARRAY_S16_TO_S64(addr, idx) ((int64_t)PPC_LOAD_ARRAY_S16(addr, idx))
#define ARRAY_U32_TO_U64(addr, idx) ((uint64_t)PPC_LOAD_ARRAY_U32(addr, idx))
#define ARRAY_S32_TO_S64(addr, idx) ((int64_t)PPC_LOAD_ARRAY_S32(addr, idx))

// Temporary variable assignment macros
#define ASSIGN_TEMP_U8(dst, src, idx) \
    uint8_t tmp_##dst = PPC_LOAD_ARRAY_U8(src, idx)

#define ASSIGN_TEMP_S8(dst, src, idx) \
    int8_t tmp_##dst = PPC_LOAD_ARRAY_S8(src, idx)

#define ASSIGN_TEMP_U16(dst, src, idx) \
    uint16_t tmp_##dst = PPC_LOAD_ARRAY_U16(src, idx)

#define ASSIGN_TEMP_S16(dst, src, idx) \
    int16_t tmp_##dst = PPC_LOAD_ARRAY_S16(src, idx)

#define ASSIGN_TEMP_U32(dst, src, idx) \
    uint32_t tmp_##dst = PPC_LOAD_ARRAY_U32(src, idx)

#define ASSIGN_TEMP_S32(dst, src, idx) \
    int32_t tmp_##dst = PPC_LOAD_ARRAY_S32(src, idx)

// Array assignment macros
#define ASSIGN_ARRAY_U8(dst, dst_idx, src, src_idx) \
    PPC_STORE_ARRAY_U8(dst, dst_idx, PPC_LOAD_ARRAY_U8(src, src_idx))

#define ASSIGN_ARRAY_S8(dst, dst_idx, src, src_idx) \
    PPC_STORE_ARRAY_S8(dst, dst_idx, PPC_LOAD_ARRAY_S8(src, src_idx))

#define ASSIGN_ARRAY_U16(dst, dst_idx, src, src_idx) \
    PPC_STORE_ARRAY_U16(dst, dst_idx, PPC_LOAD_ARRAY_U16(src, src_idx))

#define ASSIGN_ARRAY_S16(dst, dst_idx, src, src_idx) \
    PPC_STORE_ARRAY_S16(dst, dst_idx, PPC_LOAD_ARRAY_S16(src, src_idx))

#define ASSIGN_ARRAY_U32(dst, dst_idx, src, src_idx) \
    PPC_STORE_ARRAY_U32(dst, dst_idx, PPC_LOAD_ARRAY_U32(src, src_idx))

#define ASSIGN_ARRAY_S32(dst, dst_idx, src, src_idx) \
    PPC_STORE_ARRAY_S32(dst, dst_idx, PPC_LOAD_ARRAY_S32(src, src_idx))

// Binary operation macros for arrays
#define BINARY_OP_U8(dst, dst_idx, src1, src1_idx, src2, src2_idx, op) \
    PPC_STORE_ARRAY_U8(dst, dst_idx, PPC_LOAD_ARRAY_U8(src1, src1_idx) op PPC_LOAD_ARRAY_U8(src2, src2_idx))

#define BINARY_OP_S8(dst, dst_idx, src1, src1_idx, src2, src2_idx, op) \
    PPC_STORE_ARRAY_S8(dst, dst_idx, PPC_LOAD_ARRAY_S8(src1, src1_idx) op PPC_LOAD_ARRAY_S8(src2, src2_idx))

#define BINARY_OP_U16(dst, dst_idx, src1, src1_idx, src2, src2_idx, op) \
    PPC_STORE_ARRAY_U16(dst, dst_idx, PPC_LOAD_ARRAY_U16(src1, src1_idx) op PPC_LOAD_ARRAY_U16(src2, src2_idx))

#define BINARY_OP_S16(dst, dst_idx, src1, src1_idx, src2, src2_idx, op) \
    PPC_STORE_ARRAY_S16(dst, dst_idx, PPC_LOAD_ARRAY_S16(src1, src1_idx) op PPC_LOAD_ARRAY_S16(src2, src2_idx))

#define BINARY_OP_U32(dst, dst_idx, src1, src1_idx, src2, src2_idx, op) \
    PPC_STORE_ARRAY_U32(dst, dst_idx, PPC_LOAD_ARRAY_U32(src1, src1_idx) op PPC_LOAD_ARRAY_U32(src2, src2_idx))

#define BINARY_OP_S32(dst, dst_idx, src1, src1_idx, src2, src2_idx, op) \
    PPC_STORE_ARRAY_S32(dst, dst_idx, PPC_LOAD_ARRAY_S32(src1, src1_idx) op PPC_LOAD_ARRAY_S32(src2, src2_idx))

// Memory-mapped register operations
#define PPC_MM_LOAD_U32(addr) \
    (g_MMIOController.ReadU32((uint32_t)(addr)))

#define PPC_MM_STORE_U32(addr, val) \
    (g_MMIOController.WriteU32((uint32_t)(addr), (val)))

// Specialized vector/SIMD access
#define PPC_LOAD_VEC128(addr) \
    (_mm_loadu_ps((float*)(addr)))

#define PPC_STORE_VEC128(addr, val) \
    (_mm_storeu_ps((float*)(addr), (val)))

// SIMD/Vector operations for PowerPC vector code
#define VEC_LOAD_U8(addr, idx) \
    (_mm_set1_epi8(PPC_LOAD_ARRAY_U8(addr, idx)))

#define VEC_LOAD_S8(addr, idx) \
    (_mm_set1_epi8(PPC_LOAD_ARRAY_S8(addr, idx)))

#define VEC_LOAD_U16(addr, idx) \
    (_mm_set1_epi16(PPC_LOAD_ARRAY_U16(addr, idx)))

#define VEC_LOAD_S16(addr, idx) \
    (_mm_set1_epi16(PPC_LOAD_ARRAY_S16(addr, idx)))

#define VEC_LOAD_U32(addr, idx) \
    (_mm_set1_epi32(PPC_LOAD_ARRAY_U32(addr, idx)))

#define VEC_LOAD_S32(addr, idx) \
    (_mm_set1_epi32(PPC_LOAD_ARRAY_S32(addr, idx)))

#define VEC_LOAD_F32(addr, idx) \
    (_mm_set1_ps(PPC_LOAD_ARRAY_F32(addr, idx)))

// Direct array access for simple macros and tests
#define ARRAY_TO_SCALAR_U8(addr, idx) ((addr)->u8_arr[idx])
#define ARRAY_TO_SCALAR_S8(addr, idx) ((addr)->s8_arr[idx])
#define ARRAY_TO_SCALAR_U16(addr, idx) ((addr)->u16_arr[idx])
#define ARRAY_TO_SCALAR_S16(addr, idx) ((addr)->s16_arr[idx])
#define ARRAY_TO_SCALAR_U32(addr, idx) ((addr)->u32_arr[idx])
#define ARRAY_TO_SCALAR_S32(addr, idx) ((addr)->s32_arr[idx])
#define ARRAY_TO_SCALAR_F32(addr, idx) ((addr)->f32_arr[idx])

#endif // PPC_TYPES_H_INCLUDED

// Include the PPCRegister extension
#include "ppc_register_ext.h"