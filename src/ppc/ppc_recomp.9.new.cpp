#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"
#include "../include/ppc/ppc_memory_macros.h"
#include "../include/ppc/ppc_recomp_macros.h"
#include <string>

alias(__imp__sub_821538A8) PPC_WEAK_FUNC(sub_821538A8);
PPC_FUNC_IMPL(__imp__sub_821538A8) {
    PPC_FUNC_PROLOGUE();
    PPCXERRegister xer{};
    PPCCRRegister cr6{};
    uint32_t ea{};

    // mflr r12
    ctx_arrow(ctx)->gpr[12] = ctx_arrow(ctx)->lr;

    // stw r12,-8(r1)
    PPC_STORE_U32_FUNC(ctx, ctx_arrow(ctx)->gpr[1].u32 - 8, ctx_arrow(ctx)->gpr[12].u32);

    // std r30,-24(r1)
    PPC_STORE_U64_FUNC(ctx, ctx_arrow(ctx)->gpr[1].u32 - 24, ctx_arrow(ctx)->gpr[30].u64);

    // std r31,-16(r1)
    PPC_STORE_U64_FUNC(ctx, ctx_arrow(ctx)->gpr[1].u32 - 16, ctx_arrow(ctx)->gpr[31].u64);

    // stwu r1,-128(r1)
    ea = ctx_arrow(ctx)->gpr[1].u32 - 128;
    PPC_STORE_U32_FUNC(ctx, ea, ctx_arrow(ctx)->gpr[1].u32);
    ctx_arrow(ctx)->gpr[1].u32 = ea;

    // mr r31,r3
    ctx_arrow(ctx)->gpr[31] = ctx_arrow(ctx)->gpr[3];

    // li r4,0
    ctx_arrow(ctx)->gpr[4].s64 = 0;

    // addi r3,r31,364
    ctx_arrow(ctx)->gpr[3].s64 = ctx_arrow(ctx)->gpr[31].s64 + 364;

    // bl 0x82176e40
    sub_82176E40(ctx);

    // li r30,0
    ctx_arrow(ctx)->gpr[30].s64 = 0;

    // lbz r11,12(r31)
    ctx_arrow(ctx)->gpr[11].u8 = PPC_LOAD_U8_FUNC(ctx, ctx_arrow(ctx)->gpr[31].u32 + 12);

    // cmplwi r6,r11,0
    cr6.compare_u32(ctx_arrow(ctx)->gpr[11].u32, 0, xer.value);
    ctx_arrow(ctx)->cr = cr6;

    // stb r30,224(r31)
    PPC_STORE_U8_FUNC(ctx, ctx_arrow(ctx)->gpr[31].u32 + 224, ctx_arrow(ctx)->gpr[30].u8);
} 