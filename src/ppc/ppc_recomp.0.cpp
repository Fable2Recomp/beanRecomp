#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



extern void MemoryAllocatorHook(PPCRegister& ctx_arrow(ctx)->r3, PPCRegister& ctx_arrow(ctx)->r4);

alias(__imp__sub_82090000) PPC_WEAK_FUNC(sub_82090000);
PPC_FUNC_IMPL(__imp__sub_82090000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	MemoryAllocatorHook(ctx_arrow(ctx)->r3, ctx_arrow(ctx)->r4);
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
	// bl 0x8239e608
	sub_8239E608(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82090050
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82090050;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_82090028:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8239e6b0
	sub_8239E6B0(ctx, base);
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82090044
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82090044;
	// bl 0x8239be98
	sub_8239BE98(ctx, base);
loc_82090044:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82090028
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82090028;
loc_82090050:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8239e3b0
	sub_8239E3B0(ctx, base);
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

extern void MemoryDeallocatorHook(PPCRegister& ctx_arrow(ctx)->r3);

alias(__imp__sub_82090070) PPC_WEAK_FUNC(sub_82090070);
PPC_FUNC_IMPL(__imp__sub_82090070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	MemoryDeallocatorHook(ctx_arrow(ctx)->r3);
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
	// bl 0x8239bf38
	sub_8239BF38(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8239c3b8
	sub_8239C3B8(ctx, base);
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

alias(__imp__sub_820900A8) PPC_WEAK_FUNC(sub_820900A8);
PPC_FUNC_IMPL(__imp__sub_820900A8) {
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
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r7,3
	ctx_arrow(ctx)->r7.s64 = 3;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// lis ctx_arrow(ctx)->r4,-32768
	ctx_arrow(ctx)->r4.s64 = -2147483648;
	// bl 0x8235d008
	sub_8235D008(ctx, base);
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r3.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
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

alias(__imp__sub_82090108) PPC_WEAK_FUNC(sub_82090108);
PPC_FUNC_IMPL(__imp__sub_82090108) {
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
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r6.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// bl 0x8235d200
	sub_8235D200(&ctx);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r3.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_82090158) PPC_WEAK_FUNC(sub_82090158);
PPC_FUNC_IMPL(__imp__sub_82090158) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r6.u64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r31,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// bl 0x823a1a08
	sub_823A1A08(&ctx);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 - ctx_arrow(ctx)->r11.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
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

alias(__imp__sub_820901B0) PPC_WEAK_FUNC(sub_820901B0);
PPC_FUNC_IMPL(__imp__sub_820901B0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8235d388
	sub_8235D388(ctx, base);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r3.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_820901E0) PPC_WEAK_FUNC(sub_820901E0);
PPC_FUNC_IMPL(__imp__sub_820901E0) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x8209cbc8
	sub_8209CBC8(ctx, base);
	return;
}

alias(__imp__sub_820901F0) PPC_WEAK_FUNC(sub_820901F0);
PPC_FUNC_IMPL(__imp__sub_820901F0) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// b 0x8209cc40
	sub_8209CC40(ctx, base);
	return;
}

alias(__imp__sub_82090200) PPC_WEAK_FUNC(sub_82090200);
PPC_FUNC_IMPL(__imp__sub_82090200) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x8209cc20
	sub_8209CC20(ctx, base);
	return;
}

alias(__imp__sub_82090210) PPC_WEAK_FUNC(sub_82090210);
PPC_FUNC_IMPL(__imp__sub_82090210) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r6,1028
	ctx_arrow(ctx)->r6.s64 = 1028;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// b 0x8235d3d0
	sub_8235D3D0(ctx, base);
	return;
}

alias(__imp__sub_82090228) PPC_WEAK_FUNC(sub_82090228);
PPC_FUNC_IMPL(__imp__sub_82090228) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = 4;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// b 0x8235d3d0
	sub_8235D3D0(ctx, base);
	return;
}

alias(__imp__sub_82090240) PPC_WEAK_FUNC(sub_82090240);
PPC_FUNC_IMPL(__imp__sub_82090240) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// b 0x8235d458
	sub_8235D458(ctx, base);
	return;
}

alias(__imp__sub_82090248) PPC_WEAK_FUNC(sub_82090248);
PPC_FUNC_IMPL(__imp__sub_82090248) {
	PPC_FUNC_PROLOGUE();
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
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r10,-32198
	ctx_arrow(ctx)->r10.s64 = -2110128128;
	// lis ctx_arrow(ctx)->r11,-32198
	ctx_arrow(ctx)->r11.s64 = -2110128128;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-15432
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -15432;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-15448
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -15448;
	// bl 0x823a1980
	sub_823A1980(ctx, base);
	// bl 0x823a19c0
	sub_823A19C0(ctx, base);
	// lis ctx_arrow(ctx)->r8,-32247
	ctx_arrow(ctx)->r8.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r9,-32247
	ctx_arrow(ctx)->r9.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r10,-32247
	ctx_arrow(ctx)->r10.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r11,-32247
	ctx_arrow(ctx)->r11.s64 = -2113339392;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,432
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r8.s64 + 432;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,344
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r9.s64 + 344;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,264
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + 264;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,168
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 168;
	// bl 0x8239e778
	sub_8239E778(ctx, base);
	// lis ctx_arrow(ctx)->r9,-32247
	ctx_arrow(ctx)->r9.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r10,-32247
	ctx_arrow(ctx)->r10.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r11,-32247
	ctx_arrow(ctx)->r11.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,496
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r9.s64 + 496;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,2328
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r8.s64 + 2328;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 512;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,480
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 480;
	// bl 0x8239db20
	sub_8239DB20(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32247
	ctx_arrow(ctx)->r10.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r11,-32247
	ctx_arrow(ctx)->r11.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,2320
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s64 + 2320;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,576
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 576;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,528
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 528;
	// bl 0x8239db20
	sub_8239DB20(ctx, base);
	// lis ctx_arrow(ctx)->r9,-32247
	ctx_arrow(ctx)->r9.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r10,-32247
	ctx_arrow(ctx)->r10.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r11,-32247
	ctx_arrow(ctx)->r11.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,496
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r9.s64 + 496;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,2312
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r8.s64 + 2312;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 512;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,480
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 480;
	// bl 0x8239db20
	sub_8239DB20(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32247
	ctx_arrow(ctx)->r10.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r11,-32247
	ctx_arrow(ctx)->r11.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,2300
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s64 + 2300;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,576
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 576;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,552
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 552;
	// bl 0x8239db20
	sub_8239DB20(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32247
	ctx_arrow(ctx)->r10.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r11,-32247
	ctx_arrow(ctx)->r11.s64 = -2113339392;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,2292
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s64 + 2292;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 512;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,480
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 480;
	// bl 0x8239db20
	sub_8239DB20(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32195
	ctx_arrow(ctx)->r11.s64 = -2109931520;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,8928
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 8928;
	// bl 0x8239be48
	sub_8239BE48(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32226
	ctx_arrow(ctx)->r11.s64 = -2111963136;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,25568
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 25568;
	// bl 0x8239be38
	sub_8239BE38(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32247
	ctx_arrow(ctx)->r11.s64 = -2113339392;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 112;
	// bl 0x8239be58
	sub_8239BE58(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32195
	ctx_arrow(ctx)->r10.s64 = -2109931520;
	// lis ctx_arrow(ctx)->r11,-32199
	ctx_arrow(ctx)->r11.s64 = -2110193664;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,8928
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 8928;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,2284
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s64 + 2284;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-9328
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -9328;
	// bl 0x8239be68
	sub_8239BE68(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32195
	ctx_arrow(ctx)->r10.s64 = -2109931520;
	// lis ctx_arrow(ctx)->r11,-32198
	ctx_arrow(ctx)->r11.s64 = -2110128128;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,8928
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 8928;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,2276
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s64 + 2276;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-23792
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -23792;
	// bl 0x8239be68
	sub_8239BE68(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32198
	ctx_arrow(ctx)->r10.s64 = -2110128128;
	// lis ctx_arrow(ctx)->r11,-32198
	ctx_arrow(ctx)->r11.s64 = -2110128128;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,24312
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 24312;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,2264
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s64 + 2264;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,24208
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 24208;
	// bl 0x8239be68
	sub_8239BE68(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32195
	ctx_arrow(ctx)->r10.s64 = -2109931520;
	// lis ctx_arrow(ctx)->r11,-32198
	ctx_arrow(ctx)->r11.s64 = -2110128128;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,8928
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 8928;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,2256
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s64 + 2256;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,19880
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 19880;
	// bl 0x8239be68
	sub_8239BE68(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32195
	ctx_arrow(ctx)->r10.s64 = -2109931520;
	// lis ctx_arrow(ctx)->r11,-32204
	ctx_arrow(ctx)->r11.s64 = -2110521344;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,8928
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 8928;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,2248
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s64 + 2248;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,23912
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 23912;
	// bl 0x8239be68
	sub_8239BE68(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32195
	ctx_arrow(ctx)->r10.s64 = -2109931520;
	// lis ctx_arrow(ctx)->r11,-32197
	ctx_arrow(ctx)->r11.s64 = -2110062592;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,8928
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 8928;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,2240
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s64 + 2240;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-31704
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -31704;
	// bl 0x8239be68
	sub_8239BE68(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_82090420) PPC_WEAK_FUNC(sub_82090420);
PPC_FUNC_IMPL(__imp__sub_82090420) {
	PPC_FUNC_PROLOGUE();
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
	// stwu ctx_arrow(ctx)->r1,-416(ctx_arrow(ctx)->r1)
	ea = -416 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32195
	ctx_arrow(ctx)->r11.s64 = -2109931520;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,8928
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 8928;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x8239be48
	sub_8239BE48(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
loc_8209044C:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8209044c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209044C;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// li ctx_arrow(ctx)->r4,261
	ctx_arrow(ctx)->r4.s64 = 261;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// bl 0x823ecf88
	sub_823ECF88(ctx, base);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// li ctx_arrow(ctx)->r7,2048
	ctx_arrow(ctx)->r7.s64 = 2048;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stb ctx_arrow(ctx)->r31,352(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 352, ctx_arrow(ctx)->r1.u32.u8);
	// blr 
	return;
}

