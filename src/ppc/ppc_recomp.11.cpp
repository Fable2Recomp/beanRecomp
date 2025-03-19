#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_8216B808) PPC_WEAK_FUNC(sub_8216B808);
PPC_FUNC_IMPL(__imp__sub_8216B808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-26064
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -26064;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8216b848
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8216B848;
	// bl 0x8216b470
	sub_8216B470(ctx, base);
loc_8216B848:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8216b860
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8216B860;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_8216B860:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_8216B878) PPC_WEAK_FUNC(sub_8216B878);
PPC_FUNC_IMPL(__imp__sub_8216B878) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8216b6d8
	sub_8216B6D8(ctx, base);
	return;
}

alias(__imp__sub_8216B888) PPC_WEAK_FUNC(sub_8216B888);
PPC_FUNC_IMPL(__imp__sub_8216B888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-26056
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -26056;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// li ctx_arrow(ctx)->r5,-1
	ctx_arrow(ctx)->r5.s64 = -1;
	// li ctx_arrow(ctx)->r4,300
	ctx_arrow(ctx)->r4.s64 = 300;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx.u8);
	// blr 
	return;
}

