#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_821D6D28) PPC_WEAK_FUNC(sub_821D6D28);
PPC_FUNC_IMPL(__imp__sub_821D6D28) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d6dcc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D6DCC;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d6dcc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D6DCC;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d6d7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D6D7C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d6d88
	goto loc_821D6D88;
loc_821D6D7C:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D6D88:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d6dcc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D6DCC;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d6db4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D6DB4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d6dc0
	goto loc_821D6DC0;
loc_821D6DB4:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D6DC0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x821d6dd0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D6DD0;
loc_821D6DCC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D6DD0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D6DD8) PPC_WEAK_FUNC(sub_821D6DD8);
PPC_FUNC_IMPL(__imp__sub_821D6DD8) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d6e3c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D6E3C;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,19
	ctx_arrow(ctx)->r9.s64 = 19;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29592
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29592;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// b 0x821d6e40
	goto loc_821D6E40;
loc_821D6E3C:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D6E40:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d6e50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D6E50;
loc_821D6E48:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d6eac
	goto loc_821D6EAC;
loc_821D6E50:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d6e7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D6E7C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d6e48
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D6E48;
loc_821D6E7C:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d6ea8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D6EA8;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d6e48
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D6E48;
loc_821D6EA8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D6EAC:
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

alias(__imp__sub_821D6EC8) PPC_WEAK_FUNC(sub_821D6EC8);
PPC_FUNC_IMPL(__imp__sub_821D6EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29604
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 29604;
	// li ctx_arrow(ctx)->r9,20
	ctx_arrow(ctx)->r9.s64 = 20;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D6EF0) PPC_WEAK_FUNC(sub_821D6EF0);
PPC_FUNC_IMPL(__imp__sub_821D6EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d6f14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D6F14;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x821d6f1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D6F1C;
loc_821D6F14:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d6f58
	goto loc_821D6F58;
loc_821D6F1C:
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d6f40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D6F40;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d6f4c
	goto loc_821D6F4C;
loc_821D6F40:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 0;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D6F4C:
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r3.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
loc_821D6F58:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821D6F68) PPC_WEAK_FUNC(sub_821D6F68);
PPC_FUNC_IMPL(__imp__sub_821D6F68) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,20
	ctx_arrow(ctx)->r4.s64 = 20;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d6fc8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D6FC8;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,20
	ctx_arrow(ctx)->r9.s64 = 20;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29604
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29604;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// b 0x821d6fcc
	goto loc_821D6FCC;
loc_821D6FC8:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D6FCC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d6fdc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D6FDC;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d7010
	goto loc_821D7010;
loc_821D6FDC:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d700c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D700C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// beq 0x821d7010
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7010;
loc_821D700C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D7010:
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

alias(__imp__sub_821D7028) PPC_WEAK_FUNC(sub_821D7028);
PPC_FUNC_IMPL(__imp__sub_821D7028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,7
	ctx_arrow(ctx)->r9.s64 = 7;
	// stw ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29616
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29616;
	// stw ctx_arrow(ctx)->r6,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D7060) PPC_WEAK_FUNC(sub_821D7060);
PPC_FUNC_IMPL(__imp__sub_821D7060) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d714c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D714C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d714c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D714C;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d714c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D714C;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d70c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D70C4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d70d0
	goto loc_821D70D0;
loc_821D70C4:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D70D0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d714c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D714C;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d70fc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D70FC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7108
	goto loc_821D7108;
loc_821D70FC:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7108:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d714c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D714C;
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7134
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7134;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7140
	goto loc_821D7140;
loc_821D7134:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7140:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x821d7150
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7150;
loc_821D714C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D7150:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D7158) PPC_WEAK_FUNC(sub_821D7158);
PPC_FUNC_IMPL(__imp__sub_821D7158) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d71c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D71C4;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,7
	ctx_arrow(ctx)->r9.s64 = 7;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29616
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29616;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// b 0x821d71c8
	goto loc_821D71C8;
loc_821D71C4:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D71C8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d71d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D71D8;
loc_821D71D0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d7268
	goto loc_821D7268;
loc_821D71D8:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d720c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D720C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d71d0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D71D0;
loc_821D720C:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7238
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7238;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d71d0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D71D0;
loc_821D7238:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7264
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7264;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d71d0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D71D0;
loc_821D7264:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D7268:
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

alias(__imp__sub_821D7280) PPC_WEAK_FUNC(sub_821D7280);
PPC_FUNC_IMPL(__imp__sub_821D7280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = 8;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29628
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29628;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D72B0) PPC_WEAK_FUNC(sub_821D72B0);
PPC_FUNC_IMPL(__imp__sub_821D72B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29628
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 29628;
	// li ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = 8;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D72E0) PPC_WEAK_FUNC(sub_821D72E0);
PPC_FUNC_IMPL(__imp__sub_821D72E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7304
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7304;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x821d730c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D730C;
loc_821D7304:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d7358
	goto loc_821D7358;
loc_821D730C:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7304
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7304;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7340
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7340;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d734c
	goto loc_821D734C;
loc_821D7340:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 0;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D734C:
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r3.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
loc_821D7358:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821D7368) PPC_WEAK_FUNC(sub_821D7368);
PPC_FUNC_IMPL(__imp__sub_821D7368) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d73cc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D73CC;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = 8;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29628
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29628;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// b 0x821d73d0
	goto loc_821D73D0;
loc_821D73CC:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D73D0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d73e0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D73E0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d741c
	goto loc_821D741C;
loc_821D73E0:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7418
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7418;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// beq 0x821d741c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D741C;
loc_821D7418:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D741C:
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

alias(__imp__sub_821D7438) PPC_WEAK_FUNC(sub_821D7438);
PPC_FUNC_IMPL(__imp__sub_821D7438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,9
	ctx_arrow(ctx)->r9.s64 = 9;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29640
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29640;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r8,10
	ctx_arrow(ctx)->r8.s64 = 10;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D7478) PPC_WEAK_FUNC(sub_821D7478);
PPC_FUNC_IMPL(__imp__sub_821D7478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29640
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 29640;
	// stw ctx_arrow(ctx)->r6,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r31,9
	ctx_arrow(ctx)->r31.s64 = 9;
	// stw ctx_arrow(ctx)->r7,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_821D74C0) PPC_WEAK_FUNC(sub_821D74C0);
PPC_FUNC_IMPL(__imp__sub_821D74C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7574
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7574;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7574
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7574;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7574
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7574;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7574
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7574;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7574
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7574;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7574
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7574;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7574
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7574;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7558
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7558;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7564
	goto loc_821D7564;
loc_821D7558:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 0;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7564:
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r3.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// b 0x821d7578
	goto loc_821D7578;
loc_821D7574:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D7578:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821D7588) PPC_WEAK_FUNC(sub_821D7588);
PPC_FUNC_IMPL(__imp__sub_821D7588) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,40
	ctx_arrow(ctx)->r4.s64 = 40;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7600
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7600;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,9
	ctx_arrow(ctx)->r9.s64 = 9;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29640
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29640;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r8,10
	ctx_arrow(ctx)->r8.s64 = 10;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// b 0x821d7604
	goto loc_821D7604;
loc_821D7600:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D7604:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7614
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7614;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d7670
	goto loc_821D7670;
loc_821D7614:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d766c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D766C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// beq 0x821d7670
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7670;
loc_821D766C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D7670:
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

alias(__imp__sub_821D7688) PPC_WEAK_FUNC(sub_821D7688);
PPC_FUNC_IMPL(__imp__sub_821D7688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,10
	ctx_arrow(ctx)->r9.s64 = 10;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29652
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29652;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D76F0) PPC_WEAK_FUNC(sub_821D76F0);
PPC_FUNC_IMPL(__imp__sub_821D76F0) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d798c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d798c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d798c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d798c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d798c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d798c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d798c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d798c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d798c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d77b4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D77B4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d77c0
	goto loc_821D77C0;
loc_821D77B4:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D77C0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d798c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d77ec
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D77EC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d77f8
	goto loc_821D77F8;
loc_821D77EC:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D77F8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d798c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7824
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7824;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7830
	goto loc_821D7830;
loc_821D7824:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7830:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d798c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d785c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D785C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7868
	goto loc_821D7868;
loc_821D785C:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7868:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d798c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7894
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7894;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d78a0
	goto loc_821D78A0;
loc_821D7894:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D78A0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d798c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r3,56(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d78cc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D78CC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d78d8
	goto loc_821D78D8;
loc_821D78CC:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D78D8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d798c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7904
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7904;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7910
	goto loc_821D7910;
loc_821D7904:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7910:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d798c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r3,68(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d793c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D793C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7948
	goto loc_821D7948;
loc_821D793C:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7948:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d798c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D798C;
	// lwz ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7974
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7974;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7980
	goto loc_821D7980;
loc_821D7974:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7980:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x821d7990
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7990;
loc_821D798C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D7990:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D7998) PPC_WEAK_FUNC(sub_821D7998);
PPC_FUNC_IMPL(__imp__sub_821D7998) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,80
	ctx_arrow(ctx)->r4.s64 = 80;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7a34
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7A34;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,10
	ctx_arrow(ctx)->r9.s64 = 10;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29652
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29652;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// b 0x821d7a38
	goto loc_821D7A38;
loc_821D7A34:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_821D7A38:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7a48
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7A48;
loc_821D7A40:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d7c10
	goto loc_821D7C10;
loc_821D7A48:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7aac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7AAC;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7a40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7A40;
loc_821D7AAC:
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7ad8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7AD8;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7a40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7A40;
loc_821D7AD8:
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7b04
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7B04;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7a40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7A40;
loc_821D7B04:
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7b30
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7B30;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7a40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7A40;
loc_821D7B30:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7b5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7B5C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7a40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7A40;
loc_821D7B5C:
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7b88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7B88;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,56(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7a40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7A40;
loc_821D7B88:
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7bb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7BB4;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7a40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7A40;
loc_821D7BB4:
	// lwz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7be0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7BE0;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,68(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7a40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7A40;
loc_821D7BE0:
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7c0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7C0C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7a40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7A40;
loc_821D7C0C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_821D7C10:
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

alias(__imp__sub_821D7C28) PPC_WEAK_FUNC(sub_821D7C28);
PPC_FUNC_IMPL(__imp__sub_821D7C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,11
	ctx_arrow(ctx)->r9.s64 = 11;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29664
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29664;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D7C98) PPC_WEAK_FUNC(sub_821D7C98);
PPC_FUNC_IMPL(__imp__sub_821D7C98) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7f34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,76(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,48(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7d7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7D7C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7d88
	goto loc_821D7D88;
loc_821D7D7C:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7D88:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7f34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,52(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7db4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7DB4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7dc0
	goto loc_821D7DC0;
loc_821D7DB4:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7DC0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7f34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r3,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,56(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7dec
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7DEC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7df8
	goto loc_821D7DF8;
loc_821D7DEC:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7DF8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7f34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,60(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7e24
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7E24;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7e30
	goto loc_821D7E30;
loc_821D7E24:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7E30:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7f34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,64(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7e5c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7E5C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7e68
	goto loc_821D7E68;
loc_821D7E5C:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7E68:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7f34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r3,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,72(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7e94
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7E94;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7ea0
	goto loc_821D7EA0;
loc_821D7E94:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7EA0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7f34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r3,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,68(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7ecc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7ECC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d7ed8
	goto loc_821D7ED8;
loc_821D7ECC:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D7ED8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d7f34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D7F34;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821d7f2c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7F2C;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// lwz ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// beq 0x821d7f24
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7F24;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
loc_821D7F04:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821d7f24
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D7F24;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7f04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7F04;
loc_821D7F24:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821d7f34
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D7F34;
loc_821D7F2C:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x821d7f38
	goto loc_821D7F38;
loc_821D7F34:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D7F38:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D7F40) PPC_WEAK_FUNC(sub_821D7F40);
PPC_FUNC_IMPL(__imp__sub_821D7F40) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,88
	ctx_arrow(ctx)->r4.s64 = 88;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d7fe8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7FE8;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,11
	ctx_arrow(ctx)->r9.s64 = 11;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29664
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29664;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// b 0x821d7fec
	goto loc_821D7FEC;
loc_821D7FE8:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_821D7FEC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d7ffc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D7FFC;
loc_821D7FF4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d81e4
	goto loc_821D81E4;
loc_821D7FFC:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8070
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8070;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7ff4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7FF4;
loc_821D8070:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d809c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D809C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7ff4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7FF4;
loc_821D809C:
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d80c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D80C8;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,56(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7ff4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7FF4;
loc_821D80C8:
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d80f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D80F4;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7ff4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7FF4;
loc_821D80F4:
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8120
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8120;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7ff4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7FF4;
loc_821D8120:
	// lwz ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d814c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D814C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,72(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7ff4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7FF4;
loc_821D814C:
	// lwz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8178
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8178;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,68(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7ff4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7FF4;
loc_821D8178:
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821d81e0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D81E0;
	// li ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r4.s64 = 16;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821d5a28
	sub_821D5A28(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7ff4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7FF4;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r4.s64 = 16;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821d5a28
	sub_821D5A28(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d7ff4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D7FF4;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823ee010
	sub_823EE010(ctx, base);
loc_821D81E0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_821D81E4:
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

alias(__imp__sub_821D8200) PPC_WEAK_FUNC(sub_821D8200);
PPC_FUNC_IMPL(__imp__sub_821D8200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,12
	ctx_arrow(ctx)->r9.s64 = 12;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29676
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29676;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D8248) PPC_WEAK_FUNC(sub_821D8248);
PPC_FUNC_IMPL(__imp__sub_821D8248) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8424;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d8424
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8424;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d8424
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8424;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d8424
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8424;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d82bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D82BC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d82c8
	goto loc_821D82C8;
loc_821D82BC:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D82C8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8424;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d82f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D82F4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d8300
	goto loc_821D8300;
loc_821D82F4:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D8300:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8424;
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d832c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D832C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d8338
	goto loc_821D8338;
loc_821D832C:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D8338:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8424;
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8364
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8364;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d8370
	goto loc_821D8370;
loc_821D8364:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D8370:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8424;
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d839c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D839C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d83a8
	goto loc_821D83A8;
loc_821D839C:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D83A8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8424;
	// lwz ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d83d4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D83D4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d83e0
	goto loc_821D83E0;
loc_821D83D4:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D83E0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8424;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d840c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D840C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d8418
	goto loc_821D8418;
loc_821D840C:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D8418:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x821d8428
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8428;
loc_821D8424:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D8428:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D8430) PPC_WEAK_FUNC(sub_821D8430);
PPC_FUNC_IMPL(__imp__sub_821D8430) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,52
	ctx_arrow(ctx)->r4.s64 = 52;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d84b0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D84B0;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,12
	ctx_arrow(ctx)->r9.s64 = 12;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29676
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29676;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// b 0x821d84b4
	goto loc_821D84B4;
loc_821D84B0:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_821D84B4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d84c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D84C4;
loc_821D84BC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d860c
	goto loc_821D860C;
loc_821D84C4:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8500
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8500;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d84bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D84BC;
loc_821D8500:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d852c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D852C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d84bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D84BC;
loc_821D852C:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8558
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8558;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d84bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D84BC;
loc_821D8558:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8584
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8584;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d84bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D84BC;
loc_821D8584:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d85b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D85B0;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d84bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D84BC;
loc_821D85B0:
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d85dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D85DC;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d84bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D84BC;
loc_821D85DC:
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8608
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8608;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d84bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D84BC;
loc_821D8608:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_821D860C:
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

alias(__imp__sub_821D8628) PPC_WEAK_FUNC(sub_821D8628);
PPC_FUNC_IMPL(__imp__sub_821D8628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,13
	ctx_arrow(ctx)->r9.s64 = 13;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29688
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29688;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D8658) PPC_WEAK_FUNC(sub_821D8658);
PPC_FUNC_IMPL(__imp__sub_821D8658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d867c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D867C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8684
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8684;
loc_821D867C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d86d0
	goto loc_821D86D0;
loc_821D8684:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d867c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D867C;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,20(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d86b8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D86B8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d86c4
	goto loc_821D86C4;
loc_821D86B8:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 0;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D86C4:
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r3.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
loc_821D86D0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821D86E0) PPC_WEAK_FUNC(sub_821D86E0);
PPC_FUNC_IMPL(__imp__sub_821D86E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,14
	ctx_arrow(ctx)->r9.s64 = 14;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29700
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29700;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 48);
	// std ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 56);
	// std ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 64);
	// std ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 72);
	// blr 
	return;
}

alias(__imp__sub_821D8738) PPC_WEAK_FUNC(sub_821D8738);
PPC_FUNC_IMPL(__imp__sub_821D8738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 48;
	// stw ctx_arrow(ctx)->r5,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,29700
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 29700;
	// stw ctx_arrow(ctx)->r6,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r7,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r8,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.s64 = 14;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// ld ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// ld ctx_arrow(ctx)->r30,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_821D87B0) PPC_WEAK_FUNC(sub_821D87B0);
PPC_FUNC_IMPL(__imp__sub_821D87B0) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d88f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D88F0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d88f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D88F0;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d88f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D88F0;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d88f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D88F0;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d88f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D88F0;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d88f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D88F0;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d88f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D88F0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,48
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 48;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,48
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 48;
	// bl 0x821d5f50
	sub_821D5F50(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x821d88f0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D88F0;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8868
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8868;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d8874
	goto loc_821D8874;
loc_821D8868:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D8874:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d88f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D88F0;
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d88a0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D88A0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d88ac
	goto loc_821D88AC;
loc_821D88A0:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D88AC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d88f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D88F0;
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d88d8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D88D8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d88e4
	goto loc_821D88E4;
loc_821D88D8:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D88E4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x821d88f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D88F4;
loc_821D88F0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D88F4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D8900) PPC_WEAK_FUNC(sub_821D8900);
PPC_FUNC_IMPL(__imp__sub_821D8900) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,80
	ctx_arrow(ctx)->r4.s64 = 80;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8990
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8990;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,14
	ctx_arrow(ctx)->r9.s64 = 14;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29700
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29700;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 48);
	// std ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 56);
	// std ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 64);
	// std ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 72);
	// b 0x821d8994
	goto loc_821D8994;
loc_821D8990:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D8994:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d89a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D89A4;
loc_821D899C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d8a7c
	goto loc_821D8A7C;
loc_821D89A4:
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 48;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,48
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 48;
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// ld ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// ld ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8a20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8A20;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d899c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D899C;
loc_821D8A20:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8a4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8A4C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d899c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D899C;
loc_821D8A4C:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8a78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8A78;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d899c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D899C;
loc_821D8A78:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D8A7C:
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

alias(__imp__sub_821D8A98) PPC_WEAK_FUNC(sub_821D8A98);
PPC_FUNC_IMPL(__imp__sub_821D8A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,15
	ctx_arrow(ctx)->r9.s64 = 15;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29712
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29712;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// std ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 40);
	// std ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 48);
	// std ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 56);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D8AE0) PPC_WEAK_FUNC(sub_821D8AE0);
PPC_FUNC_IMPL(__imp__sub_821D8AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29712
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29712;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,15
	ctx_arrow(ctx)->r8.s64 = 15;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ld ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 4, xer);
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// ld ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// bne ctx_arrow(ctx)->r6,0x821d8b78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8B78;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8b78
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8B78;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
loc_821D8B78:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
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

alias(__imp__sub_821D8B90) PPC_WEAK_FUNC(sub_821D8B90);
PPC_FUNC_IMPL(__imp__sub_821D8B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stfd f1,24(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 + 32;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29712
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29712;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,15
	ctx_arrow(ctx)->r8.s64 = 15;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// ld ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_821D8BE8) PPC_WEAK_FUNC(sub_821D8BE8);
PPC_FUNC_IMPL(__imp__sub_821D8BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 + 32;
	// stw ctx_arrow(ctx)->r5,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29712
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29712;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,15
	ctx_arrow(ctx)->r8.s64 = 15;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// ld ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_821D8C40) PPC_WEAK_FUNC(sub_821D8C40);
PPC_FUNC_IMPL(__imp__sub_821D8C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 + 32;
	// stw ctx_arrow(ctx)->r5,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29712
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29712;
	// stw ctx_arrow(ctx)->r6,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,15
	ctx_arrow(ctx)->r8.s64 = 15;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// ld ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_821D8C98) PPC_WEAK_FUNC(sub_821D8C98);
PPC_FUNC_IMPL(__imp__sub_821D8C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8d4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8D4C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d8d4c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8D4C;
	// lwz ctx_arrow(ctx)->r7,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 16;
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 16;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d8d4c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8D4C;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 16;
loc_821D8CD8:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r6.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821d8cf8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D8CF8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d8cd8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8CD8;
loc_821D8CF8:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821d8d08
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D8D08;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x821d8d50
	goto loc_821D8D50;
loc_821D8D08:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x821d8d4c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8D4C;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8d34
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8D34;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d8d40
	goto loc_821D8D40;
loc_821D8D34:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 0;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D8D40:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x821d8d50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8D50;
loc_821D8D4C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D8D50:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821D8D60) PPC_WEAK_FUNC(sub_821D8D60);
PPC_FUNC_IMPL(__imp__sub_821D8D60) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,64
	ctx_arrow(ctx)->r4.s64 = 64;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8ddc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8DDC;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,15
	ctx_arrow(ctx)->r9.s64 = 15;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29712
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29712;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// std ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 40);
	// std ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 48);
	// std ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 56);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// b 0x821d8de0
	goto loc_821D8DE0;
loc_821D8DDC:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D8DE0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d8df0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8DF0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d8e60
	goto loc_821D8E60;
loc_821D8DF0:
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 32;
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// ld ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 56);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x821d8e5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8E5C;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8e5c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8E5C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// beq 0x821d8e60
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8E60;
loc_821D8E5C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D8E60:
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

alias(__imp__sub_821D8E78) PPC_WEAK_FUNC(sub_821D8E78);
PPC_FUNC_IMPL(__imp__sub_821D8E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29724
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 29724;
	// stw ctx_arrow(ctx)->r6,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,17
	ctx_arrow(ctx)->r9.s64 = 17;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D8EA8) PPC_WEAK_FUNC(sub_821D8EA8);
PPC_FUNC_IMPL(__imp__sub_821D8EA8) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8f84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8F84;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d8f84
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8F84;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8efc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8EFC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d8f08
	goto loc_821D8F08;
loc_821D8EFC:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D8F08:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8f84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8F84;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8f34
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8F34;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d8f40
	goto loc_821D8F40;
loc_821D8F34:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D8F40:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d8f84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D8F84;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8f6c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8F6C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d8f78
	goto loc_821D8F78;
loc_821D8F6C:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D8F78:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x821d8f88
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D8F88;
loc_821D8F84:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D8F88:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D8F90) PPC_WEAK_FUNC(sub_821D8F90);
PPC_FUNC_IMPL(__imp__sub_821D8F90) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,28
	ctx_arrow(ctx)->r4.s64 = 28;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d8ff8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D8FF8;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,17
	ctx_arrow(ctx)->r9.s64 = 17;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29724
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29724;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// b 0x821d8ffc
	goto loc_821D8FFC;
loc_821D8FF8:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D8FFC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d900c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D900C;
loc_821D9004:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d9094
	goto loc_821D9094;
loc_821D900C:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9038
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9038;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d9004
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9004;
loc_821D9038:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9064
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9064;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d9004
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9004;
loc_821D9064:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9090
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9090;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d9004
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9004;
loc_821D9090:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D9094:
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

alias(__imp__sub_821D90B0) PPC_WEAK_FUNC(sub_821D90B0);
PPC_FUNC_IMPL(__imp__sub_821D90B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 + 16;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29736
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29736;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,16
	ctx_arrow(ctx)->r8.s64 = 16;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// ld ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// stw ctx_arrow(ctx)->r5,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r6,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_821D9108) PPC_WEAK_FUNC(sub_821D9108);
PPC_FUNC_IMPL(__imp__sub_821D9108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9134
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9134;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x821d913c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D913C;
loc_821D9134:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d9174
	goto loc_821D9174;
loc_821D913C:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r7.s64 + 16;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r6.s64 + 16;
	// bl 0x821d5f50
	sub_821D5F50(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x821d9134
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9134;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9134
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9134;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D9174:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_821D9188) PPC_WEAK_FUNC(sub_821D9188);
PPC_FUNC_IMPL(__imp__sub_821D9188) {
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,56
	ctx_arrow(ctx)->r4.s64 = 56;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d91e4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D91E4;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r9.s64 = 16;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29736
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29736;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// b 0x821d91e8
	goto loc_821D91E8;
loc_821D91E4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D91E8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9228
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9228;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 16;
	// ld ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// ld ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// ld ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 52, ctx_arrow(ctx)->r4.u32);
loc_821D9228:
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

alias(__imp__sub_821D9240) PPC_WEAK_FUNC(sub_821D9240);
PPC_FUNC_IMPL(__imp__sub_821D9240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r9,18
	ctx_arrow(ctx)->r9.s64 = 18;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29748
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29748;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 2;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D9278) PPC_WEAK_FUNC(sub_821D9278);
PPC_FUNC_IMPL(__imp__sub_821D9278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r6,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29748
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 29748;
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,18
	ctx_arrow(ctx)->r9.s64 = 18;
	// stw ctx_arrow(ctx)->r7,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D92B0) PPC_WEAK_FUNC(sub_821D92B0);
PPC_FUNC_IMPL(__imp__sub_821D92B0) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d939c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D939C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d939c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D939C;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d939c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D939C;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d9314
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9314;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d9320
	goto loc_821D9320;
loc_821D9314:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D9320:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d939c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D939C;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d934c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D934C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d9358
	goto loc_821D9358;
loc_821D934C:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D9358:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d939c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D939C;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d9384
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9384;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x821d9390
	goto loc_821D9390;
loc_821D9384:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r29.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821D9390:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x821d93a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D93A0;
loc_821D939C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D93A0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D93A8) PPC_WEAK_FUNC(sub_821D93A8);
PPC_FUNC_IMPL(__imp__sub_821D93A8) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d9418
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9418;
	// li ctx_arrow(ctx)->r9,18
	ctx_arrow(ctx)->r9.s64 = 18;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29748
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29748;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 2;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// b 0x821d941c
	goto loc_821D941C;
loc_821D9418:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D941C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d942c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D942C;
loc_821D9424:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d94bc
	goto loc_821D94BC;
loc_821D942C:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9460
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9460;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d9424
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9424;
loc_821D9460:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d948c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D948C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d9424
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9424;
loc_821D948C:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d94b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D94B8;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d9424
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9424;
loc_821D94B8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D94BC:
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

alias(__imp__sub_821D94D8) PPC_WEAK_FUNC(sub_821D94D8);
PPC_FUNC_IMPL(__imp__sub_821D94D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29760
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 29760;
	// stw ctx_arrow(ctx)->r6,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,26
	ctx_arrow(ctx)->r9.s64 = 26;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821D9508) PPC_WEAK_FUNC(sub_821D9508);
PPC_FUNC_IMPL(__imp__sub_821D9508) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,28
	ctx_arrow(ctx)->r4.s64 = 28;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d9570
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9570;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,26
	ctx_arrow(ctx)->r9.s64 = 26;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29760
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29760;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// b 0x821d9574
	goto loc_821D9574;
loc_821D9570:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D9574:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9584
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9584;
loc_821D957C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d960c
	goto loc_821D960C;
loc_821D9584:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d95b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D95B0;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d957c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D957C;
loc_821D95B0:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d95dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D95DC;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d957c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D957C;
loc_821D95DC:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9608
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9608;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d957c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D957C;
loc_821D9608:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D960C:
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

alias(__imp__sub_821D9628) PPC_WEAK_FUNC(sub_821D9628);
PPC_FUNC_IMPL(__imp__sub_821D9628) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d968c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D968C;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 2;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29504
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29504;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// b 0x821d9690
	goto loc_821D9690;
loc_821D968C:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D9690:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d96a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D96A0;
loc_821D9698:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d9708
	goto loc_821D9708;
loc_821D96A0:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d96d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D96D4;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// beq 0x821d9698
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9698;
loc_821D96D4:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9704
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9704;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// beq 0x821d9708
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9708;
loc_821D9704:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D9708:
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

alias(__imp__sub_821D9720) PPC_WEAK_FUNC(sub_821D9720);
PPC_FUNC_IMPL(__imp__sub_821D9720) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d97f0
	sub_821D97F0(ctx, base);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d9784
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9784;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r9,13
	ctx_arrow(ctx)->r9.s64 = 13;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,29688
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 29688;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// b 0x821d9788
	goto loc_821D9788;
loc_821D9784:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821D9788:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9798
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9798;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d97d4
	goto loc_821D97D4;
loc_821D9798:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d97d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D97D0;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// beq 0x821d97d4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D97D4;
loc_821D97D0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821D97D4:
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

alias(__imp__sub_821D97F0) PPC_WEAK_FUNC(sub_821D97F0);
PPC_FUNC_IMPL(__imp__sub_821D97F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32018
	ctx_arrow(ctx)->r11.s64 = -2098331648;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,-31720(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// b 0x8240fbfc
	__imp__KeTlsGetValue(ctx, base);
	return;
}

alias(__imp__sub_821D980C) PPC_WEAK_FUNC(sub_821D980C);
PPC_FUNC_IMPL(__imp__sub_821D980C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_821D9810) PPC_WEAK_FUNC(sub_821D9810);
PPC_FUNC_IMPL(__imp__sub_821D9810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-9484
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -9484;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// li ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = 1;
loc_821D9834:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r8
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r8.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r28.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9888
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9888;
	// stwcx. ctx_arrow(ctx)->r31,0,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r8.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r31.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x821d9834
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9834;
	// b 0x821d9890
	goto loc_821D9890;
loc_821D9858:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x8235eb58
	sub_8235EB58(ctx, base);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r30.s64 + 4;
loc_821D9864:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r8
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r8.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r28.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9888
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9888;
	// stwcx. ctx_arrow(ctx)->r31,0,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r8.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r31.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x821d9864
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9864;
	// b 0x821d9890
	goto loc_821D9890;
loc_821D9888:
	// stwcx. ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r8.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r10.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
loc_821D9890:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9858
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9858;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r29,-32018
	ctx_arrow(ctx)->r29.s64 = -2098331648;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d98b8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D98B8;
	// bl 0x8240fc1c
	__imp__KeTlsAlloc(ctx, base);
	// stw ctx_arrow(ctx)->r3,-31720(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + -31720, ctx_arrow(ctx)->r4.u32);
	// b 0x821d98bc
	goto loc_821D98BC;
loc_821D98B8:
	// lwz ctx_arrow(ctx)->r3,-31720(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821D98BC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x821d98dc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D98DC;
	// lis ctx_arrow(ctx)->r27,-32768
	ctx_arrow(ctx)->r27.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,16389
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 16389;
	// b 0x821d9930
	goto loc_821D9930;
loc_821D98DC:
	// bl 0x8240fbfc
	__imp__KeTlsGetValue(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x821d9924
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9924;
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// li ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r3.s64 = 24;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x821d9908
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9908;
	// lis ctx_arrow(ctx)->r27,-32761
	ctx_arrow(ctx)->r27.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,14
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 14;
	// b 0x821d9930
	goto loc_821D9930;
loc_821D9908:
	// li ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r5.s64 = 24;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r3,-31720(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8240fc0c
	__imp__KeTlsSetValue(ctx, base);
loc_821D9924:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
loc_821D9930:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 4;
loc_821D9934:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. ctx_arrow(ctx)->r28,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r28.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x821d9934
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9934;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_821D9958) PPC_WEAK_FUNC(sub_821D9958);
PPC_FUNC_IMPL(__imp__sub_821D9958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-9484
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -9484;
	// li ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = 1;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r30.s64 + 4;
loc_821D9978:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r8
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r8.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r29.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d99cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D99CC;
	// stwcx. ctx_arrow(ctx)->r31,0,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r8.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r31.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x821d9978
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9978;
	// b 0x821d99d4
	goto loc_821D99D4;
loc_821D999C:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x8235eb58
	sub_8235EB58(ctx, base);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r30.s64 + 4;
loc_821D99A8:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r8
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r8.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r29.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d99cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D99CC;
	// stwcx. ctx_arrow(ctx)->r31,0,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r8.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r31.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x821d99a8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D99A8;
	// b 0x821d99d4
	goto loc_821D99D4;
loc_821D99CC:
	// stwcx. ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r8.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r10.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
loc_821D99D4:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x821d999c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D999C;
	// lis ctx_arrow(ctx)->r31,-32018
	ctx_arrow(ctx)->r31.s64 = -2098331648;
	// lwz ctx_arrow(ctx)->r3,-31720(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9a24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9A24;
	// bl 0x8240fbfc
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821d9a20
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9A20;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// bne 0x821d9a20
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9A20;
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,-31720(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8240fc0c
	__imp__KeTlsSetValue(ctx, base);
loc_821D9A20:
	// lwz ctx_arrow(ctx)->r3,-31720(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821D9A24:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9a50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9A50;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9a50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9A50;
	// bl 0x8240fc2c
	__imp__KeTlsFree(ctx, base);
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// stw ctx_arrow(ctx)->r11,-31720(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + -31720, ctx_arrow(ctx)->r4.u32);
loc_821D9A50:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 4;
loc_821D9A54:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. ctx_arrow(ctx)->r29,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r29.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x821d9a54
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9A54;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D9A78) PPC_WEAK_FUNC(sub_821D9A78);
PPC_FUNC_IMPL(__imp__sub_821D9A78) {
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
	// lis ctx_arrow(ctx)->r10,-31991
	ctx_arrow(ctx)->r10.s64 = -2096562176;
	// lwz ctx_arrow(ctx)->r11,-9476(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9b50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9B50;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// stw ctx_arrow(ctx)->r11,-9476(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -9476, ctx_arrow(ctx)->r4.u32);
	// bl 0x8209d000
	sub_8209D000(&ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9ad8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9AD8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9ad8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9AD8;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9adc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9ADC;
loc_821D9AD8:
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
loc_821D9ADC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9af0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9AF0;
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_821D9AF0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9b0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9B0C;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r31.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9b0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9B0C;
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_821D9B0C:
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9b50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9B50;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,30008
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 30008;
	// bl 0x8235e140
	sub_8235E140(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29912
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 29912;
	// bl 0x8235e140
	sub_8235E140(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29824
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 29824;
	// bl 0x8235e140
	sub_8235E140(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29772
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 29772;
	// bl 0x8235e140
	sub_8235E140(ctx, base);
loc_821D9B50:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D9B58) PPC_WEAK_FUNC(sub_821D9B58);
PPC_FUNC_IMPL(__imp__sub_821D9B58) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9b7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9B7C;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r1.s64 + 88;
loc_821D9B7C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9bdc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9BDC;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9bc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9BC8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9bc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9BC8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9bb4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9BB4;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821d9bd4
	goto loc_821D9BD4;
loc_821D9BB4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9c80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9C80;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x821d9bd4
	goto loc_821D9BD4;
loc_821D9BC8:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821D9BD4:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x821d9c78
	goto loc_821D9C78;
loc_821D9BDC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9c10
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9C10;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x821d9b58
	sub_821D9B58(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821d9c88
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821D9C88;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x821d9c78
	goto loc_821D9C78;
loc_821D9C10:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9c80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9C80;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821D9C24:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821d9b58
	sub_821D9B58(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821d9c88
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821D9C88;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x821d9c68
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821D9C68;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_821D9C68:
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne 0x821d9c24
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9C24;
loc_821D9C78:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821d9c88
	goto loc_821D9C88;
loc_821D9C80:
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
loc_821D9C88:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821D9C90) PPC_WEAK_FUNC(sub_821D9C90);
PPC_FUNC_IMPL(__imp__sub_821D9C90) {
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
	// stwu ctx_arrow(ctx)->r1,-224(ctx_arrow(ctx)->r1)
	ea = -224 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// ld ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U64(ctx,  ctx);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// ld ctx_arrow(ctx)->r25,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// ld ctx_arrow(ctx)->r24,16(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 2;
	// ld ctx_arrow(ctx)->r23,24(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r23.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// std ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// std ctx_arrow(ctx)->r25,8(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// std ctx_arrow(ctx)->r24,16(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// std ctx_arrow(ctx)->r23,24(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 24);
	// li ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r11.s64 = 10;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 2;
	// stw ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// bl 0x8222cc70
	sub_8222CC70(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x821d9d24
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821D9D24;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821D9D18:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D9D1C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// b 0x823ed174
	return;
loc_821D9D24:
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821d9b58
	sub_821D9B58(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821d9d1c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821D9D1C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64;
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,22068
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 22068;
loc_821D9D50:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821d9d70
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9D70;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9d50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9D50;
loc_821D9D70:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821d9de0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9DE0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9db0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9DB0;
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9db0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9DB0;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9db0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9DB0;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9d18
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9D18;
loc_821D9DB0:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r5,2900
	ctx_arrow(ctx)->r5.s64 = 2900;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,30232
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 30232;
loc_821D9DBC:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// bl 0x821b80c8
	sub_821B80C8(ctx, base);
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x821d9d1c
	goto loc_821D9D1C;
loc_821D9DE0:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64;
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,22072
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 22072;
loc_821D9DF0:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821d9e10
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9E10;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9df0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9DF0;
loc_821D9E10:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821d9d18
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9D18;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9e5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9E5C;
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9e5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9E5C;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9e5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9E5C;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 5, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9e5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9E5C;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x821d9d18
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821D9D18;
loc_821D9E5C:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r5,2901
	ctx_arrow(ctx)->r5.s64 = 2901;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,30144
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 30144;
	// b 0x821d9dbc
	goto loc_821D9DBC;
}

alias(__imp__sub_821D9E70) PPC_WEAK_FUNC(sub_821D9E70);
PPC_FUNC_IMPL(__imp__sub_821D9E70) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed12c
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r7.u64;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 14, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9f8c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9F8C;
	// lwz ctx_arrow(ctx)->r28,32(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9f7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9F7C;
	// lis ctx_arrow(ctx)->r10,16383
	ctx_arrow(ctx)->r10.s64 = 1073676288;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x821d9ecc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821D9ECC;
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
loc_821D9ECC:
	// bl 0x8209d088
	sub_8209D088(ctx, base);
	// mr. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bne 0x821d9ee4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9EE4;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,14
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 14;
	// b 0x821d9f7c
	goto loc_821D9F7C;
loc_821D9EE4:
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,4,0,27
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9f5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9F5C;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r29.u64;
loc_821D9F04:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821d9f50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821D9F50;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r27.u64;
loc_821D9F14:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x821d9f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821D9F34;
	// lfd f0,24(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x821d9f40
	goto loc_821D9F40;
loc_821D9F34:
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 1, xer);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821D9F40:
	// lwz ctx_arrow(ctx)->r28,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addic. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	xer.ca = ctx_arrow(ctx)->r8.u32 > 0;
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bne 0x821d9f14
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9F14;
loc_821D9F50:
	// addic. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	xer.ca = ctx_arrow(ctx)->r30.u32 > 0;
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 16;
	// bne 0x821d9f04
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9F04;
loc_821D9F5C:
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r25.u64;
	// li ctx_arrow(ctx)->r6,6
	ctx_arrow(ctx)->r6.s64 = 6;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x821daa18
	sub_821DAA18(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_821D9F7C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// b 0x821d9f90
	goto loc_821D9F90;
loc_821D9F8C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821D9F90:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_821D9F98) PPC_WEAK_FUNC(sub_821D9F98);
PPC_FUNC_IMPL(__imp__sub_821D9F98) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r10,16383
	ctx_arrow(ctx)->r10.s64 = 1073676288;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble ctx_arrow(ctx)->r6,0x821d9fcc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821D9FCC;
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
loc_821D9FCC:
	// bl 0x8209d088
	sub_8209D088(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bne 0x821d9fe4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821D9FE4;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,14
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 14;
	// b 0x821da018
	goto loc_821DA018;
loc_821D9FE4:
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4,0,27
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r6,6
	ctx_arrow(ctx)->r6.s64 = 6;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x821daa18
	sub_821DAA18(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_821DA018:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8209d150
	sub_8209D150(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_821DA030) PPC_WEAK_FUNC(sub_821DA030);
PPC_FUNC_IMPL(__imp__sub_821DA030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x823ed108
	// stwu ctx_arrow(ctx)->r1,-320(ctx_arrow(ctx)->r1)
	ea = -320 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r20,0
	ctx_arrow(ctx)->r20.s64 = 0;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r6.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,22080
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 22080;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r5.u64;
	// stw ctx_arrow(ctx)->r20,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r7.u64;
	// oris ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r8,32768
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r8.u64 | 2147483648;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 2;
loc_821DA06C:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821da08c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA08C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821da06c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA06C;
loc_821DA08C:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r17,1
	ctx_arrow(ctx)->r17.s64 = 1;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r11,22072
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r11.s64 + 22072;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11,22068
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r11.s64 + 22068;
	// beq 0x821da198
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA198;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r19.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 2;
loc_821DA0B4:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821da0d4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA0D4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821da0b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA0B4;
loc_821DA0D4:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x821da198
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA198;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r18.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 2;
loc_821DA0E8:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821da108
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA108;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821da0e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA0E8;
loc_821DA108:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x821da198
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA198;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,22076
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 22076;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 2;
loc_821DA120:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821da140
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA140;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821da120
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA120;
loc_821DA140:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x821da198
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA198;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// sth ctx_arrow(ctx)->r17,128(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 128, ctx_arrow(ctx)->r17, 0);
	// li ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 4;
	// sth ctx_arrow(ctx)->r17,132(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 132, ctx_arrow(ctx)->r17, 0);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r21,12
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r21.s64 + 12;
	// sth ctx_arrow(ctx)->r17,136(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 136, ctx_arrow(ctx)->r17, 0);
	// li ctx_arrow(ctx)->r6,6
	ctx_arrow(ctx)->r6.s64 = 6;
	// sth ctx_arrow(ctx)->r20,138(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 138, ctx_arrow(ctx)->r20, 0);
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// stw ctx_arrow(ctx)->r20,140(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 140, ctx_arrow(ctx)->r4.u32);
	// sth ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 130, ctx_arrow(ctx)->r11, 0);
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// sth ctx_arrow(ctx)->r11,134(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 134, ctx_arrow(ctx)->r11, 0);
	// bl 0x821daa18
	sub_821DAA18(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821da570
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821DA570;
	// stw ctx_arrow(ctx)->r17,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// b 0x821da4c0
	goto loc_821DA4C0;
loc_821DA198:
	// li ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r11.s64 = 10;
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r25,2
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r25.s64 + 2;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r20,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 2;
	// stw ctx_arrow(ctx)->r20,160(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 160, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// stw ctx_arrow(ctx)->r20,164(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 164, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// stw ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 144, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// stw ctx_arrow(ctx)->r26,152(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 152, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// bl 0x8222cc70
	sub_8222CC70(ctx, base);
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,100
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 100;
	// lwz ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821d9b58
	sub_821D9B58(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821da570
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821DA570;
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821da3d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DA3D0;
	// rotlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r20.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r20.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r20.u64;
	// cmplwi ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq 0x821da304
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA304;
loc_821DA21C:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,18
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 18, xer);
	// bne ctx_arrow(ctx)->r6,0x821da2ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA2EC;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821da240
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA240;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821DA240:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r20.u64;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821da254
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA254;
	// lwz ctx_arrow(ctx)->r31,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821DA254:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821da2c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DA2C4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x821aba58
	sub_821ABA58(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821da2ec
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821DA2EC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821da2ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DA2EC;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s8;
	// bl 0x823eee38
	sub_823EEE38(ctx, base);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821da2ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA2EC;
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821da2a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA2A8;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r31.u64;
	// b 0x821da2ec
	goto loc_821DA2EC;
loc_821DA2A8:
	// xor ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r24.u64;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFF0000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x821da2ec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA2EC;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821da2ec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA2EC;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r31.u64;
	// b 0x821da2ec
	goto loc_821DA2EC;
loc_821DA2C4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821da2ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DA2EC;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s8;
	// bl 0x823eee38
	sub_823EEE38(ctx, base);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821da2ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA2EC;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r31.u64;
loc_821DA2EC:
	// lwz ctx_arrow(ctx)->r30,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne 0x821da21c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA21C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821da31c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA31C;
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821DA304:
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821da31c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA31C;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821da3d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DA3D0;
loc_821DA31C:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s8;
	// bl 0x823eee38
	sub_823EEE38(ctx, base);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821da3cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA3CC;
	// lbz ctx_arrow(ctx)->r11,1(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// extsb ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s8;
	// bl 0x823f0818
	sub_823F0818(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x821da3cc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA3CC;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29,2
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r29.s64 + 2;
	// b 0x821da35c
	goto loc_821DA35C;
loc_821DA358:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
loc_821DA35C:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s8;
	// bl 0x823f0818
	sub_823F0818(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne 0x821da358
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA358;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821da3cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA3CC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823f0660
	sub_823F0660(ctx, base);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,8191
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 8191, xer);
	// ble ctx_arrow(ctx)->r6,0x821da3b8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821DA3B8;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,30424
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 30424;
	// li ctx_arrow(ctx)->r5,2902
	ctx_arrow(ctx)->r5.s64 = 2902;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// bl 0x821b80c8
	sub_821B80C8(ctx, base);
	// b 0x821da468
	goto loc_821DA468;
loc_821DA3B8:
	// lhz ctx_arrow(ctx)->r11,10(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r21.u32 + 10);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2;
	// sth ctx_arrow(ctx)->r11,10(ctx_arrow(ctx)->r21)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r21.u32 + 10, ctx_arrow(ctx)->r11, 0);
loc_821DA3CC:
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821DA3D0:
	// lwz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,30,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x821da3e8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA3E8;
	// lhz ctx_arrow(ctx)->r10,10(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r21.u32 + 10);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 1;
	// sth ctx_arrow(ctx)->r10,10(ctx_arrow(ctx)->r21)
	PPC_STORE_U16(ctx_arrow(ctx)->r21.u32 + 10, ctx_arrow(ctx)->r10.u16);
loc_821DA3E8:
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne 0x821da474
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA474;
	// lwz ctx_arrow(ctx)->r9,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821da474
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA474;
	// lhz ctx_arrow(ctx)->r10,10(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r21.u32 + 10);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x821da428
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA428;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21,16
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r21.s64 + 16;
	// lwz ctx_arrow(ctx)->r4,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// bl 0x821d9f98
	sub_821D9F98(ctx, base);
loc_821DA41C:
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821da570
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821DA570;
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821DA428:
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x821da4a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA4A0;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,33
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 33, xer);
	// bne ctx_arrow(ctx)->r6,0x821da4a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA4A0;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,30312
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 30312;
	// li ctx_arrow(ctx)->r5,2905
	ctx_arrow(ctx)->r5.s64 = 2905;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// bl 0x821b80c8
	sub_821B80C8(ctx, base);
loc_821DA468:
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x821da570
	goto loc_821DA570;
loc_821DA474:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821da484
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DA484;
	// lwz ctx_arrow(ctx)->r6,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821da488
	goto loc_821DA488;
loc_821DA484:
	// lwz ctx_arrow(ctx)->r6,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821DA488:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r21,16
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r21.s64 + 16;
	// lwz ctx_arrow(ctx)->r5,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// lwz ctx_arrow(ctx)->r4,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821d9e70
	sub_821D9E70(ctx, base);
	// b 0x821da41c
	goto loc_821DA41C;
loc_821DA4A0:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r21,12
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r21.s64 + 12;
	// lwz ctx_arrow(ctx)->r4,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// bl 0x821fdb80
	sub_821FDB80(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821da570
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821DA570;
loc_821DA4C0:
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r21.u64;
	// li ctx_arrow(ctx)->r6,7
	ctx_arrow(ctx)->r6.s64 = 7;
	// li ctx_arrow(ctx)->r5,-1
	ctx_arrow(ctx)->r5.s64 = -1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// bl 0x821daa18
	sub_821DAA18(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821da570
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821DA570;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r19.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 2;
loc_821DA4F0:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821da510
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA510;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821da4f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA4F0;
loc_821DA510:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821da520
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA520;
	// sth ctx_arrow(ctx)->r20,4(ctx_arrow(ctx)->r21)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r21.u32 + 4, ctx_arrow(ctx)->r20, 0);
	// b 0x821da564
	goto loc_821DA564;
loc_821DA520:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r18.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 2;
loc_821DA52C:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821da54c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA54C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821da52c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA52C;
loc_821DA54C:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821da55c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA55C;
	// sth ctx_arrow(ctx)->r17,4(ctx_arrow(ctx)->r21)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r21.u32 + 4, ctx_arrow(ctx)->r17, 0);
	// b 0x821da564
	goto loc_821DA564;
loc_821DA55C:
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// sth ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r21)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r21.u32 + 4, ctx_arrow(ctx)->r11, 0);
loc_821DA564:
	// lwz ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// sth ctx_arrow(ctx)->r16,6(ctx_arrow(ctx)->r21)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r21.u32 + 6, ctx_arrow(ctx)->r16, 0);
	// sth ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r21)
	PPC_STORE_U16(ctx_arrow(ctx)->r21.u32 + 8, ctx_arrow(ctx)->r10.u16);
loc_821DA570:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,320
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 320;
	// b 0x823ed158
	return;
}

alias(__imp__sub_821DA578) PPC_WEAK_FUNC(sub_821DA578);
PPC_FUNC_IMPL(__imp__sub_821DA578) {
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
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d5ad0
	sub_821D5AD0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,30500
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 30500;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// std ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_821DA5F8) PPC_WEAK_FUNC(sub_821DA5F8);
PPC_FUNC_IMPL(__imp__sub_821DA5F8) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x821d5ad0
	sub_821D5AD0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,30500
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 30500;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// ld ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// ld ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16);
	// ld ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// stw ctx_arrow(ctx)->r29,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,56(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
	// stw ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_821DA690) PPC_WEAK_FUNC(sub_821DA690);
PPC_FUNC_IMPL(__imp__sub_821DA690) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,96
	ctx_arrow(ctx)->r3.s64 = 96;
	// bl 0x821d5a70
	sub_821D5A70(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821da6bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA6BC;
	// bl 0x821da578
	sub_821DA578(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x821da6c0
	goto loc_821DA6C0;
loc_821DA6BC:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_821DA6C0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821da6d0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA6D0;
loc_821DA6C8:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821da7c4
	goto loc_821DA7C4;
loc_821DA6D0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 16;
	// ld ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// ld ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// ld ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821da74c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DA74C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// beq 0x821da6c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA6C8;
loc_821DA74C:
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821da778
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DA778;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// beq 0x821da6c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA6C8;
loc_821DA778:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,68
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 68;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// subf ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r31.s64;
loc_821DA784:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821da7b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DA7B0;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r29.u32);
	// beq 0x821da6c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA6C8;
loc_821DA7B0:
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x821da784
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821DA784;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_821DA7C4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_821DA7D0) PPC_WEAK_FUNC(sub_821DA7D0);
PPC_FUNC_IMPL(__imp__sub_821DA7D0) {
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
	// li ctx_arrow(ctx)->r4,25
	ctx_arrow(ctx)->r4.s64 = 25;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821d5ad0
	sub_821D5AD0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// lis ctx_arrow(ctx)->r9,15
	ctx_arrow(ctx)->r9.s64 = 983040;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,30512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 30512;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lis ctx_arrow(ctx)->r8,228
	ctx_arrow(ctx)->r8.s64 = 14942208;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r9,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_821DA838) PPC_WEAK_FUNC(sub_821DA838);
PPC_FUNC_IMPL(__imp__sub_821DA838) {
	PPC_FUNC_PROLOGUE();
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,25
	ctx_arrow(ctx)->r4.s64 = 25;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r8.u64;
	// bl 0x821d5ad0
	sub_821D5AD0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,15
	ctx_arrow(ctx)->r10.s64 = 983040;
	// stw ctx_arrow(ctx)->r29,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 30512;
	// stw ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r9,228
	ctx_arrow(ctx)->r9.s64 = 14942208;
	// stw ctx_arrow(ctx)->r27,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r26,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_821DA8A0) PPC_WEAK_FUNC(sub_821DA8A0);
PPC_FUNC_IMPL(__imp__sub_821DA8A0) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,44
	ctx_arrow(ctx)->r3.s64 = 44;
	// bl 0x821d5a70
	sub_821D5A70(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821da8d4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA8D4;
	// bl 0x821da7d0
	sub_821DA7D0(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x821da8d8
	goto loc_821DA8D8;
loc_821DA8D4:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_821DA8D8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821da8e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA8E8;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821da94c
	goto loc_821DA94C;
loc_821DA8E8:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821da948
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DA948;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// beq 0x821da94c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DA94C;
loc_821DA948:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_821DA94C:
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

alias(__imp__sub_821DA968) PPC_WEAK_FUNC(sub_821DA968);
PPC_FUNC_IMPL(__imp__sub_821DA968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 8;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821DA988) PPC_WEAK_FUNC(sub_821DA988);
PPC_FUNC_IMPL(__imp__sub_821DA988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// blr 
	return;
}

alias(__imp__sub_821DA9A0) PPC_WEAK_FUNC(sub_821DA9A0);
PPC_FUNC_IMPL(__imp__sub_821DA9A0) {
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x821da9f4
	goto loc_821DA9F4;
loc_821DA9BC:
	// lwz ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,28,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x821da9dc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA9DC;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821da9e8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DA9E8;
loc_821DA9DC:
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_821DA9E8:
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_821DA9F4:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821da9bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DA9BC;
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

alias(__imp__sub_821DAA18) PPC_WEAK_FUNC(sub_821DAA18);
PPC_FUNC_IMPL(__imp__sub_821DAA18) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r8.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821daa58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DAA58;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821daa58
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAA58;
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x821dac00
	goto loc_821DAC00;
loc_821DAA58:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x821daa88
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAA88;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
loc_821DAA68:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821daa68
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAA68;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 1;
loc_821DAA88:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821daa94
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DAA94;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,2
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 2;
loc_821DAA94:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821dab08
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DAB08;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821dab00
	goto loc_821DAB00;
loc_821DAAA4:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821daafc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DAAFC;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x821daafc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAAFC;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq 0x821daaf4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DAAF4;
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
loc_821DAAD4:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r6.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x821daaf4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DAAF4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r7.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821daad4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAAD4;
loc_821DAAF4:
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x821dab28
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DAB28;
loc_821DAAFC:
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821DAB00:
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// bne 0x821daaa4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DAAA4;
loc_821DAB08:
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// li ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r3.s64 = 24;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x821dab58
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DAB58;
loc_821DAB1C:
	// lis ctx_arrow(ctx)->r3,-32761
	ctx_arrow(ctx)->r3.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 14;
	// b 0x821dac00
	goto loc_821DAC00;
loc_821DAB28:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821dab38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DAB38;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821DAB38:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821dabfc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DABFC;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821dabfc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DABFC;
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// b 0x821dabfc
	goto loc_821DABFC;
loc_821DAB58:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821dab98
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DAB98;
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bne 0x821dab88
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DAB88;
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// b 0x821dab1c
	goto loc_821DAB1C;
loc_821DAB88:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// b 0x821dab9c
	goto loc_821DAB9C;
loc_821DAB98:
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821DAB9C:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821dabb4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DABB4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 4, ctx_arrow(ctx)->r4.u32);
loc_821DABB4:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// stw ctx_arrow(ctx)->r27,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r25,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x821dabfc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DABFC;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821DABFC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821DAC00:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_821DAC08) PPC_WEAK_FUNC(sub_821DAC08);
PPC_FUNC_IMPL(__imp__sub_821DAC08) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, -1, xer);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bne ctx_arrow(ctx)->r6,0x821dac60
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAC60;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 2;
loc_821DAC30:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,32768
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 32768, xer);
	// bgt ctx_arrow(ctx)->r6,0x821dac6c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821DAC6C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 + -1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r4.s64 + 8;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16,1,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0x7FFF0000;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,65534
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 65534;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821dacc8
	goto loc_821DACC8;
loc_821DAC60:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821dac30
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821DAC30;
loc_821DAC6C:
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x821dacec
	goto loc_821DACEC;
loc_821DAC78:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821daca8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DACA8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 3;
	// li ctx_arrow(ctx)->r4,171
	ctx_arrow(ctx)->r4.s64 = 171;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// subf ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r29.s64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r30.u64;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r29.u64;
loc_821DACA8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
loc_821DACC8:
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne 0x821dac78
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DAC78;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,-2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 + -2;
	// li ctx_arrow(ctx)->r4,171
	ctx_arrow(ctx)->r4.s64 = 171;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r29.s64;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821DACEC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_821DACF8) PPC_WEAK_FUNC(sub_821DACF8);
PPC_FUNC_IMPL(__imp__sub_821DACF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x821dac08
	sub_821DAC08(ctx, base);
	return;
}

alias(__imp__sub_821DAD00) PPC_WEAK_FUNC(sub_821DAD00);
PPC_FUNC_IMPL(__imp__sub_821DAD00) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// b 0x821dac08
	sub_821DAC08(ctx, base);
	return;
}

alias(__imp__sub_821DAD08) PPC_WEAK_FUNC(sub_821DAD08);
PPC_FUNC_IMPL(__imp__sub_821DAD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 1;
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,111
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 111, xer);
	// beq ctx_arrow(ctx)->r6,0x821dad34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DAD34;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,114
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 114, xer);
	// beq ctx_arrow(ctx)->r6,0x821dad2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DAD2C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,101
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 101, xer);
	// bne ctx_arrow(ctx)->r6,0x821dadf0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DADF0;
loc_821DAD2C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,111
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 111, xer);
	// bne ctx_arrow(ctx)->r6,0x821dadb8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DADB8;
loc_821DAD34:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-24184
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -24184;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_821DAD40:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	// beq 0x821dad64
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DAD64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821dad40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DAD40;
loc_821DAD64:
	// cmpwi ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x821dae18
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DAE18;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-24188
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -24188;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_821DAD78:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	// beq 0x821dad9c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DAD9C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821dad78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DAD78;
loc_821DAD9C:
	// cmpwi ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x821dae18
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DAE18;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,67
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 67, xer);
	// bne ctx_arrow(ctx)->r6,0x821dae0c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAE0C;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// b 0x821dae0c
	goto loc_821DAE0C;
loc_821DADB8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,101
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 101, xer);
	// bne ctx_arrow(ctx)->r6,0x821dae0c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAE0C;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,65
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 65, xer);
	// bne ctx_arrow(ctx)->r6,0x821dade8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DADE8;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_821DADE8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,77
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 77, xer);
	// beq ctx_arrow(ctx)->r6,0x821dae0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DAE0C;
loc_821DADF0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
loc_821DADF8:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 48, xer);
	// blt ctx_arrow(ctx)->r6,0x821dadf0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821DADF0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,57
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 57, xer);
	// bgt ctx_arrow(ctx)->r6,0x821dadf0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821DADF0;
loc_821DAE0C:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821dadf8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821DADF8;
loc_821DAE18:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
}

alias(__imp__sub_821DAE20) PPC_WEAK_FUNC(sub_821DAE20);
PPC_FUNC_IMPL(__imp__sub_821DAE20) {
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x821b1028
	sub_821B1028(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821dae54
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821DAE54;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x821dae54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAE54;
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821DAE54:
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

alias(__imp__sub_821DAE68) PPC_WEAK_FUNC(sub_821DAE68);
PPC_FUNC_IMPL(__imp__sub_821DAE68) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x821db2e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DB2E4;
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
loc_821DAE94:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821dae94
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAE94;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 20, xer);
	// bge ctx_arrow(ctx)->r6,0x821db2e4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821DB2E4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lbz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821daef8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DAEF8;
loc_821DAED4:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s8;
	// bl 0x823f07f8
	sub_823F07F8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x821daef8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821DAEF8;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821daed4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821DAED4;
loc_821DAEF8:
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821daf14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DAF14;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823f0660
	sub_823F0660(ctx, base);
	// b 0x821daf18
	goto loc_821DAF18;
loc_821DAF14:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_821DAF18:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 15, xer);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bgt ctx_arrow(ctx)->r6,0x821db2e4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821DB2E4;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821daf48
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821DAF48;
	// stb ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r1.u32.u8);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

