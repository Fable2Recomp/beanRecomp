#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_82256830) PPC_WEAK_FUNC(sub_82256830);
PPC_FUNC_IMPL(__imp__sub_82256830) {
	PPC_FUNC_PROLOGUE();
	// b 0x82255c38
	sub_82255C38(ctx, base);
	return;
}

alias(__imp__sub_82256838) PPC_WEAK_FUNC(sub_82256838);
PPC_FUNC_IMPL(__imp__sub_82256838) {
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
	// lwz ctx_arrow(ctx)->r11,180(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x82255ec0
	sub_82255EC0(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_82256860) PPC_WEAK_FUNC(sub_82256860);
PPC_FUNC_IMPL(__imp__sub_82256860) {
	PPC_FUNC_PROLOGUE();
	// b 0x82255f68
	sub_82255F68(ctx, base);
	return;
}

alias(__imp__sub_82256868) PPC_WEAK_FUNC(sub_82256868);
PPC_FUNC_IMPL(__imp__sub_82256868) {
	PPC_FUNC_PROLOGUE();
	// b 0x82255fc8
	sub_82255FC8(ctx, base);
	return;
}

alias(__imp__sub_82256870) PPC_WEAK_FUNC(sub_82256870);
PPC_FUNC_IMPL(__imp__sub_82256870) {
	PPC_FUNC_PROLOGUE();
	// b 0x82256028
	sub_82256028(ctx, base);
	return;
}

alias(__imp__sub_82256878) PPC_WEAK_FUNC(sub_82256878);
PPC_FUNC_IMPL(__imp__sub_82256878) {
	PPC_FUNC_PROLOGUE();
	// b 0x822560d8
	sub_822560D8(ctx, base);
	return;
}

alias(__imp__sub_82256880) PPC_WEAK_FUNC(sub_82256880);
PPC_FUNC_IMPL(__imp__sub_82256880) {
	PPC_FUNC_PROLOGUE();
	// b 0x82256180
	sub_82256180(ctx, base);
	return;
}

alias(__imp__sub_82256888) PPC_WEAK_FUNC(sub_82256888);
PPC_FUNC_IMPL(__imp__sub_82256888) {
	PPC_FUNC_PROLOGUE();
	// b 0x822561e0
	sub_822561E0(ctx, base);
	return;
}

alias(__imp__sub_82256890) PPC_WEAK_FUNC(sub_82256890);
PPC_FUNC_IMPL(__imp__sub_82256890) {
	PPC_FUNC_PROLOGUE();
	// b 0x82255d88
	sub_82255D88(ctx, base);
	return;
}

alias(__imp__sub_82256898) PPC_WEAK_FUNC(sub_82256898);
PPC_FUNC_IMPL(__imp__sub_82256898) {
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
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed118
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29,16
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r29.s64 + 16;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822568d8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822568D8;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29,128
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r29.s64 + 128;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x822534c0
	sub_822534C0(ctx, base);
loc_822568D8:
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r29,128
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r29.s64 + 128;
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x822568f4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_822568F4;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x82256b0c
	goto loc_82256B0C;
loc_822568F4:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, 0, xer);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,452
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 452;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-452
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -452;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,276
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 276;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r30,288
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r30.s64 + 288;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r30,324
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r30.s64 + 324;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r30,352
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r30.s64 + 352;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r30,364
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r30.s64 + 364;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r30,376
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r30.s64 + 376;
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r24.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r24.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r24.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x82256988
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82256988;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r22.u64;
	// li ctx_arrow(ctx)->r4,256
	ctx_arrow(ctx)->r4.s64 = 256;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821db9f8
	sub_821DB9F8(ctx, base);
	// b 0x8225698c
	goto loc_8225698C;
loc_82256988:
	// stb ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r30)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx.u8)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

