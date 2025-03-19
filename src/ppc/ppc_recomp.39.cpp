#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_823D2D80) PPC_WEAK_FUNC(sub_823D2D80);
PPC_FUNC_IMPL(__imp__sub_823D2D80) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823d2c10
	sub_823D2C10(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d2dc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D2DC0;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32802
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32802;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823D2DC0:
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

alias(__imp__sub_823D2DD8) PPC_WEAK_FUNC(sub_823D2DD8);
PPC_FUNC_IMPL(__imp__sub_823D2DD8) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823d4f10
	sub_823D4F10(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1192
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 1192;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 144, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 148, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,152(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 152, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 156, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823D2E28) PPC_WEAK_FUNC(sub_823D2E28);
PPC_FUNC_IMPL(__imp__sub_823D2E28) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,144(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_823D2E30) PPC_WEAK_FUNC(sub_823D2E30);
PPC_FUNC_IMPL(__imp__sub_823D2E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,41(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
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

alias(__imp__sub_823D2E90) PPC_WEAK_FUNC(sub_823D2E90);
PPC_FUNC_IMPL(__imp__sub_823D2E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0xFFFF;
	// lwz ctx_arrow(ctx)->r10,45(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823D2EF0) PPC_WEAK_FUNC(sub_823D2EF0);
PPC_FUNC_IMPL(__imp__sub_823D2EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823D2F30) PPC_WEAK_FUNC(sub_823D2F30);
PPC_FUNC_IMPL(__imp__sub_823D2F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,49(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
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

alias(__imp__sub_823D2F90) PPC_WEAK_FUNC(sub_823D2F90);
PPC_FUNC_IMPL(__imp__sub_823D2F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0xFFFF;
	// lwz ctx_arrow(ctx)->r10,53(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823D2FF0) PPC_WEAK_FUNC(sub_823D2FF0);
PPC_FUNC_IMPL(__imp__sub_823D2FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0xFFFF;
	// lwz ctx_arrow(ctx)->r10,33(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823D3050) PPC_WEAK_FUNC(sub_823D3050);
PPC_FUNC_IMPL(__imp__sub_823D3050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u32 & 0xFFFF;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,21(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 21);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823d3098
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823D3098;
	// lis ctx_arrow(ctx)->r3,-30009
	ctx_arrow(ctx)->r3.s64 = -1966669824;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 10;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_823D3098:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,37(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,13
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 * 13;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823D30E8) PPC_WEAK_FUNC(sub_823D30E8);
PPC_FUNC_IMPL(__imp__sub_823D30E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823D3118) PPC_WEAK_FUNC(sub_823D3118);
PPC_FUNC_IMPL(__imp__sub_823D3118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz ctx_arrow(ctx)->r11,5(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x7;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823D3150) PPC_WEAK_FUNC(sub_823D3150);
PPC_FUNC_IMPL(__imp__sub_823D3150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r3,6(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 6);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823D3180) PPC_WEAK_FUNC(sub_823D3180);
PPC_FUNC_IMPL(__imp__sub_823D3180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823D31B0) PPC_WEAK_FUNC(sub_823D31B0);
PPC_FUNC_IMPL(__imp__sub_823D31B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r31,23(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r31.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 23);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 1);
	// lis ctx_arrow(ctx)->r10,-21846
	ctx_arrow(ctx)->r10.s64 = -1431699456;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r11.s64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,43691
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 43691;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r3.s64;
	// mulhwu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = (uint64_t(ctx_arrow(ctx)->r11.u32) * uint64_t(ctx_arrow(ctx)->r10.u32)) >> 32;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
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

alias(__imp__sub_823D3230) PPC_WEAK_FUNC(sub_823D3230);
PPC_FUNC_IMPL(__imp__sub_823D3230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r31,25(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r31.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 25);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 1);
	// lis ctx_arrow(ctx)->r10,-21846
	ctx_arrow(ctx)->r10.s64 = -1431699456;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r11.s64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,43691
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 43691;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r3.s64;
	// mulhwu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = (uint64_t(ctx_arrow(ctx)->r11.u32) * uint64_t(ctx_arrow(ctx)->r10.u32)) >> 32;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
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

alias(__imp__sub_823D32B0) PPC_WEAK_FUNC(sub_823D32B0);
PPC_FUNC_IMPL(__imp__sub_823D32B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz ctx_arrow(ctx)->r11,9(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823D32E8) PPC_WEAK_FUNC(sub_823D32E8);
PPC_FUNC_IMPL(__imp__sub_823D32E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1192
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1192;
	// lwz ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x823d3344
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D3344;
	// lwz ctx_arrow(ctx)->r10,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d3340
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D3340;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823d3344
	goto loc_823D3344;
loc_823D3340:
	// bl 0x8209d150
	sub_8209D150(ctx, base);
loc_823D3344:
	// lwz ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d335c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D335C;
	// lwz ctx_arrow(ctx)->r4,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823D335C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d4590
	sub_823D4590(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823D3378) PPC_WEAK_FUNC(sub_823D3378);
PPC_FUNC_IMPL(__imp__sub_823D3378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r6,156(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 156, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r7,148(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 148, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r5,152(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 152, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,144(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 144, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,27(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 27);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d344c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D344C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,65(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// sth ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 108, ctx_arrow(ctx)->r11, 0);
loc_823D33F0:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,27(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 27);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823d344c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823D344C;
	// lhz ctx_arrow(ctx)->r10,3(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 3);
	// lbz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 3);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 5;
	// ble ctx_arrow(ctx)->r6,0x823d343c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823D343C;
	// lhz ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 108);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// sth ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 108, ctx_arrow(ctx)->r10.u16);
loc_823D343C:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// b 0x823d33f0
	goto loc_823D33F0;
loc_823D344C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d4958
	sub_823D4958(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823D3460) PPC_WEAK_FUNC(sub_823D3460);
PPC_FUNC_IMPL(__imp__sub_823D3460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r30,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,29(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 29);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d3580
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D3580;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823d35a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823D35A4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823d35a8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823D35A8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r10,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,73(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,44(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,31(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 31);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d3560
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D3560;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r29.u64;
loc_823D3510:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r30.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r11,1(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f1,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d43a8
	sub_823D43A8(ctx, base);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,31(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 31);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823d3510
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823D3510;
loc_823D3560:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,20
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 20;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed184
	return;
loc_823D3580:
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d35a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D35A4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw ctx_arrow(ctx)->r29,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
loc_823D35A4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
loc_823D35A8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823D35B0) PPC_WEAK_FUNC(sub_823D35B0);
PPC_FUNC_IMPL(__imp__sub_823D35B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed128
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// lhz ctx_arrow(ctx)->r30,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 108);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d373c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D373C;
	// lis ctx_arrow(ctx)->r11,1365
	ctx_arrow(ctx)->r11.s64 = 89456640;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,21845
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 21845;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823d3604
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823D3604;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li ctx_arrow(ctx)->r10,-5
	ctx_arrow(ctx)->r10.s64 = -5;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// ble ctx_arrow(ctx)->r6,0x823d3608
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823D3608;
loc_823D3604:
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
loc_823D3608:
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,93
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 93;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d365c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D365C;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r28.u64;
	// blt ctx_arrow(ctx)->r6,0x823d3654
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823D3654;
loc_823D363C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823dd540
	sub_823DD540(ctx, base);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,-1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + -1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,48
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 48;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823d363c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823D363C;
loc_823D3654:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
	// b 0x823d3660
	goto loc_823D3660;
loc_823D365C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823D3660:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 140, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x823d3748
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D3748;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r10,65(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r27.u64;
loc_823D36A0:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,27(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 27);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823d373c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823D373C;
	// lhz ctx_arrow(ctx)->r10,3(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 3);
	// lbz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 3);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 5;
	// ble ctx_arrow(ctx)->r6,0x823d3728
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823D3728;
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r24,24
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r24.u32 & 0xFF;
	// lwz ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,4,0,27
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x823dd6a0
	sub_823DD6A0(ctx, base);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823d3720
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823D3720;
	// lwz ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r28.u64;
	// bl 0x823dd2e0
	sub_823DD2E0(ctx, base);
loc_823D3720:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
loc_823D3728:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r25.s64 + 1;
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r30.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823d36a0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823D36A0;
loc_823D373C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
loc_823D3748:
	// lis ctx_arrow(ctx)->r3,-32761
	ctx_arrow(ctx)->r3.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 14;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
}

alias(__imp__sub_823D3758) PPC_WEAK_FUNC(sub_823D3758);
PPC_FUNC_IMPL(__imp__sub_823D3758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 0) & 0x2;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d37dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D37DC;
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,-4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + -4;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// blt ctx_arrow(ctx)->r6,0x823d37b4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823D37B4;
loc_823D379C:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,-48
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + -48;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dd7a0
	sub_823DD7A0(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823d379c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823D379C;
loc_823D37B4:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u32 & 0x1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d37d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D37D0;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,93
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 93;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
loc_823D37D0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823D37DC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dd7a0
	sub_823DD7A0(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u32 & 0x1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d3800
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D3800;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32814
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32814;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
loc_823D3800:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823D3810) PPC_WEAK_FUNC(sub_823D3810);
PPC_FUNC_IMPL(__imp__sub_823D3810) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823d32e8
	sub_823D32E8(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d3850
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D3850;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32806
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32806;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823D3850:
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

alias(__imp__sub_823D3868) PPC_WEAK_FUNC(sub_823D3868);
PPC_FUNC_IMPL(__imp__sub_823D3868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d38b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D38B4;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 8;
loc_823D3888:
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r29.u32, xer);
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// beq ctx_arrow(ctx)->r6,0x823d38a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D38A4;
	// lis ctx_arrow(ctx)->r4,8328
	ctx_arrow(ctx)->r4.s64 = 545783808;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,2184
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 2184;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823D38A4:
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r30.u32, 0);
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823d3888
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823D3888;
loc_823D38B4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823D38C0) PPC_WEAK_FUNC(sub_823D38C0);
PPC_FUNC_IMPL(__imp__sub_823D38C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFFFF;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823d38d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823D38D8;
	// li ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = 4;
	// blr 
	return;
loc_823D38D8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823d38e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823D38E8;
	// li ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r3.s64 = 3;
	// blr 
	return;
loc_823D38E8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823d38f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823D38F8;
	// li ctx_arrow(ctx)->r3,11
	ctx_arrow(ctx)->r3.s64 = 11;
	// blr 
	return;
loc_823D38F8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823d3908
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823D3908;
	// li ctx_arrow(ctx)->r3,51
	ctx_arrow(ctx)->r3.s64 = 51;
	// blr 
	return;
loc_823D3908:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 6, xer);
	// bne ctx_arrow(ctx)->r6,0x823d3918
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823D3918;
	// li ctx_arrow(ctx)->r3,63
	ctx_arrow(ctx)->r3.s64 = 63;
	// blr 
	return;
loc_823D3918:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 8, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// li ctx_arrow(ctx)->r3,1599
	ctx_arrow(ctx)->r3.s64 = 1599;
	// blr 
	return;
}

alias(__imp__sub_823D3928) PPC_WEAK_FUNC(sub_823D3928);
PPC_FUNC_IMPL(__imp__sub_823D3928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r10.u64;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u32 & 0xFFFF;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u32 & 0xFFFF;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// sth ctx_arrow(ctx)->r27,2(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 2, ctx_arrow(ctx)->r27, 0);
	// stw ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// sth ctx_arrow(ctx)->r30,14(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 14, ctx_arrow(ctx)->r30, 0);
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 65536;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x7) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 3;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-18
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -18;
	// addze ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	temp.s64 = ctx_arrow(ctx)->r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r11.u32;
	ctx_arrow(ctx)->r11.s64 = temp.s64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r9.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,40
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 40, xer);
	// sth ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r10.u16);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r7.s32);
	// sth ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r11, 0);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x823d39a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D39A0;
	// sth ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r29, 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
loc_823D39A0:
	// li ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r10.s64 = -2;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 24;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,1264
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 1264;
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// sth ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r10.u16);
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u32 & 0xFFFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x823d39d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D39D4;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r28.u64;
loc_823D39D4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// sth ctx_arrow(ctx)->r30,18(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 18, ctx_arrow(ctx)->r30, 0);
	// beq ctx_arrow(ctx)->r6,0x823d39ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D39EC;
	// stw ctx_arrow(ctx)->r26,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
loc_823D39EC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x823d38c0
	sub_823D38C0(ctx, base);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823D3A00) PPC_WEAK_FUNC(sub_823D3A00);
PPC_FUNC_IMPL(__imp__sub_823D3A00) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cfc00
	sub_823CFC00(ctx, base);
	return;
}

alias(__imp__sub_823D3A08) PPC_WEAK_FUNC(sub_823D3A08);
PPC_FUNC_IMPL(__imp__sub_823D3A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x82364c98
	sub_82364C98(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823d3ad8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823D3AD8;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82364ae8
	sub_82364AE8(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823d3ad8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823D3AD8;
	// lbz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
	// li ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r30.s64 = 16;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bgt ctx_arrow(ctx)->r6,0x823d3a90
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823D3A90;
	// lis ctx_arrow(ctx)->r12,-32195
	ctx_arrow(ctx)->r12.s64 = -2109931520;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,14956
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 14956;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r0
	ctr.u64 = ctx_arrow(ctx)->r0.u64;
	// bctr 
	switch (ctx_arrow(ctx)->r11.u64) {
	case 0:
		goto loc_823D3A7C;
	case 1:
		goto loc_823D3A98;
	case 2:
		goto loc_823D3A88;
	case 3:
		goto loc_823D3A98;
	default:
		__builtin_unreachable();
	}
	// lwz ctx_arrow(ctx)->r17,14972(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15000(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,14984(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,15000(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_823D3A7C:
	// li ctx_arrow(ctx)->r29,3
	ctx_arrow(ctx)->r29.s64 = 3;
	// li ctx_arrow(ctx)->r30,32
	ctx_arrow(ctx)->r30.s64 = 32;
	// b 0x823d3a98
	goto loc_823D3A98;
loc_823D3A88:
	// li ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r30.s64 = 8;
	// b 0x823d3a98
	goto loc_823D3A98;
loc_823D3A90:
	// lis ctx_arrow(ctx)->r28,-32768
	ctx_arrow(ctx)->r28.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,16389
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 16389;
loc_823D3A98:
	// lbz ctx_arrow(ctx)->r31,89(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d38c0
	sub_823D38C0(ctx, base);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823d3ad8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823D3AD8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823d3ad8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823D3AD8;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r7,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,40
	ctx_arrow(ctx)->r4.s64 = 40;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x823d3928
	sub_823D3928(ctx, base);
loc_823D3AD8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823D3AE0) PPC_WEAK_FUNC(sub_823D3AE0);
PPC_FUNC_IMPL(__imp__sub_823D3AE0) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-20440
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -20440;
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// stb ctx_arrow(ctx)->r11,1(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 1, ctx_arrow(ctx)->r1.u32.u8);
	// blr 
	return;
}

