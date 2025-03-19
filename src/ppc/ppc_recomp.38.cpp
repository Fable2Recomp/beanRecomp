#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_823C34A8) PPC_WEAK_FUNC(sub_823C34A8);
PPC_FUNC_IMPL(__imp__sub_823C34A8) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,12
	ctx_arrow(ctx)->r5.s64 = 12;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c353c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C353C;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28,24
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r28.s64 + 24;
loc_823C34E0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r29,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 16;
loc_823C34F4:
	// lwz ctx_arrow(ctx)->r8,-8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c350c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C350C;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3544
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3544;
loc_823C350C:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 2, xer);
	// blt ctx_arrow(ctx)->r6,0x823c34f4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C34F4;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823C3520:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r27.u32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c34e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C34E0;
loc_823C353C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_823C3544:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// bl 0x823c17a8
	sub_823C17A8(ctx, base);
	// b 0x823c3520
	goto loc_823C3520;
}

alias(__imp__sub_823C3558) PPC_WEAK_FUNC(sub_823C3558);
PPC_FUNC_IMPL(__imp__sub_823C3558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu ctx_arrow(ctx)->r1,-272(ctx_arrow(ctx)->r1)
	ea = -272 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,24970
	ctx_arrow(ctx)->r4.s64 = 1636433920;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32784
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32784;
	// li ctx_arrow(ctx)->r3,88
	ctx_arrow(ctx)->r3.s64 = 88;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 0, xer);
	// bne 0x823c35a4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C35A4;
	// lis ctx_arrow(ctx)->r26,-32761
	ctx_arrow(ctx)->r26.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,14
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r26.u64 | 14;
	// b 0x823c37a4
	goto loc_823C37A4;
loc_823C35A4:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r20,8(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r5.s64 = 24;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// bl 0x82408138
	sub_82408138(&ctx);
	// li ctx_arrow(ctx)->r5,12
	ctx_arrow(ctx)->r5.s64 = 12;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3664
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3664;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25,12
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r25.s64 + 12;
loc_823C35E0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 2, xer);
	// bge ctx_arrow(ctx)->r6,0x823c3664
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823C3664;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// blt 0x823c3664
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C3664;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r28.u32, xer);
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r8.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r7.u32);
	// blt ctx_arrow(ctx)->r6,0x823c35e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C35E0;
loc_823C3664:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r25.s64 + 20;
	// stw ctx_arrow(ctx)->r30,20(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823c37a4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C37A4;
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// li ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r21.s64 = 0;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64;
loc_823C3688:
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// bl 0x82408138
	sub_82408138(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r27,2
	ctx_arrow(ctx)->r27.s64 = 2;
loc_823C36A8:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c36d8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C36D8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
loc_823C36D8:
	// addic. ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,-1
	xer.ca = ctx_arrow(ctx)->r27.u32 > 0;
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,4
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r23.s64 + 4;
	// bne 0x823c36a8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823C36A8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3768
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3768;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// li ctx_arrow(ctx)->r5,10
	ctx_arrow(ctx)->r5.s64 = 10;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// bl 0x823c16c0
	sub_823C16C0(ctx, base);
	// mr. ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// blt 0x823c377c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C377C;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r24,1
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r24.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
loc_823C371C:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x823c3750
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C3750;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r20.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// blt 0x823c377c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_823C377C;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
loc_823C3750:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 2, xer);
	// blt ctx_arrow(ctx)->r6,0x823c371c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C371C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823c377c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C377C;
loc_823C3768:
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r21,1
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r21.s64 + 1;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r22,4
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r22.s64 + 4;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r23.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r21.u32, 3, xer);
	// blt ctx_arrow(ctx)->r6,0x823c3688
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C3688;
loc_823C377C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// stw ctx_arrow(ctx)->r24,32(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// blt ctx_arrow(ctx)->r6,0x823c37a4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C37A4;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r18.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r19.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x823c2ac8
	sub_823C2AC8(ctx, base);
	// mr. ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// bge 0x823c37b0
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_823C37B0;
loc_823C37A4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x823c2f90
	sub_823C2F90(ctx, base);
	// li ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r25.s64 = 0;
loc_823C37B0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r25,0(ctx_arrow(ctx)->r17)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r17.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,272
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 272;
	// b 0x823ed15c
	return;
}

alias(__imp__sub_823C37C0) PPC_WEAK_FUNC(sub_823C37C0);
PPC_FUNC_IMPL(__imp__sub_823C37C0) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,192(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_823C37C8) PPC_WEAK_FUNC(sub_823C37C8);
PPC_FUNC_IMPL(__imp__sub_823C37C8) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c3820
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C3820;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,12
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r30.s64 + 12;
loc_823C37F0:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, ctx_arrow(ctx)->r3.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823c382c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C382C;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823c37f0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823C37F0;
loc_823C3820:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823C3824:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823C382C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 3;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x823c3824
	goto loc_823C3824;
}

alias(__imp__sub_823C3840) PPC_WEAK_FUNC(sub_823C3840);
PPC_FUNC_IMPL(__imp__sub_823C3840) {
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8241015c
	__imp__XamVoiceHeadsetPresent(ctx, base);
	// lwz ctx_arrow(ctx)->r11,192(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x823c3878
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C3878;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3888
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3888;
loc_823C3878:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c3890
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C3890;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3890
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3890;
loc_823C3888:
	// li ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = 1;
	// li ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = 1;
loc_823C3890:
	// lwz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r3,192(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 192, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,1316(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c38b0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C38B0;
	// lwz ctx_arrow(ctx)->r11,188(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3a30
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3A30;
loc_823C38B0:
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8240f7cc
	__imp__XamUserGetSigninState(ctx, base);
	// lwz ctx_arrow(ctx)->r11,188(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3ab0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3AB0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,148
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 148;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8235d6e0
	sub_8235D6E0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3a04
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3A04;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823c3a04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C3A04;
	// lwz ctx_arrow(ctx)->r11,176(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r26,188(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 188, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823c3a30
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C3A30;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r26.u64;
loc_823C3908:
	// lwz ctx_arrow(ctx)->r11,176(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-4100
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -268697600;
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-12
	xer.ca = ctx_arrow(ctx)->r10.u32 > 11;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -12;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x823c39c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823C39C8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823c3984
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C3984;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823c39e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823C39E8;
	// lwz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,100
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 100, xer);
	// ble ctx_arrow(ctx)->r6,0x823c3948
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823C3948;
	// li ctx_arrow(ctx)->r10,100
	ctx_arrow(ctx)->r10.s64 = 100;
	// stw ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 32, ctx_arrow(ctx)->r4.u32);
loc_823C3948:
	// lwa ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.s64 = int32_t(PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,184(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// std ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// lfd f13,104(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// beq ctx_arrow(ctx)->r6,0x823c39e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823C39E8;
	// stb ctx_arrow(ctx)->r26,198(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 198, ctx_arrow(ctx.u8)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

