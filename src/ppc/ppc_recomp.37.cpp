#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_823BA258) PPC_WEAK_FUNC(sub_823BA258);
PPC_FUNC_IMPL(__imp__sub_823BA258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823b9c28
	sub_823B9C28(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// std ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 56);
	// stw ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 64);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// std ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA2B0) PPC_WEAK_FUNC(sub_823BA2B0);
PPC_FUNC_IMPL(__imp__sub_823BA2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x823b9c28
	sub_823B9C28(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stw ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// bl 0x823edf70
	sub_823EDF70(&ctx);
	// stw ctx_arrow(ctx)->r30,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// std ctx_arrow(ctx)->r28,56(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 56);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823BA308) PPC_WEAK_FUNC(sub_823BA308);
PPC_FUNC_IMPL(__imp__sub_823BA308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823b9cc8
	sub_823B9CC8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba350
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA350;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823BA350:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA368) PPC_WEAK_FUNC(sub_823BA368);
PPC_FUNC_IMPL(__imp__sub_823BA368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823b9cc8
	sub_823B9CC8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba3b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA3B0;
	// li ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 2;
	// std ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823BA3B0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA3C8) PPC_WEAK_FUNC(sub_823BA3C8);
PPC_FUNC_IMPL(__imp__sub_823BA3C8) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823b9dd0
	sub_823B9DD0(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba400
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA400;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823BA400:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA418) PPC_WEAK_FUNC(sub_823BA418);
PPC_FUNC_IMPL(__imp__sub_823BA418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x823ba000
	sub_823BA000(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba464
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA464;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823ba464
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BA464;
	// ld ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823BA464:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA480) PPC_WEAK_FUNC(sub_823BA480);
PPC_FUNC_IMPL(__imp__sub_823BA480) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823ba130
	sub_823BA130(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba4b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA4B8;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823BA4B8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA4D0) PPC_WEAK_FUNC(sub_823BA4D0);
PPC_FUNC_IMPL(__imp__sub_823BA4D0) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823ba178
	sub_823BA178(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba508
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA508;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823BA508:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA520) PPC_WEAK_FUNC(sub_823BA520);
PPC_FUNC_IMPL(__imp__sub_823BA520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz ctx_arrow(ctx)->r17,13192(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r16,-21464(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r16.u64 = PPC_Read_U32(ctx,  ctx);
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + -112;
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// bl 0x823ba140
	sub_823BA140(&ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21536
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21536;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// bl 0x823ba1d8
	sub_823BA1D8(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r31.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA528) PPC_WEAK_FUNC(sub_823BA528);
PPC_FUNC_IMPL(__imp__sub_823BA528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + -112;
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// bl 0x823ba140
	sub_823BA140(&ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21536
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21536;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// bl 0x823ba1d8
	sub_823BA1D8(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r31.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA578) PPC_WEAK_FUNC(sub_823BA578);
PPC_FUNC_IMPL(__imp__sub_823BA578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r12,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r12.s64 + -112;
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r3,132(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823ba178
	sub_823BA178(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823BA5A0) PPC_WEAK_FUNC(sub_823BA5A0);
PPC_FUNC_IMPL(__imp__sub_823BA5A0) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823ba1c8
	sub_823BA1C8(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba5d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA5D8;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823BA5D8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA5F0) PPC_WEAK_FUNC(sub_823BA5F0);
PPC_FUNC_IMPL(__imp__sub_823BA5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz ctx_arrow(ctx)->r17,13192(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r16,-21408(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r16.u64 = PPC_Read_U32(ctx,  ctx);
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + -112;
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// bl 0x823ba140
	sub_823BA140(&ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21504
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21504;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// bl 0x823ba220
	sub_823BA220(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r31.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA5F8) PPC_WEAK_FUNC(sub_823BA5F8);
PPC_FUNC_IMPL(__imp__sub_823BA5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + -112;
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// bl 0x823ba140
	sub_823BA140(&ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21504
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21504;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// bl 0x823ba220
	sub_823BA220(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r31,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r31.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA648) PPC_WEAK_FUNC(sub_823BA648);
PPC_FUNC_IMPL(__imp__sub_823BA648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r12,-112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r12.s64 + -112;
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r3,132(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823ba178
	sub_823BA178(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823BA670) PPC_WEAK_FUNC(sub_823BA670);
PPC_FUNC_IMPL(__imp__sub_823BA670) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823ba210
	sub_823BA210(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ba6a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BA6A8;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823BA6A8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA6C0) PPC_WEAK_FUNC(sub_823BA6C0);
PPC_FUNC_IMPL(__imp__sub_823BA6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// stw ctx_arrow(ctx)->r5,44(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 44);
	// stw ctx_arrow(ctx)->r6,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// bl 0x823ba258
	sub_823BA258(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA708) PPC_WEAK_FUNC(sub_823BA708);
PPC_FUNC_IMPL(__imp__sub_823BA708) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ba258
	sub_823BA258(ctx, base);
	return;
}

alias(__imp__sub_823BA710) PPC_WEAK_FUNC(sub_823BA710);
PPC_FUNC_IMPL(__imp__sub_823BA710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x823bd678
	sub_823BD678(&ctx);
	// bl 0x823b3588
	sub_823B3588(&ctx);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-20732
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -20732;
	// stfs f1,0(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// bl 0x823bc6d8
	sub_823BC6D8(&ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0x1;
	// stb ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 4, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA758) PPC_WEAK_FUNC(sub_823BA758);
PPC_FUNC_IMPL(__imp__sub_823BA758) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x823b3588
	sub_823B3588(&ctx);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-20732
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -20732;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,0(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfs f0,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823ba7a0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823BA7A0;
	// bl 0x823b3588
	sub_823B3588(ctx, base);
	// stfs f1,0(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// bl 0x823bc6d8
	sub_823BC6D8(&ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0x1;
	// stb ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 4, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823BA7A0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA7B8) PPC_WEAK_FUNC(sub_823BA7B8);
PPC_FUNC_IMPL(__imp__sub_823BA7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21360
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21360;
	// li ctx_arrow(ctx)->r5,60
	ctx_arrow(ctx)->r5.s64 = 60;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,17
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 17;
	// stw ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stb ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// std ctx_arrow(ctx)->r30,80(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 80);
	// stw ctx_arrow(ctx)->r30,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
	// stb ctx_arrow(ctx)->r30,120(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 120, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,121(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 121, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,122(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 122, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,123(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 123, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,124(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 124, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,125(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 125, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,126(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 126, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,127(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 127, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,128(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 128, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// stw ctx_arrow(ctx)->r30,136(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 136);
	// stb ctx_arrow(ctx)->r30,140(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 140, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,141(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 141, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,142(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 142, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,143(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 143, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,144(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 144, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,145(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 145, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,146(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 146, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,147(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 147, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r30,148(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 148);
	// stw ctx_arrow(ctx)->r30,152(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 152);
	// stb ctx_arrow(ctx)->r30,156(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 156, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,157(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 157, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,158(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 158, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,159(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 159, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r30,160(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 160);
	// stw ctx_arrow(ctx)->r30,164(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 164);
	// stb ctx_arrow(ctx)->r30,168(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 168, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,200(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 200, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r30,204(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 204);
	// stb ctx_arrow(ctx)->r30,236(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 236, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,237(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 237, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,238(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 238, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r10,240(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 240);
	// stb ctx_arrow(ctx)->r30,304(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 304, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,92
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 92;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = 7;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823BA8A4:
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823ba8a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BA8A4;
	// stw ctx_arrow(ctx)->r30,244(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 244);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,268
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 268;
	// stw ctx_arrow(ctx)->r30,248(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 248);
	// stw ctx_arrow(ctx)->r30,252(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 252);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r30,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 256);
	// li ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r10.s64 = 9;
	// stw ctx_arrow(ctx)->r30,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 260);
	// stw ctx_arrow(ctx)->r30,264(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 264);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823BA8D8:
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823ba8d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BA8D8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BA900) PPC_WEAK_FUNC(sub_823BA900);
PPC_FUNC_IMPL(__imp__sub_823BA900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21360
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21360;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823BA910) PPC_WEAK_FUNC(sub_823BA910);
PPC_FUNC_IMPL(__imp__sub_823BA910) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// stb ctx_arrow(ctx)->r29,120(ctx_arrow(ctx)->r30)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r30.u32 + 120, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
loc_823BA92C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8235da08
	sub_8235DA08(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823ba968
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BA968;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	// lis ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r10.u32);
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,32778
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u64 | 32778;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,27,31,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BA968:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x823ba92c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BA92C;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BA980) PPC_WEAK_FUNC(sub_823BA980);
PPC_FUNC_IMPL(__imp__sub_823BA980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed118
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r10.u64;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r7.u64;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r9.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bab50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BAB50;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31,17
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r31.s64 + 17;
	// li ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = 8;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
	// stb ctx_arrow(ctx)->r30,237(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 237, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,238(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 238, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,236(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 236, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_823BA9D4:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stb ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// bdnz 0x823ba9d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BA9D4;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,61
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 61;
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,25
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 25;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,92
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 92;
	// li ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = 7;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823BAA14:
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823baa14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BAA14;
	// lbz ctx_arrow(ctx)->r30,311(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r23,24
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r23.u32 & 0xFF;
	// lbz ctx_arrow(ctx)->r29,303(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r31.s64 + 80;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// lbz ctx_arrow(ctx)->r28,295(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64;
	// lbz ctx_arrow(ctx)->r27,279(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U8(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// lbz ctx_arrow(ctx)->r26,287(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r24,316(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx,  ctx);
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r24.u64;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r9.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,22,22
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x200) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFDFF);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,0
	xer.ca = ctx_arrow(ctx)->r8.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r8.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,23,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x100) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r22.u32 & 0xFF;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,30,30
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x2) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r9.s64;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r21,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r21.u32 & 0xFF;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r25,324(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,29,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x4) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r9.s64;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r27.u64;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r9.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,28,28
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x8) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r26.u64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,27,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x10) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r25.u64;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,0,26,26
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x20;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 88;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r20.u64;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1822
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 1822;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// or ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r3.u64;
	// bl 0x823bc6e0
	sub_823BC6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bab50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BAB50;
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// stb ctx_arrow(ctx)->r23,140(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 140, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r23), 0);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// stb ctx_arrow(ctx)->r22,141(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 141, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r22), 0);
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// stb ctx_arrow(ctx)->r21,142(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 142, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r21), 0);
	// stb ctx_arrow(ctx)->r26,143(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 143, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r26), 0);
	// stb ctx_arrow(ctx)->r27,144(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 144, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r27), 0);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stb ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16));
	// stb ctx_arrow(ctx)->r28,145(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 145, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// stb ctx_arrow(ctx)->r29,146(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 146, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// stb ctx_arrow(ctx)->r30,147(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 147, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r24,148(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 148);
	// stw ctx_arrow(ctx)->r25,152(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 152);
	// stb ctx_arrow(ctx)->r23,121(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 121, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r23), 0);
	// stb ctx_arrow(ctx)->r22,122(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 122, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r22), 0);
	// stb ctx_arrow(ctx)->r21,123(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 123, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r21), 0);
	// stb ctx_arrow(ctx)->r26,124(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 124, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r26), 0);
	// stb ctx_arrow(ctx)->r27,125(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 125, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r27), 0);
	// stb ctx_arrow(ctx)->r28,126(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 126, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// stb ctx_arrow(ctx)->r29,127(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 127, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// stb ctx_arrow(ctx)->r30,128(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 128, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r24,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// stw ctx_arrow(ctx)->r25,136(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 136);
loc_823BAB50:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed168
	return;
}

alias(__imp__sub_823BAB58) PPC_WEAK_FUNC(sub_823BAB58);
PPC_FUNC_IMPL(__imp__sub_823BAB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,-20928(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// bne ctx_arrow(ctx)->r6,0x823bafcc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BAFCC;
	// lbz ctx_arrow(ctx)->r10,237(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bacf8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BACF8;
	// lbz ctx_arrow(ctx)->r11,304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bacf8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BACF8;
	// lbz ctx_arrow(ctx)->r11,146(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,17
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 17;
	// lbz ctx_arrow(ctx)->r10,143(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,60
	ctx_arrow(ctx)->r5.s64 = 60;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// lbz ctx_arrow(ctx)->r9,142(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r8,140(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// lbz ctx_arrow(ctx)->r7,147(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// lbz ctx_arrow(ctx)->r6,145(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r3,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// lbz ctx_arrow(ctx)->r29,141(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U8(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r9.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,26,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x20) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,0
	xer.ca = ctx_arrow(ctx)->r8.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r8.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,28,28
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x8) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,0
	xer.ca = ctx_arrow(ctx)->r7.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r7.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,30,30
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x2) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,0
	xer.ca = ctx_arrow(ctx)->r6.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r6.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,21,21
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x400) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,23,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x100) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29,0
	xer.ca = ctx_arrow(ctx)->r29.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r29.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,27,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x10) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x4;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1850
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 1850;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 | 1;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,92
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 92;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// li ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = 7;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823BAC4C:
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823bac4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BAC4C;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 88;
	// lwz ctx_arrow(ctx)->r6,152(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r5,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r31.s64 + 80;
	// lwz ctx_arrow(ctx)->r4,240(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823bc6e0
	sub_823BC6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 997, xer);
	// bne ctx_arrow(ctx)->r6,0x823bace4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BACE4;
	// lwz ctx_arrow(ctx)->r10,240(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// lbz ctx_arrow(ctx)->r9,140(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r8,141(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r7,142(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r6,143(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r5,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r4,145(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r3,146(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r30,147(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r29,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r27,152(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stb ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stb ctx_arrow(ctx)->r9,121(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 121));
	// stb ctx_arrow(ctx)->r8,122(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 122));
	// stb ctx_arrow(ctx)->r7,123(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 123));
	// stb ctx_arrow(ctx)->r6,124(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 124));
	// stb ctx_arrow(ctx)->r5,125(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 125));
	// stb ctx_arrow(ctx)->r4,126(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 126));
	// stb ctx_arrow(ctx)->r3,127(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 127));
	// stb ctx_arrow(ctx)->r30,128(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 128, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r29,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// stw ctx_arrow(ctx)->r27,136(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 136);
loc_823BACE4:
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r28,237(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 237, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed180
	return;
loc_823BACF8:
	// lbz ctx_arrow(ctx)->r11,238(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823baea8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BAEA8;
	// lbz ctx_arrow(ctx)->r9,304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823baea8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BAEA8;
	// lbz ctx_arrow(ctx)->r11,146(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,244
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 244;
	// lbz ctx_arrow(ctx)->r9,143(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,17
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 17;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// lbz ctx_arrow(ctx)->r8,142(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r7,140(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// lbz ctx_arrow(ctx)->r6,147(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r9.s64;
	// lbz ctx_arrow(ctx)->r5,145(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r4,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// lbz ctx_arrow(ctx)->r3,141(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0
	xer.ca = ctx_arrow(ctx)->r8.u32 <= 0;
	ctx_arrow(ctx)->r8.s64 = 0 - ctx_arrow(ctx)->r8.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,26,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x20) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 < ~ctx_arrow(ctx)->r8.u32) | (~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r8.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,0
	xer.ca = ctx_arrow(ctx)->r7.u32 <= 0;
	ctx_arrow(ctx)->r8.s64 = 0 - ctx_arrow(ctx)->r7.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,28,28
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x8) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 < ~ctx_arrow(ctx)->r8.u32) | (~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r8.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6,0
	xer.ca = ctx_arrow(ctx)->r6.u32 <= 0;
	ctx_arrow(ctx)->r8.s64 = 0 - ctx_arrow(ctx)->r6.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,30,30
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x2) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 < ~ctx_arrow(ctx)->r8.u32) | (~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r8.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5,0
	xer.ca = ctx_arrow(ctx)->r5.u32 <= 0;
	ctx_arrow(ctx)->r8.s64 = 0 - ctx_arrow(ctx)->r5.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,21,21
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x400) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 < ~ctx_arrow(ctx)->r8.u32) | (~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r8.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,0
	xer.ca = ctx_arrow(ctx)->r4.u32 <= 0;
	ctx_arrow(ctx)->r8.s64 = 0 - ctx_arrow(ctx)->r4.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,23,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x100) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 < ~ctx_arrow(ctx)->r8.u32) | (~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r8.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r8.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,27,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x10) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 < ~ctx_arrow(ctx)->r8.u32) | (~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r8.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,29,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x4;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1850
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 1850;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// or ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = 8;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64;
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_823BADAC:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stb ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// bdnz 0x823badac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BADAC;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,252
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 252;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,61
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 61;
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,268
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 268;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,25
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 25;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,92
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 92;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// li ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = 7;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823BADF8:
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823badf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BADF8;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 88;
	// lwz ctx_arrow(ctx)->r6,152(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r5,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r31.s64 + 80;
	// lwz ctx_arrow(ctx)->r4,240(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823bc6e0
	sub_823BC6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 997, xer);
	// bne ctx_arrow(ctx)->r6,0x823bafc8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BAFC8;
	// lbz ctx_arrow(ctx)->r3,145(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.s64 = 3;
	// lbz ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = -1;
	// lbz ctx_arrow(ctx)->r10,141(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// lbz ctx_arrow(ctx)->r8,142(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r6,143(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r4,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r30,146(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r29,147(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r27,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r26,152(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r3,126(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 126));
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r7,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stb ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16));
	// stb ctx_arrow(ctx)->r11,121(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 121, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stb ctx_arrow(ctx)->r10,122(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 122));
	// stb ctx_arrow(ctx)->r8,123(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 123));
	// stb ctx_arrow(ctx)->r6,124(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 124));
	// stb ctx_arrow(ctx)->r4,125(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 125));
	// stb ctx_arrow(ctx)->r30,127(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 127, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r29,128(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 128, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// stw ctx_arrow(ctx)->r27,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// stw ctx_arrow(ctx)->r26,136(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 136);
	// stb ctx_arrow(ctx)->r28,238(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 238, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed180
	return;
loc_823BAEA8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823baf3c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BAF3C;
	// lbz ctx_arrow(ctx)->r10,304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823baf3c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BAF3C;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823bc560
	sub_823BC560(ctx, base);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823baf28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BAF28;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823bc570
	sub_823BC570(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823baf28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BAF28;
	// ld ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,17
	ctx_arrow(ctx)->r10.s64 = 17;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,61
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 61;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// stdx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r10.u32);
	// bl 0x823ee010
	sub_823EE010(&ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,268
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 268;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,25
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 25;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,240(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 2;
	// stb ctx_arrow(ctx)->r28,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_823BAF28:
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r28,237(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 237, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed180
	return;
loc_823BAF3C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bafcc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BAFCC;
	// lbz ctx_arrow(ctx)->r11,304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bafcc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BAFCC;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,252
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 252;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,244
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 244;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823bc570
	sub_823BC570(ctx, base);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bafc8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BAFC8;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,17
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 17;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = 8;
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_823BAF80:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stb ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// bdnz 0x823baf80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BAF80;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,61
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 61;
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,268
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 268;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,25
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 25;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// stb ctx_arrow(ctx)->r28,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
loc_823BAFC8:
	// stb ctx_arrow(ctx)->r28,238(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 238, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
loc_823BAFCC:
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823f3a90
	sub_823F3A90(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823BAFE0) PPC_WEAK_FUNC(sub_823BAFE0);
PPC_FUNC_IMPL(__imp__sub_823BAFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb004
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB004;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb1c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB1C4;
loc_823BB004:
	// lbz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb1c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB1C4;
	// lbz ctx_arrow(ctx)->r11,168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb1c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB1C4;
	// lbz ctx_arrow(ctx)->r11,125(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb07c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB07C;
	// lbz ctx_arrow(ctx)->r11,145(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,126(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb07c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB07C;
	// lbz ctx_arrow(ctx)->r11,146(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,127(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb07c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB07C;
	// lbz ctx_arrow(ctx)->r11,147(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,128(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb07c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB07C;
	// lwz ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,132(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb07c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB07C;
	// lwz ctx_arrow(ctx)->r11,152(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb1c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB1C4;
loc_823BB07C:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,172
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 172;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = 7;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823BB090:
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823bb090
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BB090;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r7,152(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r6,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,132(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,123(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// lbz ctx_arrow(ctx)->r9,122(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r8,121(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// subfe ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r4.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// lbz ctx_arrow(ctx)->r30,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U8(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// lbz ctx_arrow(ctx)->r10,147(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r29,146(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U8(ctx,  ctx);
	// subfe ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r6.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// lbz ctx_arrow(ctx)->r28,145(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U8(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r9.s64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6,0,28,28
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r6.u32, 0) & 0x8) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFFFFFFFFF7);
	// lwz ctx_arrow(ctx)->r5,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// lwz ctx_arrow(ctx)->r6,152(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0
	xer.ca = ctx_arrow(ctx)->r8.u32 <= 0;
	ctx_arrow(ctx)->r8.s64 = 0 - ctx_arrow(ctx)->r8.s64;
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,0,29,29
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x4) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFFFFFFFFFB);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 < ~ctx_arrow(ctx)->r8.u32) | (~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r8.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,0
	xer.ca = ctx_arrow(ctx)->r30.u32 <= 0;
	ctx_arrow(ctx)->r8.s64 = 0 - ctx_arrow(ctx)->r30.s64;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,0,30,30
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x2) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFFFFFFFFFD);
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 < ~ctx_arrow(ctx)->r8.u32) | (~ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r8.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r8.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,0,27,27
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x10) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFFFFFFFFEF);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29,0
	xer.ca = ctx_arrow(ctx)->r29.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r29.s64;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0,21,21
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x400) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFFFFFFFBFF);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28,0
	xer.ca = ctx_arrow(ctx)->r28.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r28.s64;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0,22,22
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x200) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFFFFFFFDFF);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -2;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0,23,23
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x100) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFFFFFFFEFF);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// andi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,1854
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64 & 1854;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// or ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// bl 0x823bc880
	sub_823BC880(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 997, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb1b0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB1B0;
	// lbz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// lbz ctx_arrow(ctx)->r10,145(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r8,146(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r7,147(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r6,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,152(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r9,168(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 168));
	// stb ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 156, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stb ctx_arrow(ctx)->r10,157(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 157));
	// stb ctx_arrow(ctx)->r8,158(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 158));
	// stb ctx_arrow(ctx)->r7,159(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 159));
	// stw ctx_arrow(ctx)->r6,160(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 160);
	// stw ctx_arrow(ctx)->r5,164(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 164);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823BB1B0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BB1C4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823BB1D0) PPC_WEAK_FUNC(sub_823BB1D0);
PPC_FUNC_IMPL(__imp__sub_823BB1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,268
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 268;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// stw ctx_arrow(ctx)->r11,240(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 240);
	// stb ctx_arrow(ctx)->r10,238(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 238));
	// stb ctx_arrow(ctx)->r9,237(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 237));
	// stb ctx_arrow(ctx)->r10,304(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 304));
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bab58
	sub_823BAB58(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BB230) PPC_WEAK_FUNC(sub_823BB230);
PPC_FUNC_IMPL(__imp__sub_823BB230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// stb ctx_arrow(ctx)->r9,238(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 238));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,244
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 244;
	// stb ctx_arrow(ctx)->r8,237(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 237));
	// li ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = 8;
	// stb ctx_arrow(ctx)->r8,304(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 304));
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_823BB274:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stb ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// bdnz 0x823bb274
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BB274;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,252
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 252;
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,268
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 268;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bab58
	sub_823BAB58(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BB2C8) PPC_WEAK_FUNC(sub_823BB2C8);
PPC_FUNC_IMPL(__imp__sub_823BB2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lbz ctx_arrow(ctx)->r11,236(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb3b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB3B8;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb310
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB310;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb310
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB310;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb3b8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB3B8;
	// stb ctx_arrow(ctx)->r11,236(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 236, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// b 0x823bb3b8
	goto loc_823BB3B8;
loc_823BB310:
	// lbz ctx_arrow(ctx)->r10,200(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb334
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB334;
	// lwz ctx_arrow(ctx)->r10,204(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb334
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB334;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_823BB334:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb3b8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB3B8;
	// lbz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb39c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB39C;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,92
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 92;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = 7;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823BB360:
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823bb360
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BB360;
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823bc938
	sub_823BC938(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 997, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb388
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB388;
	// li ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r11.s64 = 5;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// b 0x823bb3b4
	goto loc_823BB3B4;
loc_823BB388:
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8235d388
	sub_8235D388(ctx, base);
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
	// b 0x823bb3a8
	goto loc_823BB3A8;
loc_823BB39C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,17
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 17;
	// bl 0x823bc580
	sub_823BC580(ctx, base);
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
loc_823BB3A8:
	// stb ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_823BB3B4:
	// stb ctx_arrow(ctx)->r30,236(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 236, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
loc_823BB3B8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BB3D0) PPC_WEAK_FUNC(sub_823BB3D0);
PPC_FUNC_IMPL(__imp__sub_823BB3D0) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823bb2c8
	sub_823BB2C8(ctx, base);
	// lbz ctx_arrow(ctx)->r11,168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb460
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB460;
	// lwz ctx_arrow(ctx)->r11,172(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,172
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 172;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb460
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB460;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb448
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB448;
	// lbz ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,157(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r9,158(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r8,159(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r7,160(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r6,164(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r11,125(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 125, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stb ctx_arrow(ctx)->r10,126(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 126));
	// stb ctx_arrow(ctx)->r9,127(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 127));
	// stb ctx_arrow(ctx)->r8,128(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 128));
	// stw ctx_arrow(ctx)->r7,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// stw ctx_arrow(ctx)->r6,136(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 136);
loc_823BB448:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stb ctx_arrow(ctx)->r30,168(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 168, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BB460:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r28,-1
	ctx_arrow(ctx)->r28.s64 = -1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb4ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB4EC;
	// lbz ctx_arrow(ctx)->r11,168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb4ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB4EC;
	// lwz ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb490
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB490;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb4ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB4EC;
loc_823BB490:
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,92
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 92;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb4ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB4EC;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb4c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB4C4;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,17
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 17;
	// bl 0x823bc580
	sub_823BC580(ctx, base);
	// b 0x823bb4cc
	goto loc_823BB4CC;
loc_823BB4C4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8235de98
	sub_8235DE98(ctx, base);
loc_823BB4CC:
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8235d388
	sub_8235D388(ctx, base);
	// stw ctx_arrow(ctx)->r30,204(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 204);
	// stb ctx_arrow(ctx)->r30,200(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 200, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r28,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r28,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
loc_823BB4EC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bab58
	sub_823BAB58(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r27,2
	ctx_arrow(ctx)->r27.s64 = 2;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb534
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB534;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,92
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 92;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb584
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB584;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb570
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB570;
	// stw ctx_arrow(ctx)->r27,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// b 0x823bb584
	goto loc_823BB584;
loc_823BB534:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb584
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB584;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,92
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 92;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb584
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB584;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb570
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB570;
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// b 0x823bb584
	goto loc_823BB584;
loc_823BB570:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8235de98
	sub_8235DE98(ctx, base);
	// stb ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 16, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r28,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_823BB584:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb598
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB598;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb5a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB5A0;
loc_823BB598:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bafe0
	sub_823BAFE0(ctx, base);
loc_823BB5A0:
	// lwz ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bgt ctx_arrow(ctx)->r6,0x823bb6cc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823BB6CC;
	// lis ctx_arrow(ctx)->r12,-32196
	ctx_arrow(ctx)->r12.s64 = -2109997056;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-19004
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -19004;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r0
	ctr.u64 = ctx_arrow(ctx)->r0.u64;
	// bctr 
	switch (ctx_arrow(ctx)->r11.u64) {
	case 0:
		goto loc_823BB5D4;
	case 1:
		goto loc_823BB618;
	case 2:
		goto loc_823BB64C;
	case 3:
		goto loc_823BB68C;
	default:
		__builtin_unreachable();
	}
	// lwz ctx_arrow(ctx)->r17,-18988(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,-18920(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,-18868(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,-18804(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BB5D4:
	// lbz ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb6cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB6CC;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,208
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r31.s64 + 208;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// std ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r5)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
	// std ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r5)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 8);
	// std ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r5)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 16);
	// stw ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r5)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 24);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823bcd60
	sub_823BCD60(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 997, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb6cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB6CC;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 204);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_823BB618:
	// lwz ctx_arrow(ctx)->r11,208(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,208
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 208;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb6cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB6CC;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb6c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB6C0;
	// stw ctx_arrow(ctx)->r27,204(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 204);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_823BB64C:
	// lbz ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb6cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB6CC;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,208
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 208;
	// std ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r4)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// std ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r4)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 8);
	// std ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r4)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 16);
	// stw ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 24);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823bcdf8
	sub_823BCDF8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 997, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb6cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB6CC;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stw ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 204);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_823BB68C:
	// lwz ctx_arrow(ctx)->r11,208(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,208
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 208;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb6cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB6CC;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb6c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB6C0;
	// stw ctx_arrow(ctx)->r30,204(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 204);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_823BB6C0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r30,204(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 204);
	// bl 0x8235de98
	sub_8235DE98(&ctx);
loc_823BB6CC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823BB6D8) PPC_WEAK_FUNC(sub_823BB6D8);
PPC_FUNC_IMPL(__imp__sub_823BB6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r4,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-21312
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -21312;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u32 & 0xFF;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x823ed380
	sub_823ED380(&ctx);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// bl 0x823bc9e8
	sub_823BC9E8(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BB730) PPC_WEAK_FUNC(sub_823BB730);
PPC_FUNC_IMPL(__imp__sub_823BB730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// std ctx_arrow(ctx)->r4,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-21292
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -21292;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u32 & 0xFF;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x823ed380
	sub_823ED380(&ctx);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// bl 0x823bca90
	sub_823BCA90(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BB788) PPC_WEAK_FUNC(sub_823BB788);
PPC_FUNC_IMPL(__imp__sub_823BB788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-21272
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -21272;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// bl 0x823bcb38
	sub_823BCB38(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BB7D8) PPC_WEAK_FUNC(sub_823BB7D8);
PPC_FUNC_IMPL(__imp__sub_823BB7D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823bb800
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB800;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb824
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB824;
loc_823BB800:
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// std ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-21244
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -21244;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// bl 0x823bcbe0
	sub_823BCBE0(ctx, base);
loc_823BB824:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BB838) PPC_WEAK_FUNC(sub_823BB838);
PPC_FUNC_IMPL(__imp__sub_823BB838) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r7.u64;
	// b 0x8235d9f8
	sub_8235D9F8(ctx, base);
	return;
}

alias(__imp__sub_823BB850) PPC_WEAK_FUNC(sub_823BB850);
PPC_FUNC_IMPL(__imp__sub_823BB850) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// stw ctx_arrow(ctx)->r6,156(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 156);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-21216
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -21216;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,156
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 156;
	// li ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = 4;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BB8B0) PPC_WEAK_FUNC(sub_823BB8B0);
PPC_FUNC_IMPL(__imp__sub_823BB8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-21164
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -21164;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823ed380
	sub_823ED380(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8235d950
	sub_8235D950(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BB8F8) PPC_WEAK_FUNC(sub_823BB8F8);
PPC_FUNC_IMPL(__imp__sub_823BB8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stb ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 200, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// blr 
	return;
}

alias(__imp__sub_823BB908) PPC_WEAK_FUNC(sub_823BB908);
PPC_FUNC_IMPL(__imp__sub_823BB908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stb ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 200, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// blr 
	return;
}

alias(__imp__sub_823BB918) PPC_WEAK_FUNC(sub_823BB918);
PPC_FUNC_IMPL(__imp__sub_823BB918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 12;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-21112
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -21112;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// li ctx_arrow(ctx)->r9,7
	ctx_arrow(ctx)->r9.s64 = 7;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// stb ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 40, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_823BB940:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// bdnz 0x823bb940
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BB940;
	// blr 
	return;
}

alias(__imp__sub_823BB950) PPC_WEAK_FUNC(sub_823BB950);
PPC_FUNC_IMPL(__imp__sub_823BB950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823bba10
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BBA10;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,12
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 12;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823bba10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBA10;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bb9e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BB9E8;
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// lbz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// beq ctx_arrow(ctx)->r6,0x823bb9d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BB9D0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stb ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 40, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823BB9D0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823bba10
	goto loc_823BBA10;
loc_823BB9E8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8235de98
	sub_8235DE98(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stb ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 40, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823BBA10:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BBA28) PPC_WEAK_FUNC(sub_823BBA28);
PPC_FUNC_IMPL(__imp__sub_823BBA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
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
	// bl 0x823ed120
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r7.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r10.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bbb40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BBB40;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r26,292(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// stw ctx_arrow(ctx)->r30,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r30,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r30,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// bl 0x823bcea8
	sub_823BCEA8(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbb40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBB40;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 12;
	// li ctx_arrow(ctx)->r9,7
	ctx_arrow(ctx)->r9.s64 = 7;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_823BBAD0:
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823bbad0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BBAD0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r22.u64;
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r24,16
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r24.u32 & 0xFFFF;
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r25,16
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r25.u32 & 0xFFFF;
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823bcea8
	sub_823BCEA8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 997, xer);
	// bne ctx_arrow(ctx)->r6,0x823bbb2c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BBB2C;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// b 0x823ed170
	return;
loc_823BBB2C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BBB40:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// b 0x823ed170
	return;
}

alias(__imp__sub_823BBB48) PPC_WEAK_FUNC(sub_823BBB48);
PPC_FUNC_IMPL(__imp__sub_823BBB48) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823bbb84
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BBB84;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// b 0x823bbb8c
	goto loc_823BBB8C;
loc_823BBB84:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823bbb90
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BBB90;
loc_823BBB8C:
	// stb ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 40, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823BBB90:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BBBA8) PPC_WEAK_FUNC(sub_823BBBA8);
PPC_FUNC_IMPL(__imp__sub_823BBBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823bbbc0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BBBC0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
loc_823BBBC0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823BBBC8) PPC_WEAK_FUNC(sub_823BBBC8);
PPC_FUNC_IMPL(__imp__sub_823BBBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,92
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 * 92;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,76(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// blelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) return;
	// lwz ctx_arrow(ctx)->r8,84(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
loc_823BBBF4:
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r5.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbc14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBC14;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 24;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bbbf4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BBBF4;
	// blr 
	return;
loc_823BBC14:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// blr 
	return;
}

alias(__imp__sub_823BBC28) PPC_WEAK_FUNC(sub_823BBC28);
PPC_FUNC_IMPL(__imp__sub_823BBC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbc7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBC7C;
	// lbz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823bbc7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BBC7C;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbc8c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBC8C;
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// b 0x823bbc8c
	goto loc_823BBC8C;
loc_823BBC7C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// beq ctx_arrow(ctx)->r6,0x823bbc8c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBC8C;
	// stb ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
loc_823BBC8C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BBCA8) PPC_WEAK_FUNC(sub_823BBCA8);
PPC_FUNC_IMPL(__imp__sub_823BBCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbd00
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBD00;
	// lbz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823bbd00
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BBD00;
	// ld ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U64(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbd10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBD10;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// b 0x823bbd10
	goto loc_823BBD10;
loc_823BBD00:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// beq ctx_arrow(ctx)->r6,0x823bbd10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBD10;
	// stb ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
loc_823BBD10:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BBD28) PPC_WEAK_FUNC(sub_823BBD28);
PPC_FUNC_IMPL(__imp__sub_823BBD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbd80
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBD80;
	// lbz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823bbd80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BBD80;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbd90
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBD90;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// b 0x823bbd90
	goto loc_823BBD90;
loc_823BBD80:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// beq ctx_arrow(ctx)->r6,0x823bbd90
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBD90;
	// stb ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
loc_823BBD90:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BBDA8) PPC_WEAK_FUNC(sub_823BBDA8);
PPC_FUNC_IMPL(__imp__sub_823BBDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,92
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 * 92;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823bbdf0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823BBDF0;
	// lwz ctx_arrow(ctx)->r8,88(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
loc_823BBDD4:
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r5.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbe04
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBE04;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bbdd4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BBDD4;
loc_823BBDF0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbe00
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBE00;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r6.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823BBE00:
	// blr 
	return;
loc_823BBE04:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbdf0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBDF0;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bbe00
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BBE00;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r6.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// blr 
	return;
}

alias(__imp__sub_823BBE30) PPC_WEAK_FUNC(sub_823BBE30);
PPC_FUNC_IMPL(__imp__sub_823BBE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,92
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 * 92;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// blr 
	return;
}

alias(__imp__sub_823BBE48) PPC_WEAK_FUNC(sub_823BBE48);
PPC_FUNC_IMPL(__imp__sub_823BBE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,92
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 * 92;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,44
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 44;
	// blr 
	return;
}

alias(__imp__sub_823BBE60) PPC_WEAK_FUNC(sub_823BBE60);
PPC_FUNC_IMPL(__imp__sub_823BBE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,92
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 * 92;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// blr 
	return;
}

alias(__imp__sub_823BBE78) PPC_WEAK_FUNC(sub_823BBE78);
PPC_FUNC_IMPL(__imp__sub_823BBE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,92
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 * 92;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r3,72(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BBE90) PPC_WEAK_FUNC(sub_823BBE90);
PPC_FUNC_IMPL(__imp__sub_823BBE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,92
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 * 92;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BBEA8) PPC_WEAK_FUNC(sub_823BBEA8);
PPC_FUNC_IMPL(__imp__sub_823BBEA8) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BBEF8) PPC_WEAK_FUNC(sub_823BBEF8);
PPC_FUNC_IMPL(__imp__sub_823BBEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,92
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 * 92;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r3,68(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BBF10) PPC_WEAK_FUNC(sub_823BBF10);
PPC_FUNC_IMPL(__imp__sub_823BBF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,92
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 * 92;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BBF28) PPC_WEAK_FUNC(sub_823BBF28);
PPC_FUNC_IMPL(__imp__sub_823BBF28) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BBF78) PPC_WEAK_FUNC(sub_823BBF78);
PPC_FUNC_IMPL(__imp__sub_823BBF78) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BBFC8) PPC_WEAK_FUNC(sub_823BBFC8);
PPC_FUNC_IMPL(__imp__sub_823BBFC8) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BC018) PPC_WEAK_FUNC(sub_823BC018);
PPC_FUNC_IMPL(__imp__sub_823BC018) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BC068) PPC_WEAK_FUNC(sub_823BC068);
PPC_FUNC_IMPL(__imp__sub_823BC068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc094
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC094;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_823BC094:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BC0A8) PPC_WEAK_FUNC(sub_823BC0A8);
PPC_FUNC_IMPL(__imp__sub_823BC0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 8;
loc_823BC0B4:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// subf. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x823bc0d4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BC0D4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r8.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bc0b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BC0B4;
loc_823BC0D4:
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r9.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_823BC0E0) PPC_WEAK_FUNC(sub_823BC0E0);
PPC_FUNC_IMPL(__imp__sub_823BC0E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823ba900
	sub_823BA900(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 & 0x1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc10c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC10C;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823BC10C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BC120) PPC_WEAK_FUNC(sub_823BC120);
PPC_FUNC_IMPL(__imp__sub_823BC120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stb ctx_arrow(ctx)->r6,141(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 141));
	// stb ctx_arrow(ctx)->r7,142(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 142));
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// stb ctx_arrow(ctx)->r8,144(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 144));
	// lbz ctx_arrow(ctx)->r6,191(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r7,196(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r11,237(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 237, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stb ctx_arrow(ctx)->r11,304(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 304, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// lbz ctx_arrow(ctx)->r11,183(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,204(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r31,238(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 238, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r31), 0);
	// stw ctx_arrow(ctx)->r4,240(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 240);
	// stb ctx_arrow(ctx)->r5,140(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 140));
	// stb ctx_arrow(ctx)->r9,143(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 143));
	// stb ctx_arrow(ctx)->r10,145(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 145));
	// stb ctx_arrow(ctx)->r11,146(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 146, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stb ctx_arrow(ctx)->r6,147(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 147));
	// stw ctx_arrow(ctx)->r7,148(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 148);
	// stw ctx_arrow(ctx)->r8,152(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 152);
	// bl 0x823bab58
	sub_823BAB58(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BC198) PPC_WEAK_FUNC(sub_823BC198);
PPC_FUNC_IMPL(__imp__sub_823BC198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,236(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r7.u64;
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// stb ctx_arrow(ctx)->r9,141(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 141));
	// stb ctx_arrow(ctx)->r5,237(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 237));
	// lbz ctx_arrow(ctx)->r5,199(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r9,231(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r7,238(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 238));
	// stw ctx_arrow(ctx)->r4,240(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 240);
	// stb ctx_arrow(ctx)->r7,304(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 304));
	// stb ctx_arrow(ctx)->r8,140(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 140));
	// stb ctx_arrow(ctx)->r5,144(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 144));
	// lbz ctx_arrow(ctx)->r4,207(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r7,215(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r8,223(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,244(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r10,142(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 142));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,244
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 244;
	// stb ctx_arrow(ctx)->r9,147(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 147));
	// li ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = 8;
	// stb ctx_arrow(ctx)->r4,143(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 143));
	// stb ctx_arrow(ctx)->r7,145(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 145));
	// stb ctx_arrow(ctx)->r8,146(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 146));
	// stw ctx_arrow(ctx)->r3,148(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 148);
	// stw ctx_arrow(ctx)->r5,152(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 152);
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_823BC220:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stb ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// bdnz 0x823bc220
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BC220;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,252
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 252;
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,268
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 268;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bab58
	sub_823BAB58(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BC278) PPC_WEAK_FUNC(sub_823BC278);
PPC_FUNC_IMPL(__imp__sub_823BC278) {
	PPC_FUNC_PROLOGUE();
	// stb ctx_arrow(ctx)->r4,144(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 144));
	// stb ctx_arrow(ctx)->r5,145(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 145));
	// stb ctx_arrow(ctx)->r6,146(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 146));
	// stb ctx_arrow(ctx)->r7,147(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 147));
	// stw ctx_arrow(ctx)->r8,148(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 148);
	// stw ctx_arrow(ctx)->r9,152(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 152);
	// b 0x823bafe0
	sub_823BAFE0(&ctx);
	return;
}

alias(__imp__sub_823BC298) PPC_WEAK_FUNC(sub_823BC298);
PPC_FUNC_IMPL(__imp__sub_823BC298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// stb ctx_arrow(ctx)->r10,237(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 237));
	// stb ctx_arrow(ctx)->r10,238(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 238));
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stb ctx_arrow(ctx)->r11,236(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 236, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// b 0x823bb2c8
	sub_823BB2C8(ctx, base);
	return;
}

alias(__imp__sub_823BC2C4) PPC_WEAK_FUNC(sub_823BC2C4);
PPC_FUNC_IMPL(__imp__sub_823BC2C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823BC2C8) PPC_WEAK_FUNC(sub_823BC2C8);
PPC_FUNC_IMPL(__imp__sub_823BC2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21112;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823bc068
	sub_823BC068(&ctx);
	return;
}

alias(__imp__sub_823BC2E4) PPC_WEAK_FUNC(sub_823BC2E4);
PPC_FUNC_IMPL(__imp__sub_823BC2E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823BC2E8) PPC_WEAK_FUNC(sub_823BC2E8);
PPC_FUNC_IMPL(__imp__sub_823BC2E8) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823bc2c8
	sub_823BC2C8(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc320
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC320;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823BC320:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BC338) PPC_WEAK_FUNC(sub_823BC338);
PPC_FUNC_IMPL(__imp__sub_823BC338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,96
	ctx_arrow(ctx)->r5.s64 = 96;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = 7;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823BC36C:
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bdnz 0x823bc36c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BC36C;
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// stw ctx_arrow(ctx)->r9,136(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 136);
	// stw ctx_arrow(ctx)->r9,140(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 140);
	// stw ctx_arrow(ctx)->r9,144(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 144);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 128);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BC3A8) PPC_WEAK_FUNC(sub_823BC3A8);
PPC_FUNC_IMPL(__imp__sub_823BC3A8) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823bc438
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BC438;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc438
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC438;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bc3f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BC3F4;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 136);
	// b 0x823bc408
	goto loc_823BC408;
loc_823BC3F4:
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 136);
	// bl 0x8235de98
	sub_8235DE98(&ctx);
	// stw ctx_arrow(ctx)->r3,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
loc_823BC408:
	// lwz ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc438
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC438;
	// lwz ctx_arrow(ctx)->r10,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r10.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r10.u64 ^ 1;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BC438:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BC450) PPC_WEAK_FUNC(sub_823BC450);
PPC_FUNC_IMPL(__imp__sub_823BC450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// bl 0x823bc338
	sub_823BC338(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BC488) PPC_WEAK_FUNC(sub_823BC488);
PPC_FUNC_IMPL(__imp__sub_823BC488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x8240f7fc
	__imp__XamGetSystemVersion(ctx);
	// lis ctx_arrow(ctx)->r11,8202
	ctx_arrow(ctx)->r11.s64 = 537526272;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12800
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 12800;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bc4fc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BC4FC;
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2772
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2772;
	// bl 0x824101dc
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823bc4fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BC4FC;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,80
	ctx_arrow(ctx)->r4.s64 = 80;
	// bl 0x8240fdbc
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bc4fc
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BC4FC;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// b 0x823bc500
	goto loc_823BC500;
loc_823BC4FC:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BC500:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// beq ctx_arrow(ctx)->r6,0x823bc524
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC524;
	// lis ctx_arrow(ctx)->r5,8216
	ctx_arrow(ctx)->r5.s64 = 538443776;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,33280
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u64 | 33280;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823bc528
	goto loc_823BC528;
loc_823BC524:
	// bl 0x8240ff4c
	__imp__NetDll_XNetStartup(ctx, base);
loc_823BC528:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BC540) PPC_WEAK_FUNC(sub_823BC540);
PPC_FUNC_IMPL(__imp__sub_823BC540) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x823bc488
	sub_823BC488(ctx, base);
	return;
}

alias(__imp__sub_823BC550) PPC_WEAK_FUNC(sub_823BC550);
PPC_FUNC_IMPL(__imp__sub_823BC550) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240ff5c
	__imp__NetDll_XNetRandom(ctx, base);
	return;
}

alias(__imp__sub_823BC560) PPC_WEAK_FUNC(sub_823BC560);
PPC_FUNC_IMPL(__imp__sub_823BC560) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240ff6c
	__imp__NetDll_XNetCreateKey(ctx, base);
	return;
}

alias(__imp__sub_823BC570) PPC_WEAK_FUNC(sub_823BC570);
PPC_FUNC_IMPL(__imp__sub_823BC570) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240ff7c
	__imp__NetDll_XNetRegisterKey(ctx, base);
	return;
}

alias(__imp__sub_823BC580) PPC_WEAK_FUNC(sub_823BC580);
PPC_FUNC_IMPL(__imp__sub_823BC580) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240ff8c
	__imp__NetDll_XNetUnregisterKey(ctx, base);
	return;
}

alias(__imp__sub_823BC590) PPC_WEAK_FUNC(sub_823BC590);
PPC_FUNC_IMPL(__imp__sub_823BC590) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240ff9c
	__imp__NetDll_XNetXnAddrToInAddr(ctx, base);
	return;
}

alias(__imp__sub_823BC5A8) PPC_WEAK_FUNC(sub_823BC5A8);
PPC_FUNC_IMPL(__imp__sub_823BC5A8) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240ffac
	__imp__NetDll_XNetInAddrToXnAddr(ctx, base);
	return;
}

alias(__imp__sub_823BC5C0) PPC_WEAK_FUNC(sub_823BC5C0);
PPC_FUNC_IMPL(__imp__sub_823BC5C0) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240ffbc
	__imp__NetDll_XNetInAddrToString(ctx, base);
	return;
}

alias(__imp__sub_823BC5D8) PPC_WEAK_FUNC(sub_823BC5D8);
PPC_FUNC_IMPL(__imp__sub_823BC5D8) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240ffcc
	__imp__NetDll_XNetUnregisterInAddr(ctx, base);
	return;
}

alias(__imp__sub_823BC5E8) PPC_WEAK_FUNC(sub_823BC5E8);
PPC_FUNC_IMPL(__imp__sub_823BC5E8) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240ffdc
	__imp__NetDll_XNetConnect(ctx, base);
	return;
}

alias(__imp__sub_823BC5F8) PPC_WEAK_FUNC(sub_823BC5F8);
PPC_FUNC_IMPL(__imp__sub_823BC5F8) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240ffec
	__imp__NetDll_XNetGetConnectStatus(ctx, base);
	return;
}

alias(__imp__sub_823BC608) PPC_WEAK_FUNC(sub_823BC608);
PPC_FUNC_IMPL(__imp__sub_823BC608) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8240fffc
	__imp__NetDll_XNetQosListen(ctx, base);
	return;
}

alias(__imp__sub_823BC628) PPC_WEAK_FUNC(sub_823BC628);
PPC_FUNC_IMPL(__imp__sub_823BC628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r9,236(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// stw ctx_arrow(ctx)->r9,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r8,228(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r8,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u64;
	// lwz ctx_arrow(ctx)->r7,220(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r7,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r6,212(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r6,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x8241000c
	__imp__NetDll_XNetQosLookup(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823BC690) PPC_WEAK_FUNC(sub_823BC690);
PPC_FUNC_IMPL(__imp__sub_823BC690) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8241001c
	__imp__NetDll_XNetQosServiceLookup(ctx, base);
	return;
}

alias(__imp__sub_823BC6A8) PPC_WEAK_FUNC(sub_823BC6A8);
PPC_FUNC_IMPL(__imp__sub_823BC6A8) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8241002c
	__imp__NetDll_XNetQosRelease(ctx, base);
	return;
}

alias(__imp__sub_823BC6B8) PPC_WEAK_FUNC(sub_823BC6B8);
PPC_FUNC_IMPL(__imp__sub_823BC6B8) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8241003c
	__imp__NetDll_XNetGetTitleXnAddr(ctx, base);
	return;
}

alias(__imp__sub_823BC6C8) PPC_WEAK_FUNC(sub_823BC6C8);
PPC_FUNC_IMPL(__imp__sub_823BC6C8) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8241004c
	__imp__NetDll_XNetGetDebugXnAddr(ctx, base);
	return;
}

alias(__imp__sub_823BC6D8) PPC_WEAK_FUNC(sub_823BC6D8);
PPC_FUNC_IMPL(__imp__sub_823BC6D8) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8241005c
	__imp__NetDll_XNetGetEthernetLinkStatus(ctx, base);
	return;
}

alias(__imp__sub_823BC6E0) PPC_WEAK_FUNC(sub_823BC6E0);
PPC_FUNC_IMPL(__imp__sub_823BC6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed120
	// stwu ctx_arrow(ctx)->r1,-224(ctx_arrow(ctx)->r1)
	ea = -224 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r10.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 4, xer);
	// bge ctx_arrow(ctx)->r6,0x823bc86c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BC86C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc86c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC86C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc86c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC86C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc86c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC86C;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,0,0,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0xFFFFFFC0;
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r22)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r22.u32 + 0);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,24,18
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE0FF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x823bc86c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BC86C;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,0,28,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823bc750
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC750;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bc86c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC86C;
loc_823BC750:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bc760
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC760;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bc86c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC86C;
loc_823BC760:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bc774
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC774;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,44
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 & 44;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823bc86c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC86C;
loc_823BC774:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,20,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0xF00;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bc7b4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC7B4;
	// andi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r31.u64 & 10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x823bc86c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC86C;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,0,30,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x823bc7a4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BC7A4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc7a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC7A4;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,0,21,21
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x400;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bc86c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BC86C;
loc_823BC7A4:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,22,22
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x200;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bc7b4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC7B4;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,20,20
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x800;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823bc86c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BC86C;
loc_823BC7B4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// bl 0x8241007c
	__imp__XamSessionCreateHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bne 0x823bc870
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BC870;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bne 0x823bc870
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BC870;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,28
	ctx_arrow(ctx)->r7.s64 = 28;
	// stw ctx_arrow(ctx)->r31,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r29,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// stw ctx_arrow(ctx)->r23,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 16;
	// stw ctx_arrow(ctx)->r24,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// stw ctx_arrow(ctx)->r26,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// stw ctx_arrow(ctx)->r27,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bc82c
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BC82C;
	// li ctx_arrow(ctx)->r30,1627
	ctx_arrow(ctx)->r30.s64 = 1627;
	// b 0x823bc85c
	goto loc_823BC85C;
loc_823BC82C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bc848
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BC848;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// b 0x823bc84c
	goto loc_823BC84C;
loc_823BC848:
	// li ctx_arrow(ctx)->r30,997
	ctx_arrow(ctx)->r30.s64 = 997;
loc_823BC84C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,997
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 997, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc870
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC870;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bc870
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BC870;
loc_823BC85C:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8235d388
	sub_8235D388(ctx, base);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r22)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r22.u32 + 0);
	// b 0x823bc870
	goto loc_823BC870;
loc_823BC86C:
	// li ctx_arrow(ctx)->r30,87
	ctx_arrow(ctx)->r30.s64 = 87;
loc_823BC870:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// b 0x823ed170
	return;
}

alias(__imp__sub_823BC880) PPC_WEAK_FUNC(sub_823BC880);
PPC_FUNC_IMPL(__imp__sub_823BC880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r7.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,22,22
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x200;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bc8b4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC8B4;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,20,20
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x800;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bc8b4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BC8B4;
	// li ctx_arrow(ctx)->r30,87
	ctx_arrow(ctx)->r30.s64 = 87;
	// b 0x823bc92c
	goto loc_823BC92C;
loc_823BC8B4:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bne 0x823bc92c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BC92C;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r7.s64 = 16;
	// stw ctx_arrow(ctx)->r31,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r28,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r27,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 24;
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bc904
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BC904;
	// li ctx_arrow(ctx)->r30,1627
	ctx_arrow(ctx)->r30.s64 = 1627;
	// b 0x823bc924
	goto loc_823BC924;
loc_823BC904:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bc920
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BC920;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// b 0x823bc924
	goto loc_823BC924;
loc_823BC920:
	// li ctx_arrow(ctx)->r30,997
	ctx_arrow(ctx)->r30.s64 = 997;
loc_823BC924:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240fafc
	__imp__ObDereferenceObject(ctx, base);
loc_823BC92C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823BC938) PPC_WEAK_FUNC(sub_823BC938);
PPC_FUNC_IMPL(__imp__sub_823BC938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823bc9c8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BC9C8;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r7.s64 = 16;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,17
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 17;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// std ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bc9a0
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BC9A0;
	// li ctx_arrow(ctx)->r31,1627
	ctx_arrow(ctx)->r31.s64 = 1627;
	// b 0x823bc9c0
	goto loc_823BC9C0;
loc_823BC9A0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bc9bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BC9BC;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// b 0x823bc9c0
	goto loc_823BC9C0;
loc_823BC9BC:
	// li ctx_arrow(ctx)->r31,997
	ctx_arrow(ctx)->r31.s64 = 997;
loc_823BC9C0:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240fafc
	__imp__ObDereferenceObject(ctx, base);
loc_823BC9C8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BC9E8) PPC_WEAK_FUNC(sub_823BC9E8);
PPC_FUNC_IMPL(__imp__sub_823BC9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823bca84
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BCA84;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,20
	ctx_arrow(ctx)->r7.s64 = 20;
	// stw ctx_arrow(ctx)->r29,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r28,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r27,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 18;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bca5c
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BCA5C;
	// li ctx_arrow(ctx)->r31,1627
	ctx_arrow(ctx)->r31.s64 = 1627;
	// b 0x823bca7c
	goto loc_823BCA7C;
loc_823BCA5C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bca78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BCA78;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// b 0x823bca7c
	goto loc_823BCA7C;
loc_823BCA78:
	// li ctx_arrow(ctx)->r31,997
	ctx_arrow(ctx)->r31.s64 = 997;
loc_823BCA7C:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240fafc
	__imp__ObDereferenceObject(ctx, base);
loc_823BCA84:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823BCA90) PPC_WEAK_FUNC(sub_823BCA90);
PPC_FUNC_IMPL(__imp__sub_823BCA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823bcb2c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BCB2C;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,20
	ctx_arrow(ctx)->r7.s64 = 20;
	// stw ctx_arrow(ctx)->r29,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r28,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r27,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 18;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bcb04
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BCB04;
	// li ctx_arrow(ctx)->r31,1627
	ctx_arrow(ctx)->r31.s64 = 1627;
	// b 0x823bcb24
	goto loc_823BCB24;
loc_823BCB04:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bcb20
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BCB20;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// b 0x823bcb24
	goto loc_823BCB24;
loc_823BCB20:
	// li ctx_arrow(ctx)->r31,997
	ctx_arrow(ctx)->r31.s64 = 997;
loc_823BCB24:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240fafc
	__imp__ObDereferenceObject(ctx, base);
loc_823BCB2C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823BCB38) PPC_WEAK_FUNC(sub_823BCB38);
PPC_FUNC_IMPL(__imp__sub_823BCB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823bcbd0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BCBD0;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,20
	ctx_arrow(ctx)->r7.s64 = 20;
	// stw ctx_arrow(ctx)->r29,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r28,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,19
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 19;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bcba8
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BCBA8;
	// li ctx_arrow(ctx)->r31,1627
	ctx_arrow(ctx)->r31.s64 = 1627;
	// b 0x823bcbc8
	goto loc_823BCBC8;
loc_823BCBA8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bcbc4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BCBC4;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// b 0x823bcbc8
	goto loc_823BCBC8;
loc_823BCBC4:
	// li ctx_arrow(ctx)->r31,997
	ctx_arrow(ctx)->r31.s64 = 997;
loc_823BCBC8:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240fafc
	__imp__ObDereferenceObject(ctx, base);
loc_823BCBD0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823BCBE0) PPC_WEAK_FUNC(sub_823BCBE0);
PPC_FUNC_IMPL(__imp__sub_823BCBE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823bcc78
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BCC78;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,20
	ctx_arrow(ctx)->r7.s64 = 20;
	// stw ctx_arrow(ctx)->r29,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r28,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,19
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 19;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bcc50
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BCC50;
	// li ctx_arrow(ctx)->r31,1627
	ctx_arrow(ctx)->r31.s64 = 1627;
	// b 0x823bcc70
	goto loc_823BCC70;
loc_823BCC50:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bcc6c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BCC6C;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// b 0x823bcc70
	goto loc_823BCC70;
loc_823BCC6C:
	// li ctx_arrow(ctx)->r31,997
	ctx_arrow(ctx)->r31.s64 = 997;
loc_823BCC70:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240fafc
	__imp__ObDereferenceObject(ctx, base);
loc_823BCC78:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823BCC88) PPC_WEAK_FUNC(sub_823BCC88);
PPC_FUNC_IMPL(__imp__sub_823BCC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r8.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bcd48
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BCD48;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3592
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3592, xer);
	// blt ctx_arrow(ctx)->r6,0x823bcd48
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BCD48;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bne 0x823bcd54
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BCD54;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,32
	ctx_arrow(ctx)->r7.s64 = 32;
	// stw ctx_arrow(ctx)->r27,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// std ctx_arrow(ctx)->r26,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r31,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 26;
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r11,300
	ctx_arrow(ctx)->r11.s64 = 300;
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bcd1c
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BCD1C;
	// li ctx_arrow(ctx)->r29,1627
	ctx_arrow(ctx)->r29.s64 = 1627;
	// b 0x823bcd3c
	goto loc_823BCD3C;
loc_823BCD1C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bcd38
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BCD38;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// b 0x823bcd3c
	goto loc_823BCD3C;
loc_823BCD38:
	// li ctx_arrow(ctx)->r29,997
	ctx_arrow(ctx)->r29.s64 = 997;
loc_823BCD3C:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240fafc
	__imp__ObDereferenceObject(ctx, base);
	// b 0x823bcd54
	goto loc_823BCD54;
loc_823BCD48:
	// li ctx_arrow(ctx)->r11,3592
	ctx_arrow(ctx)->r11.s64 = 3592;
	// li ctx_arrow(ctx)->r29,122
	ctx_arrow(ctx)->r29.s64 = 122;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
loc_823BCD54:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823BCD60) PPC_WEAK_FUNC(sub_823BCD60);
PPC_FUNC_IMPL(__imp__sub_823BCD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823bcdec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BCDEC;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r7.s64 = 16;
	// stw ctx_arrow(ctx)->r29,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,20
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 20;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// std ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bcdc4
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BCDC4;
	// li ctx_arrow(ctx)->r31,1627
	ctx_arrow(ctx)->r31.s64 = 1627;
	// b 0x823bcde4
	goto loc_823BCDE4;
loc_823BCDC4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bcde0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BCDE0;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// b 0x823bcde4
	goto loc_823BCDE4;
loc_823BCDE0:
	// li ctx_arrow(ctx)->r31,997
	ctx_arrow(ctx)->r31.s64 = 997;
loc_823BCDE4:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240fafc
	__imp__ObDereferenceObject(ctx, base);
loc_823BCDEC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BCDF8) PPC_WEAK_FUNC(sub_823BCDF8);
PPC_FUNC_IMPL(__imp__sub_823BCDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823bce88
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BCE88;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r7.s64 = 16;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,21
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 21;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// std ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bce60
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BCE60;
	// li ctx_arrow(ctx)->r31,1627
	ctx_arrow(ctx)->r31.s64 = 1627;
	// b 0x823bce80
	goto loc_823BCE80;
loc_823BCE60:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bce7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BCE7C;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// b 0x823bce80
	goto loc_823BCE80;
loc_823BCE7C:
	// li ctx_arrow(ctx)->r31,997
	ctx_arrow(ctx)->r31.s64 = 997;
loc_823BCE80:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240fafc
	__imp__ObDereferenceObject(ctx, base);
loc_823BCE88:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BCEA8) PPC_WEAK_FUNC(sub_823BCEA8);
PPC_FUNC_IMPL(__imp__sub_823BCEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed124
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r30,292(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r7.u64;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1326
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 * 1326;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r23.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bcf88
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BCF88;
	// lwz ctx_arrow(ctx)->r11,300(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bcf88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BCF88;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// lwz ctx_arrow(ctx)->r24,308(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,36
	ctx_arrow(ctx)->r7.s64 = 36;
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r27,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r24.u64;
	// stw ctx_arrow(ctx)->r31,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 28;
	// stw ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// stw ctx_arrow(ctx)->r26,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// sth ctx_arrow(ctx)->r25,92(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r25, 0);
	// sth ctx_arrow(ctx)->r8,94(ctx_arrow(ctx)->r1)
	PPC_STORE_U16(ctx_arrow(ctx)->r1.u32 + 94, ctx_arrow(ctx)->r8.u16);
	// stw ctx_arrow(ctx)->r9,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// stw ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bcf64
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BCF64;
	// lis ctx_arrow(ctx)->r11,-32747
	ctx_arrow(ctx)->r11.s64 = -2146107392;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20999
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 20999;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r11.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823bcf88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BCF88;
	// li ctx_arrow(ctx)->r3,1627
	ctx_arrow(ctx)->r3.s64 = 1627;
	// b 0x823bcf90
	goto loc_823BCF90;
loc_823BCF64:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bcf80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BCF80;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// b 0x823bcf90
	goto loc_823BCF90;
loc_823BCF80:
	// li ctx_arrow(ctx)->r3,997
	ctx_arrow(ctx)->r3.s64 = 997;
	// b 0x823bcf90
	goto loc_823BCF90;
loc_823BCF88:
	// stw ctx_arrow(ctx)->r23,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// li ctx_arrow(ctx)->r3,122
	ctx_arrow(ctx)->r3.s64 = 122;
loc_823BCF90:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// b 0x823ed174
	return;
}

alias(__imp__sub_823BCF98) PPC_WEAK_FUNC(sub_823BCF98);
PPC_FUNC_IMPL(__imp__sub_823BCF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,16,48
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u64, 16) & 0xFFFF;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r7.u64;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x823bcfd4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BCFD4;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,24,25
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xC0;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823bd04c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BD04C;
loc_823BCFD4:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8241006c
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bne 0x823bd04c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BD04C;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 720896;
	// li ctx_arrow(ctx)->r7,24
	ctx_arrow(ctx)->r7.s64 = 24;
	// std ctx_arrow(ctx)->r31,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r28,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r27,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,37
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 37;
	// li ctx_arrow(ctx)->r3,251
	ctx_arrow(ctx)->r3.s64 = 251;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// bl 0x8240f74c
	__imp__XMsgStartIORequest(ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bd024
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BD024;
	// li ctx_arrow(ctx)->r30,1627
	ctx_arrow(ctx)->r30.s64 = 1627;
	// b 0x823bd044
	goto loc_823BD044;
loc_823BD024:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bd040
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BD040;
	// bl 0x8235f310
	sub_8235F310(ctx, base);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	xer.ca = ctx_arrow(ctx)->r3.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r3.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,1627
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 & 1627;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// b 0x823bd044
	goto loc_823BD044;
loc_823BD040:
	// li ctx_arrow(ctx)->r30,997
	ctx_arrow(ctx)->r30.s64 = 997;
loc_823BD044:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240fafc
	__imp__ObDereferenceObject(ctx, base);
loc_823BD04C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823BD058) PPC_WEAK_FUNC(sub_823BD058);
PPC_FUNC_IMPL(__imp__sub_823BD058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,5
	ctx_arrow(ctx)->r4.s64 = 327680;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32782
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32782;
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// li ctx_arrow(ctx)->r3,252
	ctx_arrow(ctx)->r3.s64 = 252;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// bl 0x8241008c
	__imp__XMsgInProcessCall(ctx);
	// lwz ctx_arrow(ctx)->r3,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823BD0A8) PPC_WEAK_FUNC(sub_823BD0A8);
PPC_FUNC_IMPL(__imp__sub_823BD0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed12c
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r9.u64;
	// bl 0x8235f4f8
	sub_8235F4F8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823bd104
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BD104;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r25,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8241009c
	__imp__XamUserReadProfileSettings(ctx, base);
loc_823BD104:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_823BD110) PPC_WEAK_FUNC(sub_823BD110);
PPC_FUNC_IMPL(__imp__sub_823BD110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x8240f81c
	__imp__XamUserGetXUID(ctx, base);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x824100ac
	__imp__XamUserWriteProfileSettings(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823BD158) PPC_WEAK_FUNC(sub_823BD158);
PPC_FUNC_IMPL(__imp__sub_823BD158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = 4;
	// extsw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r4.s32;
	// lwz ctx_arrow(ctx)->r10,512(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// std ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// lwz ctx_arrow(ctx)->r3,512(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 1;
	// stw ctx_arrow(ctx)->r10,512(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 512);
	// blr 
	return;
}

alias(__imp__sub_823BD188) PPC_WEAK_FUNC(sub_823BD188);
PPC_FUNC_IMPL(__imp__sub_823BD188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-720(ctx_arrow(ctx)->r1)
	ea = -720 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// stw ctx_arrow(ctx)->r3,740(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 740);
	// stw ctx_arrow(ctx)->r4,748(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 748);
	// li ctx_arrow(ctx)->r3,518
	ctx_arrow(ctx)->r3.s64 = 518;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// stw ctx_arrow(ctx)->r5,756(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 756);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r30,672(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 672);
	// stw ctx_arrow(ctx)->r30,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// bl 0x823bd688
	sub_823BD688(&ctx);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt 0x823bd2b4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD2B4;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823bd710
	sub_823BD710(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt 0x823bd2b4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD2B4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r4,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x824100cc
	__imp__XamAlloc(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt 0x823bd2b4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD2B4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lwz ctx_arrow(ctx)->r8,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,148
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 148;
	// lwz ctx_arrow(ctx)->r4,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,140
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 140;
	// stw ctx_arrow(ctx)->r30,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// stw ctx_arrow(ctx)->r6,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// stw ctx_arrow(ctx)->r7,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// li ctx_arrow(ctx)->r3,518
	ctx_arrow(ctx)->r3.s64 = 518;
	// lwz ctx_arrow(ctx)->r7,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// bl 0x823bd7b0
	sub_823BD7B0(&ctx);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt 0x823bd2b4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD2B4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,740
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 740;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x823bd158
	sub_823BD158(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,748
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 748;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x823bd158
	sub_823BD158(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,756
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 756;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x823bd158
	sub_823BD158(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x823bd158
	sub_823BD158(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x823bd158
	sub_823BD158(ctx, base);
	// lis ctx_arrow(ctx)->r4,5
	ctx_arrow(ctx)->r4.s64 = 327680;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lwz ctx_arrow(ctx)->r5,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32800
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32800;
	// li ctx_arrow(ctx)->r3,252
	ctx_arrow(ctx)->r3.s64 = 252;
	// bl 0x8241008c
	__imp__XMsgInProcessCall(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bge 0x823bd2d4
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BD2D4;
loc_823BD2B4:
	// lwz ctx_arrow(ctx)->r3,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bd2c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BD2C4;
	// bl 0x824100bc
	__imp__XamFree(ctx, base);
loc_823BD2C4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8235f2b8
	sub_8235F2B8(ctx, base);
	// li ctx_arrow(ctx)->r30,1627
	ctx_arrow(ctx)->r30.s64 = 1627;
	// b 0x823bd2dc
	goto loc_823BD2DC;
loc_823BD2D4:
	// lwz ctx_arrow(ctx)->r3,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x824100bc
	__imp__XamFree(ctx, base);
loc_823BD2DC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,720
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 720;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823BD2E8) PPC_WEAK_FUNC(sub_823BD2E8);
PPC_FUNC_IMPL(__imp__sub_823BD2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-720(ctx_arrow(ctx)->r1)
	ea = -720 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// stw ctx_arrow(ctx)->r3,740(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 740);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// li ctx_arrow(ctx)->r3,1414
	ctx_arrow(ctx)->r3.s64 = 1414;
	// stw ctx_arrow(ctx)->r30,672(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 672);
	// stw ctx_arrow(ctx)->r30,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
	// stw ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// bl 0x823bd688
	sub_823BD688(&ctx);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt 0x823bd3e4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD3E4;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823bd710
	sub_823BD710(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt 0x823bd3e4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD3E4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r4,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x824100cc
	__imp__XamAlloc(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt 0x823bd3e4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD3E4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lwz ctx_arrow(ctx)->r8,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,148
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 148;
	// lwz ctx_arrow(ctx)->r4,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,140
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 140;
	// stw ctx_arrow(ctx)->r30,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// stw ctx_arrow(ctx)->r6,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// stw ctx_arrow(ctx)->r7,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// li ctx_arrow(ctx)->r3,1414
	ctx_arrow(ctx)->r3.s64 = 1414;
	// lwz ctx_arrow(ctx)->r7,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// bl 0x823bd7b0
	sub_823BD7B0(&ctx);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt 0x823bd3e4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD3E4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,740
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 740;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x823bd158
	sub_823BD158(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x823bd158
	sub_823BD158(ctx, base);
	// lis ctx_arrow(ctx)->r4,5
	ctx_arrow(ctx)->r4.s64 = 327680;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lwz ctx_arrow(ctx)->r5,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32803
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32803;
	// li ctx_arrow(ctx)->r3,252
	ctx_arrow(ctx)->r3.s64 = 252;
	// bl 0x8241008c
	__imp__XMsgInProcessCall(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bge 0x823bd404
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BD404;
loc_823BD3E4:
	// lwz ctx_arrow(ctx)->r3,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bd3f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BD3F4;
	// bl 0x824100bc
	__imp__XamFree(ctx, base);
loc_823BD3F4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8235f2b8
	sub_8235F2B8(ctx, base);
	// li ctx_arrow(ctx)->r30,1627
	ctx_arrow(ctx)->r30.s64 = 1627;
	// b 0x823bd40c
	goto loc_823BD40C;
loc_823BD404:
	// lwz ctx_arrow(ctx)->r3,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x824100bc
	__imp__XamFree(ctx, base);
loc_823BD40C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,720
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 720;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BD418) PPC_WEAK_FUNC(sub_823BD418);
PPC_FUNC_IMPL(__imp__sub_823BD418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x8240f7fc
	__imp__XamGetSystemVersion(ctx);
	// lis ctx_arrow(ctx)->r11,8202
	ctx_arrow(ctx)->r11.s64 = 537526272;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12800
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 12800;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bd488
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BD488;
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-2772
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -2772;
	// bl 0x824101dc
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823bd488
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD488;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,36
	ctx_arrow(ctx)->r4.s64 = 36;
	// bl 0x8240fdbc
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bd488
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BD488;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// b 0x823bd48c
	goto loc_823BD48C;
loc_823BD488:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BD48C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// beq ctx_arrow(ctx)->r6,0x823bd4b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BD4B4;
	// lis ctx_arrow(ctx)->r6,8216
	ctx_arrow(ctx)->r6.s64 = 538443776;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,33280
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 33280;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823bd4b8
	goto loc_823BD4B8;
loc_823BD4B4:
	// bl 0x824100dc
	__imp__NetDll_WSAStartup(ctx, base);
loc_823BD4B8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BD4C0) PPC_WEAK_FUNC(sub_823BD4C0);
PPC_FUNC_IMPL(__imp__sub_823BD4C0) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x823bd418
	sub_823BD418(ctx, base);
	return;
}

alias(__imp__sub_823BD4D0) PPC_WEAK_FUNC(sub_823BD4D0);
PPC_FUNC_IMPL(__imp__sub_823BD4D0) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x824100ec
	__imp__NetDll_socket(ctx, base);
	return;
}

alias(__imp__sub_823BD4E8) PPC_WEAK_FUNC(sub_823BD4E8);
PPC_FUNC_IMPL(__imp__sub_823BD4E8) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x824100fc
	__imp__NetDll_ioctlsocket(ctx, base);
	return;
}

alias(__imp__sub_823BD500) PPC_WEAK_FUNC(sub_823BD500);
PPC_FUNC_IMPL(__imp__sub_823BD500) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8241010c
	__imp__NetDll_setsockopt(ctx, base);
	return;
}

alias(__imp__sub_823BD520) PPC_WEAK_FUNC(sub_823BD520);
PPC_FUNC_IMPL(__imp__sub_823BD520) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8241011c
	__imp__NetDll_bind(ctx, base);
	return;
}

alias(__imp__sub_823BD538) PPC_WEAK_FUNC(sub_823BD538);
PPC_FUNC_IMPL(__imp__sub_823BD538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r9,196(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// stw ctx_arrow(ctx)->r9,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x8241012c
	__imp__NetDll_WSARecvFrom(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823BD588) PPC_WEAK_FUNC(sub_823BD588);
PPC_FUNC_IMPL(__imp__sub_823BD588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r9,196(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// stw ctx_arrow(ctx)->r9,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x8241013c
	__imp__NetDll_WSASendTo(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823BD5D8) PPC_WEAK_FUNC(sub_823BD5D8);
PPC_FUNC_IMPL(__imp__sub_823BD5D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241014c
	__imp__NetDll_WSAGetLastError(ctx, base);
	return;
}

alias(__imp__sub_823BD5E0) PPC_WEAK_FUNC(sub_823BD5E0);
PPC_FUNC_IMPL(__imp__sub_823BD5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 0);
	// lhz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r4.u32 + 0);
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// blr 
	return;
}

alias(__imp__sub_823BD5F0) PPC_WEAK_FUNC(sub_823BD5F0);
PPC_FUNC_IMPL(__imp__sub_823BD5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-496(ctx_arrow(ctx)->r1)
	ea = -496 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bd660
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BD660;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bd660
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BD660;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bd660
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BD660;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r3.s64 = 2;
	// bl 0x823bd4c0
	sub_823BD4C0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne 0x823bd664
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BD664;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-20720
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -20720;
	// bl 0x823bd8f0
	sub_823BD8F0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bge 0x823bd664
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BD664;
	// li ctx_arrow(ctx)->r3,1627
	ctx_arrow(ctx)->r3.s64 = 1627;
	// b 0x823bd664
	goto loc_823BD664;
loc_823BD660:
	// li ctx_arrow(ctx)->r3,87
	ctx_arrow(ctx)->r3.s64 = 87;
loc_823BD664:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,496
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 496;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BD678) PPC_WEAK_FUNC(sub_823BD678);
PPC_FUNC_IMPL(__imp__sub_823BD678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-23384
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -23384;
	// b 0x823bd5f0
	sub_823BD5F0(ctx, base);
	return;
}

alias(__imp__sub_823BD688) PPC_WEAK_FUNC(sub_823BD688);
PPC_FUNC_IMPL(__imp__sub_823BD688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20720
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20720;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r4,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne 0x823bd6c0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BD6C0;
	// lis ctx_arrow(ctx)->r3,-32747
	ctx_arrow(ctx)->r3.s64 = -2146107392;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,5
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 5;
	// b 0x823bd6fc
	goto loc_823BD6FC;
loc_823BD6C0:
	// lhz ctx_arrow(ctx)->r5,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 40);
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// li ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = 4;
	// sth ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_STORE_U16(ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r10.u16);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,-10784
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + -10784;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823f3930
	sub_823F3930(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823bd6f0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BD6F0;
	// lis ctx_arrow(ctx)->r3,-32747
	ctx_arrow(ctx)->r3.s64 = -2146107392;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 14;
	// b 0x823bd6fc
	goto loc_823BD6FC;
loc_823BD6F0:
	// lhz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 2);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_823BD6FC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BD710) PPC_WEAK_FUNC(sub_823BD710);
PPC_FUNC_IMPL(__imp__sub_823BD710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-20720
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -20720;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r9.u64;
	// bl 0x823bd898
	sub_823BD898(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823bd7a4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD7A4;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823bd760
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BD760;
	// lwz ctx_arrow(ctx)->r29,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BD760:
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,120
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 * 120;
	// li ctx_arrow(ctx)->r10,100
	ctx_arrow(ctx)->r10.s64 = 100;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// divwu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u32 = ctx_arrow(ctx)->r11.u32 / ctx_arrow(ctx)->r10.u32;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFC;
	// beq ctx_arrow(ctx)->r6,0x823bd780
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BD780;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_823BD780:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bd790
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BD790;
	// li ctx_arrow(ctx)->r10,4096
	ctx_arrow(ctx)->r10.s64 = 4096;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 0);
loc_823BD790:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bd7a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BD7A4;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,11884
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 11884;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
loc_823BD7A4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823BD7B0) PPC_WEAK_FUNC(sub_823BD7B0);
PPC_FUNC_IMPL(__imp__sub_823BD7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
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
	// bl 0x823ed120
	// stwu ctx_arrow(ctx)->r1,-240(ctx_arrow(ctx)->r1)
	ea = -240 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,5
	ctx_arrow(ctx)->r4.s64 = 327680;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6,7712
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r6.s64 + 7712;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32772
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32772;
	// li ctx_arrow(ctx)->r3,252
	ctx_arrow(ctx)->r3.s64 = 252;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r30,4172
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r30.s64 + 4172;
	// bl 0x8241008c
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// blt 0x823bd808
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD808;
	// lwz ctx_arrow(ctx)->r10,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BD808:
	// lwz ctx_arrow(ctx)->r11,324(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,4096
	ctx_arrow(ctx)->r8.s64 = 4096;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r23,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r24,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 140);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,76
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 76;
	// subf ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r25.s64 - ctx_arrow(ctx)->r22.s64;
	// stw ctx_arrow(ctx)->r8,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-20720
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -20720;
	// lwz ctx_arrow(ctx)->r10,348(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r31,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r30,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// bl 0x823bd9c0
	sub_823BD9C0(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823bd88c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BD88C;
	// lwz ctx_arrow(ctx)->r11,332(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,340(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,356(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823BD88C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// b 0x823ed170
	return;
}

alias(__imp__sub_823BD898) PPC_WEAK_FUNC(sub_823BD898);
PPC_FUNC_IMPL(__imp__sub_823BD898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r5.u64;
	// lhz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 40);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bd8c4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BD8C4;
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x823bd8e0
	goto loc_823BD8E0;
loc_823BD8C4:
	// lhz ctx_arrow(ctx)->r9,42(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 42);
	// li ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r5.s64 = 24;
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r4.s32);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823BD8E0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823BD8F0) PPC_WEAK_FUNC(sub_823BD8F0);
PPC_FUNC_IMPL(__imp__sub_823BD8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r5,44
	ctx_arrow(ctx)->r5.s64 = 44;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,44
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r30.s64 + 44;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bd92c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BD92C;
	// lis ctx_arrow(ctx)->r29,-32768
	ctx_arrow(ctx)->r29.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,16389
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 16389;
	// b 0x823bd9b4
	goto loc_823BD9B4;
loc_823BD92C:
	// lhz ctx_arrow(ctx)->r6,38(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 38);
	// cmplwi ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// beq 0x823bd944
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BD944;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 60);
loc_823BD944:
	// lhz ctx_arrow(ctx)->r10,26(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 26);
	// lhz ctx_arrow(ctx)->r8,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 24);
	// lhz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 40);
	// mullw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r8.s32);
	// lwz ctx_arrow(ctx)->r4,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 2);
	// stw ctx_arrow(ctx)->r9,44(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 44);
	// lhz ctx_arrow(ctx)->r5,42(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 42);
	// lhz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 32);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r5.s32) * int64_t(ctx_arrow(ctx)->r11.s32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r10.s64;
	// rotlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r3.u32, 1);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r6.s64;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r9,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-44
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -44;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 56);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r9,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// stw ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 64);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// stw ctx_arrow(ctx)->r10,72(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 72);
loc_823BD9B4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BD9C0) PPC_WEAK_FUNC(sub_823BD9C0);
PPC_FUNC_IMPL(__imp__sub_823BD9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r10.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,25,25
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x40;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bda04
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDA04;
	// bl 0x8240fe1c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823bda04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BDA04;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 16;
loc_823BDA04:
	// lwz ctx_arrow(ctx)->r11,252(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,284(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// lwz ctx_arrow(ctx)->r9,260(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwz ctx_arrow(ctx)->r8,244(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,276(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,292(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 44);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,52
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 52;
	// lwz ctx_arrow(ctx)->r4,268(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r27,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r30,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r26,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// stw ctx_arrow(ctx)->r25,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// stw ctx_arrow(ctx)->r9,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// stw ctx_arrow(ctx)->r24,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// stw ctx_arrow(ctx)->r8,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// bl 0x823bdaa0
	sub_823BDAA0(&ctx);
	// lwz ctx_arrow(ctx)->r11,300(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 72);
	// beq ctx_arrow(ctx)->r6,0x823bda94
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BDA94;
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823bda88
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDA88;
	// bl 0x824083c0
	sub_824083C0(ctx, base);
loc_823BDA88:
	// lwz ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,997
	ctx_arrow(ctx)->r10.s64 = 997;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823BDA94:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
}

alias(__imp__sub_823BDAA0) PPC_WEAK_FUNC(sub_823BDAA0);
PPC_FUNC_IMPL(__imp__sub_823BDAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stw ctx_arrow(ctx)->r6,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// stw ctx_arrow(ctx)->r7,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// blr 
	return;
}

alias(__imp__sub_823BDAC0) PPC_WEAK_FUNC(sub_823BDAC0);
PPC_FUNC_IMPL(__imp__sub_823BDAC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bdafc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BDAFC;
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823bdafc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDAFC;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823BDAEC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bdaec
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BDAEC;
loc_823BDAFC:
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-23328
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -23328;
	// lbz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x823bdb88
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDB88;
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
loc_823BDB18:
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bdb6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BDB6C;
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq 0x823bdb6c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDB6C;
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,12
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r8.s64 * 12;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lbzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
loc_823BDB40:
	// mulli ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 * 12;
	// lbzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bdb54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BDB54;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
loc_823BDB54:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r7.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bdb40
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BDB40;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bdb78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BDB78;
loc_823BDB6C:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0xFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
loc_823BDB78:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r4.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bdb18
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BDB18;
loc_823BDB88:
	// lis ctx_arrow(ctx)->r11,24714
	ctx_arrow(ctx)->r11.s64 = 1619656704;
	// li ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r3.s64 = 8;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,8194
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 | 8194;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// beq 0x823bdce0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDCE0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bdbb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BDBB4;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r29.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823BDBB4:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u32 & 0xFF;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// mulli ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 * 12;
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r29.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823bdcb4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDCB4;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bdc10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BDC10;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x823bdc10
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDC10;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// mulli ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 * 12;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
loc_823BDC10:
	// lbz ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// beq 0x823bdce0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDCE0;
	// lwz ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823BDC24:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bdc78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BDC78;
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq 0x823bdc78
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDC78;
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,12
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r30.s64 * 12;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lbzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
loc_823BDC4C:
	// mulli ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 * 12;
	// lbzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bdc60
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BDC60;
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
loc_823BDC60:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bdc4c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BDC4C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bdca0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BDCA0;
loc_823BDC78:
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 * 12;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r28.u64;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 * 12;
	// li ctx_arrow(ctx)->r5,12
	ctx_arrow(ctx)->r5.s64 = 12;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
loc_823BDCA0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r26.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bdc24
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BDC24;
	// b 0x823bdce0
	goto loc_823BDCE0;
loc_823BDCB4:
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823bdcd0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDCD0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
loc_823BDCD0:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
loc_823BDCE0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823BDCF0) PPC_WEAK_FUNC(sub_823BDCF0);
PPC_FUNC_IMPL(__imp__sub_823BDCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r6.u64;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// bl 0x823bdac0
	sub_823BDAC0(&ctx);
	// stw ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823bdd40
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BDD40;
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
	// b 0x823bddec
	goto loc_823BDDEC;
loc_823BDD40:
	// lbz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bge ctx_arrow(ctx)->r6,0x823bdd54
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BDD54;
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// stb ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 80, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823BDD54:
	// lbz ctx_arrow(ctx)->r11,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x823bdd68
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BDD68;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stb ctx_arrow(ctx)->r11,81(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 81, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823BDD68:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// b 0x823bdd80
	goto loc_823BDD80;
loc_823BDD70:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bdd88
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BDD88;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 4;
loc_823BDD80:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r31.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bdd70
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BDD70;
loc_823BDD88:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bge 0x823bddec
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BDDEC;
	// lwz ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bddec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BDDEC;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823bdde0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDDE0;
	// lis ctx_arrow(ctx)->r4,24714
	ctx_arrow(ctx)->r4.s64 = 1619656704;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,8194
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 8194;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// lwz ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BDDE0:
	// lis ctx_arrow(ctx)->r4,24714
	ctx_arrow(ctx)->r4.s64 = 1619656704;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,8194
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 8194;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823BDDEC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BDDF8) PPC_WEAK_FUNC(sub_823BDDF8);
PPC_FUNC_IMPL(__imp__sub_823BDDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r5,12
	ctx_arrow(ctx)->r5.s64 = 12;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r30,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r29,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// stw ctx_arrow(ctx)->r28,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// bl 0x823c09e0
	sub_823C09E0(&ctx);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bge 0x823bde68
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BDE68;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823bde68
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDE68;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_823BDE68:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823BDE78) PPC_WEAK_FUNC(sub_823BDE78);
PPC_FUNC_IMPL(__imp__sub_823BDE78) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// b 0x823bddf8
	sub_823BDDF8(ctx, base);
	return;
}

alias(__imp__sub_823BDE88) PPC_WEAK_FUNC(sub_823BDE88);
PPC_FUNC_IMPL(__imp__sub_823BDE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r11.s64 = 10;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823bdea8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BDEA8;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-23180
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -23180;
	// b 0x823bdeb0
	goto loc_823BDEB0;
loc_823BDEA8:
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-23212
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -23212;
loc_823BDEB0:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823BDEB8) PPC_WEAK_FUNC(sub_823BDEB8);
PPC_FUNC_IMPL(__imp__sub_823BDEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823BDED0) PPC_WEAK_FUNC(sub_823BDED0);
PPC_FUNC_IMPL(__imp__sub_823BDED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c1398
	sub_823C1398(ctx, base);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bdf30
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BDF30;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823BDF30:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,44
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 44;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823bdf4c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDF4C;
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// b 0x823bdf50
	goto loc_823BDF50;
loc_823BDF4C:
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823BDF50:
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BDF70) PPC_WEAK_FUNC(sub_823BDF70);
PPC_FUNC_IMPL(__imp__sub_823BDF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,52
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 52;
	// lwz ctx_arrow(ctx)->r4,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BDF8C:
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x823bdfdc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDFDC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,259
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 259, xer);
	// beq ctx_arrow(ctx)->r6,0x823bdfdc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BDFDC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823bdfcc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BDFCC;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bdfc0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BDFC0;
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
loc_823BDFC0:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823BDFCC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bded0
	sub_823BDED0(ctx, base);
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823bdf8c
	goto loc_823BDF8C;
loc_823BDFDC:
	// lwz ctx_arrow(ctx)->r4,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,44
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 44;
loc_823BDFE4:
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x823be124
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE124;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,259
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 259, xer);
	// beq ctx_arrow(ctx)->r6,0x823be124
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE124;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823be028
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE028;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823be01c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE01C;
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
loc_823BE01C:
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
loc_823BE028:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823be114
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE114;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r9,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,140(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823be054
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE054;
	// stb ctx_arrow(ctx)->r10,60(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 60));
loc_823BE054:
	// lhz ctx_arrow(ctx)->r10,62(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 62);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4096
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4096, xer);
	// ble ctx_arrow(ctx)->r6,0x823be064
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823BE064;
	// sth ctx_arrow(ctx)->r28,62(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 62, ctx_arrow(ctx)->r28, 0);
loc_823BE064:
	// lhz ctx_arrow(ctx)->r10,-2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + -2);
	// lis ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 65536;
	// lbz ctx_arrow(ctx)->r9,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,259
	ctx_arrow(ctx)->r7.s64 = 259;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,12,0,19
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 12) & 0xFFFFF000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64;
	// sth ctx_arrow(ctx)->r10,-2(ctx_arrow(ctx)->r11)
	PPC_STORE_U16(ctx_arrow(ctx)->r11.u32 + -2, ctx_arrow(ctx)->r10.u16);
	// lhz ctx_arrow(ctx)->r10,62(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 62);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,1,20,30
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 1) & 0xFFE) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFF001);
	// sth ctx_arrow(ctx)->r9,-2(ctx_arrow(ctx)->r11)
	PPC_STORE_U16(ctx_arrow(ctx)->r11.u32 + -2, ctx_arrow(ctx)->r9.u16);
	// lhz ctx_arrow(ctx)->r10,62(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 62);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// sth ctx_arrow(ctx)->r10,62(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 62, ctx_arrow(ctx)->r10.u16);
	// lwz ctx_arrow(ctx)->r10,196(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r9,-2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + -2);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,12,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xF0000;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r10.s64;
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r10.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0x1;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,16,30
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0xFFFE) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFF0001);
	// sth ctx_arrow(ctx)->r10,-2(ctx_arrow(ctx)->r11)
	PPC_STORE_U16(ctx_arrow(ctx)->r11.u32 + -2, ctx_arrow(ctx)->r10.u16);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823be0e8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE0E8;
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// b 0x823be0ec
	goto loc_823BE0EC;
loc_823BE0E8:
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
loc_823BE0EC:
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// lwz ctx_arrow(ctx)->r9,1268(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r10,1268(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1268);
	// b 0x823be11c
	goto loc_823BE11C;
loc_823BE114:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bded0
	sub_823BDED0(ctx, base);
loc_823BE11C:
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823bdfe4
	goto loc_823BDFE4;
loc_823BE124:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823BE130) PPC_WEAK_FUNC(sub_823BE130);
PPC_FUNC_IMPL(__imp__sub_823BE130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
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
	// bl 0x823ed124
	// stwu ctx_arrow(ctx)->r1,-256(ctx_arrow(ctx)->r1)
	ea = -256 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r25.s64 = 0;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r24,64(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,68(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c2260
	sub_823C2260(ctx, base);
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r30,44
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r30.s64 + 44;
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne 0x823be170
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BE170;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r25.u64;
	// b 0x823be188
	goto loc_823BE188;
loc_823BE170:
	// lwz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq 0x823be188
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE188;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,259
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 259, xer);
	// bne ctx_arrow(ctx)->r6,0x823be1a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE1A4;
loc_823BE188:
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823be1a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE1A4;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 64);
	// bl 0x82364938
	sub_82364938(&ctx);
loc_823BE1A4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823be288
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE288;
loc_823BE1AC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,259
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 259, xer);
	// beq ctx_arrow(ctx)->r6,0x823be288
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE288;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823be288
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BE288;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,52
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 52;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823c17a8
	sub_823C17A8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823be288
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BE288;
	// li ctx_arrow(ctx)->r11,259
	ctx_arrow(ctx)->r11.s64 = 259;
	// li ctx_arrow(ctx)->r5,88
	ctx_arrow(ctx)->r5.s64 = 88;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// bl 0x82408138
	sub_82408138(&ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,164(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 164);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// bl 0x823647d8
	sub_823647D8(&ctx);
	// mr. ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// blt 0x823be280
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BE280;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823be248
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE248;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823be23c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE23C;
	// stw ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 4);
loc_823BE23C:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 0);
	// stw ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823BE248:
	// stw ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823be260
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE260;
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// b 0x823be264
	goto loc_823BE264;
loc_823BE260:
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
loc_823BE264:
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 4);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 1;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq 0x823be288
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE288;
	// lwz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823be1ac
	goto loc_823BE1AC;
loc_823BE280:
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r25.u64;
	// stw ctx_arrow(ctx)->r25,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
loc_823BE288:
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823be2bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE2BC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823be2bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE2BC;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,52
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 52;
	// bl 0x823c17a8
	sub_823C17A8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 2, xer);
	// blt ctx_arrow(ctx)->r6,0x823be2bc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BE2BC;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x82364898
	sub_82364898(ctx, base);
	// stw ctx_arrow(ctx)->r25,64(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 64);
loc_823BE2BC:
	// lwz ctx_arrow(ctx)->r4,52(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,52
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r30.s64 + 52;
	// b 0x823be30c
	goto loc_823BE30C;
loc_823BE2C8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,259
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 259, xer);
	// beq ctx_arrow(ctx)->r6,0x823be314
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE314;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823be300
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE300;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823be2f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE2F4;
	// stw ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
loc_823BE2F4:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823BE300:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823bded0
	sub_823BDED0(ctx, base);
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BE30C:
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne 0x823be2c8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BE2C8;
loc_823BE314:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// b 0x823ed174
	return;
}

alias(__imp__sub_823BE320) PPC_WEAK_FUNC(sub_823BE320);
PPC_FUNC_IMPL(__imp__sub_823BE320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823be330
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE330;
	// b 0x823be130
	sub_823BE130(ctx, base);
	return;
loc_823BE330:
	// b 0x823bdf70
	sub_823BDF70(ctx, base);
	return;
}

alias(__imp__sub_823BE338) PPC_WEAK_FUNC(sub_823BE338);
PPC_FUNC_IMPL(__imp__sub_823BE338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823c0c08
	sub_823C0C08(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823be3bc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BE3BC;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823be390
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE390;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823be388
	goto loc_823BE388;
loc_823BE36C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BE388:
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x823be36c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BE36C;
loc_823BE390:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823be3bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE3BC;
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823be3bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE3BC;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 64);
	// bl 0x823648e0
	sub_823648E0(&ctx);
loc_823BE3BC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BE3D0) PPC_WEAK_FUNC(sub_823BE3D0);
PPC_FUNC_IMPL(__imp__sub_823BE3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,28,30,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 28) & 0x2;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// xori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u64 ^ 2;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r6.u64;
	// bl 0x823c1a90
	sub_823C1A90(ctx, base);
	// mr. ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// blt 0x823be498
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BE498;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823be47c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823BE47C;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823BE43C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r8.s32) * int64_t(ctx_arrow(ctx)->r29.s32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx)->r9.u32);
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x823bded0
	sub_823BDED0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 8;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823be43c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BE43C;
loc_823BE47C:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823be498
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE498;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,68
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 68;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c2760
	sub_823C2760(ctx, base);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
loc_823BE498:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823BE4A8) PPC_WEAK_FUNC(sub_823BE4A8);
PPC_FUNC_IMPL(__imp__sub_823BE4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823be528
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE528;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823be4f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE4F4;
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823be4ec
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE4EC;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// stw ctx_arrow(ctx)->r30,60(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 60);
loc_823BE4EC:
	// lwz ctx_arrow(ctx)->r3,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c21e8
	sub_823C21E8(ctx, base);
loc_823BE4F4:
	// lwz ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823be510
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE510;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 3;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// stw ctx_arrow(ctx)->r30,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
loc_823BE510:
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c1948
	sub_823C1948(ctx, base);
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32785
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32785;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823BE528:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BE540) PPC_WEAK_FUNC(sub_823BE540);
PPC_FUNC_IMPL(__imp__sub_823BE540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r5.u64;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 10;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r26.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823be578
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE578;
	// stw ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
loc_823BE578:
	// lwz ctx_arrow(ctx)->r29,52(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq 0x823be62c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE62C;
loc_823BE584:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823be620
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE620;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r30.s64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r9.s64 + 2;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823be658
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823BE658;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r27.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -2;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823be5e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE5E8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
loc_823BE5E8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,-2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + -2;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r9.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823be608
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BE608;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
loc_823BE608:
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823be624
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE624;
	// stw ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823BE620:
	// lwz ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BE624:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823be584
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE584;
loc_823BE62C:
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// lwz ctx_arrow(ctx)->r9,1268(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r10,1268(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1268);
loc_823BE64C:
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r25.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
loc_823BE658:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823be64c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE64C;
	// lis ctx_arrow(ctx)->r3,-32761
	ctx_arrow(ctx)->r3.s64 = -2147024896;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 14;
	// b 0x823be64c
	goto loc_823BE64C;
}

alias(__imp__sub_823BE670) PPC_WEAK_FUNC(sub_823BE670);
PPC_FUNC_IMPL(__imp__sub_823BE670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-272(ctx_arrow(ctx)->r1)
	ea = -272 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r10,-32768
	ctx_arrow(ctx)->r10.s64 = -2147483648;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// ori ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r10,16385
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r10.u64 | 16385;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823be7a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE7A8;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,84(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// stb ctx_arrow(ctx)->r31,80(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 80, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r31), 0);
	// stb ctx_arrow(ctx)->r31,81(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 81, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r31), 0);
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// stb ctx_arrow(ctx)->r30,96(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 96, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r27,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// bl 0x82408138
	sub_82408138(&ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r30,88(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 88, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r29,60
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r29.s64 + 60;
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// beq 0x823be73c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE73C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823be7a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE7A4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// bl 0x823646d0
	sub_823646D0(ctx, base);
	// b 0x823be7a0
	goto loc_823BE7A0;
loc_823BE73C:
	// li ctx_arrow(ctx)->r5,92
	ctx_arrow(ctx)->r5.s64 = 92;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// stb ctx_arrow(ctx)->r30,112(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 112, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// li ctx_arrow(ctx)->r9,16000
	ctx_arrow(ctx)->r9.s64 = 16000;
	// stb ctx_arrow(ctx)->r30,116(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 116, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-8520
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -8520;
	// stb ctx_arrow(ctx)->r30,169(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 169, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// stb ctx_arrow(ctx)->r30,170(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 170, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r10,171(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 171));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stb ctx_arrow(ctx)->r31,176(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 176, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r31), 0);
	// stw ctx_arrow(ctx)->r9,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// stw ctx_arrow(ctx)->r31,180(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 180);
	// stw ctx_arrow(ctx)->r31,188(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 188);
	// stw ctx_arrow(ctx)->r10,184(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 184);
	// stw ctx_arrow(ctx)->r11,192(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 192);
	// stw ctx_arrow(ctx)->r31,196(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 196);
	// stw ctx_arrow(ctx)->r29,200(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 200);
	// bl 0x82364e98
	sub_82364E98(&ctx);
loc_823BE7A0:
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
loc_823BE7A4:
	// stw ctx_arrow(ctx)->r30,64(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 64);
loc_823BE7A8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,272
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 272;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823BE7B8) PPC_WEAK_FUNC(sub_823BE7B8);
PPC_FUNC_IMPL(__imp__sub_823BE7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823be7ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE7EC;
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16385
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16385;
	// b 0x823be850
	goto loc_823BE850;
loc_823BE7EC:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// divwu. ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r27.u32 = ctx_arrow(ctx)->r10.u32 / ctx_arrow(ctx)->r31.u32;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// twllei ctx_arrow(ctx)->r31,0
	// beq 0x823be850
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE850;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
loc_823BE814:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r3,68(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823c24d8
	sub_823C24D8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823be850
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BE850;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823be850
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BE850;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// add ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 + ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r27.u32, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// blt ctx_arrow(ctx)->r6,0x823be814
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BE814;
loc_823BE850:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823BE858) PPC_WEAK_FUNC(sub_823BE858);
PPC_FUNC_IMPL(__imp__sub_823BE858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823be890
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE890;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823be890
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE890;
	// lwz ctx_arrow(ctx)->r3,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c26a8
	sub_823C26A8(ctx, base);
loc_823BE890:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c0be0
	sub_823C0BE0(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bge 0x823be8a8
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BE8A8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823be338
	sub_823BE338(ctx, base);
loc_823BE8A8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BE8C8) PPC_WEAK_FUNC(sub_823BE8C8);
PPC_FUNC_IMPL(__imp__sub_823BE8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32785
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32785;
	// li ctx_arrow(ctx)->r3,72
	ctx_arrow(ctx)->r3.s64 = 72;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// beq 0x823be978
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE978;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// stw ctx_arrow(ctx)->r29,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// li ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 2;
	// stw ctx_arrow(ctx)->r30,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-23320
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -23320;
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// li ctx_arrow(ctx)->r9,10
	ctx_arrow(ctx)->r9.s64 = 10;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 1, xer);
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bne ctx_arrow(ctx)->r6,0x823be950
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BE950;
	// lwz ctx_arrow(ctx)->r4,72(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x823be958
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BE958;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823be958
	goto loc_823BE958;
loc_823BE950:
	// li ctx_arrow(ctx)->r11,255
	ctx_arrow(ctx)->r11.s64 = 255;
	// stb ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 60, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823BE958:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 3;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// bne 0x823be98c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BE98C;
loc_823BE978:
	// lis ctx_arrow(ctx)->r27,-32761
	ctx_arrow(ctx)->r27.s64 = -2147024896;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,14
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 14;
	// bl 0x823be4a8
	sub_823BE4A8(ctx, base);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823BE98C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r26.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823BE9A0) PPC_WEAK_FUNC(sub_823BE9A0);
PPC_FUNC_IMPL(__imp__sub_823BE9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// clrlwi. ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// bne 0x823be9b0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BE9B0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// b 0x823be8c8
	sub_823BE8C8(ctx, base);
	return;
loc_823BE9B0:
	// b 0x823be8c8
	sub_823BE8C8(ctx, base);
	return;
}

alias(__imp__sub_823BE9B8) PPC_WEAK_FUNC(sub_823BE9B8);
PPC_FUNC_IMPL(__imp__sub_823BE9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-5728
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -5728;
	// blr 
	return;
}

alias(__imp__sub_823BE9C8) PPC_WEAK_FUNC(sub_823BE9C8);
PPC_FUNC_IMPL(__imp__sub_823BE9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x82408138
	sub_82408138(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c1398
	sub_823C1398(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823bea1c
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823BEA1C;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_823BEA1C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BEA38) PPC_WEAK_FUNC(sub_823BEA38);
PPC_FUNC_IMPL(__imp__sub_823BEA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,-21016(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x823c0c08
	sub_823C0C08(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823bea74
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BEA74;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823c31a0
	sub_823C31A0(ctx, base);
loc_823BEA74:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BEA88) PPC_WEAK_FUNC(sub_823BEA88);
PPC_FUNC_IMPL(__imp__sub_823BEA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// li ctx_arrow(ctx)->r10,10
	ctx_arrow(ctx)->r10.s64 = 10;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-23212
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -23212;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823BEAA0) PPC_WEAK_FUNC(sub_823BEAA0);
PPC_FUNC_IMPL(__imp__sub_823BEAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,-21016(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x823c0be0
	sub_823C0BE0(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823beb68
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BEB68;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lis ctx_arrow(ctx)->r12,-1057
	ctx_arrow(ctx)->r12.s64 = -69271552;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,221
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 221;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,32,31
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 32) & 0xFFFFFFFF00000000;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// oris ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,60123
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 3940220928;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,61168
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 61168;
	// or ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r4,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// bl 0x823c3218
	sub_823C3218(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823beb68
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BEB68;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
loc_823BEB28:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 - ctx_arrow(ctx)->r30.s64;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// bl 0x823c33b8
	sub_823C33B8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823beb68
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BEB68;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x823beb28
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BEB28;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823c3128
	sub_823C3128(ctx, base);
loc_823BEB68:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BEB70) PPC_WEAK_FUNC(sub_823BEB70);
PPC_FUNC_IMPL(__imp__sub_823BEB70) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r8.s32) * int64_t(ctx_arrow(ctx)->r9.s32);
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// b 0x823beca0
	goto loc_823BECA0;
loc_823BEBA0:
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823becac
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BECAC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bec5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BEC5C;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -2;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823bebdc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BEBDC;
	// stb ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 40, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823BEBDC:
	// lhz ctx_arrow(ctx)->r11,42(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 42);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4096, xer);
	// ble ctx_arrow(ctx)->r6,0x823bebf0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823BEBF0;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// sth ctx_arrow(ctx)->r11,42(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 42, ctx_arrow(ctx)->r11, 0);
loc_823BEBF0:
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r4.u32 + 0);
	// lis ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 65536;
	// lbz ctx_arrow(ctx)->r8,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,12,0,19
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 12) & 0xFFFFF000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// sth ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r11, 0);
	// lhz ctx_arrow(ctx)->r11,42(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 42);
	// rlwimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,1,20,30
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 1) & 0xFFE) | (ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFFFFFFF001);
	// sth ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r4)
	PPC_STORE_U16(ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r8.u16);
	// lhz ctx_arrow(ctx)->r11,42(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 42);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// sth ctx_arrow(ctx)->r11,42(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 42, ctx_arrow(ctx)->r11, 0);
	// lwz ctx_arrow(ctx)->r11,196(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r4.u32 + 0);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF0000;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r11.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,16,30
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0xFFFE) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFF0001);
	// sth ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r11, 0);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x823c3340
	sub_823C3340(&ctx);
loc_823BEC5C:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823be9c8
	sub_823BE9C8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// twllei ctx_arrow(ctx)->r10,0
	// divwu ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u32 = ctx_arrow(ctx)->r9.u32 / ctx_arrow(ctx)->r10.u32;
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r8.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
	// stw ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r8.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
loc_823BECA0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,259
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 259, xer);
	// bne ctx_arrow(ctx)->r6,0x823beba0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BEBA0;
loc_823BECAC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BECB8) PPC_WEAK_FUNC(sub_823BECB8);
PPC_FUNC_IMPL(__imp__sub_823BECB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r9,-32249
	ctx_arrow(ctx)->r9.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// lwz ctx_arrow(ctx)->r9,-21016(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 2;
	// lwz ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// bl 0x823c1a90
	sub_823C1A90(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x823bee14
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BEE14;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,44
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 44;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c3558
	sub_823C3558(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x823bee14
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BEE14;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lis ctx_arrow(ctx)->r12,-1057
	ctx_arrow(ctx)->r12.s64 = -69271552;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,221
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 221;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,32,31
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 32) & 0xFFFFFFFF00000000;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// oris ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,60123
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 3940220928;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,61168
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 61168;
	// or ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r4,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// bl 0x823c3218
	sub_823C3218(&ctx);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x823bee14
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BEE14;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_823BED94:
	// li ctx_arrow(ctx)->r5,-1
	ctx_arrow(ctx)->r5.s64 = -1;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823c33b8
	sub_823C33B8(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x823bee14
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BEE14;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x823bed94
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BED94;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823bf630
	sub_823BF630(ctx, base);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823bee0c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823BEE0C;
loc_823BEDD4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r29.s32);
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823c1398
	sub_823C1398(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x823bee0c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BEE0C;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bedd4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BEDD4;
loc_823BEE0C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
loc_823BEE14:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823BEE20) PPC_WEAK_FUNC(sub_823BEE20);
PPC_FUNC_IMPL(__imp__sub_823BEE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bee68
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BEE68;
	// lwz ctx_arrow(ctx)->r4,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823bf650
	sub_823BF650(ctx, base);
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c2f90
	sub_823C2F90(ctx, base);
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c1948
	sub_823C1948(ctx, base);
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32782
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32782;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823BEE68:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BEE80) PPC_WEAK_FUNC(sub_823BEE80);
PPC_FUNC_IMPL(__imp__sub_823BEE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32782
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32782;
	// li ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r3.s64 = 48;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823beed8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BEED8;
	// lis ctx_arrow(ctx)->r29,-32761
	ctx_arrow(ctx)->r29.s64 = -2147024896;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,14
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 14;
	// bl 0x823bee20
	sub_823BEE20(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823BEEC8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823BEED8:
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-23280
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -23280;
	// stw ctx_arrow(ctx)->r31,32(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 32);
	// li ctx_arrow(ctx)->r8,10
	ctx_arrow(ctx)->r8.s64 = 10;
	// li ctx_arrow(ctx)->r7,255
	ctx_arrow(ctx)->r7.s64 = 255;
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 28);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// stw ctx_arrow(ctx)->r8,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20);
	// stb ctx_arrow(ctx)->r7,40(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 40));
	// b 0x823beec8
	goto loc_823BEEC8;
}

alias(__imp__sub_823BEF08) PPC_WEAK_FUNC(sub_823BEF08);
PPC_FUNC_IMPL(__imp__sub_823BEF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823bef18
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BEF18;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r6.u64;
	// b 0x823bee80
	sub_823BEE80(ctx, base);
	return;
loc_823BEF18:
	// lis ctx_arrow(ctx)->r3,-32761
	ctx_arrow(ctx)->r3.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,87
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 87;
	// blr 
	return;
}

alias(__imp__sub_823BEF28) PPC_WEAK_FUNC(sub_823BEF28);
PPC_FUNC_IMPL(__imp__sub_823BEF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4344
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4344;
	// blr 
	return;
}

alias(__imp__sub_823BEF38) PPC_WEAK_FUNC(sub_823BEF38);
PPC_FUNC_IMPL(__imp__sub_823BEF38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bef48
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BEF48;
	// li ctx_arrow(ctx)->r11,6172
	ctx_arrow(ctx)->r11.s64 = 6172;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
loc_823BEF48:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823BEF50) PPC_WEAK_FUNC(sub_823BEF50);
PPC_FUNC_IMPL(__imp__sub_823BEF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 4;
loc_823BEF54:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stwcx. ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r10.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x823bef54
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BEF54;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// blr 
	return;
}

alias(__imp__sub_823BEF78) PPC_WEAK_FUNC(sub_823BEF78);
PPC_FUNC_IMPL(__imp__sub_823BEF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 4;
loc_823BEF7C:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stwcx. ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r10.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x823bef7c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BEF7C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// blr 
	return;
}

alias(__imp__sub_823BEFA0) PPC_WEAK_FUNC(sub_823BEFA0);
PPC_FUNC_IMPL(__imp__sub_823BEFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823befb8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BEFB8;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r4.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// sth ctx_arrow(ctx)->r10,2(ctx_arrow(ctx)->r4)
	PPC_STORE_U16(ctx_arrow(ctx)->r4.u32 + 2, ctx_arrow(ctx)->r10.u16);
loc_823BEFB8:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823BEFC0) PPC_WEAK_FUNC(sub_823BEFC0);
PPC_FUNC_IMPL(__imp__sub_823BEFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32761
	ctx_arrow(ctx)->r11.s64 = -2147024896;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,87
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 87;
	// bne 0x823befdc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BEFDC;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
loc_823BEFDC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// blr 
	return;
}

alias(__imp__sub_823BEFE8) PPC_WEAK_FUNC(sub_823BEFE8);
PPC_FUNC_IMPL(__imp__sub_823BEFE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823beff8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BEFF8;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
loc_823BEFF8:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823BF000) PPC_WEAK_FUNC(sub_823BF000);
PPC_FUNC_IMPL(__imp__sub_823BF000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// li ctx_arrow(ctx)->r4,6172
	ctx_arrow(ctx)->r4.s64 = 6172;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823bf054
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BF054;
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
loc_823BF044:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823BF054:
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-23240
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -23240;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// b 0x823bf044
	goto loc_823BF044;
}

alias(__imp__sub_823BF078) PPC_WEAK_FUNC(sub_823BF078);
PPC_FUNC_IMPL(__imp__sub_823BF078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed128
	// stfd f31,-80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -80);
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bf1cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BF1CC;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x8236f3c0
	sub_8236F3C0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823bf1cc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BF1CC;
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,6156
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r30.s64 + 6156;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r30,12
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r30.s64 + 12;
	// lfs f31,10912(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// subfic ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r30,-5044
	xer.ca = ctx_arrow(ctx)->r30.u32 <= 4294962252;
	ctx_arrow(ctx)->r25.s64 = -5044 - ctx_arrow(ctx)->r30.s64;
loc_823BF0D4:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64 + ctx_arrow(ctx)->r31.u64;
	// lwzx ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq 0x823bf1ac
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BF1AC;
	// lwz ctx_arrow(ctx)->r11,196(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823bf1ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BF1AC;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f0,184(ctx_arrow(ctx)->r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,256
	ctx_arrow(ctx)->r9.s64 = 256;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,9,0,22
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 9) & 0xFFFFFE00;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 12;
loc_823BF11C:
	// lfs f13,0(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32);
	// lwz ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,32767
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 32767, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf148
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF148;
	// li ctx_arrow(ctx)->r8,32767
	ctx_arrow(ctx)->r8.s64 = 32767;
	// b 0x823bf154
	goto loc_823BF154;
loc_823BF148:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,-32768
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, -32768, xer);
	// bgt ctx_arrow(ctx)->r6,0x823bf154
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823BF154;
	// li ctx_arrow(ctx)->r8,-32738
	ctx_arrow(ctx)->r8.s64 = -32738;
loc_823BF154:
	// sth ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	PPC_STORE_U16(ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r8.u16);
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 0;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bne 0x823bf11c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BF11C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// blt ctx_arrow(ctx)->r6,0x823bf1b0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF1B0;
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// stw ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// li ctx_arrow(ctx)->r6,768
	ctx_arrow(ctx)->r6.s64 = 768;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,200
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r29.s64 + 200;
	// bl 0x823c4990
	sub_823C4990(ctx, base);
	// li ctx_arrow(ctx)->r5,256
	ctx_arrow(ctx)->r5.s64 = 256;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c3ba8
	sub_823C3BA8(ctx, base);
	// b 0x823bf1b0
	goto loc_823BF1B0;
loc_823BF1AC:
	// stw ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_823BF1B0:
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1024
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1024;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,3
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 3;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,1536
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 1536;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,4096
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 4096, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf0d4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF0D4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
loc_823BF1CC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// lfd f31,-80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed178
	return;
}

alias(__imp__sub_823BF1D8) PPC_WEAK_FUNC(sub_823BF1D8);
PPC_FUNC_IMPL(__imp__sub_823BF1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r10,1092(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1092);
	// blr 
	return;
}

alias(__imp__sub_823BF1E8) PPC_WEAK_FUNC(sub_823BF1E8);
PPC_FUNC_IMPL(__imp__sub_823BF1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-352(ctx_arrow(ctx)->r1)
	ea = -352 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// stw ctx_arrow(ctx)->r31,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// bl 0x82408138
	sub_82408138(&ctx);
	// li ctx_arrow(ctx)->r11,127
	ctx_arrow(ctx)->r11.s64 = 127;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// stw ctx_arrow(ctx)->r28,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// stb ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 120, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stb ctx_arrow(ctx)->r31,104(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 104, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r31), 0);
	// li ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r5.s64 = 32;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// bl 0x82408138
	sub_82408138(&ctx);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,161
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 161;
	// li ctx_arrow(ctx)->r27,2
	ctx_arrow(ctx)->r27.s64 = 2;
	// lfs f0,2688(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
loc_823BF268:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64;
	// stfs f0,3(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 3);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stb ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r11.u32 + 0, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r27), 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// stb ctx_arrow(ctx)->r9,-1(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -1));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// blt ctx_arrow(ctx)->r6,0x823bf268
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF268;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// li ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = 4;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// stb ctx_arrow(ctx)->r29,96(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 96, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r31,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// bl 0x82408138
	sub_82408138(&ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// li ctx_arrow(ctx)->r5,28
	ctx_arrow(ctx)->r5.s64 = 28;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// stb ctx_arrow(ctx)->r30,88(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 88, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lis ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r31,128(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 128, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r31), 0);
	// ori ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r10,48000
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r10.u64 | 48000;
	// stb ctx_arrow(ctx)->r29,129(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 129, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// stb ctx_arrow(ctx)->r30,136(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 136, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r29,137(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 137, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stb ctx_arrow(ctx)->r27,138(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 138, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r27), 0);
	// stw ctx_arrow(ctx)->r31,148(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 148);
	// stw ctx_arrow(ctx)->r26,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// stw ctx_arrow(ctx)->r10,140(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 140);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r28,152(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 152);
	// stw ctx_arrow(ctx)->r10,144(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 144);
	// beq 0x823bf378
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BF378;
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823bf370
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BF370;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64;
loc_823BF34C:
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stwx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r7.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf34c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF34C;
loc_823BF370:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// b 0x823bf37c
	goto loc_823BF37C;
loc_823BF378:
	// lbz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
loc_823BF37C:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r28,56
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r28.s64 + 56;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r10.u32);
	// stb ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 104, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bl 0x82364ef8
	sub_82364EF8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823bf498
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BF498;
	// li ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r5.s64 = 32;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,161
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 161;
	// lfs f0,2776(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
loc_823BF3D0:
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	// stfs f0,3(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 3);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// stb ctx_arrow(ctx)->r9,-1(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -1));
	// stb ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// blt ctx_arrow(ctx)->r6,0x823bf3d0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF3D0;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// stb ctx_arrow(ctx)->r29,96(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 96, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// bl 0x82408138
	sub_82408138(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// bl 0x82408138
	sub_82408138(&ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stb ctx_arrow(ctx)->r30,88(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 88, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// li ctx_arrow(ctx)->r5,92
	ctx_arrow(ctx)->r5.s64 = 92;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// bl 0x82408138
	sub_82408138(&ctx);
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// stb ctx_arrow(ctx)->r31,192(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 192, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r31), 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stb ctx_arrow(ctx)->r29,196(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 196, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-3624
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -3624;
	// stw ctx_arrow(ctx)->r26,200(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 200);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28,64
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r28.s64 + 64;
	// stb ctx_arrow(ctx)->r30,249(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 249, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// stb ctx_arrow(ctx)->r29,250(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 250, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// stb ctx_arrow(ctx)->r30,251(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 251, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r30,256(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 256, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r10,264(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 264);
	// stw ctx_arrow(ctx)->r11,272(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 272);
	// stw ctx_arrow(ctx)->r28,280(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 280);
	// bl 0x82364e98
	sub_82364E98(&ctx);
loc_823BF498:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,352
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 352;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823BF4A0) PPC_WEAK_FUNC(sub_823BF4A0);
PPC_FUNC_IMPL(__imp__sub_823BF4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823bf528
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BF528;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,344
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r5.s64 + 344;
	// lwz ctx_arrow(ctx)->r31,1320(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,1328
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 1328;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,1376
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 1376;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,1112
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 1112;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = 4;
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
loc_823BF4E0:
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bf4fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BF4FC;
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bf4fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BF4FC;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 1;
loc_823BF4FC:
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,12
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 12;
	// bne 0x823bf4e0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BF4E0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bf538
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BF538;
	// divwu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u32 = ctx_arrow(ctx)->r31.u32 / ctx_arrow(ctx)->r4.u32;
	// twllei ctx_arrow(ctx)->r4,0
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r4.s32);
	// subf ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 - ctx_arrow(ctx)->r11.s64;
	// b 0x823bf538
	goto loc_823BF538;
loc_823BF528:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,1424
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 1424;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,1832
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 1832;
	// li ctx_arrow(ctx)->r10,34
	ctx_arrow(ctx)->r10.s64 = 34;
loc_823BF538:
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 * 12;
	// add ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r28.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823bf568
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BF568;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_823BF550:
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// neg ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = -ctx_arrow(ctx)->r8.s64;
	// stwx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r11.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r28.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf550
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF550;
loc_823BF568:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bf5ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BF5EC;
loc_823BF578:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bf5dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BF5DC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64 + ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u32 = ctx_arrow(ctx)->r11.u32 / ctx_arrow(ctx)->r10.u32;
	// twllei ctx_arrow(ctx)->r10,0
	// mullw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r9.s64;
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 * 12;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 3;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r5.u64;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r7.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r27.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823bf5d0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BF5D0;
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 4294967294;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r9.u32);
	// ble 0x823bf5d0
	if ((((((((((((((!ctx)))))))))))))->r0.gt()) goto loc_823BF5D0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + -1;
loc_823BF5D0:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf578
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF578;
loc_823BF5DC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bf5ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BF5EC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bf568
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BF568;
loc_823BF5EC:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r28.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823bf628
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BF628;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_823BF5FC:
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823bf614
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BF614;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
loc_823BF614:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r10.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r28.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf5fc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF5FC;
loc_823BF628:
	// b 0x823ed184
	return;
}

alias(__imp__sub_823BF630) PPC_WEAK_FUNC(sub_823BF630);
PPC_FUNC_IMPL(__imp__sub_823BF630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,282
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 282;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r3.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// blr 
	return;
}

alias(__imp__sub_823BF650) PPC_WEAK_FUNC(sub_823BF650);
PPC_FUNC_IMPL(__imp__sub_823BF650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823bf6e0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BF6E0;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,1128
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 1128;
loc_823BF678:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r4.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823bf69c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BF69C;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf678
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF678;
	// b 0x823bf6e0
	goto loc_823BF6E0;
loc_823BF69C:
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,283
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 283;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,282
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 282;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// bl 0x823ef8a0
	sub_823EF8A0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,282
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 282;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r31.u32);
loc_823BF6E0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BF6F8) PPC_WEAK_FUNC(sub_823BF6F8);
PPC_FUNC_IMPL(__imp__sub_823BF6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf75c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF75C;
	// beq ctx_arrow(ctx)->r6,0x823bf738
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BF738;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 3, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf72c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF72C;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823bf764
	goto loc_823BF764;
loc_823BF72C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,1272
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 1272;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x823bf764
	goto loc_823BF764;
loc_823BF738:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,1272
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 1272;
	// bl 0x8240fe5c
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823bf750
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BF750;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// b 0x823bf764
	goto loc_823BF764;
loc_823BF750:
	// lis ctx_arrow(ctx)->r31,-32768
	ctx_arrow(ctx)->r31.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,16388
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 16388;
	// b 0x823bf764
	goto loc_823BF764;
loc_823BF75C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,1272
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 1272;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
loc_823BF764:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BF780) PPC_WEAK_FUNC(sub_823BF780);
PPC_FUNC_IMPL(__imp__sub_823BF780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,278
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 278;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823bf7c8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BF7C8;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823bf7d8
	goto loc_823BF7D8;
loc_823BF7C8:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c3f58
	sub_823C3F58(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823BF7D8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823BF7F0) PPC_WEAK_FUNC(sub_823BF7F0);
PPC_FUNC_IMPL(__imp__sub_823BF7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,278
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 278;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823bf838
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BF838;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823bf848
	goto loc_823BF848;
loc_823BF838:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c3fd0
	sub_823C3FD0(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823BF848:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823BF860) PPC_WEAK_FUNC(sub_823BF860);
PPC_FUNC_IMPL(__imp__sub_823BF860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,1324
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 1324;
loc_823BF864:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. ctx_arrow(ctx)->r4,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r4.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x823bf864
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BF864;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823BF888) PPC_WEAK_FUNC(sub_823BF888);
PPC_FUNC_IMPL(__imp__sub_823BF888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x823bf8dc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BF8DC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,1096
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 1096;
loc_823BF8BC:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bf8dc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BF8DC;
	// lwz ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf8bc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF8BC;
loc_823BF8DC:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823bf8f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BF8F0;
	// lis ctx_arrow(ctx)->r30,-32768
	ctx_arrow(ctx)->r30.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,16389
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 16389;
	// b 0x823bf92c
	goto loc_823BF92C;
loc_823BF8F0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,274
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 274;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,278
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r30.s64 + 278;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r31.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r31.u32);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c4558
	sub_823C4558(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x823bf92c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823BF92C;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,1316(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1316);
loc_823BF92C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BF940) PPC_WEAK_FUNC(sub_823BF940);
PPC_FUNC_IMPL(__imp__sub_823BF940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,278
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 278;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r31.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823bf9b0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BF9B0;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,1096
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 1096;
loc_823BF984:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bf9a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BF9A4;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bf984
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BF984;
	// b 0x823bf9b0
	goto loc_823BF9B0;
loc_823BF9A4:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,274
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 274;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r31.u32);
loc_823BF9B0:
	// bl 0x823c3e40
	sub_823C3E40(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BF9C8) PPC_WEAK_FUNC(sub_823BF9C8);
PPC_FUNC_IMPL(__imp__sub_823BF9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,278
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 278;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823bfa08
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BFA08;
	// bl 0x823c37c0
	sub_823C37C0(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
loc_823BFA08:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823BFA20) PPC_WEAK_FUNC(sub_823BFA20);
PPC_FUNC_IMPL(__imp__sub_823BFA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,278
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 278;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823bfa48
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BFA48;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823bfa48
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BFA48;
	// lwz ctx_arrow(ctx)->r3,144(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
loc_823BFA48:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823BFA50) PPC_WEAK_FUNC(sub_823BFA50);
PPC_FUNC_IMPL(__imp__sub_823BFA50) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,1268(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823BFA58) PPC_WEAK_FUNC(sub_823BFA58);
PPC_FUNC_IMPL(__imp__sub_823BFA58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,278
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 278;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823bfaa4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BFAA4;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823bfac0
	goto loc_823BFAC0;
loc_823BFAA4:
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r4,-21016(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c4358
	sub_823C4358(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823BFAC0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823BFAD8) PPC_WEAK_FUNC(sub_823BFAD8);
PPC_FUNC_IMPL(__imp__sub_823BFAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x823bfb0c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BFB0C;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,1128
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 1128;
loc_823BFAEC:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// ld ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r4.u64, ctx_arrow(ctx)->r8.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823bfb0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BFB0C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bfaec
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BFAEC;
loc_823BFB0C:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823bfb24
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BFB24;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,282
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 282;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
loc_823BFB24:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823BFB30) PPC_WEAK_FUNC(sub_823BFB30);
PPC_FUNC_IMPL(__imp__sub_823BFB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
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
	// bl 0x823ed120
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,48
	ctx_arrow(ctx)->r5.s64 = 48;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r31,1376
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r31.s64 + 1376;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// li ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r22.s64 = 0;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,1112
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 1112;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r24.u64;
	// li ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = 4;
loc_823BFB64:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823bfb78
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BFB78;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c43b0
	sub_823C43B0(ctx, base);
loc_823BFB78:
	// addic. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,-1
	xer.ca = ctx_arrow(ctx)->r28.u32 > 0;
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,12
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 12;
	// bne 0x823bfb64
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BFB64;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r31,1832
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r31.s64 + 1832;
	// li ctx_arrow(ctx)->r5,408
	ctx_arrow(ctx)->r5.s64 = 408;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r22.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823bfce8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823BFCE8;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,1128
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 1128;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r26,-1
	ctx_arrow(ctx)->r26.s64 = -1;
loc_823BFBB8:
	// lwz ctx_arrow(ctx)->r11,1308(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823bfcb8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BFCB8;
	// lwz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r27.u64;
	// ld ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bfc08
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BFC08;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r26.u64;
	// li ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,36
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 36;
loc_823BFBE4:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bfbf4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BFBF4;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
loc_823BFBF4:
	// addic. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	xer.ca = ctx_arrow(ctx)->r8.u32 > 0;
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bne 0x823bfbe4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BFBE4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// b 0x823bfc0c
	goto loc_823BFC0C;
loc_823BFC08:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
loc_823BFC0C:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823bfcb8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BFCB8;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r30.s64 + 4;
loc_823BFC28:
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64;
	// li ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = 4;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,36
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 + 36;
loc_823BFC38:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bfc48
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BFC48;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u64;
loc_823BFC48:
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 0;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// bne 0x823bfc38
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BFC38;
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bfc70
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BFC70;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823bfc70
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BFC70;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
loc_823BFC70:
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 1;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r4.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bfc28
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BFC28;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, ctx_arrow(ctx)->r27.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823bfcb8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BFCB8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,282
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 + 282;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// xor ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 ^ ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// xor ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 ^ ctx_arrow(ctx)->r9.u64;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r31.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// xor ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
loc_823BFCB8:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// ld ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bfcd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BFCD0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x823c34a8
	sub_823C34A8(ctx, base);
loc_823BFCD0:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,12
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r25.s64 + 12;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bfbb8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BFBB8;
loc_823BFCE8:
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// stw ctx_arrow(ctx)->r22,1308(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1308);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1328
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1328;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-22624
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -22624;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 48;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r22.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r7.u32, xer);
	// lwz ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// bge ctx_arrow(ctx)->r6,0x823bfd48
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BFD48;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24,48
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r24.s64 + 48;
	// subf ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r24.s64 - ctx_arrow(ctx)->r11.s64;
loc_823BFD14:
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r4.u64 + ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r5.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823bfd3c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BFD3C;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r7.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bfd14
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BFD14;
loc_823BFD3C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bfd48
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BFD48;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r8.u64;
loc_823BFD48:
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// li ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 2;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-23212
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -23212;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823bf4a0
	sub_823BF4A0(ctx, base);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r22.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823bfd70
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823BFD70;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r3.u64;
loc_823BFD70:
	// lwz ctx_arrow(ctx)->r11,1324(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823bfd84
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823BFD84;
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// stw ctx_arrow(ctx)->r11,1324(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1324);
loc_823BFD84:
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lwz ctx_arrow(ctx)->r6,1324(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23,408
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r23.s64 + 408;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-23180
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -23180;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,1424
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 1424;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r29.u32, xer);
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
	// bge ctx_arrow(ctx)->r6,0x823bfdcc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BFDCC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_823BFDAC:
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x823bfdc0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823BFDC0;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
loc_823BFDC0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r29.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bfdac
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BFDAC;
loc_823BFDCC:
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bf4a0
	sub_823BF4A0(ctx, base);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,408
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 408;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823bfe14
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BFE14;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r23.s64;
loc_823BFDEC:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r29.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823bfe14
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823BFE14;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// stwx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r11.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bfdec
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BFDEC;
loc_823BFE14:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r22.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823bfe20
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823BFE20;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r3.u64;
loc_823BFE20:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823bfe34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BFE34;
	// lwz ctx_arrow(ctx)->r11,1320(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,1320(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1320);
loc_823BFE34:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed170
	return;
}

alias(__imp__sub_823BFE40) PPC_WEAK_FUNC(sub_823BFE40);
PPC_FUNC_IMPL(__imp__sub_823BFE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stfd f31,-40(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -40);
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lfs f31,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// stfs f31,84(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// stb ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80));
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// stb ctx_arrow(ctx)->r30,88(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 88, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// bl 0x82408138
	sub_82408138(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// stb ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 96, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// bl 0x82408138
	sub_82408138(&ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r30,104(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 104, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stw ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// beq ctx_arrow(ctx)->r6,0x823bff28
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BFF28;
	// lwz ctx_arrow(ctx)->r11,196(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823bff00
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BFF00;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c37c0
	sub_823C37C0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne 0x823bff18
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823BFF18;
loc_823BFF00:
	// lwz ctx_arrow(ctx)->r11,196(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF0000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823bff18
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BFF18;
	// lfs f0,184(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,84(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// b 0x823bff1c
	goto loc_823BFF1C;
loc_823BFF18:
	// stfs f31,84(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
loc_823BFF1C:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// lwz ctx_arrow(ctx)->r3,56(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x82364728
	sub_82364728(ctx, base);
loc_823BFF28:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lfd f31,-40(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823BFF38) PPC_WEAK_FUNC(sub_823BFF38);
PPC_FUNC_IMPL(__imp__sub_823BFF38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823bff6c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823BFF6C;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,1128
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 + 1128;
loc_823BFF4C:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// ld ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r4.u64, ctx_arrow(ctx)->r8.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823bff6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823BFF6C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823bff4c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823BFF4C;
loc_823BFF6C:
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 3;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,458
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 458;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,356
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 356;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r6)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + 0);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823BFFA0) PPC_WEAK_FUNC(sub_823BFFA0);
PPC_FUNC_IMPL(__imp__sub_823BFFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c0108
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C0108;
	// lwz ctx_arrow(ctx)->r11,1264(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// li ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = -1;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c0000
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0000;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x823c0000
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C0000;
	// lwz ctx_arrow(ctx)->r3,1304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x824083c0
	sub_824083C0(ctx, base);
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// lwz ctx_arrow(ctx)->r3,1264(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// stw ctx_arrow(ctx)->r11,1300(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1300);
	// bl 0x8235eba8
	sub_8235EBA8(&ctx);
	// lwz ctx_arrow(ctx)->r3,1264(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r28,1300(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1300);
	// bl 0x8235d388
	sub_8235D388(&ctx);
	// stw ctx_arrow(ctx)->r30,1264(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1264);
loc_823C0000:
	// lwz ctx_arrow(ctx)->r3,1304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c001c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C001C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x823c001c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C001C;
	// bl 0x8235d388
	sub_8235D388(ctx, base);
	// stw ctx_arrow(ctx)->r30,1304(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1304);
loc_823C001C:
	// lwz ctx_arrow(ctx)->r3,1312(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c0038
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0038;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x823c0038
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C0038;
	// bl 0x8235d388
	sub_8235D388(ctx, base);
	// stw ctx_arrow(ctx)->r30,1312(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1312);
loc_823C0038:
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c0048
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0048;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
loc_823C0048:
	// lwz ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c005c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C005C;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// stw ctx_arrow(ctx)->r28,64(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 64);
loc_823C005C:
	// lwz ctx_arrow(ctx)->r3,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c0070
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0070;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// stw ctx_arrow(ctx)->r28,56(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 56);
loc_823C0070:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c00a4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C00A4;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,1096
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 1096;
loc_823C0084:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c4460
	sub_823C4460(ctx, base);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c0084
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C0084;
loc_823C00A4:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,1112
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 1112;
	// li ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = 4;
loc_823C00AC:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c4460
	sub_823C4460(ctx, base);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// addic. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,-1
	xer.ca = ctx_arrow(ctx)->r29.u32 > 0;
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// bne 0x823c00ac
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C00AC;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c00f8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C00F8;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,1128
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 1128;
loc_823C00D8:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c2f90
	sub_823C2F90(ctx, base);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c00d8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C00D8;
loc_823C00F8:
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32780
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32780;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823C0108:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823C0110) PPC_WEAK_FUNC(sub_823C0110);
PPC_FUNC_IMPL(__imp__sub_823C0110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 4;
loc_823C0124:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stwcx. ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r10.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x823c0124
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0124;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r10.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c0150
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C0150;
	// bl 0x823bffa0
	sub_823BFFA0(ctx, base);
loc_823C0150:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823C0168) PPC_WEAK_FUNC(sub_823C0168);
PPC_FUNC_IMPL(__imp__sub_823C0168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-240(ctx_arrow(ctx)->r1)
	ea = -240 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r11,1300(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x823c02c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C02C4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// lwz ctx_arrow(ctx)->r3,1312(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x8240f6cc
	__imp__XNotifyGetNext(ctx, base);
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x823c01f0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C01F0;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 10, xer);
	// beq ctx_arrow(ctx)->r6,0x823c01ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C01EC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 14, xer);
	// beq ctx_arrow(ctx)->r6,0x823c01ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C01EC;
	// lis ctx_arrow(ctx)->r10,1024
	ctx_arrow(ctx)->r10.s64 = 67108864;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 2;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823c01ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C01EC;
	// lis ctx_arrow(ctx)->r10,1024
	ctx_arrow(ctx)->r10.s64 = 67108864;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 3;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c01f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C01F0;
loc_823C01EC:
	// stw ctx_arrow(ctx)->r30,1316(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1316);
loc_823C01F0:
	// lwz ctx_arrow(ctx)->r11,1092(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c024c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C024C;
	// li ctx_arrow(ctx)->r5,88
	ctx_arrow(ctx)->r5.s64 = 88;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,68
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 68;
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// lwz ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// stw ctx_arrow(ctx)->r27,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// li ctx_arrow(ctx)->r11,1024
	ctx_arrow(ctx)->r11.s64 = 1024;
	// stw ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// bl 0x823647d8
	sub_823647D8(&ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x82364898
	sub_82364898(ctx, base);
	// stw ctx_arrow(ctx)->r30,1092(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1092);
loc_823C024C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bfb30
	sub_823BFB30(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,1112
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 1112;
	// li ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = 4;
loc_823C0260:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c0270
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0270;
	// bl 0x823c4048
	sub_823C4048(ctx, base);
loc_823C0270:
	// addic. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,-1
	xer.ca = ctx_arrow(ctx)->r29.u32 > 0;
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// bne 0x823c0260
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0260;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c02c0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C02C0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,1128
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 1128;
loc_823C0290:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c02ac
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C02AC;
	// ld ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c02ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C02AC;
	// bl 0x823c3078
	sub_823C3078(ctx, base);
loc_823C02AC:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c0290
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C0290;
loc_823C02C0:
	// stw ctx_arrow(ctx)->r27,1316(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1316);
loc_823C02C4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r28.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823C02E0) PPC_WEAK_FUNC(sub_823C02E0);
PPC_FUNC_IMPL(__imp__sub_823C02E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bfad8
	sub_823BFAD8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823c0328
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0328;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823c0338
	goto loc_823C0338;
loc_823C0328:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c3128
	sub_823C3128(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C0338:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823C0350) PPC_WEAK_FUNC(sub_823C0350);
PPC_FUNC_IMPL(__imp__sub_823C0350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bfad8
	sub_823BFAD8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823c0398
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0398;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823c03a8
	goto loc_823C03A8;
loc_823C0398:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c31a0
	sub_823C31A0(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C03A8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823C03C0) PPC_WEAK_FUNC(sub_823C03C0);
PPC_FUNC_IMPL(__imp__sub_823C03C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r30,1272
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r30.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// ld ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// bl 0x823bfad8
	sub_823BFAD8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823c041c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C041C;
	// lis ctx_arrow(ctx)->r29,-32768
	ctx_arrow(ctx)->r29.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,16389
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 16389;
	// b 0x823c04b4
	goto loc_823C04B4;
loc_823C041C:
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c3218
	sub_823C3218(ctx, base);
	// mr. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt 0x823c04b4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C04B4;
	// lis ctx_arrow(ctx)->r12,-1057
	ctx_arrow(ctx)->r12.s64 = -69271552;
	// lis ctx_arrow(ctx)->r10,-5413
	ctx_arrow(ctx)->r10.s64 = -354746368;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,221
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 221;
	// lis ctx_arrow(ctx)->r9,-1057
	ctx_arrow(ctx)->r9.s64 = -69271552;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,32,31
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,61168
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 61168;
	// oris ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,60123
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 3940220928;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,221
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 221;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,61168
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 61168;
	// rldimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,32,0
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, ctx_arrow(ctx)->r10.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823c04b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C04B4;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 1112;
loc_823C0478:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x823c0498
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0498;
	// lwz ctx_arrow(ctx)->r9,196(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 65536;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,12,15
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xF0000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823c04ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C04AC;
loc_823C0498:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x823c0478
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C0478;
	// b 0x823c04b4
	goto loc_823C04B4;
loc_823C04AC:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,1316(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 1316);
loc_823C04B4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823C04C8) PPC_WEAK_FUNC(sub_823C04C8);
PPC_FUNC_IMPL(__imp__sub_823C04C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bfad8
	sub_823BFAD8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823c0508
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0508;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823c0510
	goto loc_823C0510;
loc_823C0508:
	// bl 0x823c32b8
	sub_823C32B8(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C0510:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823C0528) PPC_WEAK_FUNC(sub_823C0528);
PPC_FUNC_IMPL(__imp__sub_823C0528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c05d0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C05D0;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,1128
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 1128;
loc_823C0564:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// ld ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c05bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C05BC;
	// lis ctx_arrow(ctx)->r12,-1057
	ctx_arrow(ctx)->r12.s64 = -69271552;
	// lis ctx_arrow(ctx)->r7,-5413
	ctx_arrow(ctx)->r7.s64 = -354746368;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,221
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 221;
	// lis ctx_arrow(ctx)->r6,-1057
	ctx_arrow(ctx)->r6.s64 = -69271552;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,32,31
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,61168
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | 61168;
	// oris ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,60123
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 3940220928;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,221
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 221;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,61168
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 61168;
	// rldimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,32,0
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFF);
	// and ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r8.u64, ctx_arrow(ctx)->r7.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823c05bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C05BC;
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,8
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
loc_823C05BC:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c0564
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C0564;
loc_823C05D0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823C05E8) PPC_WEAK_FUNC(sub_823C05E8);
PPC_FUNC_IMPL(__imp__sub_823C05E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bfad8
	sub_823BFAD8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c0628
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0628;
	// bl 0x823c33e0
	sub_823C33E0(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C0628:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823C0640) PPC_WEAK_FUNC(sub_823C0640);
PPC_FUNC_IMPL(__imp__sub_823C0640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bfad8
	sub_823BFAD8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823c0684
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0684;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823c0690
	goto loc_823C0690;
loc_823C0684:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c2918
	sub_823C2918(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C0690:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823C06A8) PPC_WEAK_FUNC(sub_823C06A8);
PPC_FUNC_IMPL(__imp__sub_823C06A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r9.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bfad8
	sub_823BFAD8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823c06fc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C06FC;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823c0718
	goto loc_823C0718;
loc_823C06FC:
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c2a20
	sub_823C2A20(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C0718:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
}

alias(__imp__sub_823C0730) PPC_WEAK_FUNC(sub_823C0730);
PPC_FUNC_IMPL(__imp__sub_823C0730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bfad8
	sub_823BFAD8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823c0778
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0778;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823c0788
	goto loc_823C0788;
loc_823C0778:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c33b8
	sub_823C33B8(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C0788:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823C07A0) PPC_WEAK_FUNC(sub_823C07A0);
PPC_FUNC_IMPL(__imp__sub_823C07A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bfad8
	sub_823BFAD8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x823c07e8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C07E8;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,87
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 87;
	// b 0x823c07f8
	goto loc_823C07F8;
loc_823C07E8:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c3340
	sub_823C3340(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C07F8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823C0810) PPC_WEAK_FUNC(sub_823C0810);
PPC_FUNC_IMPL(__imp__sub_823C0810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r11.s64 = -131072;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31072
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 31072;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x82408508
	sub_82408508(&ctx);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823c0854
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0854;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x824084e0
	sub_824084E0(ctx, base);
loc_823C0854:
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,10
	ctx_arrow(ctx)->r5.s64 = 10;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82408478
	sub_82408478(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne 0x823c0880
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0880;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x824084e0
	sub_824084E0(ctx, base);
loc_823C0880:
	// lwz ctx_arrow(ctx)->r3,1304(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x82408438
	sub_82408438(ctx, base);
	// b 0x823c089c
	goto loc_823C089C;
loc_823C088C:
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// bl 0x8235eba8
	sub_8235EBA8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823c0168
	sub_823C0168(ctx, base);
loc_823C089C:
	// lwz ctx_arrow(ctx)->r11,1300(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823c088c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C088C;
	// bl 0x824083f8
	sub_824083F8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8235d388
	sub_8235D388(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x824084e0
	sub_824084E0(ctx, base);
}

alias(__imp__sub_823C08C0) PPC_WEAK_FUNC(sub_823C08C0);
PPC_FUNC_IMPL(__imp__sub_823C08C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed110
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c09dc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C09DC;
	// lis ctx_arrow(ctx)->r18,-32196
	ctx_arrow(ctx)->r18.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r19,-32196
	ctx_arrow(ctx)->r19.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r20,-32196
	ctx_arrow(ctx)->r20.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r21,-32196
	ctx_arrow(ctx)->r21.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r22,-32196
	ctx_arrow(ctx)->r22.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r23,-32196
	ctx_arrow(ctx)->r23.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r24,-32196
	ctx_arrow(ctx)->r24.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r25,-32196
	ctx_arrow(ctx)->r25.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r26,-32196
	ctx_arrow(ctx)->r26.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r27,-32196
	ctx_arrow(ctx)->r27.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r28,-32196
	ctx_arrow(ctx)->r28.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r29,-32196
	ctx_arrow(ctx)->r29.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r30,-32196
	ctx_arrow(ctx)->r30.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r31,-32196
	ctx_arrow(ctx)->r31.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r4,-32196
	ctx_arrow(ctx)->r4.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r5,-32196
	ctx_arrow(ctx)->r5.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r6,-32196
	ctx_arrow(ctx)->r6.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r7,-32196
	ctx_arrow(ctx)->r7.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r8,-32196
	ctx_arrow(ctx)->r8.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r9,-32196
	ctx_arrow(ctx)->r9.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r10,-32196
	ctx_arrow(ctx)->r10.s64 = -2109997056;
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r18,-4272
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r18.s64 + -4272;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r19,272
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r19.s64 + 272;
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r20,-2312
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r20.s64 + -2312;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r21,-2176
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r21.s64 + -2176;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r22,-2064
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r22.s64 + -2064;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,736
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r23.s64 + 736;
	// stw ctx_arrow(ctx)->r18,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r24,848
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r24.s64 + 848;
	// stw ctx_arrow(ctx)->r19,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,-1952
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r25.s64 + -1952;
	// stw ctx_arrow(ctx)->r20,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,-1912
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + -1912;
	// stw ctx_arrow(ctx)->r21,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,-1728
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + -1728;
	// stw ctx_arrow(ctx)->r22,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,960
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 960;
	// stw ctx_arrow(ctx)->r23,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1224
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1224;
	// stw ctx_arrow(ctx)->r24,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1320
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1320;
	// stw ctx_arrow(ctx)->r25,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 28);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,-1592
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + -1592;
	// stw ctx_arrow(ctx)->r26,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,-1504
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + -1504;
	// stw ctx_arrow(ctx)->r27,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 36);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,1512
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 1512;
	// stw ctx_arrow(ctx)->r28,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 40);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1600
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 1600;
	// stw ctx_arrow(ctx)->r29,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 44);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,1704
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 1704;
	// stw ctx_arrow(ctx)->r30,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 48);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1456
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1456;
	// stw ctx_arrow(ctx)->r31,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 52);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1448
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1448;
	// stw ctx_arrow(ctx)->r4,56(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 56);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1840
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1840;
	// stw ctx_arrow(ctx)->r5,60(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 60);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1952
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1952;
	// stw ctx_arrow(ctx)->r6,64(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 64);
	// stw ctx_arrow(ctx)->r7,68(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 68);
	// stw ctx_arrow(ctx)->r8,72(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 72);
	// stw ctx_arrow(ctx)->r9,76(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 76);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 80);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 84);
loc_823C09DC:
	// b 0x823ed160
	return;
}

alias(__imp__sub_823C09E0) PPC_WEAK_FUNC(sub_823C09E0);
PPC_FUNC_IMPL(__imp__sub_823C09E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-20640
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -20640;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c08c0
	sub_823C08C0(ctx, base);
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// li ctx_arrow(ctx)->r3,2240
	ctx_arrow(ctx)->r3.s64 = 2240;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32780
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32780;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823c0a2c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0A2C;
	// lis ctx_arrow(ctx)->r28,-32761
	ctx_arrow(ctx)->r28.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,14
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 14;
	// b 0x823c0bd0
	goto loc_823C0BD0;
loc_823C0A2C:
	// li ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.s64 = 1;
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// li ctx_arrow(ctx)->r5,48
	ctx_arrow(ctx)->r5.s64 = 48;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// bl 0x823ee010
	sub_823EE010(&ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823bf1e8
	sub_823BF1E8(ctx, base);
	// mr. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt 0x823c0bc4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C0BC4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c0aa0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C0AA0;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,1096
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 1096;
loc_823C0A70:
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c4610
	sub_823C4610(ctx, base);
	// mr. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt 0x823c0bc4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C0BC4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c0a70
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C0A70;
loc_823C0AA0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c0aec
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C0AEC;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,1128
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 1128;
loc_823C0AB4:
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r7,40(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r6,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c3558
	sub_823C3558(ctx, base);
	// mr. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt 0x823c0bc4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C0BC4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c0ab4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C0AB4;
loc_823C0AEC:
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x8235dec8
	sub_8235DEC8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,1304(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1304);
	// bne 0x823c0b18
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0B18;
loc_823C0B0C:
	// lis ctx_arrow(ctx)->r28,-32768
	ctx_arrow(ctx)->r28.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,16389
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 16389;
	// b 0x823c0bc4
	goto loc_823C0BC4;
loc_823C0B18:
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// li ctx_arrow(ctx)->r3,5
	ctx_arrow(ctx)->r3.s64 = 5;
	// bl 0x8240f84c
	__imp__XamNotifyCreateListener(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,1312(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1312);
	// beq 0x823c0b0c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0B0C;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,1272
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 1272;
	// stw ctx_arrow(ctx)->r26,1316(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1316);
	// bl 0x8240f94c
	__imp__RtlInitializeCriticalSection(ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c0bbc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C0BBC;
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,2064
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 2064;
	// lis ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 65536;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82360b20
	sub_82360B20(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,1264(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 1264);
	// beq 0x823c0b0c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0B0C;
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// lwz ctx_arrow(ctx)->r3,1304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8235eba8
	sub_8235EBA8(ctx, base);
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// beq 0x823c0bbc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0BBC;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,1264(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82408590
	sub_82408590(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne 0x823c0bbc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0BBC;
	// lis ctx_arrow(ctx)->r28,-32768
	ctx_arrow(ctx)->r28.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,16389
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 16389;
loc_823C0BBC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823c0bd0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C0BD0;
loc_823C0BC4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c0110
	sub_823C0110(ctx, base);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823C0BD0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r24.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
}

alias(__imp__sub_823C0BE0) PPC_WEAK_FUNC(sub_823C0BE0);
PPC_FUNC_IMPL(__imp__sub_823C0BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r8.u32);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_823C0C08) PPC_WEAK_FUNC(sub_823C0C08);
PPC_FUNC_IMPL(__imp__sub_823C0C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r8.u32);
	// blr 
	return;
}

alias(__imp__sub_823C0C30) PPC_WEAK_FUNC(sub_823C0C30);
PPC_FUNC_IMPL(__imp__sub_823C0C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823c0cac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C0CAC;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x823c0cac
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0CAC;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + 16;
loc_823C0C5C:
	// lwz ctx_arrow(ctx)->r8,-8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c0c74
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C0C74;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823c0c9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C0C9C;
loc_823C0C74:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// blt ctx_arrow(ctx)->r6,0x823c0c5c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C0C5C;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823C0C88:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 0;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// b 0x823c0cb0
	goto loc_823C0CB0;
loc_823C0C9C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// bl 0x823c17a8
	sub_823C17A8(ctx, base);
	// b 0x823c0c88
	goto loc_823C0C88;
loc_823C0CAC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823C0CB0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823C0CC0) PPC_WEAK_FUNC(sub_823C0CC0);
PPC_FUNC_IMPL(__imp__sub_823C0CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,25738
	ctx_arrow(ctx)->r4.s64 = 1686765568;
	// mullw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = int64_t(ctx_arrow(ctx)->r3.s32) * int64_t(ctx_arrow(ctx)->r11.s32);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 24;
	// b 0x8209d000
	sub_8209D000(ctx, base);
	return;
}

alias(__imp__sub_823C0CD8) PPC_WEAK_FUNC(sub_823C0CD8);
PPC_FUNC_IMPL(__imp__sub_823C0CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823C0D08) PPC_WEAK_FUNC(sub_823C0D08);
PPC_FUNC_IMPL(__imp__sub_823C0D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823C0D38) PPC_WEAK_FUNC(sub_823C0D38);
PPC_FUNC_IMPL(__imp__sub_823C0D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,52
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 52;
	// bl 0x823c4fa0
	sub_823C4FA0(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823C0D60) PPC_WEAK_FUNC(sub_823C0D60);
PPC_FUNC_IMPL(__imp__sub_823C0D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,52
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 52;
	// bl 0x823c53c8
	sub_823C53C8(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823C0D88) PPC_WEAK_FUNC(sub_823C0D88);
PPC_FUNC_IMPL(__imp__sub_823C0D88) {
	PPC_FUNC_PROLOGUE();
	// lis ctx_arrow(ctx)->r4,25738
	ctx_arrow(ctx)->r4.s64 = 1686765568;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 24;
	// b 0x8209d060
	sub_8209D060(ctx, base);
	return;
}

alias(__imp__sub_823C0D98) PPC_WEAK_FUNC(sub_823C0D98);
PPC_FUNC_IMPL(__imp__sub_823C0D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,3264
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 3264;
	// bl 0x823c5520
	sub_823C5520(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,3464
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 3464;
	// bl 0x823c5530
	sub_823C5530(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,3288
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 3288;
	// bl 0x823c5540
	sub_823C5540(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32196
	ctx_arrow(ctx)->r11.s64 = -2109997056;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,3336
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 3336;
	// bl 0x823c5550
	sub_823C5550(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32193
	ctx_arrow(ctx)->r11.s64 = -2109800448;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-9040
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -9040;
	// bl 0x823c5560
	sub_823C5560(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32193
	ctx_arrow(ctx)->r11.s64 = -2109800448;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-9248
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -9248;
	// bl 0x823c5570
	sub_823C5570(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823C0E00) PPC_WEAK_FUNC(sub_823C0E00);
PPC_FUNC_IMPL(__imp__sub_823C0E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823c0d98
	sub_823C0D98(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,52
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 52;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823c50c0
	sub_823C50C0(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823c0e44
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0E44;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823c4fa0
	sub_823C4FA0(ctx, base);
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x823c0e68
	goto loc_823C0E68;
loc_823C0E44:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,64
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 64;
	// li ctx_arrow(ctx)->r10,160
	ctx_arrow(ctx)->r10.s64 = 160;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,384
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 384;
	// li ctx_arrow(ctx)->r8,9
	ctx_arrow(ctx)->r8.s64 = 9;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// sth ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r10.u16);
	// stw ctx_arrow(ctx)->r9,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// sth ctx_arrow(ctx)->r8,40(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r8.u16);
loc_823C0E68:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823C0E80) PPC_WEAK_FUNC(sub_823C0E80);
PPC_FUNC_IMPL(__imp__sub_823C0E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
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
	// bl 0x823ed118
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r22.s64 = 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// li ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 2;
	// lwz ctx_arrow(ctx)->r25,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,28
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 28;
	// stw ctx_arrow(ctx)->r24,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r23.u64;
loc_823C0EC4:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq 0x823c0f00
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C0F00;
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823c0ee8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C0EE8;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// b 0x823c0eec
	goto loc_823C0EEC;
loc_823C0EE8:
	// stw ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823C0EEC:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c0f04
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C0F04;
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r20,1
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r20.s64 + 1;
	// b 0x823c0f04
	goto loc_823C0F04;
loc_823C0F00:
	// stw ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823C0F04:
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 0;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bne 0x823c0ec4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0EC4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1074
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1074;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r20.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1074
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1074;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r24.u64;
	// b 0x823c106c
	goto loc_823C106C;
loc_823C0F2C:
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r21,-1
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r21.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1074
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1074;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r20.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1074
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1074;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,64
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,400
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 400;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,31,1,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x823c4990
	sub_823C4990(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// sth ctx_arrow(ctx)->r24,46(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 46, ctx_arrow(ctx)->r24, 0);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,52
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 52;
	// stb ctx_arrow(ctx)->r24,48(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 48, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r24), 0);
	// bl 0x823c4e38
	sub_823C4E38(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823c1074
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C1074;
	// lhz ctx_arrow(ctx)->r29,46(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 46);
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r24.u64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r26,2
	ctx_arrow(ctx)->r26.s64 = 2;
loc_823C0FA0:
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq 0x823c1014
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1014;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,384
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 384;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r29.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823c0fe4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C0FE4;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
loc_823C0FE4:
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1014
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1014;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c17c8
	sub_823C17C8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// bne 0x823c1014
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C1014;
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r20,-1
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r20.s64 + -1;
loc_823C1014:
	// addic. ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,-1
	xer.ca = ctx_arrow(ctx)->r26.u32 > 0;
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,4
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 4;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// bne 0x823c0fa0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C0FA0;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r9.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823c1048
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C1048;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
loc_823C1048:
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c106c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C106C;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c17c8
	sub_823C17C8(ctx, base);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C106C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r21.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c0f2c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C0F2C;
loc_823C1074:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// b 0x823ed168
	return;
}

alias(__imp__sub_823C1080) PPC_WEAK_FUNC(sub_823C1080);
PPC_FUNC_IMPL(__imp__sub_823C1080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823c0d98
	sub_823C0D98(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,52
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 52;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823c5518
	sub_823C5518(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823c10c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C10C4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823c53c8
	sub_823C53C8(ctx, base);
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x823c10e0
	goto loc_823C10E0;
loc_823C10C4:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,64
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,704
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 704;
	// li ctx_arrow(ctx)->r9,9
	ctx_arrow(ctx)->r9.s64 = 9;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// stw ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// sth ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r9.u16);
loc_823C10E0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823C10F8) PPC_WEAK_FUNC(sub_823C10F8);
PPC_FUNC_IMPL(__imp__sub_823C10F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
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
	// bl 0x823ed10c
	// stwu ctx_arrow(ctx)->r1,-880(ctx_arrow(ctx)->r1)
	ea = -880 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r23.s64 = 0;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r31,28
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r31.s64 + 28;
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r17,1
	ctx_arrow(ctx)->r17.s64 = 1;
	// li ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 2;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r20.u64;
	// lwz ctx_arrow(ctx)->r22,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r22.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r23,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// stw ctx_arrow(ctx)->r21,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
loc_823C113C:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq 0x823c1178
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1178;
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1160
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1160;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// b 0x823c1164
	goto loc_823C1164;
loc_823C1160:
	// stw ctx_arrow(ctx)->r23,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823C1164:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c117c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C117C;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r18,1
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r18.s64 + 1;
	// b 0x823c117c
	goto loc_823C117C;
loc_823C1178:
	// stw ctx_arrow(ctx)->r23,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823C117C:
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 0;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bne 0x823c113c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C113C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c138c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C138C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r18,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r18.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c138c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C138C;
	// mr ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r23.u64;
	// b 0x823c1384
	goto loc_823C1384;
loc_823C11A4:
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r19,-1
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r19.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c138c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C138C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r18,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r18.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c138c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C138C;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,704
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 704;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,64
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 64;
	// sth ctx_arrow(ctx)->r23,32(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r23, 0);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,52
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 52;
	// sth ctx_arrow(ctx)->r23,42(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 42, ctx_arrow(ctx)->r23, 0);
	// stb ctx_arrow(ctx)->r23,44(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 44, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r23), 0);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r21)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r21.u32 + 0);
loc_823C11F0:
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823c5260
	sub_823C5260(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823c123c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C123C;
	// lhz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 1);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// sth ctx_arrow(ctx)->r23,32(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r23, 0);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r21)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r21.u32 + 0);
	// bl 0x823c52f8
	sub_823C52F8(&ctx);
	// lbz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c11f0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C11F0;
loc_823C123C:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823c138c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C138C;
	// li ctx_arrow(ctx)->r11,160
	ctx_arrow(ctx)->r11.s64 = 160;
	// lhz ctx_arrow(ctx)->r24,42(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r24.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 42);
	// li ctx_arrow(ctx)->r5,320
	ctx_arrow(ctx)->r5.s64 = 320;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// sth ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r11, 0);
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// li ctx_arrow(ctx)->r6,160
	ctx_arrow(ctx)->r6.s64 = 160;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,720
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 720;
	// bl 0x823c4990
	sub_823C4990(ctx, base);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r20.u64;
	// li ctx_arrow(ctx)->r25,2
	ctx_arrow(ctx)->r25.s64 = 2;
loc_823C1284:
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq 0x823c1334
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1334;
	// lhz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 32);
	// li ctx_arrow(ctx)->r10,8000
	ctx_arrow(ctx)->r10.s64 = 8000;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16000
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 16000;
	// divw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s32 = ctx_arrow(ctx)->r11.s32 / ctx_arrow(ctx)->r10.s32;
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c12cc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C12CC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
loc_823C12CC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r29.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823c1304
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C1304;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
loc_823C1304:
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1334
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1334;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c17c8
	sub_823C17C8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 0);
	// bne 0x823c1334
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C1334;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r18,-1
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r18.s64 + -1;
loc_823C1334:
	// addic. ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,-1
	xer.ca = ctx_arrow(ctx)->r25.u32 > 0;
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r25.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 0, xer);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,4
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 4;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,4
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 4;
	// bne 0x823c1284
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C1284;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r24.u64 + ctx_arrow(ctx)->r9.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823c1360
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C1360;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
loc_823C1360:
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1384
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1384;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r22.u64;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c17c8
	sub_823C17C8(ctx, base);
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C1384:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r19,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r19.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c11a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C11A4;
loc_823C138C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,880
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 880;
	// b 0x823ed15c
	return;
}

alias(__imp__sub_823C1398) PPC_WEAK_FUNC(sub_823C1398);
PPC_FUNC_IMPL(__imp__sub_823C1398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823c13ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C13AC;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823c13b8
	goto loc_823C13B8;
loc_823C13AC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
loc_823C13B8:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// b 0x823c1848
	sub_823C1848(ctx, base);
	return;
}

alias(__imp__sub_823C13C0) PPC_WEAK_FUNC(sub_823C13C0);
PPC_FUNC_IMPL(__imp__sub_823C13C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 16;
loc_823C13E0:
	// lwz ctx_arrow(ctx)->r9,-8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c13f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C13F8;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1424;
loc_823C13F8:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// blt ctx_arrow(ctx)->r6,0x823c13e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C13E0;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r27.u64;
loc_823C140C:
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1460
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1460;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823c1458
	goto loc_823C1458;
loc_823C1424:
	// li ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = 1;
	// b 0x823c140c
	goto loc_823C140C;
loc_823C142C:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1460
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1460;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c17c8
	sub_823C17C8(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C1458:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c142c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C142C;
loc_823C1460:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1498
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1498;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c1490
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1490;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x823c14d8
	goto loc_823C14D8;
loc_823C1490:
	// li ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = 1;
	// b 0x823c14d8
	goto loc_823C14D8;
loc_823C1498:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823c14d0
	goto loc_823C14D0;
loc_823C14A4:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,-1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c14d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C14D8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c17c8
	sub_823C17C8(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C14D0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c14a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C14A4;
loc_823C14D8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823C14E8) PPC_WEAK_FUNC(sub_823C14E8);
PPC_FUNC_IMPL(__imp__sub_823C14E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1514
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1514;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823C1514:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1520
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1520;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 0);
loc_823C1520:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r9,-16384
	ctx_arrow(ctx)->r9.s64 = -1073741824;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r9.u64 | 1;
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823c1584
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1584;
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1564
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1564;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1584
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1584;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c17c8
	sub_823C17C8(ctx, base);
	// b 0x823c1584
	goto loc_823C1584;
loc_823C1564:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1584
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1584;
loc_823C156C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c17c8
	sub_823C17C8(ctx, base);
	// mr. ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// bne 0x823c156c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C156C;
loc_823C1584:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28,8
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r28.s64 + 8;
loc_823C1588:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c15d0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C15D0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c15a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C15A4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r26.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c15d0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C15D0;
loc_823C15A4:
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c15e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C15E4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c15d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C15D0;
loc_823C15B8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c17c8
	sub_823C17C8(ctx, base);
	// mr. ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// bne 0x823c15b8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C15B8;
loc_823C15D0:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 2, xer);
	// blt ctx_arrow(ctx)->r6,0x823c1588
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C1588;
	// b 0x823c160c
	goto loc_823C160C;
loc_823C15E4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c160c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C160C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 2;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 0);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c17c8
	sub_823C17C8(ctx, base);
loc_823C160C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823C1618) PPC_WEAK_FUNC(sub_823C1618);
PPC_FUNC_IMPL(__imp__sub_823C1618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c16b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C16B8;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823c14e8
	sub_823C14E8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c166c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C166C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c1668
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1668;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823C1668:
	// stw ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 24);
loc_823C166C:
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c1680
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1680;
	// bl 0x823c18e8
	sub_823C18E8(ctx, base);
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
loc_823C1680:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r30.s64 + 8;
	// li ctx_arrow(ctx)->r29,2
	ctx_arrow(ctx)->r29.s64 = 2;
loc_823C1688:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c169c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C169C;
	// bl 0x823c18e8
	sub_823C18E8(ctx, base);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_823C169C:
	// addic. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,-1
	xer.ca = ctx_arrow(ctx)->r29.u32 > 0;
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// bne 0x823c1688
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C1688;
	// lis ctx_arrow(ctx)->r4,25738
	ctx_arrow(ctx)->r4.s64 = 1686765568;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 8;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823C16B8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823C16C0) PPC_WEAK_FUNC(sub_823C16C0);
PPC_FUNC_IMPL(__imp__sub_823C16C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed12c
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,25738
	ctx_arrow(ctx)->r4.s64 = 1686765568;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 8;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823c1704
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C1704;
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
	// b 0x823c1788
	goto loc_823C1788;
loc_823C1704:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c19d0
	sub_823C19D0(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x823c1788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C1788;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 8;
loc_823C1724:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c1740
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1740;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823c19d0
	sub_823C19D0(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x823c1788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C1788;
loc_823C1740:
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 2, xer);
	// blt ctx_arrow(ctx)->r6,0x823c1724
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C1724;
	// stw ctx_arrow(ctx)->r26,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c177c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C177C;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x823c1780
	goto loc_823C1780;
loc_823C177C:
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
loc_823C1780:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823c1794
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C1794;
loc_823C1788:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c1618
	sub_823C1618(ctx, base);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823C1794:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r25.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_823C17A8) PPC_WEAK_FUNC(sub_823C17A8);
PPC_FUNC_IMPL(__imp__sub_823C17A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x823c17bc
	goto loc_823C17BC;
loc_823C17B4:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 1;
loc_823C17BC:
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x823c17b4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C17B4;
	// blr 
	return;
}

alias(__imp__sub_823C17C8) PPC_WEAK_FUNC(sub_823C17C8);
PPC_FUNC_IMPL(__imp__sub_823C17C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,259
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 259, xer);
	// bne ctx_arrow(ctx)->r6,0x823c17e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C17E4;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
loc_823C17E4:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 0);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r8.s64 + 8;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1820
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1820;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823c1820
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1820;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r7.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1814
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1814;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 4);
loc_823C1814:
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 0);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
loc_823C1820:
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c1838
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1838;
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// b 0x823c183c
	goto loc_823C183C;
loc_823C1838:
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 0);
loc_823C183C:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_823C1848) PPC_WEAK_FUNC(sub_823C1848);
PPC_FUNC_IMPL(__imp__sub_823C1848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq 0x823c18c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C18C4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c187c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C187C;
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
loc_823C187C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// bl 0x82408138
	sub_82408138(&ctx);
	// li ctx_arrow(ctx)->r10,259
	ctx_arrow(ctx)->r10.s64 = 259;
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 8;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823c18d0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C18D0;
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// b 0x823c18d4
	goto loc_823C18D4;
loc_823C18C4:
	// lis ctx_arrow(ctx)->r28,-32761
	ctx_arrow(ctx)->r28.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,122
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 122;
	// b 0x823c18d8
	goto loc_823C18D8;
loc_823C18D0:
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823C18D4:
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823C18D8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823C18E8) PPC_WEAK_FUNC(sub_823C18E8);
PPC_FUNC_IMPL(__imp__sub_823C18E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1934
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1934;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c1924
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1924;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 3;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_823C1924:
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32773
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32773;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823C1934:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823C1948) PPC_WEAK_FUNC(sub_823C1948);
PPC_FUNC_IMPL(__imp__sub_823C1948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c19b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C19B4;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c1988
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1988;
	// lis ctx_arrow(ctx)->r4,24714
	ctx_arrow(ctx)->r4.s64 = 1619656704;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,8194
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 8194;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_823C1988:
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c19a4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C19A4;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,9
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 9;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
loc_823C19A4:
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32774
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32774;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823C19B4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823C19D0) PPC_WEAK_FUNC(sub_823C19D0);
PPC_FUNC_IMPL(__imp__sub_823C19D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32773
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32773;
	// li ctx_arrow(ctx)->r3,20
	ctx_arrow(ctx)->r3.s64 = 20;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823c1a24
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C1A24;
loc_823C1A00:
	// lis ctx_arrow(ctx)->r28,-32761
	ctx_arrow(ctx)->r28.s64 = -2147024896;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,14
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 14;
	// bl 0x823c18e8
	sub_823C18E8(ctx, base);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823C1A14:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_823C1A24:
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,3,0,28
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 3;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// beq 0x823c1a00
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1A00;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1a14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1A14;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64;
loc_823C1A50:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -8;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x823c1a7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1A7C;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 4);
	// b 0x823c1a80
	goto loc_823C1A80;
loc_823C1A7C:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_823C1A80:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// bne ctx_arrow(ctx)->r6,0x823c1a50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1A50;
	// b 0x823c1a14
	goto loc_823C1A14;
}

alias(__imp__sub_823C1A90) PPC_WEAK_FUNC(sub_823C1A90);
PPC_FUNC_IMPL(__imp__sub_823C1A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32774
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32774;
	// li ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r3.s64 = 12;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r7.u64;
	// li ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r25.s64 = 0;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// beq 0x823c1b58
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1B58;
	// mullw ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r26.s64 = int64_t(ctx_arrow(ctx)->r29.s32) * int64_t(ctx_arrow(ctx)->r30.s32);
	// stw ctx_arrow(ctx)->r28,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// lis ctx_arrow(ctx)->r4,24714
	ctx_arrow(ctx)->r4.s64 = 1619656704;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,8194
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 8194;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mullw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.s64 = int64_t(ctx_arrow(ctx)->r28.s32) * int64_t(ctx_arrow(ctx)->r30.s32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,9
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 9;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1b58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1B58;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1b58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1B58;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1b6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1B6C;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r29.s64 - ctx_arrow(ctx)->r27.s64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64;
loc_823C1B24:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addic. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	xer.ca = ctx_arrow(ctx)->r30.u32 > 0;
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r29.s64;
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r30.s32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 12);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// bne 0x823c1b24
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C1B24;
	// b 0x823c1b6c
	goto loc_823C1B6C;
loc_823C1B58:
	// lis ctx_arrow(ctx)->r25,-32761
	ctx_arrow(ctx)->r25.s64 = -2147024896;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,14
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r25.u64 | 14;
	// bl 0x823c1948
	sub_823C1948(ctx, base);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823C1B6C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r24.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
}

alias(__imp__sub_823C1B80) PPC_WEAK_FUNC(sub_823C1B80);
PPC_FUNC_IMPL(__imp__sub_823C1B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82408118
	sub_82408118(ctx, base);
	// ld ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r9,328(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1000
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 * 1000;
	// rotldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u64, 1);
	// divd ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 / ctx_arrow(ctx)->r9.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// tdllei ctx_arrow(ctx)->r9,0
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r11.u64;
	// tdlgei ctx_arrow(ctx)->r11,-1
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823C1BD8) PPC_WEAK_FUNC(sub_823C1BD8);
PPC_FUNC_IMPL(__imp__sub_823C1BD8) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1c28
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1C28;
	// bl 0x823c1b80
	sub_823C1B80(ctx, base);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r10.s64;
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r9.s64;
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, ctx_arrow(ctx)->r11.u64, xer);
	// blt ctx_arrow(ctx)->r6,0x823c1c28
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C1C28;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// std ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 56);
loc_823C1C28:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823C1C48) PPC_WEAK_FUNC(sub_823C1C48);
PPC_FUNC_IMPL(__imp__sub_823C1C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,20
	ctx_arrow(ctx)->r10.s64 = 20;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r8,32(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + 32);
	// divdu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 / ctx_arrow(ctx)->r10.u64;
	// lhz ctx_arrow(ctx)->r11,66(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + 66);
	// std ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r5)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// srawi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,12
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0xFFF) != 0);
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s32 >> 12;
	// addze ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	temp.s64 = ctx_arrow(ctx)->r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r8.u32;
	ctx_arrow(ctx)->r8.s64 = temp.s64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,12,0,19
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 12) & 0xFFFFF000;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r8.s64;
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,4096
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 + 4096;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,12
	xer.ca = (ctx_arrow(ctx)->r8.s32 < 0) & ((ctx_arrow(ctx)->r8.u32 & 0xFFF) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s32 >> 12;
	// addze ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	temp.s64 = ctx_arrow(ctx)->r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r11.u32;
	ctx_arrow(ctx)->r11.s64 = temp.s64;
	// srawi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,12
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0xFFF) != 0);
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s32 >> 12;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12,0,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0xFFFFF000;
	// addze ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3
	temp.s64 = ctx_arrow(ctx)->r3.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r3.u32;
	ctx_arrow(ctx)->r3.s64 = temp.s64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r11.s64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,12,0,19
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 12) & 0xFFFFF000;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r8.s64;
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r4.u32 & 0xFFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823c1cf0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C1CF0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c1cdc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C1CDC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823c1d2c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C1D2C;
loc_823C1CDC:
	// lwz ctx_arrow(ctx)->r11,356(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r3.s64 = 2;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,356(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 356);
	// blr 
	return;
loc_823C1CF0:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823c1d00
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C1D00;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823c1cdc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823C1CDC;
loc_823C1D00:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823c1d24
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C1D24;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823c1d18
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823C1D18;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x823c1d34
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C1D34;
loc_823C1D18:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_823C1D1C:
	// stw ctx_arrow(ctx)->r6,356(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 356);
	// blr 
	return;
loc_823C1D24:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823c1d34
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823C1D34;
loc_823C1D2C:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r7.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c1d18
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C1D18;
loc_823C1D34:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r6.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4096;
	// srawi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,12
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0xFFF) != 0);
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s32 >> 12;
	// addze ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	temp.s64 = ctx_arrow(ctx)->r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r8.u32;
	ctx_arrow(ctx)->r8.s64 = temp.s64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,12,0,19
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 12) & 0xFFFFF000;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r8.s64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 20;
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
	// b 0x823c1d1c
	goto loc_823C1D1C;
}

alias(__imp__sub_823C1D70) PPC_WEAK_FUNC(sub_823C1D70);
PPC_FUNC_IMPL(__imp__sub_823C1D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,372
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 372;
	// lwz ctx_arrow(ctx)->r11,372(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c1dd4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1DD4;
	// ld ctx_arrow(ctx)->r7,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U64(ctx,  ctx);
loc_823C1D94:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// ld ctx_arrow(ctx)->r6,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r7.u64, ctx_arrow(ctx)->r6.u64, xer);
	// blt ctx_arrow(ctx)->r6,0x823c1db4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C1DB4;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x823c1d94
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C1D94;
loc_823C1DB4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1df8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1DF8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1dd4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1DD4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, ctx_arrow(ctx)->r7.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1e38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1E38;
loc_823C1DD4:
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c1dec
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1DEC;
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// b 0x823c1df0
	goto loc_823C1DF0;
loc_823C1DEC:
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 0);
loc_823C1DF0:
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 4);
	// blr 
	return;
loc_823C1DF8:
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, ctx_arrow(ctx)->r7.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823c1e38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C1E38;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1e28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1E28;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// b 0x823c1df0
	goto loc_823C1DF0;
loc_823C1E28:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// blr 
	return;
loc_823C1E38:
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// blr 
	return;
}

alias(__imp__sub_823C1E48) PPC_WEAK_FUNC(sub_823C1E48);
PPC_FUNC_IMPL(__imp__sub_823C1E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lhz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 64);
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r4.u32 & 0xFFFF;
	// ld ctx_arrow(ctx)->r7,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r6.s64 - ctx_arrow(ctx)->r11.s64;
	// ld ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,372
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 372;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4096;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r7.u64;
	// srawi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,12
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0xFFF) != 0);
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s32 >> 12;
	// std ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// stw ctx_arrow(ctx)->r9,312(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 312);
	// addze ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7
	temp.s64 = ctx_arrow(ctx)->r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r7.u32;
	ctx_arrow(ctx)->r7.s64 = temp.s64;
	// stw ctx_arrow(ctx)->r9,304(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 304);
	// std ctx_arrow(ctx)->r8,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,12,0,19
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 12) & 0xFFFFF000;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r8.s64;
	// sth ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r11, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c1eb8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1EB8;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1eac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1EAC;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
loc_823C1EAC:
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823C1EB8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r3,364
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r3.s64 + 364;
loc_823C1EC4:
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq 0x823c1edc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1EDC;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 4);
	// b 0x823c1ee0
	goto loc_823C1EE0;
loc_823C1EDC:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 0);
loc_823C1EE0:
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c1f0c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C1F0C;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1f00
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1F00;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
loc_823C1F00:
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823C1F0C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c1ec4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C1EC4;
	// blr 
	return;
}

alias(__imp__sub_823C1F18) PPC_WEAK_FUNC(sub_823C1F18);
PPC_FUNC_IMPL(__imp__sub_823C1F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,312(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r9,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 68);
	// lhz ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 64);
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// std ctx_arrow(ctx)->r8,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r9.s64;
	// lfd f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// fcfid f0,f13
	f0.f64 = double(ctx.f13.s64);
	// lfd f13,2728(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / f0.f64;
	// fcmpu ctx_arrow(ctx)->r6,f11,f13
	ctx_arrow(ctx)->r6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x823c1f70
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C1F70;
	// fdiv f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 / f0.f64;
	// b 0x823c1f74
	goto loc_823C1F74;
loc_823C1F70:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_823C1F74:
	// lfd f11,288(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x823c1f88
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C1F88;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_823C1F88:
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 10;
	// fmul f12,f0,f12
	ctx.f12.f64 = f0.f64 * ctx.f12.f64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stfd f0,296(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 296);
	// lfdx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f0,f13,f0,f12
	f0.f64 = ctx.f13.f64 * f0.f64 + ctx.f12.f64;
	// stfdx f0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r31.u32);
	// stw ctx_arrow(ctx)->r26,304(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 304);
	// lfd f0,280(ctx_arrow(ctx)->r31)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// stw ctx_arrow(ctx)->r26,312(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 312);
	// lfdx f13,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x823c20e8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C20E8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2144
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 9;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fsub f0,f12,f0
	f0.f64 = ctx.f12.f64 - f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x823c2144
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C2144;
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,20
	ctx_arrow(ctx)->r10.s64 = 20;
	// lwz ctx_arrow(ctx)->r28,372(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,372
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 372;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20;
	// cmplwi ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// divdu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 / ctx_arrow(ctx)->r10.u64;
	// std ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// sth ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 64, ctx_arrow(ctx)->r10.u16);
	// beq 0x823c2144
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2144;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 20;
	// ld ctx_arrow(ctx)->r29,24(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// bl 0x823c17a8
	sub_823C17A8(&ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c2144
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2144;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, ctx_arrow(ctx)->r29.u64, xer);
	// ble ctx_arrow(ctx)->r6,0x823c2144
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C2144;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29,20
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r29.s64 + 20;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r26.u64;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c20d8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C20D8;
loc_823C205C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, ctx_arrow(ctx)->r9.u64, xer);
	// bgt ctx_arrow(ctx)->r6,0x823c2080
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823C2080;
	// bne ctx_arrow(ctx)->r6,0x823c2074
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2074;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
loc_823C2074:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x823c205c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C205C;
loc_823C2080:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c20d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C20D8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c20b0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C20B0;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c20a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C20A4;
	// stw ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
loc_823C20A4:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// stw ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823C20B0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,364
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 364;
	// stw ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823c20cc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C20CC;
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// b 0x823c20d0
	goto loc_823C20D0;
loc_823C20CC:
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823C20D0:
	// stw ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// b 0x823c2144
	goto loc_823C2144;
loc_823C20D8:
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 20;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r27)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 24);
	// b 0x823c2144
	goto loc_823C2144;
loc_823C20E8:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 25, xer);
	// bge ctx_arrow(ctx)->r6,0x823c2144
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C2144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 11;
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fsub f0,f12,f0
	f0.f64 = ctx.f12.f64 - f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x823c2144
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C2144;
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2144
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2144;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-20
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -20;
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,20
	ctx_arrow(ctx)->r9.s64 = 20;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 20;
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// divdu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 / ctx_arrow(ctx)->r9.u64;
	// std ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// sth ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 64, ctx_arrow(ctx)->r10.u16);
loc_823C2144:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823C2150) PPC_WEAK_FUNC(sub_823C2150);
PPC_FUNC_IMPL(__imp__sub_823C2150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -2;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// lwz ctx_arrow(ctx)->r3,392(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c1398
	sub_823C1398(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x823c21b4
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823C21B4;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// b 0x823c21dc
	goto loc_823C21DC;
loc_823C21B4:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,380
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 380;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823c21d4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C21D4;
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// b 0x823c21d8
	goto loc_823C21D8;
loc_823C21D4:
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823C21D8:
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823C21DC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823C21E8) PPC_WEAK_FUNC(sub_823C21E8);
PPC_FUNC_IMPL(__imp__sub_823C21E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2244
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2244;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c2228
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2228;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 3;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
loc_823C2228:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c1948
	sub_823C1948(ctx, base);
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32787
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32787;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823C2244:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823C2260) PPC_WEAK_FUNC(sub_823C2260);
PPC_FUNC_IMPL(__imp__sub_823C2260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r28,-32768
	ctx_arrow(ctx)->r28.s64 = -2147483648;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,16389
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 16389;
	// bl 0x823c1bd8
	sub_823C1BD8(ctx, base);
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x823c23d4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C23D4;
	// lwz ctx_arrow(ctx)->r29,372(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,372
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r30.s64 + 372;
	// cmplwi ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq 0x823c23d0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C23D0;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r9.u64, ctx_arrow(ctx)->r11.u64, xer);
	// beq ctx_arrow(ctx)->r6,0x823c234c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C234C;
	// lwz ctx_arrow(ctx)->r11,316(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,316(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 316);
	// lwz ctx_arrow(ctx)->r11,352(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c23c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C23C8;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,364
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r30.s64 + 364;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq 0x823c2408
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2408;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c22e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C22E4;
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
loc_823C22E4:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,340
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r30.s64 + 340;
	// li ctx_arrow(ctx)->r5,10
	ctx_arrow(ctx)->r5.s64 = 10;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,10
	ctx_arrow(ctx)->r10.s64 = 10;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// bl 0x823c2150
	sub_823C2150(&ctx);
	// mr. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// bge 0x823c23c0
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823C23C0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c23e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C23E8;
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
	// b 0x823c23e8
	goto loc_823C23E8;
loc_823C234C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c2374
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2374;
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2368
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2368;
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
loc_823C2368:
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823C2374:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,340
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 340;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,352(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 352);
	// bl 0x823c2150
	sub_823C2150(&ctx);
	// mr. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// bge 0x823c23dc
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823C23DC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c23e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C23E8;
	// stw ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// b 0x823c23e8
	goto loc_823C23E8;
loc_823C23C0:
	// stw ctx_arrow(ctx)->r27,352(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 352);
	// b 0x823c23e8
	goto loc_823C23E8;
loc_823C23C8:
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r27.u64;
	// b 0x823c23e8
	goto loc_823C23E8;
loc_823C23D0:
	// stw ctx_arrow(ctx)->r27,72(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 72);
loc_823C23D4:
	// std ctx_arrow(ctx)->r27,56(ctx_arrow(ctx)->r30)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 56);
	// b 0x823c23e8
	goto loc_823C23E8;
loc_823C23DC:
	// ld ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 20;
	// std ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 56);
loc_823C23E8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823c2408
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2408;
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,320(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,20
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 20;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r30)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 16);
	// stw ctx_arrow(ctx)->r11,320(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 320);
loc_823C2408:
	// ld ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpdi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r11.s64, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c241c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C241C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20;
	// std ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 56);
loc_823C241C:
	// lwz ctx_arrow(ctx)->r31,380(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,380
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r30.s64 + 380;
	// b 0x823c24c4
	goto loc_823C24C4;
loc_823C2428:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,259
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 259, xer);
	// beq ctx_arrow(ctx)->r6,0x823c24cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C24CC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c2460
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2460;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2454
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2454;
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
loc_823C2454:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823C2460:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,364
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 364;
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x823c24b8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C24B8;
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// b 0x823c24bc
	goto loc_823C24BC;
loc_823C24B8:
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823C24BC:
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
loc_823C24C4:
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne 0x823c2428
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C2428;
loc_823C24CC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823C24D8) PPC_WEAK_FUNC(sub_823C24D8);
PPC_FUNC_IMPL(__imp__sub_823C24D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r10,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r26.u32 + 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20,12,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 20) & 0xFFFFF;
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10,31,21,31
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 31) & 0x7FF;
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// bne ctx_arrow(ctx)->r6,0x823c2574
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2574;
	// lwz ctx_arrow(ctx)->r11,336(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2554
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2554;
	// bl 0x8235d778
	sub_8235D778(ctx, base);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-20552
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -20552;
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64 & 0xFFFFFFFF;
	// bne ctx_arrow(ctx)->r6,0x823c254c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C254C;
	// li ctx_arrow(ctx)->r9,20
	ctx_arrow(ctx)->r9.s64 = 20;
	// std ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// std ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
loc_823C254C:
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// b 0x823c2560
	goto loc_823C2560;
loc_823C2554:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c1b80
	sub_823C1B80(ctx, base);
	// std ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
loc_823C2560:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// std ctx_arrow(ctx)->r24,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// stb ctx_arrow(ctx)->r30,308(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 308, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// sth ctx_arrow(ctx)->r27,32(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r27, 0);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 72);
loc_823C2574:
	// lbz ctx_arrow(ctx)->r11,308(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,24
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r30.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2590
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2590;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c1f18
	sub_823C1F18(ctx, base);
	// stb ctx_arrow(ctx)->r30,308(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 308, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
loc_823C2590:
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c1c48
	sub_823C1C48(ctx, base);
	// lwz ctx_arrow(ctx)->r11,304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 1, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,304(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 304);
	// blt ctx_arrow(ctx)->r6,0x823c25e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C25E0;
	// beq ctx_arrow(ctx)->r6,0x823c2660
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2660;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x823c2698
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C2698;
	// lwz ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,356(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823c2694
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C2694;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c1e48
	sub_823C1E48(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823c1c48
	sub_823C1C48(ctx, base);
loc_823C25E0:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,364
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 364;
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq 0x823c2694
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2694;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2600
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2600;
	// stw ctx_arrow(ctx)->r24,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
loc_823C2600:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// ld ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r24,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// bl 0x823c1d70
	sub_823C1D70(&ctx);
	// mr. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// bge 0x823c2698
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823C2698;
	// stw ctx_arrow(ctx)->r24,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x823c2680
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2680;
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// b 0x823c2684
	goto loc_823C2684;
loc_823C2660:
	// lbz ctx_arrow(ctx)->r11,308(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2698
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2698;
	// lwz ctx_arrow(ctx)->r11,312(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,312(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 312);
	// b 0x823c2698
	goto loc_823C2698;
loc_823C2680:
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
loc_823C2684:
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,304(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 304);
loc_823C2694:
	// li ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = 1;
loc_823C2698:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
}

alias(__imp__sub_823C26A8) PPC_WEAK_FUNC(sub_823C26A8);
PPC_FUNC_IMPL(__imp__sub_823C26A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// ld ctx_arrow(ctx)->r8,40(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,20
	ctx_arrow(ctx)->r9.s64 = 20;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,372(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// divdu ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 / ctx_arrow(ctx)->r9.u64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,372
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r3.s64 + 372;
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 72);
	// sth ctx_arrow(ctx)->r9,64(ctx_arrow(ctx)->r3)
	PPC_STORE_U16(ctx_arrow(ctx)->r3.u32 + 64, ctx_arrow(ctx)->r9.u16);
	// std ctx_arrow(ctx)->r11,296(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 296);
	// stw ctx_arrow(ctx)->r11,304(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 304);
	// stb ctx_arrow(ctx)->r11,308(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 308, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stw ctx_arrow(ctx)->r11,312(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 312);
	// beq 0x823c2740
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2740;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r3,364
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r3.s64 + 364;
loc_823C26EC:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x823c2714
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2714;
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2708
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2708;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 4);
loc_823C2708:
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 0);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 4);
loc_823C2714:
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x823c272c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C272C;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 4);
	// b 0x823c2730
	goto loc_823C2730;
loc_823C272C:
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 0);
loc_823C2730:
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne 0x823c26ec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C26EC;
loc_823C2740:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 80;
	// li ctx_arrow(ctx)->r11,25
	ctx_arrow(ctx)->r11.s64 = 25;
loc_823C2748:
	// ld ctx_arrow(ctx)->r9,280(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// std ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// bne 0x823c2748
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C2748;
	// blr 
	return;
}

alias(__imp__sub_823C2760) PPC_WEAK_FUNC(sub_823C2760);
PPC_FUNC_IMPL(__imp__sub_823C2760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32787
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32787;
	// li ctx_arrow(ctx)->r3,400
	ctx_arrow(ctx)->r3.s64 = 400;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x823c2798
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C2798;
loc_823C278C:
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
	// b 0x823c28fc
	goto loc_823C28FC;
loc_823C2798:
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r30,392(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 392);
	// li ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r10.s64 = 28;
	// li ctx_arrow(ctx)->r9,12
	ctx_arrow(ctx)->r9.s64 = 12;
	// li ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 4;
	// li ctx_arrow(ctx)->r7,10
	ctx_arrow(ctx)->r7.s64 = 10;
	// lfd f0,-21000(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// stfd f0,280(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 280);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,328
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 328;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// sth ctx_arrow(ctx)->r9,64(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 64, ctx_arrow(ctx)->r9.u16);
	// sth ctx_arrow(ctx)->r8,68(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 68, ctx_arrow(ctx)->r8.u16);
	// lfd f13,-21008(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,240
	ctx_arrow(ctx)->r11.s64 = 240;
	// stfd f13,288(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 288);
	// sth ctx_arrow(ctx)->r10,66(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 66, ctx_arrow(ctx)->r10.u16);
	// stw ctx_arrow(ctx)->r7,360(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 360);
	// stw ctx_arrow(ctx)->r6,336(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 336);
	// std ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// std ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// bl 0x8235eb60
	sub_8235EB60(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne 0x823c281c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C281C;
	// bl 0x8235df68
	sub_8235DF68(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bgt 0x823c2810
	if (ctx_arrow(ctx)->r0.gt()) goto loc_823C2810;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x823c28f4
	goto loc_823C28F4;
loc_823C2810:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFFFF;
	// oris ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,32775
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 | 2147942400;
	// b 0x823c28f4
	goto loc_823C28F4;
loc_823C281C:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 80;
	// li ctx_arrow(ctx)->r11,25
	ctx_arrow(ctx)->r11.s64 = 25;
loc_823C2824:
	// lfd f0,280(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stfd f0,0(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// bne 0x823c2824
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C2824;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwz ctx_arrow(ctx)->r5,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// bl 0x823c1a90
	sub_823C1A90(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x823c28fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C28FC;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 3;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// beq 0x823c278c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C278C;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c28f4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C28F4;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,364
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r31.s64 + 364;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_823C2898:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r5.s32) * int64_t(ctx_arrow(ctx)->r8.s32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r6.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x823c28d8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C28D8;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 4);
	// b 0x823c28dc
	goto loc_823C28DC;
loc_823C28D8:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 0);
loc_823C28DC:
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 4);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c2898
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2898;
loc_823C28F4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823c2908
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C2908;
loc_823C28FC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c21e8
	sub_823C21E8(ctx, base);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823C2908:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823C2918) PPC_WEAK_FUNC(sub_823C2918);
PPC_FUNC_IMPL(__imp__sub_823C2918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stfd f31,-40(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -40);
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r5.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2a14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2A14;
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// stb ctx_arrow(ctx)->r29,96(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 96, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lis ctx_arrow(ctx)->r7,-32256
	ctx_arrow(ctx)->r7.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64;
	// stb ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 80, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stw ctx_arrow(ctx)->r6,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,36
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 36;
	// lfs f0,2688(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f31,2776(ctx_arrow(ctx)->r8)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 116;
loc_823C298C:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r6,-4(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -4));
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 65535, xer);
	// stb ctx_arrow(ctx)->r10,-3(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + -3));
	// bgt ctx_arrow(ctx)->r6,0x823c29b8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823C29B8;
	// lbz ctx_arrow(ctx)->r8,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// slw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r29.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// and. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & ctx_arrow(ctx)->r7.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x823c29b8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C29B8;
	// stfs f31,0(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// b 0x823c29bc
	goto loc_823C29BC;
loc_823C29B8:
	// stfs f0,0(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823C29BC:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x823c298c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C298C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c29e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C29E0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
loc_823C29E0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// stw ctx_arrow(ctx)->r30,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 76);
	// bne ctx_arrow(ctx)->r6,0x823c29f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C29F4;
	// lwz ctx_arrow(ctx)->r30,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823c2a04
	goto loc_823C2A04;
loc_823C29F4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x82364590
	sub_82364590(ctx, base);
	// stfs f31,116(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// stb ctx_arrow(ctx)->r29,80(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 80, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
loc_823C2A04:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r3,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r30,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// bl 0x823646d0
	sub_823646D0(&ctx);
loc_823C2A14:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// lfd f31,-40(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823C2A20) PPC_WEAK_FUNC(sub_823C2A20);
PPC_FUNC_IMPL(__imp__sub_823C2A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r7.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2a40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2A40;
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823c2a44
	goto loc_823C2A44;
loc_823C2A40:
	// lwz ctx_arrow(ctx)->r3,72(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
loc_823C2A44:
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r8.u64;
	// b 0x82364660
	sub_82364660(ctx, base);
	return;
}

alias(__imp__sub_823C2A50) PPC_WEAK_FUNC(sub_823C2A50);
PPC_FUNC_IMPL(__imp__sub_823C2A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c2aa8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C2AA8;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,12
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r30.s64 + 12;
loc_823C2A78:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, ctx_arrow(ctx)->r3.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2ab4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2AB4;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c2a78
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2A78;
loc_823C2AA8:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823C2AAC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823C2AB4:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 3;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823c2aac
	goto loc_823C2AAC;
}

alias(__imp__sub_823C2AC8) PPC_WEAK_FUNC(sub_823C2AC8);
PPC_FUNC_IMPL(__imp__sub_823C2AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed128
	// stfd f31,-80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -80);
	// stwu ctx_arrow(ctx)->r1,-256(ctx_arrow(ctx)->r1)
	ea = -256 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// stw ctx_arrow(ctx)->r5,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// stw ctx_arrow(ctx)->r10,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stb ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 88, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// stb ctx_arrow(ctx)->r11,113(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 113, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// stb ctx_arrow(ctx)->r11,121(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 121, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r3,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31,72
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r31.s64 + 72;
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stb ctx_arrow(ctx)->r30,96(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 96, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r28,112(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 112, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// stb ctx_arrow(ctx)->r30,120(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 120, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stw ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// lis ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stb ctx_arrow(ctx)->r30,122(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 122, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,48000
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 48000;
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
	// stw ctx_arrow(ctx)->r28,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// stw ctx_arrow(ctx)->r31,136(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 136);
	// stw ctx_arrow(ctx)->r10,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// beq 0x823c2b60
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2B60;
	// bl 0x823645f8
	sub_823645F8(&ctx);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r25.u32 + 0);
loc_823C2B60:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r31,80
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r31.s64 + 80;
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c2b78
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2B78;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r24.u32 + 0);
loc_823C2B78:
	// lwz ctx_arrow(ctx)->r3,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c2b8c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2B8C;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// stw ctx_arrow(ctx)->r28,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 76);
loc_823C2B8C:
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r9,56(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lfs f31,2776(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
loc_823C2BA8:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u32 & 0xFF;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,145
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 145;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,148
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 148;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// stbx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r6.u32));
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// stbx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r5.u32));
	// stfsx f31,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r4.u32);
	// blt ctx_arrow(ctx)->r6,0x823c2ba8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2BA8;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x82364ef8
	sub_82364EF8(ctx, base);
	// mr. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt 0x823c2d10
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C2D10;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// stb ctx_arrow(ctx)->r30,113(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 113, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r28,122(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 122, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r27,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
	// lfs f0,2688(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
loc_823C2C10:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 9;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,145
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 145;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stbx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r7.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 65535, xer);
	// stbx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r6.u32));
	// bgt ctx_arrow(ctx)->r6,0x823c2c54
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823C2C54;
	// lbz ctx_arrow(ctx)->r9,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// slw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r30.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// and. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ctx_arrow(ctx)->r8.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x823c2c54
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C2C54;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,148
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 148;
	// stfsx f31,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32);
	// b 0x823c2c5c
	goto loc_823C2C5C;
loc_823C2C54:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,148
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 148;
	// stfsx f0,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32);
loc_823C2C5C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x823c2c10
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2C10;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// stw ctx_arrow(ctx)->r26,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 76);
	// bne ctx_arrow(ctx)->r6,0x823c2c84
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2C84;
	// lwz ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823c2c94
	goto loc_823C2C94;
loc_823C2C84:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x82364590
	sub_82364590(ctx, base);
	// stfs f31,148(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 148);
	// stb ctx_arrow(ctx)->r30,88(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 88, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
loc_823C2C94:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// stw ctx_arrow(ctx)->r26,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// bl 0x82364ef8
	sub_82364EF8(ctx, base);
	// mr. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt 0x823c2d10
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C2D10;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c2d08
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C2D08;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r28.u64;
loc_823C2CBC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 3;
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bge 0x823c2cf4
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823C2CF4;
	// lis ctx_arrow(ctx)->r11,-32768
	ctx_arrow(ctx)->r11.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16385
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 16385;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2d08
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2D08;
loc_823C2CF4:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c2cbc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2CBC;
loc_823C2D08:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823c2d38
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C2D38;
loc_823C2D10:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c2d24
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2D24;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r25.u32 + 0);
loc_823C2D24:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c2d38
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2D38;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r24.u32 + 0);
loc_823C2D38:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// lfd f31,-80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed178
	return;
}

alias(__imp__sub_823C2D48) PPC_WEAK_FUNC(sub_823C2D48);
PPC_FUNC_IMPL(__imp__sub_823C2D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-224(ctx_arrow(ctx)->r1)
	ea = -224 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// li ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// lwz ctx_arrow(ctx)->r10,76(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f0,132(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// stfs f0,140(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 140);
	// stb ctx_arrow(ctx)->r28,128(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 128, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// stfs f0,148(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 148);
	// stb ctx_arrow(ctx)->r27,136(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 136, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r27), 0);
	// stfs f0,156(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 156);
	// stb ctx_arrow(ctx)->r28,96(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 96, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// stb ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 144, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stb ctx_arrow(ctx)->r27,104(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 104, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r27), 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stb ctx_arrow(ctx)->r11,152(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 152, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// stb ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 88, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// bne ctx_arrow(ctx)->r6,0x823c2f88
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2F88;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r29,68(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r27,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// li ctx_arrow(ctx)->r31,1112
	ctx_arrow(ctx)->r31.s64 = 1112;
	// stw ctx_arrow(ctx)->r27,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,-1112
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + -1112;
	// stw ctx_arrow(ctx)->r27,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// stw ctx_arrow(ctx)->r27,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
loc_823C2DE8:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r10.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 ^ 1;
	// cmpwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823c2e20
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2E20;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 65536;
	// lwz ctx_arrow(ctx)->r9,196(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,12,15
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xF0000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r27.u64;
	// beq ctx_arrow(ctx)->r6,0x823c2e24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2E24;
loc_823C2E20:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r28.u64;
loc_823C2E24:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2e7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2E7C;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,196(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,12,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xF0000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823c2e78
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2E78;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2e4c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2E4C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2e7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2E7C;
loc_823C2E4C:
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240f7dc
	__imp__XamUserAreUsersFriends(ctx, base);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2e7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2E7C;
loc_823C2E78:
	// stwx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r26.u32 + ctx_arrow(ctx)->r31.u32);
loc_823C2E7C:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,1128
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 1128, xer);
	// blt ctx_arrow(ctx)->r6,0x823c2de8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2DE8;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// li ctx_arrow(ctx)->r11,1112
	ctx_arrow(ctx)->r11.s64 = 1112;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,-1076
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r30.s64 + -1076;
	// lfs f0,2776(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
loc_823C2EA0:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x823c2ec4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2EC4;
	// rotlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r8,192(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2ec8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2EC8;
loc_823C2EC4:
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
loc_823C2EC8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2f4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2F4C;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,196(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,30,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x823c2ee8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C2EE8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2f4c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2F4C;
loc_823C2EE8:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 112;
loc_823C2EF0:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r6.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2f3c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2F3C;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c2f3c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C2F3C;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,196(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823c2f38
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C2F38;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2f38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2F38;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,196(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,0,31,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw ctx_arrow(ctx)->r3,196(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 196);
	// b 0x823c2f3c
	goto loc_823C2F3C;
loc_823C2F38:
	// stwx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r26.u32);
loc_823C2F3C:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x823c2ef0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2EF0;
loc_823C2F4C:
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c2f68
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C2F68;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 65535, xer);
	// bgt ctx_arrow(ctx)->r6,0x823c2f68
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823C2F68;
	// stfs f0,0(ctx_arrow(ctx)->r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r5.u32 + 0);
loc_823C2F68:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1128
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1128, xer);
	// blt ctx_arrow(ctx)->r6,0x823c2ea0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2EA0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// lwz ctx_arrow(ctx)->r3,72(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x82364728
	sub_82364728(ctx, base);
loc_823C2F88:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823C2F90) PPC_WEAK_FUNC(sub_823C2F90);
PPC_FUNC_IMPL(__imp__sub_823C2F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c306c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C306C;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c2fe0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C2FE0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 24;
loc_823C2FC0:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c1618
	sub_823C1618(ctx, base);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c2fc0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2FC0;
loc_823C2FE0:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c3020
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C3020;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,12
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 12;
loc_823C2FF4:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c2ff4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C2FF4;
loc_823C3020:
	// lwz ctx_arrow(ctx)->r3,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c3034
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C3034;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// stw ctx_arrow(ctx)->r28,72(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 72);
loc_823C3034:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c3048
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C3048;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 80);
loc_823C3048:
	// lwz ctx_arrow(ctx)->r3,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c305c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C305C;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// stw ctx_arrow(ctx)->r28,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 76);
loc_823C305C:
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32784
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32784;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_823C306C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823C3078) PPC_WEAK_FUNC(sub_823C3078);
PPC_FUNC_IMPL(__imp__sub_823C3078) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c30dc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C30DC;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 24;
loc_823C309C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// ld ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823bff38
	sub_823BFF38(ctx, base);
	// lwz ctx_arrow(ctx)->r5,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c13c0
	sub_823C13C0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c309c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C309C;
loc_823C30DC:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c3118
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C3118;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,12
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 12;
loc_823C30F0:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c30f0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C30F0;
loc_823C3118:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823C3128) PPC_WEAK_FUNC(sub_823C3128);
PPC_FUNC_IMPL(__imp__sub_823C3128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// lis ctx_arrow(ctx)->r28,-32761
	ctx_arrow(ctx)->r28.s64 = -2147024896;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,87
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 87;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3190
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3190;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
loc_823C3154:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c2a50
	sub_823C2A50(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c3190
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C3190;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt 0x823c3190
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C3190;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r29.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c3154
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C3154;
loc_823C3190:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823C31A0) PPC_WEAK_FUNC(sub_823C31A0);
PPC_FUNC_IMPL(__imp__sub_823C31A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// lis ctx_arrow(ctx)->r28,-32761
	ctx_arrow(ctx)->r28.s64 = -2147024896;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,87
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 87;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3208
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3208;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
loc_823C31CC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823c2a50
	sub_823C2A50(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c3208
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C3208;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt 0x823c3208
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C3208;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r29.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c31cc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C31CC;
loc_823C3208:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823C3218) PPC_WEAK_FUNC(sub_823C3218);
PPC_FUNC_IMPL(__imp__sub_823C3218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,36
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 36;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r8.u64;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// stb ctx_arrow(ctx)->r27,64(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 64, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r27), 0);
	// bne ctx_arrow(ctx)->r6,0x823c3280
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C3280;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c3280
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C3280;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c2918
	sub_823C2918(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823c329c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C329C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c2d48
	sub_823C2D48(ctx, base);
	// b 0x823c329c
	goto loc_823C329C;
loc_823C3280:
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823c2ac8
	sub_823C2AC8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x823c32ac
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C32AC;
loc_823C329C:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// std ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,1308(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1308);
loc_823C32AC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823C32B8) PPC_WEAK_FUNC(sub_823C32B8);
PPC_FUNC_IMPL(__imp__sub_823C32B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c3310
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C3310;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,12
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 12;
loc_823C32E8:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c32e8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C32E8;
loc_823C3310:
	// lwz ctx_arrow(ctx)->r3,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c3328
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C3328;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 76);
loc_823C3328:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r10,1308(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1308);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823C3340) PPC_WEAK_FUNC(sub_823C3340);
PPC_FUNC_IMPL(__imp__sub_823C3340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r29,-32768
	ctx_arrow(ctx)->r29.s64 = -2147483648;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r4,-21016(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,16389
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 16389;
	// bl 0x823c2a50
	sub_823C2A50(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq 0x823c33a8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C33A8;
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r28.u32 + 0);
	// lwz ctx_arrow(ctx)->r10,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r11.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3394
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3394;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// bl 0x823c2d48
	sub_823C2D48(&ctx);
loc_823C3394:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823be7b8
	sub_823BE7B8(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
loc_823C33A8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823C33B8) PPC_WEAK_FUNC(sub_823C33B8);
PPC_FUNC_IMPL(__imp__sub_823C33B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,9
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 9;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823c33dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C33DC;
	// stwx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r3.u32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,1308(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1308);
loc_823C33DC:
	// b 0x823c2d48
	sub_823C2D48(&ctx);
	return;
}

alias(__imp__sub_823C33E0) PPC_WEAK_FUNC(sub_823C33E0);
PPC_FUNC_IMPL(__imp__sub_823C33E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// li ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r29,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c3440
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C3440;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,12
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 12;
loc_823C340C:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823c342c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C342C;
	// stw ctx_arrow(ctx)->r28,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
loc_823C342C:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c340c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C340C;
loc_823C3440:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3458
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3458;
	// li ctx_arrow(ctx)->r11,200
	ctx_arrow(ctx)->r11.s64 = 200;
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 56);
	// b 0x823c348c
	goto loc_823C348C;
loc_823C3458:
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c348c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C348C;
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3488
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3488;
	// bl 0x8235d778
	sub_8235D778(ctx, base);
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r3.s64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 56);
loc_823C3488:
	// stw ctx_arrow(ctx)->r28,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
loc_823C348C:
	// bl 0x8235d778
	sub_8235D778(&ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 60);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

