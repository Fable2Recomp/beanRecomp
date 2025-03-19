#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_821B01F0) PPC_WEAK_FUNC(sub_821B01F0);
PPC_FUNC_IMPL(__imp__sub_821B01F0) {
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
	// stwu ctx_arrow(ctx)->r1,-432(ctx_arrow(ctx)->r1)
	ea = -432 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,640
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 640;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,672(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 | 12;
	// bl 0x821b9380
	sub_821B9380(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821b0414
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821B0414;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.s64 = 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 10, xer);
	// beq ctx_arrow(ctx)->r6,0x821b025c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B025C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 11, xer);
	// beq ctx_arrow(ctx)->r6,0x821b0254
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B0254;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,8744
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 8744;
	// bl 0x821b01a8
	sub_821B01A8(ctx, base);
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x821b0414
	goto loc_821B0414;
loc_821B0254:
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r26.u64;
	// b 0x821b0260
	goto loc_821B0260;
loc_821B025C:
	// li ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r25.s64 = 0;
loc_821B0260:
	// lwz ctx_arrow(ctx)->r9,636(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,648(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne 0x821b02ac
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B02AC;
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b02ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B02AC;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r5,1505
	ctx_arrow(ctx)->r5.s64 = 1505;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8984
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 8984;
loc_821B028C:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 24;
	// bl 0x821b80c8
	sub_821B80C8(ctx, base);
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// stw ctx_arrow(ctx)->r26,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// stw ctx_arrow(ctx)->r26,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// b 0x821b0414
	goto loc_821B0414;
loc_821B02AC:
	// lwz ctx_arrow(ctx)->r11,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821b02e4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B02E4;
loc_821B02BC:
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x821b02bc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B02BC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 32, xer);
	// blt ctx_arrow(ctx)->r6,0x821b02e4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821B02E4;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r5,1506
	ctx_arrow(ctx)->r5.s64 = 1506;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8952
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 8952;
	// b 0x821b028c
	goto loc_821B028C;
loc_821B02E4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0328
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0328;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8235f050
	sub_8235F050(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x821b0304
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B0304;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821b0328
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B0328;
loc_821B0304:
	// lwz ctx_arrow(ctx)->r10,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,8944
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 8944;
	// li ctx_arrow(ctx)->r4,260
	ctx_arrow(ctx)->r4.s64 = 260;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r6,80(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r1.s64 + 96;
loc_821B0328:
	// lwz ctx_arrow(ctx)->r11,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821b0348
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B0348;
	// lwz ctx_arrow(ctx)->r10,72(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b0348
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B0348;
	// lwz ctx_arrow(ctx)->r29,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821b034c
	goto loc_821B034C;
loc_821B0348:
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
loc_821B034C:
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// li ctx_arrow(ctx)->r3,96
	ctx_arrow(ctx)->r3.s64 = 96;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b036c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B036C;
	// bl 0x821acbc8
	sub_821ACBC8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x821b0370
	goto loc_821B0370;
loc_821B036C:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_821B0370:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0384
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0384;
	// lis ctx_arrow(ctx)->r3,-32761
	ctx_arrow(ctx)->r3.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 14;
	// b 0x821b0414
	goto loc_821B0414;
loc_821B0384:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r9,636(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r31.s64 + 24;
	// stw ctx_arrow(ctx)->r29,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821acd00
	sub_821ACD00(ctx, base);
	// mr. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bge 0x821b03d8
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_821B03D8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r26,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r26,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// bl 0x821ae148
	sub_821AE148(&ctx);
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// b 0x821b0414
	goto loc_821B0414;
loc_821B03D8:
	// lwz ctx_arrow(ctx)->r11,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,692(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r30,628(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 628, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821b0410
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B0410;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b0410
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B0410;
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,76(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r5.s64;
	// bl 0x82257138
	sub_82257138(ctx, base);
loc_821B0410:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821B0414:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,432
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 432;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_821B0420) PPC_WEAK_FUNC(sub_821B0420);
PPC_FUNC_IMPL(__imp__sub_821B0420) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	// lwz ctx_arrow(ctx)->r3,680(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r8.u64;
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821b0518
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821B0518;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0460
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0460;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,2334
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 2334;
loc_821B0460:
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// li ctx_arrow(ctx)->r3,96
	ctx_arrow(ctx)->r3.s64 = 96;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b047c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B047C;
	// bl 0x821acbc8
	sub_821ACBC8(ctx, base);
	// b 0x821b0480
	goto loc_821B0480;
loc_821B047C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821B0480:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,628(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 628, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x821b0498
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0498;
	// lis ctx_arrow(ctx)->r3,-32761
	ctx_arrow(ctx)->r3.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 14;
	// b 0x821b0518
	goto loc_821B0518;
loc_821B0498:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r31.s64 + 24;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821acf10
	sub_821ACF10(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821b0518
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821B0518;
	// lwz ctx_arrow(ctx)->r11,692(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821b04f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B04F4;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b04f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B04F4;
	// lwz ctx_arrow(ctx)->r11,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r9.s32;
	// lwz ctx_arrow(ctx)->r4,76(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r9.s64;
	// bl 0x82257138
	sub_82257138(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821b0518
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821B0518;
loc_821B04F4:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821afd40
	sub_821AFD40(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821b0518
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821B0518;
	// lwz ctx_arrow(ctx)->r11,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r26,636(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 636, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 632, ctx_arrow(ctx)->r4.u32);
loc_821B0518:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_821B0520) PPC_WEAK_FUNC(sub_821B0520);
PPC_FUNC_IMPL(__imp__sub_821B0520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// li ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.s64 = 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 16, xer);
	// ble ctx_arrow(ctx)->r6,0x821b054c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821B054C;
	// stw ctx_arrow(ctx)->r26,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
loc_821B054C:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0a28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0A28;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,16
	xer.ca = ctx_arrow(ctx)->r30.u32 <= 16;
	ctx_arrow(ctx)->r9.s64 = 16 - ctx_arrow(ctx)->r30.s64;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// mtctr ctx_arrow(ctx)->r30
	ctr.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b05c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B05C0;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64;
loc_821B0588:
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -4;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821b05f0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B05F0;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r9,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// bdnz 0x821b0588
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_821B0588;
loc_821B05C0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,46
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 46, xer);
	// bgt ctx_arrow(ctx)->r6,0x821b09f8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821B09F8;
	// lis ctx_arrow(ctx)->r12,-32254
	ctx_arrow(ctx)->r12.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,8008
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 8008;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r27,1,0,30
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r12.u32 + ctx_arrow(ctx)->r0.u32);
	// lis ctx_arrow(ctx)->r12,-32229
	ctx_arrow(ctx)->r12.s64 = -2112159744;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,1520
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 1520;
	// add ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 + ctx_arrow(ctx)->r0.u64;
	// mtctr ctx_arrow(ctx)->r12
	ctr.u64 = ctx_arrow(ctx)->r12.u64;
	// nop 
	// bctr 
	switch (ctx_arrow(ctx)->r27.u64) {
	case 0:
		goto loc_821B0610;
	case 1:
		goto loc_821B0628;
	case 2:
		goto loc_821B063C;
	case 3:
		goto loc_821B066C;
	case 4:
		goto loc_821B06B4;
	case 5:
		goto loc_821B06C0;
	case 6:
		goto loc_821B06CC;
	case 7:
		goto loc_821B06E0;
	case 8:
		goto loc_821B0700;
	case 9:
		goto loc_821B0728;
	case 10:
		goto loc_821B073C;
	case 11:
		goto loc_821B0748;
	case 12:
		goto loc_821B0754;
	case 13:
		goto loc_821B0770;
	case 14:
		goto loc_821B0780;
	case 15:
		goto loc_821B078C;
	case 16:
		goto loc_821B078C;
	case 17:
		goto loc_821B0794;
	case 18:
		goto loc_821B07B8;
	case 19:
		goto loc_821B078C;
	case 20:
		goto loc_821B07E8;
	case 21:
		goto loc_821B0800;
	case 22:
		goto loc_821B078C;
	case 23:
		goto loc_821B078C;
	case 24:
		goto loc_821B0810;
	case 25:
		goto loc_821B0828;
	case 26:
		goto loc_821B078C;
	case 27:
		goto loc_821B086C;
	case 28:
		goto loc_821B088C;
	case 29:
		goto loc_821B078C;
	case 30:
		goto loc_821B08A4;
	case 31:
		goto loc_821B08C4;
	case 32:
		goto loc_821B08DC;
	case 33:
		goto loc_821B08FC;
	case 34:
		goto loc_821B078C;
	case 35:
		goto loc_821B0914;
	case 36:
		goto loc_821B092C;
	case 37:
		goto loc_821B078C;
	case 38:
		goto loc_821B0950;
	case 39:
		goto loc_821B078C;
	case 40:
		goto loc_821B097C;
	case 41:
		goto loc_821B078C;
	case 42:
		goto loc_821B09A8;
	case 43:
		goto loc_821B078C;
	case 44:
		goto loc_821B09C8;
	case 45:
		goto loc_821B09C8;
	case 46:
		goto loc_821B09C8;
	default:
		__builtin_unreachable();
	}
loc_821B05F0:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9140
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 9140;
loc_821B05F8:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,640
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 640;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 24;
	// bl 0x821b80c8
	sub_821B80C8(ctx, base);
	// stw ctx_arrow(ctx)->r26,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// b 0x821b0a28
	goto loc_821B0A28;
loc_821B0610:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821af7f8
	sub_821AF7F8(ctx, base);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B0628:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821aed20
	sub_821AED20(ctx, base);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B063C:
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,640(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 12, xer);
	// beq ctx_arrow(ctx)->r6,0x821b09f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B09F8;
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B066C:
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,640(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 12, xer);
	// beq ctx_arrow(ctx)->r6,0x821b06a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B06A0;
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
loc_821B06A0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b09f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B09F8;
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B06B4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821b01f0
	sub_821B01F0(ctx, base);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B06C0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821ad0c0
	sub_821AD0C0(ctx, base);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B06CC:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821B06D4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821aedd0
	sub_821AEDD0(ctx, base);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B06E0:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821adf00
	sub_821ADF00(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x821b06d4
	goto loc_821B06D4;
loc_821B0700:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821adf00
	sub_821ADF00(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// b 0x821b06d4
	goto loc_821B06D4;
loc_821B0728:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821ad228
	sub_821AD228(ctx, base);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B073C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821ad2e8
	sub_821AD2E8(ctx, base);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B0748:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821aee88
	sub_821AEE88(ctx, base);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B0754:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821aedd0
	sub_821AEDD0(ctx, base);
loc_821B0760:
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821b8768
	sub_821B8768(ctx, base);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B0770:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821ad228
	sub_821AD228(ctx, base);
	// b 0x821b0760
	goto loc_821B0760;
loc_821B0780:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821afb70
	sub_821AFB70(ctx, base);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B078C:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B0794:
	// lwz ctx_arrow(ctx)->r30,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// bl 0x821af618
	sub_821AF618(&ctx);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B07B8:
	// lwz ctx_arrow(ctx)->r30,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// bl 0x821adf00
	sub_821ADF00(&ctx);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r26,100(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B07E8:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821B07F0:
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_821B07F8:
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B0800:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// neg ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = -ctx_arrow(ctx)->r11.s64;
	// b 0x821b07f8
	goto loc_821B07F8;
loc_821B0810:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// b 0x821b07f8
	goto loc_821B07F8;
loc_821B0828:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821b084c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B084C;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// twllei ctx_arrow(ctx)->r11,0
	// divwu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u32 = ctx_arrow(ctx)->r10.u32 / ctx_arrow(ctx)->r11.u32;
	// b 0x821b07f8
	goto loc_821B07F8;
loc_821B084C:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r5,1503
	ctx_arrow(ctx)->r5.s64 = 1503;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9096
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 9096;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,640
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 640;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 24;
	// bl 0x821b80c8
	sub_821B80C8(ctx, base);
	// stw ctx_arrow(ctx)->r26,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B086C:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
loc_821B0880:
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// b 0x821b09f8
	goto loc_821B09F8;
loc_821B088C:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// b 0x821b07f8
	goto loc_821B07F8;
loc_821B08A4:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	xer.ca = ctx_arrow(ctx)->r11.u32 >= ctx_arrow(ctx)->r10.u32;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
loc_821B08B8:
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// b 0x821b07f8
	goto loc_821B07F8;
loc_821B08C4:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	xer.ca = ctx_arrow(ctx)->r10.u32 >= ctx_arrow(ctx)->r11.u32;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// b 0x821b08b8
	goto loc_821B08B8;
loc_821B08DC:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	xer.ca = ctx_arrow(ctx)->r9.u32 >= ctx_arrow(ctx)->r10.u32;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
loc_821B08F0:
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// b 0x821b0880
	goto loc_821B0880;
loc_821B08FC:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	xer.ca = ctx_arrow(ctx)->r10.u32 >= ctx_arrow(ctx)->r9.u32;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r9.s64;
	// b 0x821b08f0
	goto loc_821B08F0;
loc_821B0914:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// b 0x821b07f0
	goto loc_821B07F0;
loc_821B092C:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// b 0x821b07f8
	goto loc_821B07F8;
loc_821B0950:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b0974
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B0974;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64;
	// bne ctx_arrow(ctx)->r6,0x821b07f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B07F8;
loc_821B0974:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// b 0x821b07f8
	goto loc_821B07F8;
loc_821B097C:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b09a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B09A0;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// beq ctx_arrow(ctx)->r6,0x821b07f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B07F8;
loc_821B09A0:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64;
	// b 0x821b07f8
	goto loc_821B07F8;
loc_821B09A8:
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bne ctx_arrow(ctx)->r6,0x821b09c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B09C0;
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821B09C0:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821b07f8
	goto loc_821B07F8;
loc_821B09C8:
	// li ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r3.s64 = 48;
	// bl 0x821d5a70
	sub_821D5A70(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b09e8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B09E8;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,640
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 640;
	// bl 0x821d6090
	sub_821D6090(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x821b09ec
	goto loc_821B09EC;
loc_821B09E8:
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_821B09EC:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821ae080
	sub_821AE080(ctx, base);
loc_821B09F8:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0a28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0A28;
	// lwz ctx_arrow(ctx)->r3,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b0a30
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B0A30;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
loc_821B0A24:
	// stw ctx_arrow(ctx)->r3,104(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 104, ctx_arrow(ctx)->r4.u32);
loc_821B0A28:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// b 0x823ed180
	return;
loc_821B0A30:
	// li ctx_arrow(ctx)->r3,20
	ctx_arrow(ctx)->r3.s64 = 20;
	// bl 0x821d5a70
	sub_821D5A70(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b0a58
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B0A58;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// lwz ctx_arrow(ctx)->r5,104(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9088
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 9088;
	// bl 0x821d5c38
	sub_821D5C38(ctx, base);
	// b 0x821b0a5c
	goto loc_821B0A5C;
loc_821B0A58:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821B0A5C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0a24
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0A24;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9056
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 9056;
	// b 0x821b05f8
	goto loc_821B05F8;
}

alias(__imp__sub_821B0A70) PPC_WEAK_FUNC(sub_821B0A70);
PPC_FUNC_IMPL(__imp__sub_821B0A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r25.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1032
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1032;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// li ctx_arrow(ctx)->r26,-1
	ctx_arrow(ctx)->r26.s64 = -1;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r25.u64;
	// stw ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r25,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,5772
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 5772;
	// stw ctx_arrow(ctx)->r26,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r23,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// sth ctx_arrow(ctx)->r25,32(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r25, 0);
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,8744
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + 8744;
loc_821B0ABC:
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,220
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 + 220;
	// lhax ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx)->r11.u32));
	// cmpwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821b0bb8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B0BB8;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x821b0af4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821B0AF4;
	// lwz ctx_arrow(ctx)->r3,3032(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821ae548
	sub_821AE548(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// stw ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// bge 0x821b0af4
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_821B0AF4;
	// stw ctx_arrow(ctx)->r25,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
loc_821B0AF4:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,380
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 + 380;
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx)->r11.u32));
	// cmpwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x821b0b7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B0B7C;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,369
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 369, xer);
	// bgt ctx_arrow(ctx)->r6,0x821b0b7c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821B0B7C;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,1476
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r27.s64 + 1476;
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r10.u32));
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0b7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0B7C;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,1030
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 1030;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821b100c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821B100C;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27,732
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r27.s64 + 732;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// lhax ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r30.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r8.u32));
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// sth ctx_arrow(ctx)->r30,2(ctx_arrow(ctx)->r11)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r11.u32 + 2, ctx_arrow(ctx)->r30, 0);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r26,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// cmpwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble 0x821b0abc
	if ((((((((((((((!ctx)))))))))))))->r0.gt()) goto loc_821B0ABC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// b 0x821b0abc
	goto loc_821B0ABC;
loc_821B0B7C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,540
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 + 540;
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx)->r11.u32));
	// cmpwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x821b0f34
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B0F34;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,369
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 369, xer);
	// bgt ctx_arrow(ctx)->r6,0x821b0f34
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821B0F34;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27,1476
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r27.s64 + 1476;
	// lhax ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r9.u32));
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0f34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0F34;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,732
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 + 732;
	// lhax ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32));
loc_821B0BB8:
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27,124
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r27.s64 + 124;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,46
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 46, xer);
	// lhax ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r29.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx)->r9.u32));
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r29,2,0,29
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r28.s64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// bgt ctx_arrow(ctx)->r6,0x821b0e20
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821B0E20;
	// lis ctx_arrow(ctx)->r12,-32254
	ctx_arrow(ctx)->r12.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,8104
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 8104;
	// lbzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r0,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r0.u32 | (ctx_arrow(ctx)->r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis ctx_arrow(ctx)->r12,-32229
	ctx_arrow(ctx)->r12.s64 = -2112159744;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,3084
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 3084;
	// add ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 + ctx_arrow(ctx)->r0.u64;
	// mtctr ctx_arrow(ctx)->r12
	ctr.u64 = ctx_arrow(ctx)->r12.u64;
	// nop 
	// bctr 
	switch (ctx_arrow(ctx)->r11.u64) {
	case 0:
		goto loc_821B0C0C;
	case 1:
		goto loc_821B0C18;
	case 2:
		goto loc_821B0C24;
	case 3:
		goto loc_821B0C30;
	case 4:
		goto loc_821B0C3C;
	case 5:
		goto loc_821B0C44;
	case 6:
		goto loc_821B0C4C;
	case 7:
		goto loc_821B0C58;
	case 8:
		goto loc_821B0C64;
	case 9:
		goto loc_821B0C70;
	case 10:
		goto loc_821B0C7C;
	case 11:
		goto loc_821B0C84;
	case 12:
		goto loc_821B0C8C;
	case 13:
		goto loc_821B0C94;
	case 14:
		goto loc_821B0C9C;
	case 15:
		goto loc_821B0CA4;
	case 16:
		goto loc_821B0CB0;
	case 17:
		goto loc_821B0CBC;
	case 18:
		goto loc_821B0CC8;
	case 19:
		goto loc_821B0CD4;
	case 20:
		goto loc_821B0CE0;
	case 21:
		goto loc_821B0CEC;
	case 22:
		goto loc_821B0CF8;
	case 23:
		goto loc_821B0D04;
	case 24:
		goto loc_821B0D10;
	case 25:
		goto loc_821B0D1C;
	case 26:
		goto loc_821B0D28;
	case 27:
		goto loc_821B0D34;
	case 28:
		goto loc_821B0D40;
	case 29:
		goto loc_821B0D4C;
	case 30:
		goto loc_821B0D58;
	case 31:
		goto loc_821B0D64;
	case 32:
		goto loc_821B0D70;
	case 33:
		goto loc_821B0D7C;
	case 34:
		goto loc_821B0D88;
	case 35:
		goto loc_821B0D94;
	case 36:
		goto loc_821B0DA0;
	case 37:
		goto loc_821B0DAC;
	case 38:
		goto loc_821B0DB8;
	case 39:
		goto loc_821B0DC4;
	case 40:
		goto loc_821B0DD0;
	case 41:
		goto loc_821B0DDC;
	case 42:
		goto loc_821B0DE8;
	case 43:
		goto loc_821B0DF4;
	case 44:
		goto loc_821B0E00;
	case 45:
		goto loc_821B0E08;
	case 46:
		goto loc_821B0E10;
	default:
		__builtin_unreachable();
	}
loc_821B0C0C:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0C18:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0C24:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0C30:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0C3C:
	// li ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r4.s64 = 4;
	// b 0x821b0e14
	goto loc_821B0E14;
loc_821B0C44:
	// li ctx_arrow(ctx)->r4,5
	ctx_arrow(ctx)->r4.s64 = 5;
	// b 0x821b0e14
	goto loc_821B0E14;
loc_821B0C4C:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,6
	ctx_arrow(ctx)->r4.s64 = 6;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0C58:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,7
	ctx_arrow(ctx)->r4.s64 = 7;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0C64:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0C70:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,9
	ctx_arrow(ctx)->r4.s64 = 9;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0C7C:
	// li ctx_arrow(ctx)->r4,10
	ctx_arrow(ctx)->r4.s64 = 10;
	// b 0x821b0e14
	goto loc_821B0E14;
loc_821B0C84:
	// li ctx_arrow(ctx)->r4,11
	ctx_arrow(ctx)->r4.s64 = 11;
	// b 0x821b0e14
	goto loc_821B0E14;
loc_821B0C8C:
	// li ctx_arrow(ctx)->r4,12
	ctx_arrow(ctx)->r4.s64 = 12;
	// b 0x821b0e14
	goto loc_821B0E14;
loc_821B0C94:
	// li ctx_arrow(ctx)->r4,13
	ctx_arrow(ctx)->r4.s64 = 13;
	// b 0x821b0e14
	goto loc_821B0E14;
loc_821B0C9C:
	// li ctx_arrow(ctx)->r4,14
	ctx_arrow(ctx)->r4.s64 = 14;
	// b 0x821b0e14
	goto loc_821B0E14;
loc_821B0CA4:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,15
	ctx_arrow(ctx)->r4.s64 = 15;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0CB0:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r4.s64 = 16;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0CBC:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,17
	ctx_arrow(ctx)->r4.s64 = 17;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0CC8:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,18
	ctx_arrow(ctx)->r4.s64 = 18;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0CD4:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,19
	ctx_arrow(ctx)->r4.s64 = 19;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0CE0:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,20
	ctx_arrow(ctx)->r4.s64 = 20;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0CEC:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,21
	ctx_arrow(ctx)->r4.s64 = 21;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0CF8:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,22
	ctx_arrow(ctx)->r4.s64 = 22;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D04:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,23
	ctx_arrow(ctx)->r4.s64 = 23;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D10:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r4.s64 = 24;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D1C:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,25
	ctx_arrow(ctx)->r4.s64 = 25;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D28:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,26
	ctx_arrow(ctx)->r4.s64 = 26;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D34:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,27
	ctx_arrow(ctx)->r4.s64 = 27;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D40:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,28
	ctx_arrow(ctx)->r4.s64 = 28;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D4C:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,29
	ctx_arrow(ctx)->r4.s64 = 29;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D58:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,30
	ctx_arrow(ctx)->r4.s64 = 30;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D64:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r4.s64 = 31;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D70:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D7C:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,33
	ctx_arrow(ctx)->r4.s64 = 33;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D88:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,34
	ctx_arrow(ctx)->r4.s64 = 34;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0D94:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,35
	ctx_arrow(ctx)->r4.s64 = 35;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0DA0:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,36
	ctx_arrow(ctx)->r4.s64 = 36;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0DAC:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,37
	ctx_arrow(ctx)->r4.s64 = 37;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0DB8:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,38
	ctx_arrow(ctx)->r4.s64 = 38;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0DC4:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,39
	ctx_arrow(ctx)->r4.s64 = 39;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0DD0:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,40
	ctx_arrow(ctx)->r4.s64 = 40;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0DDC:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,41
	ctx_arrow(ctx)->r4.s64 = 41;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0DE8:
	// li ctx_arrow(ctx)->r5,3
	ctx_arrow(ctx)->r5.s64 = 3;
	// li ctx_arrow(ctx)->r4,42
	ctx_arrow(ctx)->r4.s64 = 42;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0DF4:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,43
	ctx_arrow(ctx)->r4.s64 = 43;
	// b 0x821b0e18
	goto loc_821B0E18;
loc_821B0E00:
	// li ctx_arrow(ctx)->r4,44
	ctx_arrow(ctx)->r4.s64 = 44;
	// b 0x821b0e14
	goto loc_821B0E14;
loc_821B0E08:
	// li ctx_arrow(ctx)->r4,45
	ctx_arrow(ctx)->r4.s64 = 45;
	// b 0x821b0e14
	goto loc_821B0E14;
loc_821B0E10:
	// li ctx_arrow(ctx)->r4,46
	ctx_arrow(ctx)->r4.s64 = 46;
loc_821B0E14:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
loc_821B0E18:
	// lwz ctx_arrow(ctx)->r3,3032(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821b0520
	sub_821B0520(ctx, base);
loc_821B0E20:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27,28
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r27.s64 + 28;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r28.s64;
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lha ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 0));
	// stw ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx)->r8.u32));
	// cmpwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821b0ebc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B0EBC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0ebc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0EBC;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,15
	ctx_arrow(ctx)->r10.s64 = 15;
	// li ctx_arrow(ctx)->r30,15
	ctx_arrow(ctx)->r30.s64 = 15;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// sth ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_STORE_U16(ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r10.u16);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x821b0ea8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821B0EA8;
	// lwz ctx_arrow(ctx)->r3,3032(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821ae548
	sub_821AE548(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// stw ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// bge 0x821b0ea8
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_821B0EA8;
	// stw ctx_arrow(ctx)->r25,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
loc_821B0EA8:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0abc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0ABC;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x821b1020
	goto loc_821B1020;
loc_821B0EBC:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,700
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r27.s64 + 700;
	// lhax ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r10.u32));
	// cmpwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x821b0efc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B0EFC;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,369
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 369, xer);
	// bgt ctx_arrow(ctx)->r6,0x821b0efc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821B0EFC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27,1476
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r27.s64 + 1476;
	// lhax ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r8.u32));
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0efc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0EFC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,732
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 + 732;
	// lhax ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32));
	// b 0x821b0f00
	goto loc_821B0F00;
loc_821B0EFC:
	// lhax ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r30.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r27.u32));
loc_821B0F00:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,1030
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 1030;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821b100c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821B100C;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// sth ctx_arrow(ctx)->r30,2(ctx_arrow(ctx)->r11)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r11.u32 + 2, ctx_arrow(ctx)->r30, 0);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_821B0F20:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x821b0abc
	goto loc_821B0ABC;
loc_821B0F34:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b0f58
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B0F58;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x821afcf0
	sub_821AFCF0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
loc_821B0F58:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x821b0ff8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821B0FF8;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_821B0F6C:
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,380
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 + 380;
	// lha ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + 0));
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32));
	// cmpwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821b0fa8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B0FA8;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 256;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,369
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 369, xer);
	// bgt ctx_arrow(ctx)->r6,0x821b0fa8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821B0FA8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,1476
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 + 1476;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r11.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 256, xer);
	// beq ctx_arrow(ctx)->r6,0x821b0fc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B0FC8;
loc_821B0FA8:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r23.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x821b101c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821B101C;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,-2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 + -2;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// b 0x821b0f6c
	goto loc_821B0F6C;
loc_821B0FC8:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,1030
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 1030;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821b100c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821B100C;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27,732
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r27.s64 + 732;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// lhax ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r30.s64 = int16_t(PPC_LOAD_U16(ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r9.u32));
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// sth ctx_arrow(ctx)->r30,2(ctx_arrow(ctx)->r11)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r11.u32 + 2, ctx_arrow(ctx)->r30, 0);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821b0f20
	goto loc_821B0F20;
loc_821B0FF8:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b101c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B101C;
	// stw ctx_arrow(ctx)->r26,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// b 0x821b0abc
	goto loc_821B0ABC;
loc_821B100C:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,9172
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 9172;
	// bl 0x821afcf0
	sub_821AFCF0(ctx, base);
loc_821B101C:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_821B1020:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed174
	return;
}

alias(__imp__sub_821B1028) PPC_WEAK_FUNC(sub_821B1028);
PPC_FUNC_IMPL(__imp__sub_821B1028) {
	PPC_FUNC_PROLOGUE();
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
	// stwu ctx_arrow(ctx)->r1,-3232(ctx_arrow(ctx)->r1)
	ea = -3232 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b13f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B13F8;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,2334
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + 2334;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = 1;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,8692
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + 8692;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r21,12
	ctx_arrow(ctx)->r21.s64 = 12;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,9272
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + 9272;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,9220
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + 9220;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,9216
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + 9216;
loc_821B107C:
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821b1094
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1094;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1424;
loc_821B1094:
	// lwz ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x821b10f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B10F4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// ld ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r29)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// ld ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r29)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 8);
	// ld ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r29)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 16);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r29)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,12(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// b 0x821b110c
	goto loc_821B110C;
loc_821B10F4:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r4,672(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821b9380
	sub_821B9380(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821b152c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821B152C;
loc_821B110C:
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821b12ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B12AC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 + 8;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
loc_821B1120:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// beq 0x821b1144
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1120
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1120;
loc_821B1144:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821b12ac
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B12AC;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b12ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B12AC;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,3036
	ctx_arrow(ctx)->r5.s64 = 3036;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stw ctx_arrow(ctx)->r28,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// bl 0x823edf70
	sub_823EDF70(&ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r31,3128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 3128, ctx_arrow(ctx)->r4.u32);
	// bl 0x821b0a70
	sub_821B0A70(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x821b1194
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1194;
	// stw ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
loc_821B1194:
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r28,104(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b120c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B120C;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b120c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B120C;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,640
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 640;
	// lwz ctx_arrow(ctx)->r4,672(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821b9380
	sub_821B9380(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821b152c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821B152C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 12, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1208
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1208;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 13, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1208
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1208;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1200
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1200;
	// li ctx_arrow(ctx)->r5,1501
	ctx_arrow(ctx)->r5.s64 = 1501;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 24;
	// bl 0x821b80c8
	sub_821B80C8(ctx, base);
loc_821B1200:
	// stw ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// b 0x821b120c
	goto loc_821B120C;
loc_821B1208:
	// stw ctx_arrow(ctx)->r27,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 76, ctx_arrow(ctx)->r4.u32);
loc_821B120C:
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1244
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1244;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821b8768
	sub_821B8768(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,640
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r31.s64 + 640;
	// lwz ctx_arrow(ctx)->r4,672(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r28,112(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// bl 0x821b9380
	sub_821B9380(&ctx);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821b152c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821B152C;
	// stw ctx_arrow(ctx)->r27,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 76, ctx_arrow(ctx)->r4.u32);
loc_821B1244:
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,632(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 632, ctx_arrow(ctx)->r4.u32);
	// beq 0x821b13ec
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B13EC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,640
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 640;
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// ld ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 8);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r29)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 16);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r29)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1294
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1294;
	// stw ctx_arrow(ctx)->r21,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821B1294:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b142c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B142C;
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x821b152c
	goto loc_821B152C;
loc_821B12AC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,13
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 13, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1434
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1434;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b131c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B131C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x821b131c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B131C;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821adf00
	sub_821ADF00(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x821b131c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B131C;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r6,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r5,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821b15d8
	sub_821B15D8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x821b131c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B131C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b13ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B13EC;
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// stw ctx_arrow(ctx)->r27,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
	// b 0x821b152c
	goto loc_821B152C;
loc_821B131C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x821b13cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B13CC;
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64;
loc_821B1334:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// beq 0x821b1358
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1358;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1334
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1334;
loc_821B1358:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821b1384
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B1384;
	// li ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r11.s64 = 10;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bne 0x821b13cc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B13CC;
	// stw ctx_arrow(ctx)->r22,8(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// b 0x821b13cc
	goto loc_821B13CC;
loc_821B1384:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
loc_821B138C:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// beq 0x821b13b0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B13B0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b138c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B138C;
loc_821B13B0:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821b13cc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B13CC;
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_821B13CC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,92(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r21.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x821b14a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B14A0;
loc_821B13EC:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b107c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B107C;
loc_821B13F8:
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16389
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 16389;
loc_821B1400:
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r11.s64 = 13;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x821b152c
	goto loc_821B152C;
loc_821B1424:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// b 0x821b1400
	goto loc_821B1400;
loc_821B142C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// b 0x821b152c
	goto loc_821B152C;
loc_821B1434:
	// lwz ctx_arrow(ctx)->r11,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b145c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B145C;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r5,1502
	ctx_arrow(ctx)->r5.s64 = 1502;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9192
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 9192;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 24;
	// bl 0x821b80c8
	sub_821B80C8(ctx, base);
loc_821B145C:
	// lwz ctx_arrow(ctx)->r30,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1528
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1528;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,628(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 628, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,92(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// bl 0x821ae148
	sub_821AE148(&ctx);
	// lis ctx_arrow(ctx)->r4,9345
	ctx_arrow(ctx)->r4.s64 = 612433920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// lwz ctx_arrow(ctx)->r11,628(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,632(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 632, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r21,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 76, ctx_arrow(ctx)->r4.u32);
	// b 0x821b1528
	goto loc_821B1528;
loc_821B14A0:
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821b1528
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1528;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1528
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1528;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1510
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1510;
	// lbz ctx_arrow(ctx)->r10,9(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1510
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1510;
	// lbz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 123, xer);
	// bne ctx_arrow(ctx)->r6,0x821b14e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B14E8;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_821B14E8:
	// lbz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,125
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 125, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1510
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1510;
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1510
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1510;
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_821B1510:
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1528
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1528;
	// li ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r11.s64 = 13;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_821B1528:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_821B152C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,3232
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 3232;
	// b 0x823ed16c
	return;
}

alias(__imp__sub_821B1538) PPC_WEAK_FUNC(sub_821B1538);
PPC_FUNC_IMPL(__imp__sub_821B1538) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1570
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1570;
	// lis ctx_arrow(ctx)->r3,-30602
	ctx_arrow(ctx)->r3.s64 = -2005532672;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,2156
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 2156;
	// b 0x821b15c4
	goto loc_821B15C4;
loc_821B1564:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 13, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1588
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1588;
loc_821B1570:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821b1028
	sub_821B1028(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge 0x821b1564
	if ((((((((((((((!ctx)))))))))))))->r0.lt()) goto loc_821B1564;
	// b 0x821b15c4
	goto loc_821B15C4;
loc_821B1588:
	// lwz ctx_arrow(ctx)->r3,116(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,116(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x821ae228
	sub_821AE228(&ctx);
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821b15b8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B15B8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821b15bc
	goto loc_821B15BC;
loc_821B15B8:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_821B15BC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r11,672(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 672, ctx_arrow(ctx)->r4.u32);
loc_821B15C4:
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

alias(__imp__sub_821B15D8) PPC_WEAK_FUNC(sub_821B15D8);
PPC_FUNC_IMPL(__imp__sub_821B15D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed110
	// stwu ctx_arrow(ctx)->r1,-304(ctx_arrow(ctx)->r1)
	ea = -304 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r18,0
	ctx_arrow(ctx)->r18.s64 = 0;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// stw ctx_arrow(ctx)->r18,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r19,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r19.u32, 0, xer);
	// stw ctx_arrow(ctx)->r18,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x821b165c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B165C;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1650
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1650;
loc_821B1614:
	// li ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r3.s64 = 48;
	// bl 0x821d5a70
	sub_821D5A70(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b1630
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1630;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,16
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r27.s64 + 16;
	// bl 0x821d6090
	sub_821D6090(ctx, base);
	// b 0x821b1634
	goto loc_821B1634;
loc_821B1630:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
loc_821B1634:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x821b1f1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1F1C;
	// lwz ctx_arrow(ctx)->r27,12(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r3.s64 + 12;
	// cmplwi ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// bne 0x821b1614
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B1614;
loc_821B1650:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x821b1f04
	goto loc_821B1F04;
loc_821B165C:
	// lwz ctx_arrow(ctx)->r7,112(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq 0x821b16e0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B16E0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r7.s64 + 16;
	// ld ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,640(ctx_arrow(ctx)->r20)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r20.u32 + 640);
	// ld ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,640(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 1, xer);
	// std ctx_arrow(ctx)->r10,648(ctx_arrow(ctx)->r20)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r20.u32 + 648);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,656(ctx_arrow(ctx)->r20)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r20.u32 + 656);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,664(ctx_arrow(ctx)->r20)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r20.u32 + 664);
	// bne ctx_arrow(ctx)->r6,0x821b1f24
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1F24;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,25744
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 25744;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20,648
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r20.s64 + 648;
loc_821B16A4:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// beq 0x821b16c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B16C8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b16a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B16A4;
loc_821B16C8:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821b1f24
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B1F24;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r20)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r20.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r18,12(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// b 0x821b1798
	goto loc_821B1798;
loc_821B16E0:
	// lwz ctx_arrow(ctx)->r3,632(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821b173c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821B173C;
loc_821B16F4:
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ARRAY_S8_TO_S64(ctx_arrow(ctx)->r10, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 32, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1714
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1714;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 9, xer);
	// blt ctx_arrow(ctx)->r6,0x821b1728
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821B1728;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,13
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 13, xer);
	// bgt ctx_arrow(ctx)->r6,0x821b1728
	if (ctx_arrow(ctx)->r6.gt()) goto loc_821B1728;
loc_821B1714:
	// lwz ctx_arrow(ctx)->r10,632(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x821b16f4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821B16F4;
loc_821B1728:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x821b173c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821B173C;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,40
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 40, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1f24
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1F24;
loc_821B173C:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r20,640
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r20.s64 + 640;
	// lwz ctx_arrow(ctx)->r4,672(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821b9380
	sub_821B9380(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x821b1f24
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821B1F24;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1f24
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1F24;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,25744
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 25744;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20,648
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r20.s64 + 648;
loc_821B176C:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// beq 0x821b1790
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1790;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b176c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B176C;
loc_821B1790:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821b1f24
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B1F24;
loc_821B1798:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r18.u64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,9416
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 9416;
loc_821B17AC:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// bl 0x821b1028
	sub_821B1028(ctx, base);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1f1c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1F1C;
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 13, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1938
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1938;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1814
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1814;
	// li ctx_arrow(ctx)->r3,20
	ctx_arrow(ctx)->r3.s64 = 20;
	// bl 0x821d5a70
	sub_821D5A70(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b1800
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1800;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x821d5c38
	sub_821D5C38(ctx, base);
	// b 0x821b1804
	goto loc_821B1804;
loc_821B1800:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
loc_821B1804:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x821b1f1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1F1C;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r3.s64 + 8;
loc_821B1814:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1858
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1858;
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1858
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1858;
	// lbz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,44
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 44, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1840
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1840;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,41
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 41, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1858
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1858;
loc_821B1840:
	// lbz ctx_arrow(ctx)->r11,105(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x821b1858
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B1858;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// b 0x821b1894
	goto loc_821B1894;
loc_821B1858:
	// li ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r3.s64 = 48;
	// bl 0x821d5a70
	sub_821D5A70(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b1874
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1874;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// bl 0x821d6090
	sub_821D6090(ctx, base);
	// b 0x821b1878
	goto loc_821B1878;
loc_821B1874:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
loc_821B1878:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x821b1f1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1F1C;
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r3.s64 + 12;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821b18e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B18E4;
loc_821B1894:
	// lbz ctx_arrow(ctx)->r11,105(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x821b18e4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B18E4;
	// lbz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,40
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 40, xer);
	// beq ctx_arrow(ctx)->r6,0x821b18e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B18E0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,41
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 41, xer);
	// beq ctx_arrow(ctx)->r6,0x821b18d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B18D8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,91
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 91, xer);
	// beq ctx_arrow(ctx)->r6,0x821b18e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B18E0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,93
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 93, xer);
	// beq ctx_arrow(ctx)->r6,0x821b18d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B18D8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 123, xer);
	// beq ctx_arrow(ctx)->r6,0x821b18e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B18E0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,125
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 125, xer);
	// bne ctx_arrow(ctx)->r6,0x821b18e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B18E4;
loc_821B18D8:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,-1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + -1;
	// b 0x821b18e4
	goto loc_821B18E4;
loc_821B18E0:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
loc_821B18E4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b17ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B17AC;
	// lwz ctx_arrow(ctx)->r21,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r21.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r19.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r21.u64;
loc_821B18F8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b191c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B191C;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b191c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B191C;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne 0x821b18f8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B18F8;
loc_821B191C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1978
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1978;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1954
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1954;
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821b195c
	goto loc_821B195C;
loc_821B1938:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// li ctx_arrow(ctx)->r5,1515
	ctx_arrow(ctx)->r5.s64 = 1515;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9372
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 9372;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r20.s64 + 24;
	// bl 0x821b80c8
	sub_821B80C8(ctx, base);
	// b 0x821b1f1c
	goto loc_821B1F1C;
loc_821B1954:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,-17804
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + -17804;
loc_821B195C:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9328
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 9328;
loc_821B1964:
	// li ctx_arrow(ctx)->r5,1516
	ctx_arrow(ctx)->r5.s64 = 1516;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r20.s64 + 24;
	// bl 0x821b80c8
	sub_821B80C8(ctx, base);
	// b 0x821b1f1c
	goto loc_821B1F1C;
loc_821B1978:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b19a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B19A8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1994
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1994;
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821b199c
	goto loc_821B199C;
loc_821B1994:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,-17804
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + -17804;
loc_821B199C:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9292
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 9292;
	// b 0x821b1964
	goto loc_821B1964;
loc_821B19A8:
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r18.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r18.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r18.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r27.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1cf8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1CF8;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,9288
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + 9288;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,9216
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + 9216;
loc_821B19D4:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24,16
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r24.s64 + 16;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r30.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1a80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1A80;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1a80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1A80;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1a80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1A80;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r22.u64;
loc_821B1A00:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// beq 0x821b1a24
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1A24;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1a00
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1A00;
loc_821B1A24:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821b1a38
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B1A38;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = 1;
	// b 0x821b1cec
	goto loc_821B1CEC;
loc_821B1A38:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1a80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1A80;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r23.u64;
loc_821B1A48:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r8.s64;
	// beq 0x821b1a6c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1A6C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1a48
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1A48;
loc_821B1A6C:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821b1a80
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B1A80;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
	// b 0x821b1cec
	goto loc_821B1CEC;
loc_821B1A80:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1b2c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1B2C;
	// lwz ctx_arrow(ctx)->r6,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r19.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
loc_821B1A98:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64;
loc_821B1AA0:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r7.s64;
	// beq 0x821b1ac4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1AC4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1aa0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1AA0;
loc_821B1AC4:
	// cmpwi ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x821b1adc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1ADC;
	// lwz ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// bne 0x821b1a98
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B1A98;
loc_821B1ADC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1b2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1B2C;
	// lwz ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x821b1b20
	goto loc_821B1B20;
loc_821B1AEC:
	// li ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r3.s64 = 48;
	// bl 0x821d5a70
	sub_821D5A70(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b1b08
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1B08;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// bl 0x821d6090
	sub_821D6090(ctx, base);
	// b 0x821b1b0c
	goto loc_821B1B0C;
loc_821B1B08:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
loc_821B1B0C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x821b1f1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1F1C;
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 12;
loc_821B1B20:
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne 0x821b1aec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B1AEC;
	// b 0x821b1b5c
	goto loc_821B1B5C;
loc_821B1B2C:
	// li ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r3.s64 = 48;
	// bl 0x821d5a70
	sub_821D5A70(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x821b1b48
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1B48;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821d6090
	sub_821D6090(ctx, base);
	// b 0x821b1b4c
	goto loc_821B1B4C;
loc_821B1B48:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
loc_821B1B4C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x821b1f1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1F1C;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 12;
loc_821B1B5C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821b1b6c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821B1B6C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1cec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1CEC;
loc_821B1B6C:
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r18.u64;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// b 0x821b1bc0
	goto loc_821B1BC0;
loc_821B1B7C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1b94
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1B94;
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821b1b94
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821B1B94;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
loc_821B1B94:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r5,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// bl 0x821adfd0
	sub_821ADFD0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
loc_821B1BC0:
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne 0x821b1b7c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821B1B7C;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x821d5928
	sub_821D5928(ctx, base);
	// mr. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// beq 0x821b1f1c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821B1F1C;
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,0
	xer.ca = ctx_arrow(ctx)->r28.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r28.s64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r18.u64;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,30,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,39
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r10.s64 + 39;
	// stb ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r29)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32.u8);
	// blr 
	return;
}

