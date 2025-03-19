#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_8232DDE8) PPC_WEAK_FUNC(sub_8232DDE8);
PPC_FUNC_IMPL(__imp__sub_8232DDE8) {
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
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,184
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 184;
	// bl 0x82348230
	sub_82348230(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8232e0f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8232E0F4;
	// lwz ctx_arrow(ctx)->r3,168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8234f468
	sub_8234F468(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,-20196
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + -20196;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,23464
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + 23464;
	// beq ctx_arrow(ctx)->r6,0x8232de50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8232DE50;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// li ctx_arrow(ctx)->r7,2104
	ctx_arrow(ctx)->r7.s64 = 2104;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,23924
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 23924;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82263fb8
	sub_82263FB8(ctx, base);
loc_8232DE50:
	// lwz ctx_arrow(ctx)->r11,168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// lwz ctx_arrow(ctx)->r25,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8232DE70:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r6.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8232de80
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8232DE80;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r26.u64;
	// b 0x8232de8c
	goto loc_8232DE8C;
loc_8232DE80:
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8232DE8C:
	// clrlwi. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,24
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x8232dea4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8232DEA4;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r9.u64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// b 0x8232de70
	goto loc_8232DE70;
loc_8232DEA4:
	// lwz ctx_arrow(ctx)->r10,116(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32207
	ctx_arrow(ctx)->r11.s64 = -2110717952;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// lwz ctx_arrow(ctx)->r7,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16480
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 16480;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r27,32(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82329f20
	sub_82329F20(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32207
	ctx_arrow(ctx)->r11.s64 = -2110717952;
	// lwz ctx_arrow(ctx)->r7,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16480
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 16480;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x82329e80
	sub_82329E80(ctx, base);
	// li ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r3.s64 = 64;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8234dc30
	sub_8234DC30(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r28,32
	ctx_arrow(ctx)->r28.s64 = 32;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stw ctx_arrow(ctx)->r26,56(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// bl 0x8234c2f8
	sub_8234C2F8(&ctx);
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,23416
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 23416;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// bl 0x8232c928
	sub_8232C928(&ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8234eee0
	sub_8234EEE0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8234bf18
	sub_8234BF18(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,23892
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + 23892;
	// bne 0x8232df64
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8232DF64;
	// li ctx_arrow(ctx)->r7,2130
	ctx_arrow(ctx)->r7.s64 = 2130;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82263fb8
	sub_82263FB8(ctx, base);
loc_8232DF64:
	// li ctx_arrow(ctx)->r3,19
	ctx_arrow(ctx)->r3.s64 = 19;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8234e340
	sub_8234E340(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r26,56(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r26,60(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,84(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// lfs f4,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x8234cef8
	sub_8234CEF8(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8232c928
	sub_8232C928(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8234eee0
	sub_8234EEE0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8234bf18
	sub_8234BF18(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8232dfe0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8232DFE0;
	// li ctx_arrow(ctx)->r7,2139
	ctx_arrow(ctx)->r7.s64 = 2139;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82263fb8
	sub_82263FB8(ctx, base);
loc_8232DFE0:
	// li ctx_arrow(ctx)->r3,20
	ctx_arrow(ctx)->r3.s64 = 20;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8234dd10
	sub_8234DD10(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// stw ctx_arrow(ctx)->r26,56(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 128, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r26,60(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,84(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x8234c2f8
	sub_8234C2F8(&ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,3
	ctx_arrow(ctx)->r5.s64 = 3;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 136, ctx_arrow(ctx)->r4.u32);
	// lfs f4,84(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x8234cef8
	sub_8234CEF8(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8232c928
	sub_8232C928(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8234eee0
	sub_8234EEE0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8234bf18
	sub_8234BF18(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8232e07c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8232E07C;
	// li ctx_arrow(ctx)->r7,2151
	ctx_arrow(ctx)->r7.s64 = 2151;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82263fb8
	sub_82263FB8(ctx, base);
loc_8232E07C:
	// li ctx_arrow(ctx)->r3,49
	ctx_arrow(ctx)->r3.s64 = 49;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8234be70
	sub_8234BE70(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stw ctx_arrow(ctx)->r26,56(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 128, ctx_arrow(ctx)->r4.u32);
	// bl 0x8234c2f8
	sub_8234C2F8(&ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// bl 0x8232c928
	sub_8232C928(&ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8234eee0
	sub_8234EEE0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8234bf18
	sub_8234BF18(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8232e0f4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8232E0F4;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// li ctx_arrow(ctx)->r7,2161
	ctx_arrow(ctx)->r7.s64 = 2161;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,23832
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 23832;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82263fb8
	sub_82263FB8(ctx, base);
loc_8232E0F4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed170
	return;
}

alias(__imp__sub_8232E100) PPC_WEAK_FUNC(sub_8232E100);
PPC_FUNC_IMPL(__imp__sub_8232E100) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r11,-32207
	ctx_arrow(ctx)->r11.s64 = -2110717952;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,16480
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 16480;
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,1488(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823285a8
	sub_823285A8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x8232e2f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8232E2F0;
	// lis ctx_arrow(ctx)->r11,-32207
	ctx_arrow(ctx)->r11.s64 = -2110717952;
	// lwz ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,16480
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 16480;
	// bl 0x82328b70
	sub_82328B70(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-20196
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -20196;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,23464
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 23464;
	// beq ctx_arrow(ctx)->r6,0x8232e19c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8232E19C;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// li ctx_arrow(ctx)->r7,2364
	ctx_arrow(ctx)->r7.s64 = 2364;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,24084
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 24084;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82263fb8
	sub_82263FB8(ctx, base);
loc_8232E19C:
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// lwz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lwz ctx_arrow(ctx)->r7,164(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u32 & 0xFFFF;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// lwz ctx_arrow(ctx)->r6,23404(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | 327680;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x82352558
	sub_82352558(&ctx);
	// li ctx_arrow(ctx)->r3,49
	ctx_arrow(ctx)->r3.s64 = 49;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8234be70
	sub_8234BE70(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r11.s64 = 6;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,56(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,3
	ctx_arrow(ctx)->r5.s64 = 3;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,25
	ctx_arrow(ctx)->r10.s64 = 25;
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 84, ctx_arrow(ctx)->r4.u32);
loc_8232E278:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x8232e278
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8232E278;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8232c928
	sub_8232C928(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r3,168(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8234ef28
	sub_8234EF28(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8234bf18
	sub_8234BF18(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8232e2e8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8232E2E8;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// li ctx_arrow(ctx)->r7,2382
	ctx_arrow(ctx)->r7.s64 = 2382;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,23832
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 23832;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82263fb8
	sub_82263FB8(ctx, base);
loc_8232E2E8:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stb ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r30)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r30.u32 + 124, ctx_arrow(ctx)->r4.u32.u8);
	// b 0x82347c10
	goto loc_82347C10;
}

