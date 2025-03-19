#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_823F0600) PPC_WEAK_FUNC(sub_823F0600);
PPC_FUNC_IMPL(__imp__sub_823F0600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
loc_823F060C:
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u8);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// beq 0x823f062c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F062C;
	// addic. ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,-1
	xer.ca = ctx_arrow(ctx)->r5.u32 > 0;
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// bne 0x823f060c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823F060C;
loc_823F062C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,-1
	xer.ca = ctx_arrow(ctx)->r5.u32 > 0;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r5.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
loc_823F064C:
	// stb ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u8);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// bdnz 0x823f064c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823F064C;
	// blr 
	return;
}

alias(__imp__sub_823F0660) PPC_WEAK_FUNC(sub_823F0660);
PPC_FUNC_IMPL(__imp__sub_823F0660) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r5,10
	ctx_arrow(ctx)->r5.s64 = 10;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x823eedc8
	sub_823EEDC8(ctx, base);
	return;
}

alias(__imp__sub_823F0670) PPC_WEAK_FUNC(sub_823F0670);
PPC_FUNC_IMPL(__imp__sub_823F0670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// cmpw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r5.s32, ctx_arrow(ctx)->r4.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823f06b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F06B4;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// beq 0x823f06a0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F06A0;
loc_823F068C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f06c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F06C4;
	// lbzu ctx_arrow(ctx)->r5,1(ctx_arrow(ctx)->r9)
	ea = 1 + ctx_arrow(ctx)->r9.u32;
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	ctx_arrow(ctx)->r9.u32 = ea;
	// cmpw ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r4.s32, ctx_arrow(ctx)->r5.s32, xer);
	// bne 0x823f068c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823F068C;
loc_823F06A0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r9.u64;
	// lbzu ctx_arrow(ctx)->r5,1(ctx_arrow(ctx)->r9)
	ea = 1 + ctx_arrow(ctx)->r9.u32;
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	ctx_arrow(ctx)->r9.u32 = ea;
	// cmpw ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r4.s32, ctx_arrow(ctx)->r5.s32, xer);
	// beq 0x823f06a0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F06A0;
	// b 0x823f068c
	goto loc_823F068C;
loc_823F06B4:
	// beq 0x823f06c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F06C4;
	// lbzu ctx_arrow(ctx)->r5,1(ctx_arrow(ctx)->r3)
	ea = 1 + ctx_arrow(ctx)->r3.u32;
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	ctx_arrow(ctx)->r3.u32 = ea;
	// cmpwi ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// b 0x823f06b4
	goto loc_823F06B4;
loc_823F06C4:
	// blr 
	return;
}

alias(__imp__sub_823F06C8) PPC_WEAK_FUNC(sub_823F06C8);
PPC_FUNC_IMPL(__imp__sub_823F06C8) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f0750
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F0750;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
loc_823F06E8:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823f06e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F06E8;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823ed2b0
	sub_823ED2B0(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// beq 0x823f0750
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F0750;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823ee540
	sub_823EE540(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x823f0748
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F0748;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x823f3cf0
	sub_823F3CF0(ctx, base);
loc_823F0748:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// b 0x823f0754
	goto loc_823F0754;
loc_823F0750:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823F0754:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823F0760) PPC_WEAK_FUNC(sub_823F0760);
PPC_FUNC_IMPL(__imp__sub_823F0760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f0790
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F0790;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823f0790
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F0790;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,67
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 67, xer);
	// bne ctx_arrow(ctx)->r6,0x823f0788
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0788;
	// lbz ctx_arrow(ctx)->r11,1(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f0790
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F0790;
loc_823F0788:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
loc_823F0790:
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-21408
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -21408;
	// blr 
	return;
}

alias(__imp__sub_823F07A0) PPC_WEAK_FUNC(sub_823F07A0);
PPC_FUNC_IMPL(__imp__sub_823F07A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	uint32_t ea{};
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 + -1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + -1;
loc_823F07A8:
	// lbzu ctx_arrow(ctx)->r6,1(ctx_arrow(ctx)->r4)
	ea = 1 + ctx_arrow(ctx)->r4.u32;
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	ctx_arrow(ctx)->r4.u32 = ea;
	// lbzu ctx_arrow(ctx)->r5,1(ctx_arrow(ctx)->r9)
	ea = 1 + ctx_arrow(ctx)->r9.u32;
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	ctx_arrow(ctx)->r9.u32 = ea;
	// cmpwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r7.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// subf. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r5.s64 - ctx_arrow(ctx)->r6.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r7,0x823f07f0
	if (ctx_arrow(ctx)->r7.eq()) goto loc_823F07F0;
	// beq 0x823f07a8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F07A8;
	// cmpwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6,65
	ctx_arrow(ctx)->r5.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 65, xer);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,90
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 90, xer);
	// blt ctx_arrow(ctx)->r5,0x823f07d4
	if (ctx_arrow(ctx)->r5.lt()) goto loc_823F07D4;
	// bgt ctx_arrow(ctx)->r6,0x823f07d4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823F07D4;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,32
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 32;
loc_823F07D4:
	// cmpwi ctx_arrow(ctx)->r5,65
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 65, xer);
	// cmpwi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r5,90
	ctx_arrow(ctx)->r1.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 90, xer);
	// blt 0x823f07e8
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823F07E8;
	// bgt ctx_arrow(ctx)->r1,0x823f07e8
	if (ctx_arrow(ctx)->r1.gt()) goto loc_823F07E8;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,32
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u64 | 32;
loc_823F07E8:
	// subf. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r5.s64 - ctx_arrow(ctx)->r6.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x823f07a8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F07A8;
loc_823F07F0:
	// blr 
	return;
}

alias(__imp__sub_823F07F8) PPC_WEAK_FUNC(sub_823F07F8);
PPC_FUNC_IMPL(__imp__sub_823F07F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-19680
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -19680;
	// lwz ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// andi. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,259
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 & 259;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blr 
	return;
}

alias(__imp__sub_823F0818) PPC_WEAK_FUNC(sub_823F0818);
PPC_FUNC_IMPL(__imp__sub_823F0818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-19680
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -19680;
	// lwz ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// blr 
	return;
}

alias(__imp__sub_823F0838) PPC_WEAK_FUNC(sub_823F0838);
PPC_FUNC_IMPL(__imp__sub_823F0838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-19680
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -19680;
	// lwz ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0,24,24
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80;
	// blr 
	return;
}

alias(__imp__sub_823F0858) PPC_WEAK_FUNC(sub_823F0858);
PPC_FUNC_IMPL(__imp__sub_823F0858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-19680
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -19680;
	// lwz ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0,28,28
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x8;
	// blr 
	return;
}

alias(__imp__sub_823F0878) PPC_WEAK_FUNC(sub_823F0878);
PPC_FUNC_IMPL(__imp__sub_823F0878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-19680
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -19680;
	// lwz ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// andi. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,263
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 & 263;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blr 
	return;
}

alias(__imp__sub_823F0898) PPC_WEAK_FUNC(sub_823F0898);
PPC_FUNC_IMPL(__imp__sub_823F0898) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823f08ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F08EC;
	// bl 0x823f3de0
	sub_823F3DE0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,22
	ctx_arrow(ctx)->r10.s64 = 22;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f3ca8
	sub_823F3CA8(&ctx);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f1,2752(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823f0980
	goto loc_823F0980;
loc_823F08EC:
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-19456
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -19456;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_823F08F8:
	// lwz ctx_arrow(ctx)->r10,172(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x823f091c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F091C;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// lbz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823f7db8
	sub_823F7DB8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x823f0930
	goto loc_823F0930;
loc_823F091C:
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,200(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 1);
	// lhzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,0,28,28
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x8;
loc_823F0930:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f0940
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F0940;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// b 0x823f08f8
	goto loc_823F08F8;
loc_823F0940:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
loc_823F0948:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823f0948
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0948;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// rotlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823f8dc8
	sub_823F8DC8(ctx, base);
	// lfd f1,16(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
loc_823F0980:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
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

alias(__imp__sub_823F0998) PPC_WEAK_FUNC(sub_823F0998);
PPC_FUNC_IMPL(__imp__sub_823F0998) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x823f0898
	sub_823F0898(ctx, base);
	return;
}

alias(__imp__sub_823F09A0) PPC_WEAK_FUNC(sub_823F09A0);
PPC_FUNC_IMPL(__imp__sub_823F09A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,-97
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + -97;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 25, xer);
	// bgtlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.gt()) return;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-32
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -32;
	// blr 
	return;
}

alias(__imp__sub_823F09B8) PPC_WEAK_FUNC(sub_823F09B8);
PPC_FUNC_IMPL(__imp__sub_823F09B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stfd f1,16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 16);
	// stfd f2,24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 24);
	// lfd f0,2752(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// stfd f0,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,1,31
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0x7FFFFFFF) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF80000000);
	// stw ctx_arrow(ctx)->r9,-12(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lfd f1,-16(ctx_arrow(ctx)->r1)
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823F09F0) PPC_WEAK_FUNC(sub_823F09F0);
PPC_FUNC_IMPL(__imp__sub_823F09F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// stfd f1,16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 16);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lfd f0,2752(ctx_arrow(ctx)->r10)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfd f0,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// not ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r11.u64;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,1,31
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0x7FFFFFFF) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF80000000);
	// stw ctx_arrow(ctx)->r9,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,-12(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -12, ctx_arrow(ctx)->r4.u32);
	// lfd f1,-16(ctx_arrow(ctx)->r1)
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823F0A20) PPC_WEAK_FUNC(sub_823F0A20);
PPC_FUNC_IMPL(__imp__sub_823F0A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stfd f1,16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 16);
	// lhz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 16);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,17,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x7FF0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-32752
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -32752;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// blr 
	return;
}

alias(__imp__sub_823F0A40) PPC_WEAK_FUNC(sub_823F0A40);
PPC_FUNC_IMPL(__imp__sub_823F0A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// stfd f1,16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 16);
	// lhz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 16);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,17,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32752
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32752, xer);
	// bne ctx_arrow(ctx)->r6,0x823f0a6c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0A6C;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,13
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x7FFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x823f0a74
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823F0A74;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823f0a74
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0A74;
loc_823F0A6C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32760
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32760, xer);
	// bne ctx_arrow(ctx)->r6,0x823f0a7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0A7C;
loc_823F0A74:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
loc_823F0A7C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823F0A88) PPC_WEAK_FUNC(sub_823F0A88);
PPC_FUNC_IMPL(__imp__sub_823F0A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// stfd f1,112(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// lhz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 112);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,17,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,32752
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 32752, xer);
	// bne ctx_arrow(ctx)->r6,0x823f0ae0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0AE0;
	// bl 0x823f7780
	sub_823F7780(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823f0ad8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F0AD8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823f0ad0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F0AD0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,-3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + -3;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// b 0x823f0b4c
	goto loc_823F0B4C;
loc_823F0AD0:
	// li ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = 4;
	// b 0x823f0b4c
	goto loc_823F0B4C;
loc_823F0AD8:
	// li ctx_arrow(ctx)->r3,512
	ctx_arrow(ctx)->r3.s64 = 512;
	// b 0x823f0b4c
	goto loc_823F0B4C;
loc_823F0AE0:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,16,16
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x8000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823f0b1c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0B1C;
	// lwz ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x823f0b04
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823F0B04;
	// lwz ctx_arrow(ctx)->r10,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f0b1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F0B1C;
loc_823F0B04:
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 128;
	// b 0x823f0b4c
	goto loc_823F0B4C;
loc_823F0B1C:
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// lfd f0,2752(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// bne ctx_arrow(ctx)->r6,0x823f0b40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0B40;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 64;
	// b 0x823f0b4c
	goto loc_823F0B4C;
loc_823F0B40:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,28,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 256;
loc_823F0B4C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823F0B60) PPC_WEAK_FUNC(sub_823F0B60);
PPC_FUNC_IMPL(__imp__sub_823F0B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// stfd f13,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21392
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21392;
	// lfs f0,176(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f0b9c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F0B9C;
	// lfd f12,48(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f13,f12
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble ctx_arrow(ctx)->r6,0x823f0b90
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F0B90;
	// lfd f0,8(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823f0c2c
	goto loc_823F0C2C;
loc_823F0B90:
	// li ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 2;
	// fdiv f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64 / ctx.f13.f64;
	// b 0x823f0ba0
	goto loc_823F0BA0;
loc_823F0B9C:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_823F0BA0:
	// lfd f12,24(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f13,f12
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble ctx_arrow(ctx)->r6,0x823f0bc0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F0BC0;
	// lfd f12,40(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// fadd f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 + ctx.f13.f64;
	// fmsub f0,f12,f13,f0
	f0.f64 = ctx.f12.f64 * ctx.f13.f64 - f0.f64;
	// fdiv f13,f0,f11
	ctx.f13.f64 = f0.f64 / ctx.f11.f64;
loc_823F0BC0:
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// lfd f11,112(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f12,80(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// fadd f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 + f0.f64;
	// lfd f11,72(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f12,f0,f11
	ctx.f11.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,104(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,64(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,96(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,56(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,88(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// fdiv f0,f0,f12
	f0.f64 = f0.f64 / ctx.f12.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// ble ctx_arrow(ctx)->r6,0x823f0c1c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F0C1C;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_823F0C1C:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 128;
	// lfdx f13,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
loc_823F0C2C:
	// ld ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpdi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r11.s64, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

alias(__imp__sub_823F0C48) PPC_WEAK_FUNC(sub_823F0C48);
PPC_FUNC_IMPL(__imp__sub_823F0C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// stfd f1,16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 16);
	// stfd f2,24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 24);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21392
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21392;
	// lfs f0,168(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f2,f0
	ctx_arrow(ctx)->r6.compare(ctx.f2.f64, f0.f64);
	// bne ctx_arrow(ctx)->r6,0x823f0ca0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0CA0;
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// bne ctx_arrow(ctx)->r6,0x823f0c98
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0C98;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x80000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x80000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f0c90
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F0C90;
	// lfd f0,16(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_823F0C90:
	// lfd f1,16(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823F0C98:
	// lfd f0,8(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823f0d58
	goto loc_823F0D58;
loc_823F0CA0:
	// fabs f12,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f0cc4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F0CC4;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 2;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_823F0CC4:
	// fdiv f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 / f0.f64;
	// lfd f0,24(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f0cec
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F0CEC;
	// lfd f0,40(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// lfs f12,176(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadd f11,f0,f13
	ctx.f11.f64 = f0.f64 + ctx.f13.f64;
	// fmsub f0,f0,f13,f12
	f0.f64 = f0.f64 * ctx.f13.f64 - ctx.f12.f64;
	// fdiv f13,f0,f11
	ctx.f13.f64 = f0.f64 / ctx.f11.f64;
loc_823F0CEC:
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// lfd f11,112(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f12,80(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// fadd f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 + f0.f64;
	// lfd f11,72(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f12,f0,f11
	ctx.f11.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,104(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,64(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,96(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,56(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,88(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// fdiv f0,f0,f12
	f0.f64 = f0.f64 / ctx.f12.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// ble ctx_arrow(ctx)->r6,0x823f0d48
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F0D48;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_823F0D48:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 128;
	// lfdx f13,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
loc_823F0D58:
	// lfd f13,16(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// fsel f1,f2,f0,f13
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

alias(__imp__sub_823F0D78) PPC_WEAK_FUNC(sub_823F0D78);
PPC_FUNC_IMPL(__imp__sub_823F0D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21208
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21208;
	// lfs f0,12(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f0db4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F0DB4;
	// lfs f12,4(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,1
	xer.ca = ctx_arrow(ctx)->r4.u32 <= 1;
	ctx_arrow(ctx)->r10.s64 = 1 - ctx_arrow(ctx)->r4.s64;
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f11,8(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(f0.f64);
	// fmul f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 * ctx.f11.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x823f0dd0
	goto loc_823F0DD0;
loc_823F0DB4:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64;
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823f0dd0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0DD0;
	// lfs f12,0(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f12
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
loc_823F0DD0:
	// lfd f11,120(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// fadd f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 + f0.f64;
	// lfd f12,80(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f11,72(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fmadd f11,f12,f0,f11
	ctx.f11.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,112(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,64(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,104(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,56(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,96(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,48(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,88(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// fdiv f0,f0,f12
	f0.f64 = f0.f64 / ctx.f12.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// bne ctx_arrow(ctx)->r6,0x823f0e50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0E50;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// lfdx f13,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
loc_823F0E50:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// lfdx f13,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lfdx f12,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// fadd f0,f12,f0
	f0.f64 = ctx.f12.f64 + f0.f64;
	// fsel f1,f1,f13,f0
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// blr 
	return;
}

alias(__imp__sub_823F0E70) PPC_WEAK_FUNC(sub_823F0E70);
PPC_FUNC_IMPL(__imp__sub_823F0E70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21208
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21208;
	// lfs f0,12(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f0eac
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F0EAC;
	// lfs f12,4(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f11,8(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(f0.f64);
	// fmul f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 * ctx.f11.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x823f0ec0
	goto loc_823F0EC0;
loc_823F0EAC:
	// lfs f12,0(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fcmpu ctx_arrow(ctx)->r6,f1,f12
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
loc_823F0EC0:
	// lfd f11,120(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fadd f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 + f0.f64;
	// lfd f12,80(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f11,72(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// fmadd f11,f12,f0,f11
	ctx.f11.f64 = ctx.f12.f64 * f0.f64 + ctx.f11.f64;
	// lfd f12,112(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// lfdx f9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx.f9.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,64(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,104(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,56(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,96(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,48(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,88(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// fdiv f0,f0,f12
	f0.f64 = f0.f64 / ctx.f12.f64;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// fadd f0,f0,f9
	f0.f64 = f0.f64 + ctx.f9.f64;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

alias(__imp__sub_823F0F38) PPC_WEAK_FUNC(sub_823F0F38);
PPC_FUNC_IMPL(__imp__sub_823F0F38) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// b 0x823f0d78
	sub_823F0D78(ctx, base);
	return;
}

alias(__imp__sub_823F0F40) PPC_WEAK_FUNC(sub_823F0F40);
PPC_FUNC_IMPL(__imp__sub_823F0F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stfd f1,16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 16);
	// lfd f8,2728(ctx_arrow(ctx)->r11)
	ctx.f8.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f8
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, ctx.f8.f64);
	// bne ctx_arrow(ctx)->r6,0x823f0f60
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0F60;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f1,2752(ctx_arrow(ctx)->r11)
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823F0F60:
	// lhz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 16);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,17,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,32752
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 32752, xer);
	// bne ctx_arrow(ctx)->r6,0x823f0f90
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0F90;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfd f0,9296(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// bgtlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.gt()) return;
loc_823F0F80:
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfd f0,-19440(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
loc_823F0F88:
	// fneg f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_823F0F90:
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lfd f0,2752(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// bgt ctx_arrow(ctx)->r6,0x823f0fb4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823F0FB4;
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// bne ctx_arrow(ctx)->r6,0x823f0f80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F0F80;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfd f0,-19448(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823f0f88
	goto loc_823F0F88;
loc_823F0FB4:
	// lis ctx_arrow(ctx)->r9,-32249
	ctx_arrow(ctx)->r9.s64 = -2113470464;
	// lfd f0,9288(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x823f0fe4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823F0FE4;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfd f0,9280(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * f0.f64;
	// stfd f1,16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 16);
	// lhz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 16);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28,21,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 28) & 0x7FF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1075
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1075;
	// b 0x823f0fec
	goto loc_823F0FEC;
loc_823F0FE4:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,28,20,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 28) & 0xFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1022
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1022;
loc_823F0FEC:
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32783
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 32783;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stfd f1,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16352
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 16352;
	// sth ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r11, 0);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9160
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 9160;
	// lfd f13,0(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f0,-16(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// lfd f13,28168(ctx_arrow(ctx)->r9)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// ble ctx_arrow(ctx)->r6,0x823f1030
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F1030;
	// fsub f12,f0,f13
	ctx.f12.f64 = f0.f64 - ctx.f13.f64;
	// fadd f11,f0,f8
	ctx.f11.f64 = f0.f64 + ctx.f8.f64;
	// fsub f0,f12,f13
	f0.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// b 0x823f1040
	goto loc_823F1040;
loc_823F1030:
	// fsub f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 - ctx.f13.f64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// fadd f12,f0,f8
	ctx.f12.f64 = f0.f64 + ctx.f8.f64;
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
loc_823F1040:
	// extsw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s32;
	// fdiv f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64 / ctx.f13.f64;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// lfd f10,8(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lfd f11,9272(ctx_arrow(ctx)->r10)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// lfd f9,9264(ctx_arrow(ctx)->r10)
	ctx.f9.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// fsub f7,f0,f9
	ctx.f7.f64 = f0.f64 - ctx.f9.f64;
	// lfd f9,9256(ctx_arrow(ctx)->r10)
	ctx.f9.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f12,-16(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmul f6,f12,f9
	ctx.f6.f64 = ctx.f12.f64 * ctx.f9.f64;
	// lfd f9,40(ctx_arrow(ctx)->r11)
	ctx.f9.u64 = PPC_Read_U64(ctx,  ctx);
	// fnmsub f9,f0,f11,f9
	ctx.f9.f64 = -(f0.f64 * ctx.f11.f64 - ctx.f9.f64);
	// lfd f11,64(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// fmadd f7,f7,f0,f11
	ctx.f7.f64 = ctx.f7.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,9248(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// fmsub f9,f9,f0,f11
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 - ctx.f11.f64;
	// lfd f11,9240(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fmsub f11,f7,f0,f11
	ctx.f11.f64 = ctx.f7.f64 * f0.f64 - ctx.f11.f64;
	// fmul f0,f9,f0
	f0.f64 = ctx.f9.f64 * f0.f64;
	// fdiv f0,f0,f11
	f0.f64 = f0.f64 / ctx.f11.f64;
	// fadd f0,f0,f8
	f0.f64 = f0.f64 + ctx.f8.f64;
	// fmsub f0,f0,f13,f6
	f0.f64 = f0.f64 * ctx.f13.f64 - ctx.f6.f64;
	// fmadd f1,f12,f10,f0
	ctx.f1.f64 = ctx.f12.f64 * ctx.f10.f64 + f0.f64;
	// blr 
	return;
}

alias(__imp__sub_823F10C0) PPC_WEAK_FUNC(sub_823F10C0);
PPC_FUNC_IMPL(__imp__sub_823F10C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x823f0f40
	sub_823F0F40(&ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfd f0,9184(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * f0.f64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823F10F0) PPC_WEAK_FUNC(sub_823F10F0);
PPC_FUNC_IMPL(__imp__sub_823F10F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	uint32_t ea{};
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// beq 0x823f1114
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1114;
loc_823F10FC:
	// cmpwi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r1.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r6.s32, ctx_arrow(ctx)->r4.s32, xer);
	// beq ctx_arrow(ctx)->r1,0x823f1124
	if (ctx_arrow(ctx)->r1.eq()) goto loc_823F1124;
	// beq 0x823f1128
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1128;
	// lbzu ctx_arrow(ctx)->r6,1(ctx_arrow(ctx)->r3)
	ea = 1 + ctx_arrow(ctx)->r3.u32;
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	ctx_arrow(ctx)->r3.u32 = ea;
	// b 0x823f10fc
	goto loc_823F10FC;
loc_823F1114:
	// cmpwi ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// beq 0x823f1128
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1128;
	// lbzu ctx_arrow(ctx)->r6,1(ctx_arrow(ctx)->r3)
	ea = 1 + ctx_arrow(ctx)->r3.u32;
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	ctx_arrow(ctx)->r3.u32 = ea;
	// b 0x823f1114
	goto loc_823F1114;
loc_823F1124:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823F1128:
	// blr 
	return;
}

alias(__imp__sub_823F1130) PPC_WEAK_FUNC(sub_823F1130);
PPC_FUNC_IMPL(__imp__sub_823F1130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u32 & 0x3;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// beq 0x823f1168
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1168;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823f114c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F114C;
	// li ctx_arrow(ctx)->r11,768
	ctx_arrow(ctx)->r11.s64 = 768;
	// b 0x823f1168
	goto loc_823F1168;
loc_823F114C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823f115c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F115C;
	// li ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.s64 = 512;
	// b 0x823f1168
	goto loc_823F1168;
loc_823F115C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823f1168
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1168;
	// li ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.s64 = 256;
loc_823F1168:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,28,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f1174
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1174;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1;
loc_823F1174:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,26,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f1180
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1180;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2;
loc_823F1180:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,25,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x40;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f118c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F118C;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4;
loc_823F118C:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f1198
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1198;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8;
loc_823F1198:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,24,24
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x80;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f11a4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F11A4;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 16;
loc_823F11A4:
	// oris ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 | 524288;
	// blr 
	return;
}

alias(__imp__sub_823F11B0) PPC_WEAK_FUNC(sub_823F11B0);
PPC_FUNC_IMPL(__imp__sub_823F11B0) {
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
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,0,22,23
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 0) & 0x300;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,0,24,21
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,22,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x300;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823f1204
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1204;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,768
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 768, xer);
	// bne ctx_arrow(ctx)->r6,0x823f11e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F11E8;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x823f1204
	goto loc_823F1204;
loc_823F11E8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 512, xer);
	// bne ctx_arrow(ctx)->r6,0x823f11f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F11F8;
	// li ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r3.s64 = 2;
	// b 0x823f1204
	goto loc_823F1204;
loc_823F11F8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 256, xer);
	// bne ctx_arrow(ctx)->r6,0x823f1204
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1204;
	// li ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r3.s64 = 3;
loc_823F1204:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823f1210
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1210;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 8;
loc_823F1210:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823f121c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F121C;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 32;
loc_823F121C:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823f1228
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1228;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 64;
loc_823F1228:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823f1234
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1234;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16;
loc_823F1234:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823f1240
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1240;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,128
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 128;
loc_823F1240:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,22,23
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x300;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// beq 0x823f1278
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1278;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,768
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 768, xer);
	// bne ctx_arrow(ctx)->r6,0x823f125c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F125C;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x823f1278
	goto loc_823F1278;
loc_823F125C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 512, xer);
	// bne ctx_arrow(ctx)->r6,0x823f126c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F126C;
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// b 0x823f1278
	goto loc_823F1278;
loc_823F126C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,256
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 256, xer);
	// bne ctx_arrow(ctx)->r6,0x823f1278
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1278;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
loc_823F1278:
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f1284
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1284;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8;
loc_823F1284:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,30,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f1290
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1290;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 32;
loc_823F1290:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f129c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F129C;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 64;
loc_823F129C:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,28,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f12a8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F12A8;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 16;
loc_823F12A8:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823f12b4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F12B4;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 128;
loc_823F12B4:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,24,8,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 24) & 0xFFFFFF;
	// or ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// bl 0x823f8d20
	sub_823F8D20(ctx, base);
	// bl 0x823f1130
	sub_823F1130(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x823f8d20
	sub_823F8D20(ctx, base);
	// bl 0x823f1130
	sub_823F1130(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFFFFF;
	// lis ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = 524288;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,12
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF8001F;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 31;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823f12f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F12F8;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823F12F8:
	// bl 0x824101ec
	__imp__KeEnableFpuExceptions(ctx, base);
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

alias(__imp__sub_823F1318) PPC_WEAK_FUNC(sub_823F1318);
PPC_FUNC_IMPL(__imp__sub_823F1318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r4,-8
	ctx_arrow(ctx)->r4.s64 = -524288;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1792
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 1792;
	// bl 0x823f8d20
	sub_823F8D20(ctx, base);
	// bl 0x823f1130
	sub_823F1130(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823F1348) PPC_WEAK_FUNC(sub_823F1348);
PPC_FUNC_IMPL(__imp__sub_823F1348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f1364
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F1364;
	// li ctx_arrow(ctx)->r10,45
	ctx_arrow(ctx)->r10.s64 = 45;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 1;
	// neg ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.s64 = -ctx_arrow(ctx)->r3.s64;
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u8);
loc_823F1364:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
loc_823F1368:
	// divwu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u32 = ctx_arrow(ctx)->r3.u32 / ctx_arrow(ctx)->r5.u32;
	// twllei ctx_arrow(ctx)->r5,0
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r5.s32);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r10.s64;
	// divwu ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.u32 = ctx_arrow(ctx)->r3.u32 / ctx_arrow(ctx)->r5.u32;
	// twllei ctx_arrow(ctx)->r5,0
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 9, xer);
	// ble ctx_arrow(ctx)->r6,0x823f1390
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F1390;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,87
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 87;
	// b 0x823f1394
	goto loc_823F1394;
loc_823F1390:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,48
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 48;
loc_823F1394:
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u8);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// bne ctx_arrow(ctx)->r6,0x823f1368
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1368;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u8);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
loc_823F13B0:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u8);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r9.u32 + 0, ctx_arrow(ctx)->r4.u8);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823f13b0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823F13B0;
	// blr 
	return;
}

alias(__imp__sub_823F13D8) PPC_WEAK_FUNC(sub_823F13D8);
PPC_FUNC_IMPL(__imp__sub_823F13D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// bl 0x823f1348
	sub_823F1348(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823F1400) PPC_WEAK_FUNC(sub_823F1400);
PPC_FUNC_IMPL(__imp__sub_823F1400) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stfd f30,-24(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// stfd f31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,2752(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fabs f13,f30
	ctx.f13.u64 = f30.u64 & ~0x8000000000000000;
	// fcmpu ctx_arrow(ctx)->r6,f30,f0
	ctx_arrow(ctx)->r6.compare(f30.f64, f0.f64);
	// bne ctx_arrow(ctx)->r6,0x823f1430
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1430;
	// b 0x823f14e8
	goto loc_823F14E8;
loc_823F1430:
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9352
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 9352;
	// lfd f0,-32(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f1490
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F1490;
	// lfd f0,-40(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f145c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F145C;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,2728(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823f14e0
	goto loc_823F14E0;
loc_823F145C:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// lfd f31,27256(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 * f31.f64;
	// bl 0x823f1b90
	sub_823F1B90(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,2728(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fadd f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 + f0.f64;
	// fdiv f13,f0,f13
	ctx.f13.f64 = f0.f64 / ctx.f13.f64;
	// lfd f0,28168(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fsub f0,f0,f13
	f0.f64 = f0.f64 - ctx.f13.f64;
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// b 0x823f14e0
	goto loc_823F14E0;
loc_823F1490:
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// lfd f11,16(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f12,9392(ctx_arrow(ctx)->r10)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// fadd f10,f0,f11
	ctx.f10.f64 = f0.f64 + ctx.f11.f64;
	// lfd f11,-16(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fnmsub f11,f0,f12,f11
	ctx.f11.f64 = -(f0.f64 * ctx.f12.f64 - ctx.f11.f64);
	// lfd f12,8(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,9384(ctx_arrow(ctx)->r10)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmsub f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 - ctx.f12.f64;
	// lfd f12,0(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmadd f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fdiv f12,f0,f12
	ctx.f12.f64 = f0.f64 / ctx.f12.f64;
	// lfd f0,2728(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fadd f0,f12,f0
	f0.f64 = ctx.f12.f64 + f0.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
loc_823F14E0:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f1,f30,f0,f13
	ctx.f1.f64 = f30.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
loc_823F14E8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f30,-24(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-16(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823F1500) PPC_WEAK_FUNC(sub_823F1500);
PPC_FUNC_IMPL(__imp__sub_823F1500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,2752(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9400
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 9400;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-21072
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -21072;
	// lfd f0,0(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f0,f1,f0
	f0.f64 = ctx.f1.f64 * f0.f64;
	// lfd f12,0(ctx_arrow(ctx)->r10)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f11,8(ctx_arrow(ctx)->r10)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// lfd f9,80(ctx_arrow(ctx)->r11)
	ctx.f9.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f10,9512(ctx_arrow(ctx)->r10)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// fctid f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// fnmsub f0,f12,f13,f1
	f0.f64 = -(ctx.f12.f64 * ctx.f13.f64 - ctx.f1.f64);
	// lfd f12,32(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fnmsub f13,f11,f13,f0
	ctx.f13.f64 = -(ctx.f11.f64 * ctx.f13.f64 - f0.f64);
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// ld ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// fnmsub f11,f0,f10,f12
	ctx.f11.f64 = -(f0.f64 * ctx.f10.f64 - ctx.f12.f64);
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,63
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0x1;
	// cmpdi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r10.s64, 0, xer);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// lfd f12,9504(ctx_arrow(ctx)->r10)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// fmsub f10,f0,f9,f12
	ctx.f10.f64 = f0.f64 * ctx.f9.f64 - ctx.f12.f64;
	// lfd f12,9496(ctx_arrow(ctx)->r10)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// fmsub f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 - ctx.f12.f64;
	// lfd f12,64(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,48(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f9,f11,f0,f12
	ctx.f9.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f11,9488(ctx_arrow(ctx)->r10)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fmsub f11,f10,f0,f11
	ctx.f11.f64 = ctx.f10.f64 * f0.f64 - ctx.f11.f64;
	// fmul f13,f9,f13
	ctx.f13.f64 = ctx.f9.f64 * ctx.f13.f64;
	// fmadd f0,f11,f0,f12
	f0.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// beq ctx_arrow(ctx)->r6,0x823f15b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F15B4;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// b 0x823f15b8
	goto loc_823F15B8;
loc_823F15B4:
	// fdiv f0,f13,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64 / f0.f64;
loc_823F15B8:
	// fabs f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfd f13,16(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfd f13,-19440(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fsel f1,f12,f13,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// blr 
	return;
}

alias(__imp__sub_823F15D8) PPC_WEAK_FUNC(sub_823F15D8);
PPC_FUNC_IMPL(__imp__sub_823F15D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stfd f30,-48(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -48);
	// stfd f31,-40(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -40);
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-16377
	ctx_arrow(ctx)->r11.s64 = -1073283072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li ctx_arrow(ctx)->r3,248
	ctx_arrow(ctx)->r3.s64 = 248;
	// stfd f31,160(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 160);
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,65279
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 | 65279;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823f8d20
	sub_823F8D20(ctx, base);
	// lhz ctx_arrow(ctx)->r11,160(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 160);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,17,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32752
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32752, xer);
	// bne ctx_arrow(ctx)->r6,0x823f1678
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1678;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823f7780
	sub_823F7780(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble 0x823f1664
	if ((((((((((((((!ctx)))))))))))))->r0.gt()) goto loc_823F1664;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x823f1650
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F1650;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823f1664
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1664;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r3.s64 = 31;
	// bl 0x823f8a58
	sub_823F8A58(ctx, base);
	// b 0x823f182c
	goto loc_823F182C;
loc_823F1650:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823f8d20
	sub_823F8D20(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x823f182c
	goto loc_823F182C;
loc_823F1664:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r3.s64 = 8;
	// lfd f0,2728(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + f0.f64;
	// b 0x823f181c
	goto loc_823F181C;
loc_823F1678:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,2752(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f31,f0
	ctx_arrow(ctx)->r6.compare(f31.f64, f0.f64);
	// beq ctx_arrow(ctx)->r6,0x823f1650
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F1650;
	// fneg f13,f31
	ctx.f13.u64 = f31.u64 ^ 0x8000000000000000;
	// li ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r31.s64 = -1;
	// fcmpu ctx_arrow(ctx)->r6,f31,f0
	ctx_arrow(ctx)->r6.compare(f31.f64, f0.f64);
	// fsel f1,f31,f31,f13
	ctx.f1.f64 = f31.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// blt ctx_arrow(ctx)->r6,0x823f16a0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823F16A0;
	// li ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = 1;
loc_823F16A0:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f30,2728(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// fcmpu ctx_arrow(ctx)->r6,f1,f30
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f30.f64);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9520
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 9520;
	// ble ctx_arrow(ctx)->r6,0x823f1750
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F1750;
	// lfd f0,8(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f171c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F171C;
	// lfd f0,16(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f16e4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F16E4;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfd f0,-19448(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f2,f0,f31
	ctx.f2.f64 = f0.f64 * f31.f64;
loc_823F16DC:
	// li ctx_arrow(ctx)->r3,17
	ctx_arrow(ctx)->r3.s64 = 17;
	// b 0x823f181c
	goto loc_823F181C;
loc_823F16E4:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823f1c70
	sub_823F1C70(ctx, base);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,1024
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 1024, xer);
	// stw ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x823f1710
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F1710;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,-1536
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + -1536;
	// bl 0x823f7708
	sub_823F7708(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x823f16dc
	goto loc_823F16DC;
loc_823F1710:
	// bl 0x823f7708
	sub_823F7708(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x823f1740
	goto loc_823F1740;
loc_823F171C:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823f1c70
	sub_823F1C70(ctx, base);
	// lwz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823f7708
	sub_823F7708(ctx, base);
	// fdiv f0,f30,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64 / ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fsub f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 - f0.f64;
	// lfd f0,28168(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f30,f13,f0
	f30.f64 = ctx.f13.f64 * f0.f64;
loc_823F1740:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823f17f8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823F17F8;
	// fneg f30,f30
	ctx.fpscr.disableFlushMode();
	f30.u64 = f30.u64 ^ 0x8000000000000000;
	// b 0x823f17f8
	goto loc_823F17F8;
loc_823F1750:
	// lfd f0,0(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x823f17a0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823F17A0;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// stfd f30,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lhz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 88);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,17,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x7FF0;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823f17f8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823F17F8;
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x823f1788
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823F1788;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f17f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F17F8;
loc_823F1788:
	// li ctx_arrow(ctx)->r4,1536
	ctx_arrow(ctx)->r4.s64 = 1536;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823f7748
	sub_823F7748(ctx, base);
	// li ctx_arrow(ctx)->r3,18
	ctx_arrow(ctx)->r3.s64 = 18;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x823f181c
	goto loc_823F181C;
loc_823F17A0:
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// fmul f0,f31,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 * f31.f64;
	// lfd f13,9632(ctx_arrow(ctx)->r10)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// lfd f12,9624(ctx_arrow(ctx)->r10)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fsub f11,f0,f12
	ctx.f11.f64 = f0.f64 - ctx.f12.f64;
	// lfd f12,40(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fnmsub f12,f0,f13,f12
	ctx.f12.f64 = -(f0.f64 * ctx.f13.f64 - ctx.f12.f64);
	// lfd f13,64(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// fmadd f11,f11,f0,f13
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f13.f64;
	// lfd f13,9616(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// fmsub f12,f12,f0,f13
	ctx.f12.f64 = ctx.f12.f64 * f0.f64 - ctx.f13.f64;
	// lfd f13,9608(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// fmsub f11,f11,f0,f13
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 - ctx.f13.f64;
	// lfd f13,9600(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fmsub f13,f12,f0,f13
	ctx.f13.f64 = ctx.f12.f64 * f0.f64 - ctx.f13.f64;
	// fdiv f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 / ctx.f11.f64;
	// fmadd f0,f13,f0,f30
	f0.f64 = ctx.f13.f64 * f0.f64 + f30.f64;
	// fmul f30,f0,f31
	f30.f64 = f0.f64 * f31.f64;
loc_823F17F8:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823f1814
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1814;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823f8d20
	sub_823F8D20(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x823f182c
	goto loc_823F182C;
loc_823F1814:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r3.s64 = 16;
loc_823F181C:
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r4.s64 = 31;
	// bl 0x823f8b60
	sub_823F8B60(ctx, base);
loc_823F182C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lfd f30,-48(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-40(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823F1840) PPC_WEAK_FUNC(sub_823F1840);
PPC_FUNC_IMPL(__imp__sub_823F1840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stfd f30,-40(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -40);
	// stfd f31,-32(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-16377
	ctx_arrow(ctx)->r11.s64 = -1073283072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li ctx_arrow(ctx)->r3,248
	ctx_arrow(ctx)->r3.s64 = 248;
	// stfd f31,144(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 144);
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,65279
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 | 65279;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823f8d20
	sub_823F8D20(ctx, base);
	// lhz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 144);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,17,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32752
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32752, xer);
	// bne ctx_arrow(ctx)->r6,0x823f18ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F18EC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823f7780
	sub_823F7780(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble 0x823f18d8
	if ((((((((((((((!ctx)))))))))))))->r0.gt()) goto loc_823F18D8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x823f18c0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F18C0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823f18d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F18D8;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li ctx_arrow(ctx)->r3,19
	ctx_arrow(ctx)->r3.s64 = 19;
	// bl 0x823f8a58
	sub_823F8A58(ctx, base);
	// b 0x823f19e4
	goto loc_823F19E4;
loc_823F18C0:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823f8d20
	sub_823F8D20(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfd f1,-19448(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823f19e4
	goto loc_823F19E4;
loc_823F18D8:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r3.s64 = 8;
	// lfd f0,2728(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + f0.f64;
	// b 0x823f19d4
	goto loc_823F19D4;
loc_823F18EC:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,2752(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f31,f0
	ctx_arrow(ctx)->r6.compare(f31.f64, f0.f64);
	// bne ctx_arrow(ctx)->r6,0x823f1914
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1914;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823f8d20
	sub_823F8D20(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f1,2728(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823f19e4
	goto loc_823F19E4;
loc_823F1914:
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = f31.u64 ^ 0x8000000000000000;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9536
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 9536;
	// fsel f1,f31,f31,f0
	ctx.f1.f64 = f31.f64 >= 0.0 ? f31.f64 : f0.f64;
	// lfd f0,-8(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f1984
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F1984;
	// lfd f0,0(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823f194c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F194C;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfd f2,-19448(ctx_arrow(ctx)->r11)
	ctx.f2.u64 = PPC_Read_U64(ctx,  ctx);
loc_823F1944:
	// li ctx_arrow(ctx)->r3,17
	ctx_arrow(ctx)->r3.s64 = 17;
	// b 0x823f19d4
	goto loc_823F19D4;
loc_823F194C:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823f1c70
	sub_823F1C70(ctx, base);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,1024
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 1024, xer);
	// stw ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x823f1978
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823F1978;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,-1536
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + -1536;
	// bl 0x823f7708
	sub_823F7708(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x823f1944
	goto loc_823F1944;
loc_823F1978:
	// bl 0x823f7708
	sub_823F7708(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x823f19b0
	goto loc_823F19B0;
loc_823F1984:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823f1c70
	sub_823F1C70(ctx, base);
	// lwz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823f7708
	sub_823F7708(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,2728(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fdiv f0,f0,f1
	f0.f64 = f0.f64 / ctx.f1.f64;
	// fadd f13,f0,f1
	ctx.f13.f64 = f0.f64 + ctx.f1.f64;
	// lfd f0,28168(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f30,f13,f0
	f30.f64 = ctx.f13.f64 * f0.f64;
loc_823F19B0:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823f19cc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F19CC;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823f8d20
	sub_823F8D20(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x823f19e4
	goto loc_823F19E4;
loc_823F19CC:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r3.s64 = 16;
loc_823F19D4:
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li ctx_arrow(ctx)->r4,19
	ctx_arrow(ctx)->r4.s64 = 19;
	// bl 0x823f8b60
	sub_823F8B60(ctx, base);
loc_823F19E4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f30,-40(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-32(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823F1A08) PPC_WEAK_FUNC(sub_823F1A08);
PPC_FUNC_IMPL(__imp__sub_823F1A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// stfd f1,16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 16);
	// stfd f2,24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 24);
	// lhz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 16);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,17,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32752
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32752, xer);
	// bne ctx_arrow(ctx)->r6,0x823f1a2c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1A2C;
loc_823F1A20:
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lfd f1,-19440(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823F1A2C:
	// lhz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,17,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32752
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32752, xer);
	// bne ctx_arrow(ctx)->r6,0x823f1a70
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1A70;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,32752
	ctx_arrow(ctx)->r10.s64 = 2146435072;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bne ctx_arrow(ctx)->r6,0x823f1a58
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1A58;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
loc_823F1A58:
	// lis ctx_arrow(ctx)->r9,-16
	ctx_arrow(ctx)->r9.s64 = -1048576;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823f1a20
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1A20;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823f1a20
	goto loc_823F1A20;
loc_823F1A70:
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r7,16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U64(ctx,  ctx);
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r7.u64 & 0x7FFFFFFFFFFFFFFF;
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r9.u64, ctx_arrow(ctx)->r11.u64, xer);
	// bltlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.lt()) return;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7,0,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 0) & 0x8000000000000000;
	// rldicl ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,12,53
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u64, 12) & 0x7FF;
	// rldicl ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,11,1
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u64, 11) & 0x7FFFFFFFFFFFFFFF;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,12,53
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 12) & 0x7FF;
	// std ctx_arrow(ctx)->r4,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// rldicr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,52
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u64, 0) & 0xFFFFFFFFFFFFF800;
	// rldicr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// cmpdi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r8.s64, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823f1acc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1ACC;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f1a20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F1A20;
	// cntlzd ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 == 0 ? 64 : __builtin_clzll(ctx_arrow(ctx)->r10.u64);
	// extsw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s32;
	// subfic ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,1
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 1;
	ctx_arrow(ctx)->r8.s64 = 1 - ctx_arrow(ctx)->r9.s64;
	// sld ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r5.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r10.u64 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// b 0x823f1ad0
	goto loc_823F1AD0;
loc_823F1ACC:
	// or ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r6.u64;
loc_823F1AD0:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// cmpdi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r11.s64, 0, xer);
	// rldimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,11,1
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 11) & 0x7FFFFFFFFFFFF800) | (ctx_arrow(ctx)->r10.u64 & 0x80000000000007FF);
	// bne ctx_arrow(ctx)->r6,0x823f1afc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1AFC;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// cntlzd ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 == 0 ? 64 : __builtin_clzll(ctx_arrow(ctx)->r10.u64);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// sld ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r10.u64 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x7F)), 0));
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 1;
	ctx_arrow(ctx)->r11.s64 = 1 - ctx_arrow(ctx)->r11.s64;
	// b 0x823f1b00
	goto loc_823F1B00;
loc_823F1AFC:
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r6.u64;
loc_823F1B00:
	// rldicl ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5,63,1
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// b 0x823f1b2c
	goto loc_823F1B2C;
loc_823F1B08:
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, ctx_arrow(ctx)->r5.u64, xer);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r5.u64;
	// bge ctx_arrow(ctx)->r6,0x823f1b18
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823F1B18;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r7.u64;
loc_823F1B18:
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r9.s64;
	// cntlzd ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 == 0 ? 64 : __builtin_clzll(ctx_arrow(ctx)->r10.u64);
	// extsw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s32;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r9.s64;
	// sld ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r10.u64 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
loc_823F1B2C:
	// cmpd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r11.s64, ctx_arrow(ctx)->r8.s64, xer);
	// bgt ctx_arrow(ctx)->r6,0x823f1b08
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823F1B08;
	// bne ctx_arrow(ctx)->r6,0x823f1b54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1B54;
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, ctx_arrow(ctx)->r5.u64, xer);
	// blt ctx_arrow(ctx)->r6,0x823f1b54
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823F1B54;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r5.s64;
	// cntlzd ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 == 0 ? 64 : __builtin_clzll(ctx_arrow(ctx)->r10.u64);
	// extsw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s32;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r9.s64;
	// sld ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r10.u64 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
loc_823F1B54:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f1b84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F1B84;
	// cmpdi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r11.s64, 0, xer);
	// bgt ctx_arrow(ctx)->r6,0x823f1b70
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823F1B70;
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 1;
	ctx_arrow(ctx)->r9.s64 = 1 - ctx_arrow(ctx)->r11.s64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r10.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
loc_823F1B70:
	// rldicr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,52,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 52) & 0xFFF0000000000000;
	// rldicl ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,53,12
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u64, 53) & 0xFFFFFFFFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r4.u64;
	// std ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
loc_823F1B84:
	// lfd f1,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823F1B90) PPC_WEAK_FUNC(sub_823F1B90);
PPC_FUNC_IMPL(__imp__sub_823F1B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -32;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-21056
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -21056;
	// lfd f0,32(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f0,f0,f1
	f0.f64 = f0.f64 * ctx.f1.f64;
	// lfd f13,40(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f12,48(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f11,72(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f10,96(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// lfs f9,108(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// fctid f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&f0.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fnmsub f13,f13,f0,f1
	ctx.f13.f64 = -(ctx.f13.f64 * f0.f64 - ctx.f1.f64);
	// fctiwz f8,f0
	ctx.f8.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f8,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// fnmsub f13,f12,f0,f13
	ctx.f13.f64 = -(ctx.f12.f64 * f0.f64 - ctx.f13.f64);
	// lfd f12,64(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,88(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,56(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,80(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f11,f13
	f0.f64 = ctx.f11.f64 * ctx.f13.f64;
	// lwz ctx_arrow(ctx)->r10,-32(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = ctx_arrow(ctx)->r10.u32 > 4294967294;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// fsub f13,f12,f0
	ctx.f13.f64 = ctx.f12.f64 - f0.f64;
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// fadd f0,f0,f9
	f0.f64 = f0.f64 + ctx.f9.f64;
	// beq 0x823f1c4c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823F1C4C;
	// stfd f0,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// stfd f0,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stfd f0,-32(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// lhz ctx_arrow(ctx)->r9,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + -24);
	// lhz ctx_arrow(ctx)->r8,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + -16);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,28,21,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 28) & 0x7FF;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1022
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1022;
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r9, 0);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1022
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1022;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,32783
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & 32783;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r8.u64;
	// sth ctx_arrow(ctx)->r10,-32(ctx_arrow(ctx)->r1)
	PPC_STORE_U16(ctx_arrow(ctx)->r1.u32 + -32, ctx_arrow(ctx)->r10.u16);
	// lfd f0,-32(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
loc_823F1C4C:
	// lfd f13,0(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fsub f11,f1,f13
	ctx.f11.f64 = ctx.f1.f64 - ctx.f13.f64;
	// lfd f13,8(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f12,16(ctx_arrow(ctx)->r11)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fsub f10,f13,f1
	ctx.f10.f64 = ctx.f13.f64 - ctx.f1.f64;
	// lfs f13,104(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f11,f12,f0
	f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// fsel f1,f10,f13,f0
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// blr 
	return;
}

alias(__imp__sub_823F1C70) PPC_WEAK_FUNC(sub_823F1C70);
PPC_FUNC_IMPL(__imp__sub_823F1C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stfd f30,-40(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -40);
	// stfd f31,-32(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-21056
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -21056;
	// lfd f0,32(ctx_arrow(ctx)->r31)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f1,f0,f30
	ctx.f1.f64 = f0.f64 * f30.f64;
	// bl 0x823f9800
	sub_823F9800(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfd f0,40(ctx_arrow(ctx)->r31)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f13,48(ctx_arrow(ctx)->r31)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f12,72(ctx_arrow(ctx)->r31)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f10,64(ctx_arrow(ctx)->r31)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f11,96(ctx_arrow(ctx)->r31)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fnmsub f0,f0,f31,f30
	f0.f64 = -(f0.f64 * f31.f64 - f30.f64);
	// fnmsub f13,f13,f31,f0
	ctx.f13.f64 = -(ctx.f13.f64 * f31.f64 - f0.f64);
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f10,f12,f0,f10
	ctx.f10.f64 = ctx.f12.f64 * f0.f64 + ctx.f10.f64;
	// lfd f12,88(ctx_arrow(ctx)->r31)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,56(ctx_arrow(ctx)->r31)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f10,f0,f12
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// lfd f12,80(ctx_arrow(ctx)->r31)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f12,f11,f0,f12
	ctx.f12.f64 = ctx.f11.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f10,f13
	f0.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fsub f13,f12,f0
	ctx.f13.f64 = ctx.f12.f64 - f0.f64;
	// fdiv f13,f0,f13
	ctx.f13.f64 = f0.f64 / ctx.f13.f64;
	// lfd f0,28168(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fadd f30,f13,f0
	f30.f64 = ctx.f13.f64 + f0.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823f7730
	sub_823F7730(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f30,-40(ctx_arrow(ctx)->r1)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-32(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823F1D48) PPC_WEAK_FUNC(sub_823F1D48);
PPC_FUNC_IMPL(__imp__sub_823F1D48) {
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
	// std ctx_arrow(ctx)->r6,40(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 40);
	// std ctx_arrow(ctx)->r7,48(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 48);
	// std ctx_arrow(ctx)->r8,56(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 56);
	// std ctx_arrow(ctx)->r9,64(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 64);
	// std ctx_arrow(ctx)->r10,72(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 72);
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823f1db4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823F1DB4;
loc_823F1D84:
	// bl 0x823f3de0
	sub_823F3DE0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,22
	ctx_arrow(ctx)->r10.s64 = 22;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f3ca8
	sub_823F3CA8(&ctx);
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// b 0x823f1e44
	goto loc_823F1E44;
loc_823F1DB4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f1dc4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F1DC4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f1d84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F1D84;
loc_823F1DC4:
	// lis ctx_arrow(ctx)->r10,32767
	ctx_arrow(ctx)->r10.s64 = 2147418112;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,200
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 200;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// stw ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bgt ctx_arrow(ctx)->r6,0x823f1de8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823F1DE8;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
loc_823F1DE8:
	// li ctx_arrow(ctx)->r11,66
	ctx_arrow(ctx)->r11.s64 = 66;
	// lwz ctx_arrow(ctx)->r6,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stw ctx_arrow(ctx)->r31,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r31,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// bl 0x823f52b0
	sub_823F52B0(&ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823f1e40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823F1E40;
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// blt 0x823f1e34
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823F1E34;
	// lwz ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r1.u32.u8);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

