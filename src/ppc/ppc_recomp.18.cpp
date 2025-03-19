#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_821EB2A8) PPC_WEAK_FUNC(sub_821EB2A8);
PPC_FUNC_IMPL(__imp__sub_821EB2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-9576
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -9576;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB2E0) PPC_WEAK_FUNC(sub_821EB2E0);
PPC_FUNC_IMPL(__imp__sub_821EB2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-9540
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -9540;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB318) PPC_WEAK_FUNC(sub_821EB318);
PPC_FUNC_IMPL(__imp__sub_821EB318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-9504
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -9504;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB350) PPC_WEAK_FUNC(sub_821EB350);
PPC_FUNC_IMPL(__imp__sub_821EB350) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb38c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB38C;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-9464
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -9464;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
loc_821EB38C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821EB398) PPC_WEAK_FUNC(sub_821EB398);
PPC_FUNC_IMPL(__imp__sub_821EB398) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb3d4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB3D4;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-9428
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -9428;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
loc_821EB3D4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821EB3E0) PPC_WEAK_FUNC(sub_821EB3E0);
PPC_FUNC_IMPL(__imp__sub_821EB3E0) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-10648
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -10648;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb444
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB444;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb444
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB444;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-10668
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -10668;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb444
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB444;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821EB444:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821EB450) PPC_WEAK_FUNC(sub_821EB450);
PPC_FUNC_IMPL(__imp__sub_821EB450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11068
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11068;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB480) PPC_WEAK_FUNC(sub_821EB480);
PPC_FUNC_IMPL(__imp__sub_821EB480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-9392
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -9392;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB4B8) PPC_WEAK_FUNC(sub_821EB4B8);
PPC_FUNC_IMPL(__imp__sub_821EB4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r4.u64;
	// neg ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.s64 = -ctx_arrow(ctx)->r5.s64;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u32 & 0xF;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-10624
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -10624;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB4F0) PPC_WEAK_FUNC(sub_821EB4F0);
PPC_FUNC_IMPL(__imp__sub_821EB4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-9364
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -9364;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB528) PPC_WEAK_FUNC(sub_821EB528);
PPC_FUNC_IMPL(__imp__sub_821EB528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-9336
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -9336;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB560) PPC_WEAK_FUNC(sub_821EB560);
PPC_FUNC_IMPL(__imp__sub_821EB560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-9308
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -9308;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB590) PPC_WEAK_FUNC(sub_821EB590);
PPC_FUNC_IMPL(__imp__sub_821EB590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-9288
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -9288;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB5C0) PPC_WEAK_FUNC(sub_821EB5C0);
PPC_FUNC_IMPL(__imp__sub_821EB5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-9268
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -9268;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB5F8) PPC_WEAK_FUNC(sub_821EB5F8);
PPC_FUNC_IMPL(__imp__sub_821EB5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-9240
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -9240;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB630) PPC_WEAK_FUNC(sub_821EB630);
PPC_FUNC_IMPL(__imp__sub_821EB630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-9212
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -9212;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB668) PPC_WEAK_FUNC(sub_821EB668);
PPC_FUNC_IMPL(__imp__sub_821EB668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x823ed114
	// stwu ctx_arrow(ctx)->r1,-336(ctx_arrow(ctx)->r1)
	ea = -336 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r7.u64;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821eb7b8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EB7B8;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// lis ctx_arrow(ctx)->r22,29760
	ctx_arrow(ctx)->r22.s64 = 1950351360;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-10404
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -10404;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-9120
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -9120;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,-9140
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + -9140;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,-9156
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + -9156;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,-9180
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + -9180;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,-11716
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + -11716;
loc_821EB6CC:
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r20.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r19.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb7bc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB7BC;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb7bc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB7BC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r22.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x821eb7cc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821EB7CC;
	// beq ctx_arrow(ctx)->r6,0x821eb7c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EB7C4;
	// lis ctx_arrow(ctx)->r11,29584
	ctx_arrow(ctx)->r11.s64 = 1938817024;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821eb7f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EB7F0;
	// lis ctx_arrow(ctx)->r11,29600
	ctx_arrow(ctx)->r11.s64 = 1939865600;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821eb7f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EB7F8;
	// lis ctx_arrow(ctx)->r11,29616
	ctx_arrow(ctx)->r11.s64 = 1940914176;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821eb7c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EB7C4;
	// lis ctx_arrow(ctx)->r11,29632
	ctx_arrow(ctx)->r11.s64 = 1941962752;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821eb800
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EB800;
loc_821EB778:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
loc_821EB77C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x821eb7bc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EB7BC;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb7bc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB7BC;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821eb6cc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EB6CC;
loc_821EB7B8:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821EB7BC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,336
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 336;
	// b 0x823ed164
	return;
loc_821EB7C4:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// b 0x821eb77c
	goto loc_821EB77C;
loc_821EB7CC:
	// lis ctx_arrow(ctx)->r11,29776
	ctx_arrow(ctx)->r11.s64 = 1951399936;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821eb778
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EB778;
	// lis ctx_arrow(ctx)->r11,29792
	ctx_arrow(ctx)->r11.s64 = 1952448512;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821eb7f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EB7F8;
	// lis ctx_arrow(ctx)->r11,29808
	ctx_arrow(ctx)->r11.s64 = 1953497088;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821eb800
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EB800;
loc_821EB7F0:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// b 0x821eb77c
	goto loc_821EB77C;
loc_821EB7F8:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// b 0x821eb77c
	goto loc_821EB77C;
loc_821EB800:
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x821eb7bc
	goto loc_821EB7BC;
}

alias(__imp__sub_821EB810) PPC_WEAK_FUNC(sub_821EB810);
PPC_FUNC_IMPL(__imp__sub_821EB810) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb84c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB84C;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-9104
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -9104;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
loc_821EB84C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821EB858) PPC_WEAK_FUNC(sub_821EB858);
PPC_FUNC_IMPL(__imp__sub_821EB858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-9056
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -9056;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821EB880) PPC_WEAK_FUNC(sub_821EB880);
PPC_FUNC_IMPL(__imp__sub_821EB880) {
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
	// stwu ctx_arrow(ctx)->r1,-288(ctx_arrow(ctx)->r1)
	ea = -288 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,-11728
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + -11728;
	// ble ctx_arrow(ctx)->r6,0x821eb920
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EB920;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-8984
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -8984;
loc_821EB8B8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb9c0
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB9C0;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb9c0
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB9C0;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821eb8b8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EB8B8;
loc_821EB920:
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821eb9bc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EB9BC;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-9020
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -9020;
loc_821EB938:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb9c0
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB9C0;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eb9c0
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EB9C0;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821eb938
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EB938;
loc_821EB9BC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821EB9C0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// b 0x823ed180
	return;
}

alias(__imp__sub_821EB9C8) PPC_WEAK_FUNC(sub_821EB9C8);
PPC_FUNC_IMPL(__imp__sub_821EB9C8) {
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
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8772
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8772;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8788
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8788;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8800
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8800;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,508
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r31.s64 + 508;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8844
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8844;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11588
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11588;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// bl 0x821e6630
	sub_821E6630(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8864
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8864;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8884
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8884;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8908
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8908;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8928
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8928;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8956
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8956;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822061c0
	sub_822061C0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,384(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-11552
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -11552;
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// bl 0x821e6560
	sub_821E6560(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc38
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC38;
	// lwz ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ebbf0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EBBF0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
loc_821EBBF0:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// lwz ctx_arrow(ctx)->r3,1536(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821b2108
	sub_821B2108(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x821ebc34
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC34;
	// lwz ctx_arrow(ctx)->r3,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,1536(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r31,1532(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821EBC34:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_821EBC38:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed188
	return;
}

alias(__imp__sub_821EBC40) PPC_WEAK_FUNC(sub_821EBC40);
PPC_FUNC_IMPL(__imp__sub_821EBC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// bl 0x821e6630
	sub_821E6630(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc88
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC88;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11548
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11548;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebc88
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBC88;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821EBC88:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_821EBCA0) PPC_WEAK_FUNC(sub_821EBCA0);
PPC_FUNC_IMPL(__imp__sub_821EBCA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11628
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11628;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebd2c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBD2C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebd2c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBD2C;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// lwz ctx_arrow(ctx)->r5,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8744
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8744;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebd2c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBD2C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebd2c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBD2C;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11588
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11588;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebd2c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBD2C;
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
loc_821EBD2C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_821EBD40) PPC_WEAK_FUNC(sub_821EBD40);
PPC_FUNC_IMPL(__imp__sub_821EBD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebdb4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBDB4;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// lwz ctx_arrow(ctx)->r5,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8672
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8672;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebdb4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBDB4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebdb4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBDB4;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11588
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11588;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ebdb4
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EBDB4;
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
loc_821EBDB4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_821EBDC8) PPC_WEAK_FUNC(sub_821EBDC8);
PPC_FUNC_IMPL(__imp__sub_821EBDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r11.u64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ebf10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EBF10;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// lis ctx_arrow(ctx)->r24,-32768
	ctx_arrow(ctx)->r24.s64 = -2147483648;
loc_821EBDFC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821ebf00
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821EBF00;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,108(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,108(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,18
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 18, xer);
	// bgt ctx_arrow(ctx)->r6,0x821ec020
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821EC020;
	// lis ctx_arrow(ctx)->r12,-32253
	ctx_arrow(ctx)->r12.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-13016
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -13016;
	// lbzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r0,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r0.u32 | (ctx_arrow(ctx)->r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis ctx_arrow(ctx)->r12,-32225
	ctx_arrow(ctx)->r12.s64 = -2111897600;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-16784
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -16784;
	// add ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 + ctx_arrow(ctx)->r0.u64;
	// mtctr ctx_arrow(ctx)->r12
	ctr.u64 = ctx_arrow(ctx)->r12.u64;
	// nop 
	// bctr 
	switch (ctx_arrow(ctx)->r30.u64) {
	case 0:
		goto loc_821EC018;
	case 1:
		goto loc_821EBE70;
	case 2:
		goto loc_821EBE78;
	case 3:
		goto loc_821EBE80;
	case 4:
		goto loc_821EBE88;
	case 5:
		goto loc_821EBE90;
	case 6:
		goto loc_821EBE98;
	case 7:
		goto loc_821EBEA0;
	case 8:
		goto loc_821EBEA8;
	case 9:
		goto loc_821EBEB0;
	case 10:
		goto loc_821EBEB8;
	case 11:
		goto loc_821EBEC0;
	case 12:
		goto loc_821EBEC8;
	case 13:
		goto loc_821EBED0;
	case 14:
		goto loc_821EBED8;
	case 15:
		goto loc_821EC020;
	case 16:
		goto loc_821EC020;
	case 17:
		goto loc_821EBEE0;
	case 18:
		goto loc_821EBEE0;
	default:
		__builtin_unreachable();
	}
loc_821EBE70:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBE78:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBE80:
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBE88:
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBE90:
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBE98:
	// li ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r11.s64 = 5;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBEA0:
	// li ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r11.s64 = 6;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBEA8:
	// li ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r11.s64 = 7;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBEB0:
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBEB8:
	// li ctx_arrow(ctx)->r11,9
	ctx_arrow(ctx)->r11.s64 = 9;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBEC0:
	// li ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r11.s64 = 10;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBEC8:
	// li ctx_arrow(ctx)->r11,11
	ctx_arrow(ctx)->r11.s64 = 11;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBED0:
	// li ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = 12;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBED8:
	// li ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r11.s64 = 13;
	// b 0x821ebee4
	goto loc_821EBEE4;
loc_821EBEE0:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
loc_821EBEE4:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r28.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ebef8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EBEF8;
	// bne ctx_arrow(ctx)->r6,0x821ebf00
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EBF00;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r25.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821ebf00
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821EBF00;
loc_821EBEF8:
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
loc_821EBF00:
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, ctx_arrow(ctx)->r27.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ebdfc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EBDFC;
loc_821EBF10:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec010
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC010;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-8316
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -8316;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8380
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8380;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec010
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC010;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec010
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC010;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11588
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11588;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec010
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC010;
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// bl 0x821e6630
	sub_821E6630(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec010
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC010;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8456
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8456;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec010
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC010;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec010
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC010;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// lwz ctx_arrow(ctx)->r5,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8576
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8576;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec010
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC010;
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// bl 0x821e6630
	sub_821E6630(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec010
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC010;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11548
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11548;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec010
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC010;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,376(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821EC010:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed178
	return;
loc_821EC018:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x821ec010
	goto loc_821EC010;
loc_821EC020:
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x821ec010
	goto loc_821EC010;
}

alias(__imp__sub_821EC030) PPC_WEAK_FUNC(sub_821EC030);
PPC_FUNC_IMPL(__imp__sub_821EC030) {
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
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1676(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ec1f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EC1F8;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8072
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8072;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-11588
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -11588;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// bl 0x821e6630
	sub_821E6630(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8144
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8144;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,1676(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x821ec190
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EC190;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,1548
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 1548;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-8232
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -8232;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-8296
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -8296;
loc_821EC124:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// lwz ctx_arrow(ctx)->r11,1676(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 8;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ec124
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EC124;
loc_821EC190:
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// bl 0x821e6630
	sub_821E6630(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11552
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11552;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// bl 0x821e6630
	sub_821E6630(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11548
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11548;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec1fc
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC1FC;
loc_821EC1F8:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821EC1FC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed184
	return;
}

alias(__imp__sub_821EC208) PPC_WEAK_FUNC(sub_821EC208);
PPC_FUNC_IMPL(__imp__sub_821EC208) {
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
	// stwu ctx_arrow(ctx)->r1,-288(ctx_arrow(ctx)->r1)
	ea = -288 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r11.s64 = 15;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,28,0,20
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 28) & 0xFFFFF800) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF000007FF);
	// li ctx_arrow(ctx)->r6,64
	ctx_arrow(ctx)->r6.s64 = 64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821e67d8
	sub_821E67D8(ctx, base);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-8044
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -8044;
loc_821EC260:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec2b0
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC2B0;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec2b0
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC2B0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x821ec260
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EC260;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82202da0
	sub_82202DA0(ctx, base);
loc_821EC2B0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// b 0x823ed180
	return;
}

alias(__imp__sub_821EC2B8) PPC_WEAK_FUNC(sub_821EC2B8);
PPC_FUNC_IMPL(__imp__sub_821EC2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu ctx_arrow(ctx)->r1,-336(ctx_arrow(ctx)->r1)
	ea = -336 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,108(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r4,108(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,348(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ec784
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC784;
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,18
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 18, xer);
	// bgt ctx_arrow(ctx)->r6,0x821ec988
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821EC988;
	// lis ctx_arrow(ctx)->r12,-32253
	ctx_arrow(ctx)->r12.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-12992
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -12992;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r12.u32 + ctx_arrow(ctx)->r0.u32);
	// lis ctx_arrow(ctx)->r12,-32225
	ctx_arrow(ctx)->r12.s64 = -2111897600;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-15548
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -15548;
	// add ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 + ctx_arrow(ctx)->r0.u64;
	// mtctr ctx_arrow(ctx)->r12
	ctr.u64 = ctx_arrow(ctx)->r12.u64;
	// nop 
	// bctr 
	switch (ctx_arrow(ctx)->r30.u64) {
	case 0:
		goto loc_821EC980;
	case 1:
		goto loc_821EC344;
	case 2:
		goto loc_821EC34C;
	case 3:
		goto loc_821EC354;
	case 4:
		goto loc_821EC35C;
	case 5:
		goto loc_821EC364;
	case 6:
		goto loc_821EC36C;
	case 7:
		goto loc_821EC374;
	case 8:
		goto loc_821EC37C;
	case 9:
		goto loc_821EC384;
	case 10:
		goto loc_821EC38C;
	case 11:
		goto loc_821EC394;
	case 12:
		goto loc_821EC39C;
	case 13:
		goto loc_821EC3A4;
	case 14:
		goto loc_821EC3AC;
	case 15:
		goto loc_821EC988;
	case 16:
		goto loc_821EC988;
	case 17:
		goto loc_821EC3B4;
	case 18:
		goto loc_821EC3BC;
	default:
		__builtin_unreachable();
	}
loc_821EC344:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC34C:
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC354:
	// li ctx_arrow(ctx)->r30,2
	ctx_arrow(ctx)->r30.s64 = 2;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC35C:
	// li ctx_arrow(ctx)->r30,3
	ctx_arrow(ctx)->r30.s64 = 3;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC364:
	// li ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = 4;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC36C:
	// li ctx_arrow(ctx)->r30,5
	ctx_arrow(ctx)->r30.s64 = 5;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC374:
	// li ctx_arrow(ctx)->r30,6
	ctx_arrow(ctx)->r30.s64 = 6;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC37C:
	// li ctx_arrow(ctx)->r30,7
	ctx_arrow(ctx)->r30.s64 = 7;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC384:
	// li ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r30.s64 = 8;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC38C:
	// li ctx_arrow(ctx)->r30,9
	ctx_arrow(ctx)->r30.s64 = 9;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC394:
	// li ctx_arrow(ctx)->r30,10
	ctx_arrow(ctx)->r30.s64 = 10;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC39C:
	// li ctx_arrow(ctx)->r30,11
	ctx_arrow(ctx)->r30.s64 = 11;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC3A4:
	// li ctx_arrow(ctx)->r30,12
	ctx_arrow(ctx)->r30.s64 = 12;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC3AC:
	// li ctx_arrow(ctx)->r30,13
	ctx_arrow(ctx)->r30.s64 = 13;
	// b 0x821ec3c0
	goto loc_821EC3C0;
loc_821EC3B4:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
loc_821EC3BC:
	// lis ctx_arrow(ctx)->r30,-32768
	ctx_arrow(ctx)->r30.s64 = -2147483648;
loc_821EC3C0:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x821ec41c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821EC41C;
	// lwz ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,7,0,24
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 7) & 0xFFFFFF80;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x7FFFFFFF) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 31;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r9,348(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x821ec440
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_821EC440;
	// b 0x821ec788
	goto loc_821EC788;
loc_821EC41C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// lwz ctx_arrow(ctx)->r11,344(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
loc_821EC440:
	// li ctx_arrow(ctx)->r27,-1
	ctx_arrow(ctx)->r27.s64 = -1;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x821ec4cc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EC4CC;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821EC47C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ec4bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC4BC;
	// lwz ctx_arrow(ctx)->r6,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r4.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ec4bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC4BC;
	// lwz ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, ctx_arrow(ctx)->r4.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ec4bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC4BC;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r6.u32);
loc_821EC4BC:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r7.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ec47c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EC47C;
loc_821EC4CC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// li ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 4;
loc_821EC4D8:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x821ec4f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EC4F0;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
loc_821EC4F0:
	// addic. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	xer.ca = ctx_arrow(ctx)->r8.u32 > 0;
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// bne 0x821ec4d8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821EC4D8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r7,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,324(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r4.s64 = 4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x7FFFFFFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r3.u32, xer);
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bne ctx_arrow(ctx)->r6,0x821ec554
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC554;
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 983040;
loc_821EC554:
	// lwz ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,10
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,7,7
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x821ec588
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821EC588;
	// lwz ctx_arrow(ctx)->r10,204(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,26,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x821ec580
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821EC580;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,6,6
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x2000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x821ec588
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821EC588;
loc_821EC580:
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2097152;
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
loc_821EC588:
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-128
	ctx_arrow(ctx)->r10.s64 = -8388608;
	// lwz ctx_arrow(ctx)->r7,124(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,20,9,11
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 20) & 0x700000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFF8FFFFF);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,27,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x18;
	// lis ctx_arrow(ctx)->r11,-32018
	ctx_arrow(ctx)->r11.s64 = -2098331648;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-29000
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -29000;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r9.u64;
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,21
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u32 & 0x7FF;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,8,0,23
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-7700
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -7700;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,12,21,23
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 12) & 0x700) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,26,25,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 26) & 0x7C;
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 0, xer);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821ec790
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821EC790;
	// beq ctx_arrow(ctx)->r6,0x821ec794
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EC794;
	// lwz ctx_arrow(ctx)->r11,1676(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r26,1548(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1548, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,1676(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,194
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 194;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// lwz ctx_arrow(ctx)->r11,1676(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,1676(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1676, ctx_arrow(ctx)->r4.u32);
	// bl 0x821e6630
	sub_821E6630(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7760
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7760;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7848
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7848;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r30,15
	ctx_arrow(ctx)->r30.s64 = 983040;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF0000;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ec6a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC6A4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// b 0x821ec6c4
	goto loc_821EC6C4;
loc_821EC6A4:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-7860
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -7860;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821e68d0
	sub_821E68D0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
loc_821EC6C4:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7876
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7876;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,452(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11628
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11628;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF0000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ec784
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EC784;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11716
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11716;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-11708
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -11708;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,400(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11792
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11792;
loc_821EC774:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
loc_821EC784:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821EC788:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,336
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 336;
	// b 0x823ed17c
	return;
loc_821EC790:
	// bne ctx_arrow(ctx)->r6,0x821ec784
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC784;
loc_821EC794:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7936
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7936;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-8024
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -8024;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lwz ctx_arrow(ctx)->r9,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,15
	ctx_arrow(ctx)->r10.s64 = 983040;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xF0000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ec8b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EC8B0;
	// stw ctx_arrow(ctx)->r27,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 128, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// li ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 4;
loc_821EC814:
	// lwz ctx_arrow(ctx)->r10,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x821ec840
	goto loc_821EC840;
loc_821EC824:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,15,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x10000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x821ec848
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821EC848;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,31,1,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
loc_821EC840:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x821ec824
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EC824;
loc_821EC848:
	// addic. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	xer.ca = ctx_arrow(ctx)->r8.u32 > 0;
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bne 0x821ec814
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821EC814;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 132;
loc_821EC85C:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x821ec870
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EC870;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821EC870:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// ble ctx_arrow(ctx)->r6,0x821ec85c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EC85C;
	// lwz ctx_arrow(ctx)->r30,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r29,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// lwz ctx_arrow(ctx)->r27,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bne ctx_arrow(ctx)->r6,0x821ec8c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC8C4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821ec8c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC8C4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x821ec8c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC8C4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x821ec8c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EC8C4;
loc_821EC8B0:
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// b 0x821ec94c
	goto loc_821EC94C;
loc_821EC8C4:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-7860
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -7860;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11716
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11716;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// lwz ctx_arrow(ctx)->r11,388(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11792
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11792;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
loc_821EC94C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7876
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7876;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,448(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ec788
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EC788;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11628
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11628;
	// b 0x821ec774
	goto loc_821EC774;
loc_821EC980:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x821ec788
	goto loc_821EC788;
loc_821EC988:
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x821ec788
	goto loc_821EC788;
}

alias(__imp__sub_821EC998) PPC_WEAK_FUNC(sub_821EC998);
PPC_FUNC_IMPL(__imp__sub_821EC998) {
	PPC_FUNC_PROLOGUE();
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r8.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,18,18
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x2000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821eca94
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821ECA94;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-7616
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -7616;
	// lis ctx_arrow(ctx)->r11,-32018
	ctx_arrow(ctx)->r11.s64 = -2098331648;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-29000
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -29000;
	// lwz ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bne ctx_arrow(ctx)->r6,0x821eca60
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECA60;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r25,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,12,21,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 12) & 0x700) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24,27,31
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 24) & 0x1F;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-7636
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -7636;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x821eca48
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821ECA48;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 4, xer);
	// ble ctx_arrow(ctx)->r6,0x821ecaac
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821ECAAC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 6, xer);
	// ble ctx_arrow(ctx)->r6,0x821eca48
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821ECA48;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 15, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecaac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECAAC;
loc_821ECA48:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-7644
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -7644;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x821dd128
	sub_821DD128(ctx, base);
	// b 0x821ecaac
	goto loc_821ECAAC;
loc_821ECA60:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,12,21,23
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 12) & 0x700) | (ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,26,25,29
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 26) & 0x7C;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-7676
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -7676;
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// b 0x821ecaac
	goto loc_821ECAAC;
loc_821ECA94:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x821e67d8
	sub_821E67D8(ctx, base);
loc_821ECAAC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_821ECAB8) PPC_WEAK_FUNC(sub_821ECAB8);
PPC_FUNC_IMPL(__imp__sub_821ECAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
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
	// bl 0x823ed100
	// stwu ctx_arrow(ctx)->r1,-672(ctx_arrow(ctx)->r1)
	ea = -672 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r4,700(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 700, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r17,0
	ctx_arrow(ctx)->r17.s64 = 0;
	// stw ctx_arrow(ctx)->r9,740(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 740, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r15.u64 = ctx_arrow(ctx)->r5.u64;
	// stw ctx_arrow(ctx)->r10,748(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 748, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r14.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r19,732(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 732, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r17.u64;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r17.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r17.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r15.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ecb94
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECB94;
loc_821ECB00:
	// lwz ctx_arrow(ctx)->r8,788(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x821ecb10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECB10;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r17.u64;
loc_821ECB10:
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// li ctx_arrow(ctx)->r7,32
	ctx_arrow(ctx)->r7.s64 = 32;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// lwzx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,8,3
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// bl 0x821ec998
	sub_821EC998(ctx, base);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,12,21,23
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 12) & 0x700) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,19,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1F00;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 512, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecb88
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECB88;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,18
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821ecb88
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECB88;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
loc_821ECB88:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r15.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ecb00
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ECB00;
loc_821ECB94:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,204
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 204;
	// stw ctx_arrow(ctx)->r17,200(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 200, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r18,1
	ctx_arrow(ctx)->r18.s64 = 1;
	// stw ctx_arrow(ctx)->r17,192(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 192, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r15,-1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r15.s64 + -1;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r17.u64;
	// stw ctx_arrow(ctx)->r17,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r18,196(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 196, ctx_arrow(ctx)->r4.u32);
loc_821ECBB4:
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r18.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ecccc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECCCC;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r1,200
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r1.s64 + 200;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r17.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r18.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// lwzx ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r16.u64;
	// lwzx ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r23.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r19.s64 - ctx_arrow(ctx)->r16.s64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r29.u64;
loc_821ECBE8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecc00
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECC00;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,228
	ctx_arrow(ctx)->r10.s64 = 14942208;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecc14
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECC14;
loc_821ECC00:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecca4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECCA4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821ecca4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821ECCA4;
loc_821ECC14:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r15.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821ecca4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821ECCA4;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r5.s64 + 32;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r6.s64 + 4;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r15.s64 - ctx_arrow(ctx)->r4.s64;
loc_821ECC28:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecc40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECC40;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ecc5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECC5C;
loc_821ECC40:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecc94
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECC94;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// xor ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r10.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821ecc94
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECC94;
loc_821ECC5C:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
loc_821ECC64:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// beq 0x821ecc88
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821ECC88;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ecc64
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECC64;
loc_821ECC88:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821ecc94
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECC94;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r22.s64 + 1;
loc_821ECC94:
	// addic. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	xer.ca = ctx_arrow(ctx)->r30.u32 > 0;
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,4
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 4;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 32;
	// bne 0x821ecc28
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECC28;
loc_821ECCA4:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, ctx_arrow(ctx)->r24.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x821eccb0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821ECCB0;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r22.u64;
loc_821ECCB0:
	// addic. ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,-1
	xer.ca = ctx_arrow(ctx)->r27.u32 > 0;
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 32;
	// bne 0x821ecbe8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECBE8;
	// stwx ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r26
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r26.u32);
loc_821ECCCC:
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 8, xer);
	// blt ctx_arrow(ctx)->r6,0x821ecbb4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ECBB4;
	// lwz ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,200(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x821eccf0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821ECCF0;
	// stw ctx_arrow(ctx)->r18,192(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 192, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r17,196(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 196, ctx_arrow(ctx)->r4.u32);
loc_821ECCF0:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r15.u32, 0, xer);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-11792
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -11792;
	// stw ctx_arrow(ctx)->r30,200(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 200, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x821ece40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECE40;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r16.u64;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r15.u64;
loc_821ECD0C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r8,256
	ctx_arrow(ctx)->r8.s64 = 16777216;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF000000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ecd40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECD40;
	// lis ctx_arrow(ctx)->r8,3072
	ctx_arrow(ctx)->r8.s64 = 201326592;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ecd40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECD40;
	// lis ctx_arrow(ctx)->r8,2816
	ctx_arrow(ctx)->r8.s64 = 184549376;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecd44
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECD44;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r18.u64;
	// b 0x821ecd44
	goto loc_821ECD44;
loc_821ECD40:
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r18.u64;
loc_821ECD44:
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 0;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// bne 0x821ecd0c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECD0C;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r21.s32, 0, xer);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-11460
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -11460;
	// beq ctx_arrow(ctx)->r6,0x821ecdcc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECDCC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11532
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11532;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r14)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,388(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
loc_821ECDCC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r20.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ece40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECE40;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11492
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11492;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r14)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,388(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
loc_821ECE40:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,244
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 244;
	// stw ctx_arrow(ctx)->r17,240(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 240, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r23,2
	ctx_arrow(ctx)->r23.s64 = 2;
	// stw ctx_arrow(ctx)->r17,208(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 208, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r18,212(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 212, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// stw ctx_arrow(ctx)->r17,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r17,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r23,216(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 216, ctx_arrow(ctx)->r4.u32);
loc_821ECE64:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,228
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 228;
	// stw ctx_arrow(ctx)->r17,224(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 224, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// stw ctx_arrow(ctx)->r17,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r17,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x821ecf7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECF7C;
	// lwz ctx_arrow(ctx)->r25,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r18.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r16.u64;
	// subf ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r19.s64 - ctx_arrow(ctx)->r16.s64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r29.u64;
loc_821ECE98:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821eceb0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECEB0;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,228
	ctx_arrow(ctx)->r10.s64 = 14942208;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecec4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECEC4;
loc_821ECEB0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecf64
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECF64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821ecf64
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821ECF64;
loc_821ECEC4:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r15.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821ecf64
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821ECF64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r5.s64 + 32;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r6.s64 + 4;
	// subf ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r16.s64;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r15.s64 - ctx_arrow(ctx)->r4.s64;
loc_821ECEE0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecef8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECEF8;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ecf14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECF14;
loc_821ECEF8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecf54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECF54;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// xor ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r10.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821ecf54
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECF54;
loc_821ECF14:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
loc_821ECF1C:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	// beq 0x821ecf40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821ECF40;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ecf1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECF1C;
loc_821ECF40:
	// cmpwi ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne 0x821ecf54
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECF54;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// stwx ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// stwx ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
loc_821ECF54:
	// addic. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	xer.ca = ctx_arrow(ctx)->r30.u32 > 0;
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// bne 0x821ecee0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECEE0;
loc_821ECF64:
	// addic. ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,-1
	xer.ca = ctx_arrow(ctx)->r27.u32 > 0;
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 32;
	// bne 0x821ece98
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECE98;
loc_821ECF7C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r15.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ecff4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ECFF4;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// lwz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r16.s64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64;
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r19.s64 - ctx_arrow(ctx)->r16.s64;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r16.s64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r15.u64;
loc_821ECFA4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecfbc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECFBC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r4,228
	ctx_arrow(ctx)->r4.s64 = 14942208;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r4.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecfd0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECFD0;
loc_821ECFBC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecfe8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECFE8;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,4,7
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xF000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x821ecfe8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821ECFE8;
loc_821ECFD0:
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ecfe8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ECFE8;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
loc_821ECFE8:
	// addic. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	xer.ca = ctx_arrow(ctx)->r8.u32 > 0;
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bne 0x821ecfa4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECFA4;
loc_821ECFF4:
	// addic. ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,-1
	xer.ca = ctx_arrow(ctx)->r23.u32 > 0;
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r23.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r24,4
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r24.s64 + 4;
	// bne 0x821ece64
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ECE64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed080
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED080;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r17.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// subfic ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,4
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 4;
	ctx_arrow(ctx)->r30.s64 = 4 - ctx_arrow(ctx)->r11.s64;
loc_821ED018:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r15.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821ed070
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821ED070;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// subf ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r15.s64 - ctx_arrow(ctx)->r3.s64;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r9.u64;
loc_821ED030:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// lwz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821ed064
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821ED064;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// stw ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// stwx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r4.u32);
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stwx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r7.u32);
	// stwx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r8.u32);
loc_821ED064:
	// addic. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,-1
	xer.ca = ctx_arrow(ctx)->r31.u32 > 0;
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bne 0x821ed030
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ED030;
loc_821ED070:
	// addic. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,-1
	xer.ca = ctx_arrow(ctx)->r29.u32 > 0;
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// bne 0x821ed018
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ED018;
loc_821ED080:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r15.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed098
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED098;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r15,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r15.u32 | (ctx_arrow(ctx)->r15.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ee498
	sub_823EE498(ctx, base);
loc_821ED098:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11,-11500
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r11.s64 + -11500;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,-11540
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + -11540;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,-11716
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + -11716;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11,-7596
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r11.s64 + -7596;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r11,-7608
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r11.s64 + -7608;
loc_821ED0C4:
	// li ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r25.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r15.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed4dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED4DC;
	// lwz ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r1.s64 + 208;
loc_821ED0D8:
	// lwz ctx_arrow(ctx)->r29,732(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed0fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED0FC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,228
	ctx_arrow(ctx)->r10.s64 = 14942208;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed118
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED118;
loc_821ED0FC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed138
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED138;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,4,7
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xF000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x821ed138
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ED138;
loc_821ED118:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,384
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 384;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// b 0x821ed484
	goto loc_821ED484;
loc_821ED138:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed24c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED24C;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 208;
loc_821ED148:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed170
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED170;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r9.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed19c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED19C;
loc_821ED170:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed1e0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED1E0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// xor ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 ^ ctx_arrow(ctx)->r9.u64;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,4,7
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xF000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x821ed1e0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ED1E0;
loc_821ED19C:
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r7.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
loc_821ED1B4:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// beq 0x821ed1d8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821ED1D8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed1b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED1B4;
loc_821ED1D8:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x821ed1f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821ED1F4;
loc_821ED1E0:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r25.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ed148
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ED148;
	// b 0x821ed244
	goto loc_821ED244;
loc_821ED1F4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,384
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 384;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,384
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 384;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r15.u32 | (ctx_arrow(ctx)->r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r8,-4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -4, ctx_arrow(ctx)->r4.u32);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
loc_821ED244:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r25.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ed484
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ED484;
loc_821ED24C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r17,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r17.u32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed328
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED328;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed274
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED274;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,228
	ctx_arrow(ctx)->r10.s64 = 14942208;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed328
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED328;
loc_821ED274:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed290
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED290;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821ed328
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821ED328;
loc_821ED290:
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
loc_821ED294:
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,12,21,23
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 12) & 0x700) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,19,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x1F00;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 512, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed2c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED2C4;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r20.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,18
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821ed2c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821ED2C8;
loc_821ED2C4:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
loc_821ED2C8:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,384
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 384;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,5,0,26
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
loc_821ED2E4:
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,2,0,29
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,12,21,23
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 12) & 0x700) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,19,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1F00;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 512, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed358
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED358;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,18
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821ed358
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ED358;
	// lwz ctx_arrow(ctx)->r11,700(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed320
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED320;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed358
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED358;
loc_821ED320:
	// li ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = 1;
	// b 0x821ed35c
	goto loc_821ED35C;
loc_821ED328:
	// lwz ctx_arrow(ctx)->r5,700(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed294
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED294;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,384
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 384;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,5,0,26
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// b 0x821ed2e4
	goto loc_821ED2E4;
loc_821ED358:
	// lwz ctx_arrow(ctx)->r27,1816(ctx_arrow(ctx)->r14)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821ED35C:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed484
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED484;
loc_821ED368:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,480
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 480;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,480
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 480;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed408
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED408;
	// lwz ctx_arrow(ctx)->r11,732(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r14)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,388(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,10,30,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 10) & 0x3;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,12,30,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0x3;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14,30,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 14) & 0x3;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,16,30,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0x3;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
	// b 0x821ed464
	goto loc_821ED464;
loc_821ED408:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,256
	ctx_arrow(ctx)->r10.s64 = 16777216;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF000000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ed428
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED428;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r14)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,468(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821ed448
	goto loc_821ED448;
loc_821ED428:
	// lis ctx_arrow(ctx)->r10,2816
	ctx_arrow(ctx)->r10.s64 = 184549376;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r14)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bne ctx_arrow(ctx)->r6,0x821ed444
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821ED444;
	// lwz ctx_arrow(ctx)->r11,456(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r19.u64;
	// b 0x821ed44c
	goto loc_821ED44C;
loc_821ED444:
	// lwz ctx_arrow(ctx)->r11,464(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821ED448:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r22.u64;
loc_821ED44C:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x821ed550
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ED550;
loc_821ED464:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r14.u64;
	// lwz ctx_arrow(ctx)->r4,200(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed550
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED550;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r27.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ed368
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ED368;
loc_821ED484:
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r25.s64 + 1;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,4
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, ctx_arrow(ctx)->r15.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ed0d8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ED0D8;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r15.u64;
loc_821ED49C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,384
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 384;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// addic. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	xer.ca = ctx_arrow(ctx)->r30.u32 > 0;
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bne 0x821ed49c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821ED49C;
loc_821ED4DC:
	// addi ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r17,1
	ctx_arrow(ctx)->r17.s64 = ctx_arrow(ctx)->r17.s64 + 1;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r18,4
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r18.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r17,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r17.u32, 2, xer);
	// blt ctx_arrow(ctx)->r6,0x821ed0c4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ED0C4;
	// lis ctx_arrow(ctx)->r11,32767
	ctx_arrow(ctx)->r11.s64 = 2147418112;
	// lwz ctx_arrow(ctx)->r4,748(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,65535
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 | 65535;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x821ed50c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821ED50C;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// lwz ctx_arrow(ctx)->r3,740(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
loc_821ED50C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r15.u32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x821ed52c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821ED52C;
	// lwz ctx_arrow(ctx)->r4,764(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x821ed52c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821ED52C;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,320
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 320;
	// lwz ctx_arrow(ctx)->r3,756(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
loc_821ED52C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r15.u32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x821ed54c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821ED54C;
	// lwz ctx_arrow(ctx)->r4,780(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x821ed54c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821ED54C;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,352
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 352;
	// lwz ctx_arrow(ctx)->r3,772(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
loc_821ED54C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821ED550:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,672
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 672;
	// b 0x823ed150
	return;
}

alias(__imp__sub_821ED558) PPC_WEAK_FUNC(sub_821ED558);
PPC_FUNC_IMPL(__imp__sub_821ED558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x823ed11c
	// stwu ctx_arrow(ctx)->r1,-368(ctx_arrow(ctx)->r1)
	ea = -368 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11780
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11780;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11788
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11788;
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,388(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,-11792
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + -11792;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,328(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFFF;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// lwz ctx_arrow(ctx)->r10,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r6,15
	ctx_arrow(ctx)->r6.s64 = 983040;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,332(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,180
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 180;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,164
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 164;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,328(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,196
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 196;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r6,15
	ctx_arrow(ctx)->r6.s64 = 983040;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,332(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// li ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = 32;
	// li ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = 32;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// stw ctx_arrow(ctx)->r26,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// stw ctx_arrow(ctx)->r26,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// stw ctx_arrow(ctx)->r26,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821ecab8
	sub_821ECAB8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,-11740
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + -11740;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,484(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r26.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-11708
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -11708;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,-11716
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + -11716;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-11728
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -11728;
	// ble ctx_arrow(ctx)->r6,0x821ed814
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821ED814;
loc_821ED790:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,480(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ed790
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ED790;
loc_821ED814:
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r26.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ed8cc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821ED8CC;
loc_821ED824:
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r21.s32, 0, xer);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// beq ctx_arrow(ctx)->r6,0x821ed894
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED894;
	// lwz ctx_arrow(ctx)->r11,464(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821ed898
	goto loc_821ED898;
loc_821ED894:
	// lwz ctx_arrow(ctx)->r11,460(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821ED898:
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ed824
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ED824;
loc_821ED8CC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ed8f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED8F4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r11,564(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
loc_821ED8F4:
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r26.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ed998
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821ED998;
loc_821ED904:
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r21.s32, 0, xer);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// beq ctx_arrow(ctx)->r6,0x821ed960
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821ED960;
	// lwz ctx_arrow(ctx)->r11,456(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821ed964
	goto loc_821ED964;
loc_821ED960:
	// lwz ctx_arrow(ctx)->r11,464(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821ED964:
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ed99c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821ED99C;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ed904
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821ED904;
loc_821ED998:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821ED99C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,368
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 368;
	// b 0x823ed16c
	return;
}

alias(__imp__sub_821ED9A8) PPC_WEAK_FUNC(sub_821ED9A8);
PPC_FUNC_IMPL(__imp__sub_821ED9A8) {
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
	// stwu ctx_arrow(ctx)->r1,-432(ctx_arrow(ctx)->r1)
	ea = -432 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,320(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFFF;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r7,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,324(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r26,4336
	ctx_arrow(ctx)->r26.s64 = 284164096;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r26.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821edb6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EDB6C;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,328(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,152
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 152;
	// lwz ctx_arrow(ctx)->r10,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r6,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,332(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29,2,0,29
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,164
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 164;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,148
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 148;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,328(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,156
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 156;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r6,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,332(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,272
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 272;
	// stw ctx_arrow(ctx)->r28,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = 32;
	// stw ctx_arrow(ctx)->r28,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = 32;
	// stw ctx_arrow(ctx)->r28,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,152
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 152;
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821ecab8
	sub_821ECAB8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
loc_821EDB6C:
	// lwz ctx_arrow(ctx)->r4,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r30,15
	ctx_arrow(ctx)->r30.s64 = 983040;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821edb98
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EDB98;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e68d0
	sub_821E68D0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821edba8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EDBA8;
loc_821EDB98:
	// lwz ctx_arrow(ctx)->r11,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821edbac
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EDBAC;
loc_821EDBA8:
	// li ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = 1;
loc_821EDBAC:
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r26.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821edc88
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EDC88;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821edcf4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EDCF4;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-11716
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -11716;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-11740
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -11740;
loc_821EDBE0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821edc10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EDC10;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// b 0x821edc40
	goto loc_821EDC40;
loc_821EDC10:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,64
	ctx_arrow(ctx)->r6.s64 = 64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,304
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 304;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e67d8
	sub_821E67D8(ctx, base);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,304
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 304;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
loc_821EDC40:
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,396(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821edbe0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EDBE0;
	// b 0x821edcf4
	goto loc_821EDCF4;
loc_821EDC88:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821edca8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EDCA8;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-11740
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -11740;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// b 0x821edcc0
	goto loc_821EDCC0;
loc_821EDCA8:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,32
	ctx_arrow(ctx)->r6.s64 = 32;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e67d8
	sub_821E67D8(ctx, base);
loc_821EDCC0:
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,272
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 272;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,484(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
loc_821EDCF4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821edd6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EDD6C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6978
	sub_821E6978(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,32
	ctx_arrow(ctx)->r6.s64 = 32;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e67d8
	sub_821E67D8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r5,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// bl 0x821e6cb8
	sub_821E6CB8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6df0
	sub_821E6DF0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
loc_821EDD6C:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11628
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11628;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edd8c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDD8C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82203b30
	sub_82203B30(ctx, base);
loc_821EDD8C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,432
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 432;
	// b 0x823ed180
	return;
}

alias(__imp__sub_821EDD98) PPC_WEAK_FUNC(sub_821EDD98);
PPC_FUNC_IMPL(__imp__sub_821EDD98) {
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-256(ctx_arrow(ctx)->r1)
	ea = -256 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edec8
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDEC8;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,328(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edec8
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDEC8;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r5,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,64
	ctx_arrow(ctx)->r7.s64 = 64;
	// lwz ctx_arrow(ctx)->r4,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821ec998
	sub_821EC998(ctx, base);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ede44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EDE44;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-7560
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -7560;
	// b 0x821ede4c
	goto loc_821EDE4C;
loc_821EDE44:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-7564
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -7564;
loc_821EDE4C:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7580
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7580;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edec8
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDEC8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edec8
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDEC8;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11588
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11588;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821edec8
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EDEC8;
	// lwz ctx_arrow(ctx)->r11,1808(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,420
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 420;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// lwz ctx_arrow(ctx)->r10,1808(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r10,1808(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1808, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// bl 0x82204310
	sub_82204310(&ctx);
loc_821EDEC8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 256;
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

alias(__imp__sub_821EDEE0) PPC_WEAK_FUNC(sub_821EDEE0);
PPC_FUNC_IMPL(__imp__sub_821EDEE0) {
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
	// stwu ctx_arrow(ctx)->r1,-256(ctx_arrow(ctx)->r1)
	ea = -256 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,540(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,556(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821edf4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EDF4C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,548(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
loc_821EDF4C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-11708
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -11708;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,564(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,328(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r5,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,64
	ctx_arrow(ctx)->r7.s64 = 64;
	// lwz ctx_arrow(ctx)->r4,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821ec998
	sub_821EC998(ctx, base);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-12740
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -12740;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,488(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7476
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7476;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// beq ctx_arrow(ctx)->r6,0x821ee144
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE144;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7492
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7492;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
loc_821EE054:
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7516
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7516;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,492(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7536
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7536;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// beq ctx_arrow(ctx)->r6,0x821ee154
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE154;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-7556
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -7556;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
loc_821EE0C8:
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11588
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11588;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee168
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE168;
	// lwz ctx_arrow(ctx)->r10,1808(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 2;
	// lwz ctx_arrow(ctx)->r11,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,420
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 420;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,1812(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1812, ctx_arrow(ctx)->r4.u32);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// lwz ctx_arrow(ctx)->r10,1808(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r10,1808(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1808, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,1544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 1544, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x821ee164
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE164;
	// bl 0x82205398
	sub_82205398(ctx, base);
	// b 0x821ee168
	goto loc_821EE168;
loc_821EE144:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,8380
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 8380;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// b 0x821ee054
	goto loc_821EE054;
loc_821EE154:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11584
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11584;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// b 0x821ee0c8
	goto loc_821EE0C8;
loc_821EE164:
	// bl 0x822052c8
	sub_822052C8(ctx, base);
loc_821EE168:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821EE170) PPC_WEAK_FUNC(sub_821EE170);
PPC_FUNC_IMPL(__imp__sub_821EE170) {
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
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed128
	// stwu ctx_arrow(ctx)->r1,-400(ctx_arrow(ctx)->r1)
	ea = -400 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r5.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ee19c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE19C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// b 0x821ee1a0
	goto loc_821EE1A0;
loc_821EE19C:
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 132;
loc_821EE1A0:
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,148
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 148;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,320(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r7,148(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,324(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r25,15
	ctx_arrow(ctx)->r25.s64 = 983040;
	// lwz ctx_arrow(ctx)->r4,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ee23c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EE23C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ee23c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EE23C;
	// lwz ctx_arrow(ctx)->r10,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ee240
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EE240;
loc_821EE23C:
	// li ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = 1;
loc_821EE240:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,0,8,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 0) & 0xFF0000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r10.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r10.u64 ^ 1;
	// beq ctx_arrow(ctx)->r6,0x821ee290
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE290;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e68d0
	sub_821E68D0(ctx, base);
loc_821EE264:
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
loc_821EE26C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ee2bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE2BC;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-11740
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -11740;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r30.u64;
	// b 0x821ee2d8
	goto loc_821EE2D8;
loc_821EE290:
	// lwz ctx_arrow(ctx)->r11,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ee2a8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EE2A8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6978
	sub_821E6978(ctx, base);
	// b 0x821ee264
	goto loc_821EE264;
loc_821EE2A8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ee26c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE26C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6a38
	sub_821E6A38(ctx, base);
	// b 0x821ee264
	goto loc_821EE264;
loc_821EE2BC:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,32
	ctx_arrow(ctx)->r6.s64 = 32;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e67d8
	sub_821E67D8(ctx, base);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r1.s64 + 224;
loc_821EE2D8:
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,2,0,29
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,152
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 152;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,328(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,140
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 140;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r6,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,332(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// li ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = 32;
	// stw ctx_arrow(ctx)->r30,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// stw ctx_arrow(ctx)->r30,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,140
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 140;
	// stw ctx_arrow(ctx)->r30,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,152
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 152;
	// stw ctx_arrow(ctx)->r30,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// stw ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821ecab8
	sub_821ECAB8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ee4d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE4D8;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,32
	ctx_arrow(ctx)->r6.s64 = 32;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e67d8
	sub_821E67D8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ee3d4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EE3D4;
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ee420
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE420;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6978
	sub_821E6978(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
loc_821EE3D4:
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821ee420
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE420;
	// lwz ctx_arrow(ctx)->r10,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ee3fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EE3FC;
	// lwz ctx_arrow(ctx)->r10,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ee400
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EE400;
loc_821EE3FC:
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
loc_821EE400:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6cb8
	sub_821E6CB8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821EE420:
	// lwz ctx_arrow(ctx)->r10,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ee458
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EE458;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// beq ctx_arrow(ctx)->r6,0x821ee43c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE43C;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
loc_821EE43C:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// lwz ctx_arrow(ctx)->r5,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6df0
	sub_821E6DF0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821EE458:
	// lwz ctx_arrow(ctx)->r5,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ee574
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE574;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821ee49c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE49C;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ee480
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EE480;
	// lwz ctx_arrow(ctx)->r10,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ee49c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EE49C;
loc_821EE480:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6a38
	sub_821E6A38(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// lwz ctx_arrow(ctx)->r5,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821EE49C:
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ee4b8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EE4B8;
	// lwz ctx_arrow(ctx)->r11,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ee4b8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EE4B8;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 160;
loc_821EE4B8:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r24.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6b38
	sub_821E6B38(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x821ee574
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_821EE574;
	// b 0x821ee590
	goto loc_821EE590;
loc_821EE4D8:
	// lwz ctx_arrow(ctx)->r10,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,228
	ctx_arrow(ctx)->r11.s64 = 14942208;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ee574
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EE574;
	// lwz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821ee574
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821EE574;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ee574
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EE574;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-7448
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -7448;
loc_821EE508:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821ee508
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821EE508;
loc_821EE574:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-11628
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -11628;
	// bl 0x821e6560
	sub_821E6560(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821ee590
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EE590;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821EE590:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,400
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 400;
	// b 0x823ed178
	return;
}

alias(__imp__sub_821EE598) PPC_WEAK_FUNC(sub_821EE598);
PPC_FUNC_IMPL(__imp__sub_821EE598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu ctx_arrow(ctx)->r1,-416(ctx_arrow(ctx)->r1)
	ea = -416 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,188
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 188;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,180
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 180;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,320(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eebd0
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EEBD0;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r7,188(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,324(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eebd0
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EEBD0;
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r29,15
	ctx_arrow(ctx)->r29.s64 = 983040;
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r29.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821ee644
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EE644;
	// lwz ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821ee644
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821EE644;
	// lwz ctx_arrow(ctx)->r11,1812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ee648
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EE648;
loc_821EE644:
	// li ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = 1;
loc_821EE648:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,180(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,32
	ctx_arrow(ctx)->r6.s64 = 32;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e67d8
	sub_821E67D8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// li ctx_arrow(ctx)->r23,38
	ctx_arrow(ctx)->r23.s64 = 38;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,-11792
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + -11792;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,-11716
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + -11716;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,-11512
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + -11512;
	// beq ctx_arrow(ctx)->r6,0x821ee730
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821EE730;
	// lwz ctx_arrow(ctx)->r11,1816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r24.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821ee730
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821EE730;
loc_821EE694:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821e6630
	sub_821E6630(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821eebd0
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821EEBD0;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// li ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r4.s64 = 31;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,209
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 209;
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// stb ctx_arrow(ctx)->r23,208(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 208, ctx_arrow(ctx.u8)->r3,14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 14;
	// b 0x82206e98
	goto loc_82206E98;
}

