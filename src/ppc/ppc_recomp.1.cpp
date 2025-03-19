#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_8209EC28) PPC_WEAK_FUNC(sub_8209EC28);
PPC_FUNC_IMPL(__imp__sub_8209EC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,-6396(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,90
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 90, xer);
	// bne ctx_arrow(ctx)->r6,0x8209ec54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209EC54;
	// bl 0x821086c0
	sub_821086C0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed168
	return;
loc_8209EC54:
	// bl 0x820c9af0
	sub_820C9AF0(ctx, base);
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, 0, xer);
	// lis ctx_arrow(ctx)->r29,-32014
	ctx_arrow(ctx)->r29.s64 = -2098069504;
	// ble ctx_arrow(ctx)->r6,0x8209ee08
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8209EE08;
	// clrlwi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	// lis ctx_arrow(ctx)->r23,-32015
	ctx_arrow(ctx)->r23.s64 = -2098135040;
	// lis ctx_arrow(ctx)->r24,-32015
	ctx_arrow(ctx)->r24.s64 = -2098135040;
	// lis ctx_arrow(ctx)->r28,-32010
	ctx_arrow(ctx)->r28.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r25,-32015
	ctx_arrow(ctx)->r25.s64 = -2098135040;
	// li ctx_arrow(ctx)->r27,-1
	ctx_arrow(ctx)->r27.s64 = -1;
	// li ctx_arrow(ctx)->r21,-32704
	ctx_arrow(ctx)->r21.s64 = -32704;
loc_8209EC88:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x820ca0b0
	sub_820CA0B0(ctx, base);
	// bl 0x820c9b40
	sub_820C9B40(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r4,2306(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2306);
	// lhz ctx_arrow(ctx)->r3,2304(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2304);
	// bl 0x8210e1a8
	sub_8210E1A8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r4,2310(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2310);
	// lhz ctx_arrow(ctx)->r3,2308(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2308);
	// bl 0x8210e228
	sub_8210E228(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f1,4728(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8210e310
	sub_8210E310(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f1,4732(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8210e350
	sub_8210E350(ctx, base);
	// bl 0x8210df98
	sub_8210DF98(ctx, base);
	// bl 0x82096180
	sub_82096180(ctx, base);
	// bl 0x82139320
	sub_82139320(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8209ece4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209ECE4;
	// bl 0x820e8c18
	sub_820E8C18(ctx, base);
loc_8209ECE4:
	// bl 0x82139320
	sub_82139320(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x8209ecf4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209ECF4;
	// bl 0x820be390
	sub_820BE390(ctx, base);
loc_8209ECF4:
	// lbz ctx_arrow(ctx)->r11,-8431(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209ed04
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209ED04;
	// bl 0x8214afc8
	sub_8214AFC8(ctx, base);
loc_8209ED04:
	// bl 0x82117788
	sub_82117788(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r20.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8209ed14
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209ED14;
	// bl 0x820cfbb0
	sub_820CFBB0(ctx, base);
loc_8209ED14:
	// bl 0x820cf1d8
	sub_820CF1D8(ctx, base);
	// bl 0x820ce618
	sub_820CE618(ctx, base);
	// bl 0x820cdde0
	sub_820CDDE0(ctx, base);
	// bl 0x820b3d28
	sub_820B3D28(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209ed30
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209ED30;
	// bl 0x820cf4f0
	sub_820CF4F0(ctx, base);
loc_8209ED30:
	// bl 0x820b3d38
	sub_820B3D38(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209ed4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209ED4C;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x820a74a0
	sub_820A74A0(ctx, base);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x820a74a0
	sub_820A74A0(ctx, base);
loc_8209ED4C:
	// bl 0x820cfd38
	sub_820CFD38(ctx, base);
	// bl 0x82117338
	sub_82117338(ctx, base);
	// lbz ctx_arrow(ctx)->r11,-13406(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209ed9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209ED9C;
	// lwz ctx_arrow(ctx)->r11,21420(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209ed9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209ED9C;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_8209ED78:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x82114428
	sub_82114428(ctx, base);
	// lwz ctx_arrow(ctx)->r11,21420(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8209ed78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209ED78;
loc_8209ED9C:
	// lbz ctx_arrow(ctx)->r11,-13407(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209edb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209EDB4;
	// bl 0x823d22e0
	sub_823D22E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x82112dd0
	sub_82112DD0(ctx, base);
loc_8209EDB4:
	// bl 0x820d86a0
	sub_820D86A0(ctx, base);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x8213dfd8
	sub_8213DFD8(ctx, base);
	// bl 0x82145ed8
	sub_82145ED8(ctx, base);
	// bl 0x821409d0
	sub_821409D0(ctx, base);
	// li ctx_arrow(ctx)->r3,11
	ctx_arrow(ctx)->r3.s64 = 11;
	// bl 0x82136fa0
	sub_82136FA0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209edfc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209EDFC;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x820a0d30
	sub_820A0D30(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,23
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 23, xer);
	// bne ctx_arrow(ctx)->r6,0x8209edf8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209EDF8;
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4228(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8209edfc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209EDFC;
loc_8209EDF8:
	// bl 0x820aaad0
	sub_820AAAD0(ctx, base);
loc_8209EDFC:
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, ctx_arrow(ctx)->r22.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x8209ec88
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8209EC88;
loc_8209EE08:
	// li ctx_arrow(ctx)->r4,240
	ctx_arrow(ctx)->r4.s64 = 240;
	// li ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r3.s64 = 320;
	// bl 0x8210e1a8
	sub_8210E1A8(ctx, base);
	// li ctx_arrow(ctx)->r4,240
	ctx_arrow(ctx)->r4.s64 = 240;
	// li ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r3.s64 = 320;
	// bl 0x8210e170
	sub_8210E170(ctx, base);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x8210e228
	sub_8210E228(ctx, base);
	// bl 0x8210df98
	sub_8210DF98(ctx, base);
	// bl 0x82096180
	sub_82096180(ctx, base);
	// bl 0x82099cd0
	sub_82099CD0(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,16
	ctx_arrow(ctx)->r6.s64 = 16;
	// lfs f1,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,13356(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821974b8
	sub_821974B8(ctx, base);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x8209eee8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8209EEE8;
loc_8209EE70:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x820ca0b0
	sub_820CA0B0(ctx, base);
	// bl 0x820c9b40
	sub_820C9B40(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r4,2306(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2306);
	// lhz ctx_arrow(ctx)->r3,2304(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2304);
	// bl 0x8210e1a8
	sub_8210E1A8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r4,2310(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2310);
	// lhz ctx_arrow(ctx)->r3,2308(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 2308);
	// bl 0x8210e228
	sub_8210E228(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f1,4728(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8210e310
	sub_8210E310(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f1,4732(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8210e350
	sub_8210E350(ctx, base);
	// bl 0x8210df98
	sub_8210DF98(ctx, base);
	// bl 0x82096180
	sub_82096180(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x8209eedc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209EEDC;
	// bl 0x820aa748
	sub_820AA748(ctx, base);
	// bl 0x820a5500
	sub_820A5500(ctx, base);
	// bl 0x820a35a8
	sub_820A35A8(ctx, base);
	// bl 0x820be560
	sub_820BE560(ctx, base);
loc_8209EEDC:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r22.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x8209ee70
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8209EE70;
loc_8209EEE8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed168
	return;
}

alias(__imp__sub_8209EEF0) PPC_WEAK_FUNC(sub_8209EEF0);
PPC_FUNC_IMPL(__imp__sub_8209EEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-6364(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x8209ef0c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8209EF0C;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,-6364(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -6364, ctx_arrow(ctx)->r4.u32);
	// b 0x8209ef10
	goto loc_8209EF10;
loc_8209EF0C:
	// bne ctx_arrow(ctx)->r6,0x8209efa4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209EFA4;
loc_8209EF10:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,3060(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19408(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19408, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19412(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19412, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f13,19416(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19416, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f13,19420(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19420, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19424(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19424, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f12,12904(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f12,27968(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27968, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f13,27972(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27972, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27976(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27976, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,12900(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32033
	ctx_arrow(ctx)->r11.s64 = -2099314688;
	// stfs f13,-8808(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -8808, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,12896(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f13,19388(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19388, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19428(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19428, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,12892(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27980(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27980, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
loc_8209EFA4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f048
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F048;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f13,19408(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19408, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f13,19412(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19412, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r11,11488(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,12888(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19416(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19416, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19420(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19420, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f13,19424(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19424, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27968(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27968, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27972(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27972, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f13,27976(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27976, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32033
	ctx_arrow(ctx)->r11.s64 = -2099314688;
	// stfs f0,-8808(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -8808, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x8209f01c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F01C;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,12884(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
loc_8209F01C:
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19388(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19388, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,12896(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19428(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19428, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27980(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27980, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
loc_8209F048:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f0f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F0F8;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19408(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19408, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19412(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19412, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r11,11488(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19416(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19416, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19420(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19420, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19424(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19424, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27968(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27968, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27972(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27972, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27976(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27976, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32033
	ctx_arrow(ctx)->r11.s64 = -2099314688;
	// stfs f0,-8808(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -8808, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x8209f0d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F0D4;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,12888(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f13,19388(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19388, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19428(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19428, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27980(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27980, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
loc_8209F0D4:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,12892(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f13,19388(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19388, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19428(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19428, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27980(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27980, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
loc_8209F0F8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19408(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19408, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19412(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19412, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19416(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19416, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19420(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19420, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19424(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19424, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27968(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27968, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27972(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27972, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27976(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27976, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32033
	ctx_arrow(ctx)->r11.s64 = -2099314688;
	// stfs f0,-8808(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -8808, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19388(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19388, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// stfs f0,19428(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19428, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32056
	ctx_arrow(ctx)->r11.s64 = -2100822016;
	// stfs f0,27980(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 27980, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8209F170) PPC_WEAK_FUNC(sub_8209F170);
PPC_FUNC_IMPL(__imp__sub_8209F170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-40
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -40;
	// bl 0x823ed548
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820c9b80
	sub_820C9B80(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x82137f30
	sub_82137F30(ctx, base);
	// extsb ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x820ca110
	sub_820CA110(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x82139330
	sub_82139330(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// lis ctx_arrow(ctx)->r30,-32014
	ctx_arrow(ctx)->r30.s64 = -2098069504;
	// beq ctx_arrow(ctx)->r6,0x8209f344
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F344;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f394
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F394;
	// bl 0x82139340
	sub_82139340(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f2fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F2FC;
	// bl 0x820ebbf8
	sub_820EBBF8(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f21c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F21C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x820a0248
	sub_820A0248(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820a0148
	sub_820A0148(ctx, base);
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x820a0548
	sub_820A0548(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x820a0448
	sub_820A0448(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x820a0348
	sub_820A0348(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// b 0x8209f32c
	goto loc_8209F32C;
loc_8209F21C:
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f254
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F254;
	// lwz ctx_arrow(ctx)->r10,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f254
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F254;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f254
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F254;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,2,2
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20000000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f2ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F2AC;
loc_8209F254:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x8209f2ac
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8209F2AC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x820a0248
	sub_820A0248(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x820a0148
	sub_820A0148(ctx, base);
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x820a0548
	sub_820A0548(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x820a0448
	sub_820A0448(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// bl 0x820a0348
	sub_820A0348(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// b 0x8209f2c4
	goto loc_8209F2C4;
loc_8209F2AC:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// lfs f4,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
loc_8209F2C4:
	// bl 0x820bdc80
	sub_820BDC80(ctx, base);
	// bl 0x820ca338
	sub_820CA338(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f33c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F33C;
	// bl 0x8216c150
	sub_8216C150(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f33c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F33C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82159c68
	sub_82159C68(ctx, base);
	// bl 0x8213bf80
	sub_8213BF80(ctx, base);
	// b 0x8209f394
	goto loc_8209F394;
loc_8209F2FC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x820a0248
	sub_820A0248(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820a0148
	sub_820A0148(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x820a0448
	sub_820A0448(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x820a0348
	sub_820A0348(ctx, base);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
loc_8209F32C:
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x820bdc80
	sub_820BDC80(ctx, base);
loc_8209F33C:
	// bl 0x8213bf80
	sub_8213BF80(ctx, base);
	// b 0x8209f394
	goto loc_8209F394;
loc_8209F344:
	// bl 0x82139340
	sub_82139340(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f364
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F364;
	// bl 0x82139340
	sub_82139340(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,59
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 59, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f364
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F364;
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// lwz ctx_arrow(ctx)->r11,17304(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8209F364:
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x820a0548
	sub_820A0548(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x820a0248
	sub_820A0248(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820a0148
	sub_820A0148(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// bl 0x820e8880
	sub_820E8880(ctx, base);
loc_8209F394:
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,556(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// bl 0x82090b68
	sub_82090B68(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,556(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// bl 0x82090b68
	sub_82090B68(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r9,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,1328(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,1336(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r10,-908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f11,12(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f10,20(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,56(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// stfs f0,56(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// bl 0x820ec268
	sub_820EC268(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f498
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F498;
	// bl 0x82160588
	sub_82160588(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f4cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F4CC;
	// bl 0x820c15a8
	sub_820C15A8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f4c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F4C0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x820a0d30
	sub_820A0D30(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,88
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 88, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f464
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F464;
	// li ctx_arrow(ctx)->r4,88
	ctx_arrow(ctx)->r4.s64 = 88;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x820a0cf8
	sub_820A0CF8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,2380(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f464
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F464;
	// li ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r10.s64 = 5;
	// stw ctx_arrow(ctx)->r10,2380(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 2380, ctx_arrow(ctx)->r4.u32);
loc_8209F464:
	// lwz ctx_arrow(ctx)->r11,-908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// lwz ctx_arrow(ctx)->r9,96(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,-6384(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r8,105(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 105, ctx_arrow(ctx)->r4.u8);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-40
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -40;
	// bl 0x823ed594
	// b 0x823ed188
	return;
loc_8209F498:
	// bl 0x820ec268
	sub_820EC268(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f4cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F4CC;
	// bl 0x82160588
	sub_82160588(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f4cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F4CC;
	// bl 0x820c1600
	sub_820C1600(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x8209f4c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F4C4;
loc_8209F4C0:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_8209F4C4:
	// lwz ctx_arrow(ctx)->r11,-908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r10,105(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 105, ctx_arrow(ctx)->r4.u8);
loc_8209F4CC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-40
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -40;
	// bl 0x823ed594
	// b 0x823ed188
	return;
}

alias(__imp__sub_8209F4E0) PPC_WEAK_FUNC(sub_8209F4E0);
PPC_FUNC_IMPL(__imp__sub_8209F4E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// lwz ctx_arrow(ctx)->r3,13356(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82198d58
	sub_82198D58(ctx, base);
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r3,-6344(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f520
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F520;
	// bl 0x82144970
	sub_82144970(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f520
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F520;
	// lwz ctx_arrow(ctx)->r3,-6344(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82144a08
	sub_82144A08(ctx, base);
loc_8209F520:
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-6396(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,90
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 90, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f534
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F534;
	// bl 0x820c21d8
	sub_820C21D8(ctx, base);
loc_8209F534:
	// bl 0x82137cf8
	sub_82137CF8(ctx, base);
	// bl 0x82120e78
	sub_82120E78(ctx, base);
	// bl 0x82135df8
	sub_82135DF8(ctx, base);
	// bl 0x82143960
	sub_82143960(ctx, base);
	// bl 0x820e83a0
	sub_820E83A0(ctx, base);
	// lwz ctx_arrow(ctx)->r3,-6396(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820d0848
	sub_820D0848(ctx, base);
	// bl 0x820cc868
	sub_820CC868(ctx, base);
	// bl 0x820bfd90
	sub_820BFD90(ctx, base);
	// bl 0x823d22e0
	sub_823D22E0(ctx, base);
	// bl 0x82115860
	sub_82115860(ctx, base);
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

alias(__imp__sub_8209F578) PPC_WEAK_FUNC(sub_8209F578);
PPC_FUNC_IMPL(__imp__sub_8209F578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// stw ctx_arrow(ctx)->r3,-6388(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -6388, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8209F588) PPC_WEAK_FUNC(sub_8209F588);
PPC_FUNC_IMPL(__imp__sub_8209F588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r3,-6388(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_8209F598) PPC_WEAK_FUNC(sub_8209F598);
PPC_FUNC_IMPL(__imp__sub_8209F598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r3,-6364(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_8209F5A8) PPC_WEAK_FUNC(sub_8209F5A8);
PPC_FUNC_IMPL(__imp__sub_8209F5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// stw ctx_arrow(ctx)->r3,-6364(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -6364, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8209F5B8) PPC_WEAK_FUNC(sub_8209F5B8);
PPC_FUNC_IMPL(__imp__sub_8209F5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lfs f1,-6340(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

alias(__imp__sub_8209F5C8) PPC_WEAK_FUNC(sub_8209F5C8);
PPC_FUNC_IMPL(__imp__sub_8209F5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lfs f1,-6332(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

alias(__imp__sub_8209F5D8) PPC_WEAK_FUNC(sub_8209F5D8);
PPC_FUNC_IMPL(__imp__sub_8209F5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed124
	// stfd f29,-104(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -104);
	// stfd f30,-96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -96);
	// stfd f31,-88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -88);
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// b 0x830e0670
	// ERROR 830E0670
	return;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// lis ctx_arrow(ctx)->r30,-32014
	ctx_arrow(ctx)->r30.s64 = -2098069504;
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
	// lfs f31,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stfs f31,-6380(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -6380, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-6396
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -6396;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// stw ctx_arrow(ctx)->r25,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f31,-6368(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -6368, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,1140
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + 1140;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f30,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f30.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
	// stfs f30,56(ctx_arrow(ctx)->r31)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stfs f30,72(ctx_arrow(ctx)->r31)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 72, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,-6384(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + -6384, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r11,-6372(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -6372, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,-6376(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -6376, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,-6344(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -6344, ctx_arrow(ctx)->r4.u32);
	// bl 0x82118920
	sub_82118920(&ctx);
	// bl 0x8213dfa0
	sub_8213DFA0(&ctx);
	// bl 0x82146538
	sub_82146538(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,90
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 90, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f6ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F6AC;
	// bl 0x820ae360
	sub_820AE360(ctx, base);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x82117c90
	sub_82117C90(ctx, base);
	// bl 0x820ea4a8
	sub_820EA4A8(ctx, base);
	// b 0x8209f830
	goto loc_8209F830;
loc_8209F6AC:
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,90
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 90, xer);
	// stw ctx_arrow(ctx)->r11,2796(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 2796, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x8209f734
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F734;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f734
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F734;
	// lwz ctx_arrow(ctx)->r11,-6384(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x8209f734
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8209F734;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r11,4024(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f734
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F734;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,3544
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 3544;
loc_8209F6F8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x82136f40
	sub_82136F40(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f724
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F724;
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8209f720
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8209F720;
	// bl 0x82138080
	sub_82138080(ctx, base);
	// b 0x8209f724
	goto loc_8209F724;
loc_8209F720:
	// bl 0x82137968
	sub_82137968(ctx, base);
loc_8209F724:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,81
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 81, xer);
	// blt ctx_arrow(ctx)->r6,0x8209f6f8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8209F6F8;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8209F734:
	// bl 0x82114ef8
	sub_82114EF8(ctx, base);
	// bl 0x820c2900
	sub_820C2900(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x82145130
	sub_82145130(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lis ctx_arrow(ctx)->r10,32767
	ctx_arrow(ctx)->r10.s64 = 2147418112;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,-1360
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + -1360;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26,100
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r26.s64 + 100;
	// ori ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// lfs f29,2940(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f29.f64 = double(temp.f32);
loc_8209F760:
	// bl 0x820c9af0
	sub_820C9AF0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x8209f780
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8209F780;
	// stfs f31,-8(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r28,6(ctx_arrow(ctx)->r30)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r30.u32 + 6, ctx_arrow(ctx)->r1.u32.u8);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

