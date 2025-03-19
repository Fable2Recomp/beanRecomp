#include "../include/ppc/ppc_context.h"

void PPCCRRegister::compare_u32(uint32_t a, uint32_t b, uint32_t xer) {
    set_lt(a < b);
    set_gt(a > b);
    set_eq(a == b);
    set_so((xer & 0x80000000) != 0);
}

void PPCCRRegister::compare_u64(uint64_t a, uint64_t b, uint32_t xer) {
    set_lt(a < b);
    set_gt(a > b);
    set_eq(a == b);
    set_so((xer & 0x80000000) != 0);
}

void PPCCRRegister::compare_s32(int32_t a, int32_t b, uint32_t xer) {
    set_lt(a < b);
    set_gt(a > b);
    set_eq(a == b);
    set_so((xer & 0x80000000) != 0);
}

void PPCCRRegister::compare_s64(int64_t a, int64_t b, uint32_t xer) {
    set_lt(a < b);
    set_gt(a > b);
    set_eq(a == b);
    set_so((xer & 0x80000000) != 0);
}

void PPCCRRegister::compare_f32(float a, float b, uint32_t xer) {
    set_lt(a < b);
    set_gt(a > b);
    set_eq(a == b);
    set_so((xer & 0x80000000) != 0);
}

void PPCCRRegister::compare_f64(double a, double b, uint32_t xer) {
    set_lt(a < b);
    set_gt(a > b);
    set_eq(a == b);
    set_so((xer & 0x80000000) != 0);
} 