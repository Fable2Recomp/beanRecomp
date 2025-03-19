#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_820FAE88) PPC_WEAK_FUNC(sub_820FAE88);
PPC_FUNC_IMPL(__imp__sub_820FAE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu ctx_arrow(ctx)->r1,-256(ctx_arrow(ctx)->r1)
	ea = -256 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// li ctx_arrow(ctx)->r19,1
	ctx_arrow(ctx)->r19.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,-19604(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820faeb8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FAEB8;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r11,4220(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// b 0x820faebc
	goto loc_820FAEBC;
loc_820FAEB8:
	// stw ctx_arrow(ctx)->r19,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
loc_820FAEBC:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// lwz ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r14.u64 = ctx_arrow(ctx)->r19.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r31.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// stw ctx_arrow(ctx)->r31,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x820fb210
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB210;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r16,-32141
	ctx_arrow(ctx)->r16.s64 = -2106392576;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,2760
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 2760;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lis ctx_arrow(ctx)->r15,-32141
	ctx_arrow(ctx)->r15.s64 = -2106392576;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r11,-19476
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r11.s64 + -19476;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lis ctx_arrow(ctx)->r21,-31994
	ctx_arrow(ctx)->r21.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r11,-19460
	ctx_arrow(ctx)->r17.s64 = ctx_arrow(ctx)->r11.s64 + -19460;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r22,-31994
	ctx_arrow(ctx)->r22.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,24996
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + 24996;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,3212
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 3212;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r11,3916
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r11.s64 + 3916;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,2872
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + 2872;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,3888
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + 3888;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,3848
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + 3848;
loc_820FAF38:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820ca110
	sub_820CA110(ctx, base);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820faf68
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FAF68;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820faf68
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FAF68;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
loc_820FAF68:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fafd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FAFD0;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 11, xer);
	// bge ctx_arrow(ctx)->r6,0x820faf98
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FAF98;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x820faf98
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FAF98;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r25.u32);
loc_820FAF98:
	// li ctx_arrow(ctx)->r4,16384
	ctx_arrow(ctx)->r4.s64 = 16384;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fafd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FAFD0;
	// li ctx_arrow(ctx)->r14,0
	ctx_arrow(ctx)->r14.s64 = 0;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,8187
	ctx_arrow(ctx)->r8.s64 = 8187;
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,199
	ctx_arrow(ctx)->r4.s64 = 199;
	// stwx ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r26.u32);
	// bl 0x82144920
	sub_82144920(&ctx);
loc_820FAFD0:
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb164
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB164;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820faff4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FAFF4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r25.u32);
	// b 0x820fb164
	goto loc_820FB164;
loc_820FAFF4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb164
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB164;
	// li ctx_arrow(ctx)->r4,514
	ctx_arrow(ctx)->r4.s64 = 514;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r19.u64;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb02c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB02C;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fb150
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB150;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r29.u32);
	// b 0x820fb150
	goto loc_820FB150;
loc_820FB02C:
	// li ctx_arrow(ctx)->r4,257
	ctx_arrow(ctx)->r4.s64 = 257;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb060
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB060;
	// lwz ctx_arrow(ctx)->r11,-19480(ctx_arrow(ctx)->r15)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820fb150
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FB150;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r29.u32);
	// b 0x820fb150
	goto loc_820FB150;
loc_820FB060:
	// lis ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,40960
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 40960;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb0cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB0CC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb094
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB094;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820ef170
	sub_820EF170(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb150
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB150;
loc_820FB094:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,8217
	ctx_arrow(ctx)->r8.s64 = 8217;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r23.u64;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,199
	ctx_arrow(ctx)->r4.s64 = 199;
	// stwx ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r24.u32);
	// stwx ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r26.u32);
	// stwx ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r25.u32);
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r17
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r17.u32);
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r18
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r18.u32);
	// bl 0x82144920
	sub_82144920(&ctx);
	// b 0x820fb150
	goto loc_820FB150;
loc_820FB0CC:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,-2
	ctx_arrow(ctx)->r4.s64 = -2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x820a0648
	sub_820A0648(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fb110
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB110;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb150
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB150;
	// lwz ctx_arrow(ctx)->r11,-19480(ctx_arrow(ctx)->r15)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820fb150
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FB150;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r29.u32);
	// b 0x820fb150
	goto loc_820FB150;
loc_820FB110:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,-2
	ctx_arrow(ctx)->r4.s64 = -2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x820a0648
	sub_820A0648(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bge ctx_arrow(ctx)->r6,0x820fb14c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FB14C;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb150
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB150;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fb150
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB150;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r29.u32);
	// b 0x820fb150
	goto loc_820FB150;
loc_820FB14C:
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_820FB150:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb164
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB164;
	// li ctx_arrow(ctx)->r14,0
	ctx_arrow(ctx)->r14.s64 = 0;
	// stwx ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r24.u32);
loc_820FB164:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,84
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 * 84;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,84
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r8.s64 * 84;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r10.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x820fb1a4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB1A4;
	// lwz ctx_arrow(ctx)->r10,-14488(ctx_arrow(ctx)->r16)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r27.u32);
	// bge ctx_arrow(ctx)->r6,0x820fb1cc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FB1CC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,84
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 84;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	// b 0x820fb1c4
	goto loc_820FB1C4;
loc_820FB1A4:
	// bge ctx_arrow(ctx)->r6,0x820fb1cc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FB1CC;
	// lwz ctx_arrow(ctx)->r10,-14488(ctx_arrow(ctx)->r16)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,83
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 83, xer);
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r27.u32);
	// ble ctx_arrow(ctx)->r6,0x820fb1cc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB1CC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-84
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -84;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + 1;
loc_820FB1C4:
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r20
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r20.u32);
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r27.u32);
loc_820FB1CC:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb1f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB1F0;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 11, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb1f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB1F0;
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
loc_820FB1F0:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// lwz ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r30.s32, xer);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// blt ctx_arrow(ctx)->r6,0x820faf38
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FAF38;
	// lwz ctx_arrow(ctx)->r29,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820FB210:
	// lis ctx_arrow(ctx)->r31,-32010
	ctx_arrow(ctx)->r31.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820ec288
	sub_820EC288(ctx, base);
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb244
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB244;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// stw ctx_arrow(ctx)->r19,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820FB244:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,168(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb264
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB264;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// stw ctx_arrow(ctx)->r19,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820FB264:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r14,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r14.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4216
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4216;
	// beq ctx_arrow(ctx)->r6,0x820fb284
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB284;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// b 0x820fb288
	goto loc_820FB288;
loc_820FB284:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_820FB288:
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r30.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb2b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB2B0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fb2c8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB2C8;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb2c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB2C8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,300
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 300, xer);
	// ble ctx_arrow(ctx)->r6,0x820fb2c8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB2C8;
loc_820FB2B0:
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r19.u64;
	// stw ctx_arrow(ctx)->r11,4116(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4116, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// li ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r11.s64 = 15;
	// stw ctx_arrow(ctx)->r11,4120(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4120, ctx_arrow(ctx)->r4.u32);
loc_820FB2C8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// b 0x823ed150
	return;
}

alias(__imp__sub_820FB2D0) PPC_WEAK_FUNC(sub_820FB2D0);
PPC_FUNC_IMPL(__imp__sub_820FB2D0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// stfd f31,-160(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -160);
	// stwu ctx_arrow(ctx)->r1,-320(ctx_arrow(ctx)->r1)
	ea = -320 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lwz ctx_arrow(ctx)->r11,-19604(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb300
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB300;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r30,4220(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r30,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// b 0x820fb30c
	goto loc_820FB30C;
loc_820FB300:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// rotlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
loc_820FB30C:
	// bl 0x820f5898
	sub_820F5898(&ctx);
	// li ctx_arrow(ctx)->r7,144
	ctx_arrow(ctx)->r7.s64 = 144;
	// li ctx_arrow(ctx)->r6,171
	ctx_arrow(ctx)->r6.s64 = 171;
	// li ctx_arrow(ctx)->r5,388
	ctx_arrow(ctx)->r5.s64 = 388;
	// li ctx_arrow(ctx)->r4,169
	ctx_arrow(ctx)->r4.s64 = 169;
	// li ctx_arrow(ctx)->r3,38
	ctx_arrow(ctx)->r3.s64 = 38;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x820fb348
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB348;
	// li ctx_arrow(ctx)->r7,128
	ctx_arrow(ctx)->r7.s64 = 128;
	// li ctx_arrow(ctx)->r6,310
	ctx_arrow(ctx)->r6.s64 = 310;
	// li ctx_arrow(ctx)->r5,214
	ctx_arrow(ctx)->r5.s64 = 214;
	// li ctx_arrow(ctx)->r4,30
	ctx_arrow(ctx)->r4.s64 = 30;
	// li ctx_arrow(ctx)->r3,212
	ctx_arrow(ctx)->r3.s64 = 212;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
loc_820FB348:
	// li ctx_arrow(ctx)->r20,0
	ctx_arrow(ctx)->r20.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r20.u64;
	// stw ctx_arrow(ctx)->r9,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x820fb7b0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB7B0;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r11,-19524
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r11.s64 + -19524;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r20.u64;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,2760
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + 2760;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lfs f31,6580(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r17,-32141
	ctx_arrow(ctx)->r17.s64 = -2106392576;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11,3916
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r11.s64 + 3916;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r21,-31991
	ctx_arrow(ctx)->r21.s64 = -2096562176;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3848
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3848;
	// lis ctx_arrow(ctx)->r22,-31994
	ctx_arrow(ctx)->r22.s64 = -2096758784;
	// li ctx_arrow(ctx)->r14,-1
	ctx_arrow(ctx)->r14.s64 = -1;
	// stw ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 148, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r11,3212
	ctx_arrow(ctx)->r15.s64 = ctx_arrow(ctx)->r11.s64 + 3212;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-17792
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -17792;
	// stw ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 140, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,2872
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + 2872;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11,3888
	ctx_arrow(ctx)->r16.s64 = ctx_arrow(ctx)->r11.s64 + 3888;
	// b 0x820fb3cc
	goto loc_820FB3CC;
loc_820FB3C4:
	// lwz ctx_arrow(ctx)->r9,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r30,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820FB3CC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 2, xer);
	// li ctx_arrow(ctx)->r11,140
	ctx_arrow(ctx)->r11.s64 = 140;
	// bgt ctx_arrow(ctx)->r6,0x820fb3f4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FB3F4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bgt ctx_arrow(ctx)->r6,0x820fb3e4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FB3E4;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_820FB3E4:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 30;
	// li ctx_arrow(ctx)->r26,38
	ctx_arrow(ctx)->r26.s64 = 38;
	// li ctx_arrow(ctx)->r24,350
	ctx_arrow(ctx)->r24.s64 = 350;
	// b 0x820fb41c
	goto loc_820FB41C;
loc_820FB3F4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 1, xer);
	// bgt ctx_arrow(ctx)->r6,0x820fb400
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FB400;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_820FB400:
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 30;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// li ctx_arrow(ctx)->r24,175
	ctx_arrow(ctx)->r24.s64 = 175;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,175
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 175;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,38
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + 38;
loc_820FB41C:
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,1
	xer.ca = (ctx_arrow(ctx)->r24.s32 < 0) & ((ctx_arrow(ctx)->r24.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r24.s32 >> 1;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29,70
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r29.s64 + 70;
	// add ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb4c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB4C8;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb4c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB4C8;
	// lis ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,40021
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 40021;
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,152
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 152;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,5
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 + 5;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r10,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 136, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210e198
	sub_8210E198(&ctx);
	// extsh ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r14.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// stw ctx_arrow(ctx)->r20,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// stw ctx_arrow(ctx)->r20,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r14.u64;
	// bl 0x820ec9c0
	sub_820EC9C0(ctx, base);
	// li ctx_arrow(ctx)->r14,-1
	ctx_arrow(ctx)->r14.s64 = -1;
loc_820FB4C8:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r10,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32);
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,156
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 156;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// lwz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,120
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 + 120;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r10,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210e198
	sub_8210E198(&ctx);
	// extsh ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// lwz ctx_arrow(ctx)->r11,11488(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// beq ctx_arrow(ctx)->r6,0x820fb594
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB594;
	// lbz ctx_arrow(ctx)->r10,-31(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,-30(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,-29(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,8,16,23
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0xFF00) | (ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u32 & 0xFFFF;
	// stw ctx_arrow(ctx)->r14,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// stw ctx_arrow(ctx)->r20,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,8,0,23
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFF000000FF);
	// stw ctx_arrow(ctx)->r20,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,8,0,23
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF000000FF);
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8213e398
	sub_8213E398(ctx, base);
	// b 0x820fb5b4
	goto loc_820FB5B4;
loc_820FB594:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r14,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// stw ctx_arrow(ctx)->r20,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r20,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x8213e0d8
	sub_8213E0D8(&ctx);
loc_820FB5B4:
	// lwz ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb5d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB5D0;
	// lis ctx_arrow(ctx)->r11,-32241
	ctx_arrow(ctx)->r11.s64 = -2112946176;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-3728
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -3728;
	// b 0x820fb5d8
	goto loc_820FB5D8;
loc_820FB5D0:
	// lis ctx_arrow(ctx)->r11,-32204
	ctx_arrow(ctx)->r11.s64 = -2110521344;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,23912
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 23912;
loc_820FB5D8:
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64 + ctx_arrow(ctx)->r26.u64;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r26,13
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r26.s64 + 13;
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-14
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -14;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x820ebc28
	sub_820EBC28(ctx, base);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb61c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB61C;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb62c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB62C;
loc_820FB61C:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb794
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB794;
loc_820FB62C:
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x820fb664
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB664;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32241
	ctx_arrow(ctx)->r10.s64 = -2112946176;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-3
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -3;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-3728
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -3728;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-252
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -252;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x820ebc28
	sub_820EBC28(ctx, base);
loc_820FB664:
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x820fb69c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB69C;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32241
	ctx_arrow(ctx)->r10.s64 = -2112946176;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-2
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -2;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-3728
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -3728;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-168
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -168;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x820ebc28
	sub_820EBC28(ctx, base);
loc_820FB69C:
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fb6d4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FB6D4;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32241
	ctx_arrow(ctx)->r10.s64 = -2112946176;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-3728
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -3728;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -84;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x820ebc28
	sub_820EBC28(ctx, base);
loc_820FB6D4:
	// lwz ctx_arrow(ctx)->r11,-19480(ctx_arrow(ctx)->r17)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820fb718
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FB718;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32241
	ctx_arrow(ctx)->r10.s64 = -2112946176;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 1;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-3728
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -3728;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 84;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x820ebc28
	sub_820EBC28(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-19480(ctx_arrow(ctx)->r17)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820FB718:
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -2;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820fb758
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FB758;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32241
	ctx_arrow(ctx)->r10.s64 = -2112946176;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 2;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-3728
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -3728;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,168
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 168;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x820ebc28
	sub_820EBC28(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-19480(ctx_arrow(ctx)->r17)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820FB758:
	// lwzx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -3;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820fb794
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FB794;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32241
	ctx_arrow(ctx)->r10.s64 = -2112946176;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,3
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 3;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-3728
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -3728;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,252
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 252;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x820ebc28
	sub_820EBC28(ctx, base);
loc_820FB794:
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// lwz ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// blt ctx_arrow(ctx)->r6,0x820fb3c4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FB3C4;
loc_820FB7B0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,320
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 320;
	// lfd f31,-160(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed150
	return;
}

alias(__imp__sub_820FB7C0) PPC_WEAK_FUNC(sub_820FB7C0);
PPC_FUNC_IMPL(__imp__sub_820FB7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed10c
	// stfd f31,-136(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -136);
	// stwu ctx_arrow(ctx)->r1,-288(ctx_arrow(ctx)->r1)
	ea = -288 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x820f5898
	sub_820F5898(&ctx);
	// bl 0x820f5978
	sub_820F5978(&ctx);
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// li ctx_arrow(ctx)->r7,144
	ctx_arrow(ctx)->r7.s64 = 144;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-19524
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -19524;
	// lwz ctx_arrow(ctx)->r11,3896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,3884(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// lwz ctx_arrow(ctx)->r11,3892(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,3888(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
	// lwz ctx_arrow(ctx)->r11,3892(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,3888(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,128
	ctx_arrow(ctx)->r7.s64 = 128;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// lwz ctx_arrow(ctx)->r11,3896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,3884(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// lis ctx_arrow(ctx)->r19,-31994
	ctx_arrow(ctx)->r19.s64 = -2096758784;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r24.u64;
	// lis ctx_arrow(ctx)->r17,-32010
	ctx_arrow(ctx)->r17.s64 = -2097807360;
	// lfs f31,6580(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r20,-32010
	ctx_arrow(ctx)->r20.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r18,-32010
	ctx_arrow(ctx)->r18.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r25,-31991
	ctx_arrow(ctx)->r25.s64 = -2096562176;
	// lis ctx_arrow(ctx)->r26,-31994
	ctx_arrow(ctx)->r26.s64 = -2096758784;
	// li ctx_arrow(ctx)->r21,-1
	ctx_arrow(ctx)->r21.s64 = -1;
loc_820FB864:
	// lwz ctx_arrow(ctx)->r8,3896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, 1, xer);
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,1
	xer.ca = (ctx_arrow(ctx)->r8.s32 < 0) & ((ctx_arrow(ctx)->r8.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s32 >> 1;
	// bgt ctx_arrow(ctx)->r6,0x820fb878
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FB878;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r24.u64;
loc_820FB878:
	// lwz ctx_arrow(ctx)->r11,3888(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r22.u32 & 0x1;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,3892(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// srawi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// bne ctx_arrow(ctx)->r6,0x820fb898
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB898;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r24.u64;
loc_820FB898:
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,2
	xer.ca = (ctx_arrow(ctx)->r8.s32 < 0) & ((ctx_arrow(ctx)->r8.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s32 >> 2;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,3884(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, 0, xer);
	// add ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// bne ctx_arrow(ctx)->r6,0x820fb93c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB93C;
	// lis ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,40024
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 40024;
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,140
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 140;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,5
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 + 5;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r10,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 128, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210e198
	sub_8210E198(&ctx);
	// extsh ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// stw ctx_arrow(ctx)->r24,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// stw ctx_arrow(ctx)->r24,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x820ec9c0
	sub_820EC9C0(ctx, base);
loc_820FB93C:
	// lwz ctx_arrow(ctx)->r11,4228(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// bne ctx_arrow(ctx)->r6,0x820fba3c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FBA3C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fba58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBA58;
	// lwz ctx_arrow(ctx)->r11,3528(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, ctx_arrow(ctx)->r11.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x820fba58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBA58;
loc_820FB95C:
	// lis ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,40026
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 40026;
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// lis ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,65535
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 65535;
loc_820FB974:
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// lwz ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 1;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r23.s64 - ctx_arrow(ctx)->r10.s64;
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,3528(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x820fb9cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FB9CC;
	// lwz ctx_arrow(ctx)->r11,4292(ctx_arrow(ctx)->r17)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 10, xer);
	// bge ctx_arrow(ctx)->r6,0x820fba94
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FBA94;
loc_820FB9CC:
	// bl 0x8210e198
	sub_8210E198(ctx, base);
	// extsh ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// lwz ctx_arrow(ctx)->r11,11488(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsh ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r8.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// beq ctx_arrow(ctx)->r6,0x820fba74
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBA74;
	// lbz ctx_arrow(ctx)->r11,-31(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,-30(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r10,-29(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,8,16,23
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0xFF00) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u32 & 0xFFFF;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r21,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,8,0,23
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF000000FF);
	// stw ctx_arrow(ctx)->r24,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r24,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,8,0,23
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF000000FF);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8213e398
	sub_8213E398(ctx, base);
	// b 0x820fba94
	goto loc_820FBA94;
loc_820FBA3C:
	// lwz ctx_arrow(ctx)->r11,3528(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r22.s64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fb95c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FB95C;
loc_820FBA58:
	// lis ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,40025
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 40025;
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// lis ctx_arrow(ctx)->r27,-256
	ctx_arrow(ctx)->r27.s64 = -16777216;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,255
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 255;
	// b 0x820fb974
	goto loc_820FB974;
loc_820FBA74:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r21,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r24,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r24,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x8213e0d8
	sub_8213E0D8(&ctx);
loc_820FBA94:
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r22.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x820fb864
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FB864;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// lfd f31,-136(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed15c
	return;
}

alias(__imp__sub_820FBAB0) PPC_WEAK_FUNC(sub_820FBAB0);
PPC_FUNC_IMPL(__imp__sub_820FBAB0) {
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
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed110
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// li ctx_arrow(ctx)->r20,1
	ctx_arrow(ctx)->r20.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,-19604(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820fbadc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FBADC;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r19,4220(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r19.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x820fbae0
	goto loc_820FBAE0;
loc_820FBADC:
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r20.u64;
loc_820FBAE0:
	// li ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r23.s64 = 0;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r20.u64;
	// mr ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r23.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r19,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r19.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fbcb8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FBCB8;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r23.u64;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,-19444
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + -19444;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r26,-31994
	ctx_arrow(ctx)->r26.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,3936
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + 3936;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r27,-31994
	ctx_arrow(ctx)->r27.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,24996
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 24996;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,3888
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 3888;
loc_820FBB24:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x820ca110
	sub_820CA110(ctx, base);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fbb70
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBB70;
	// li ctx_arrow(ctx)->r4,16384
	ctx_arrow(ctx)->r4.s64 = 16384;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fbb70
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBB70;
	// li ctx_arrow(ctx)->r8,8723
	ctx_arrow(ctx)->r8.s64 = 8723;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stwx ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r30.u32);
	// li ctx_arrow(ctx)->r4,199
	ctx_arrow(ctx)->r4.s64 = 199;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x82144920
	sub_82144920(ctx, base);
loc_820FBB70:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fbc98
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FBC98;
	// li ctx_arrow(ctx)->r4,514
	ctx_arrow(ctx)->r4.s64 = 514;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fbc44
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FBC44;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,-2
	ctx_arrow(ctx)->r4.s64 = -2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a0648
	sub_820A0648(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// bge ctx_arrow(ctx)->r6,0x820fbbb4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FBBB4;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fbc44
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FBC44;
loc_820FBBB4:
	// li ctx_arrow(ctx)->r4,257
	ctx_arrow(ctx)->r4.s64 = 257;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fbc2c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FBC2C;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,-2
	ctx_arrow(ctx)->r4.s64 = -2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a0648
	sub_820A0648(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fbbec
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FBBEC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fbc2c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FBC2C;
loc_820FBBEC:
	// lis ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,40960
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 40960;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fbc5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBC5C;
	// li ctx_arrow(ctx)->r8,8751
	ctx_arrow(ctx)->r8.s64 = 8751;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stwx ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r30.u32);
	// li ctx_arrow(ctx)->r4,199
	ctx_arrow(ctx)->r4.s64 = 199;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x82144920
	sub_82144920(ctx, base);
	// b 0x820fbc5c
	goto loc_820FBC5C;
loc_820FBC2C:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r23.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 10, xer);
	// bge ctx_arrow(ctx)->r6,0x820fbc5c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FBC5C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// b 0x820fbc58
	goto loc_820FBC58;
loc_820FBC44:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r23.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fbc5c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FBC5C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
loc_820FBC58:
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r24.u32);
loc_820FBC5C:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,-2
	ctx_arrow(ctx)->r4.s64 = -2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a0648
	sub_820A0648(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x820fbc94
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBC94;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,-2
	ctx_arrow(ctx)->r4.s64 = -2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a0648
	sub_820A0648(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fbc94
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBC94;
	// stwx ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r22
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r22.u32);
	// b 0x820fbc98
	goto loc_820FBC98;
loc_820FBC94:
	// stwx ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r22
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r22.u32);
loc_820FBC98:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fbca8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBCA8;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r18,1
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r18.s64 + 1;
loc_820FBCA8:
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r21,1
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r21.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r21.s32, ctx_arrow(ctx)->r19.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820fbb24
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FBB24;
loc_820FBCB8:
	// lis ctx_arrow(ctx)->r31,-32010
	ctx_arrow(ctx)->r31.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820ec288
	sub_820EC288(ctx, base);
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fbcec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBCEC;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// stw ctx_arrow(ctx)->r20,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820FBCEC:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,168(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fbd0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBD0C;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// stw ctx_arrow(ctx)->r20,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820FBD0C:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4216
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4216;
	// beq ctx_arrow(ctx)->r6,0x820fbd2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBD2C;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// b 0x820fbd30
	goto loc_820FBD30;
loc_820FBD2C:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r23.u64;
loc_820FBD30:
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r18.s32, ctx_arrow(ctx)->r19.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x820fbd44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBD44;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,300
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 300, xer);
	// ble ctx_arrow(ctx)->r6,0x820fbd5c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FBD5C;
loc_820FBD44:
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
	// stw ctx_arrow(ctx)->r11,4116(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4116, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// li ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r11.s64 = 15;
	// stw ctx_arrow(ctx)->r11,4120(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4120, ctx_arrow(ctx)->r4.u32);
loc_820FBD5C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// b 0x823ed160
	return;
}

alias(__imp__sub_820FBD68) PPC_WEAK_FUNC(sub_820FBD68);
PPC_FUNC_IMPL(__imp__sub_820FBD68) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed108
	// stfd f31,-144(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -144);
	// stwu ctx_arrow(ctx)->r1,-288(ctx_arrow(ctx)->r1)
	ea = -288 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lwz ctx_arrow(ctx)->r11,-19604(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820fbd94
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FBD94;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r17,4220(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x820fbd98
	goto loc_820FBD98;
loc_820FBD94:
	// li ctx_arrow(ctx)->r17,1
	ctx_arrow(ctx)->r17.s64 = 1;
loc_820FBD98:
	// bl 0x820f5898
	sub_820F5898(ctx, base);
	// li ctx_arrow(ctx)->r7,144
	ctx_arrow(ctx)->r7.s64 = 144;
	// li ctx_arrow(ctx)->r6,171
	ctx_arrow(ctx)->r6.s64 = 171;
	// li ctx_arrow(ctx)->r5,388
	ctx_arrow(ctx)->r5.s64 = 388;
	// li ctx_arrow(ctx)->r4,169
	ctx_arrow(ctx)->r4.s64 = 169;
	// li ctx_arrow(ctx)->r3,38
	ctx_arrow(ctx)->r3.s64 = 38;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r17,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r17.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x820fbdd4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FBDD4;
	// li ctx_arrow(ctx)->r7,128
	ctx_arrow(ctx)->r7.s64 = 128;
	// li ctx_arrow(ctx)->r6,310
	ctx_arrow(ctx)->r6.s64 = 310;
	// li ctx_arrow(ctx)->r5,214
	ctx_arrow(ctx)->r5.s64 = 214;
	// li ctx_arrow(ctx)->r4,30
	ctx_arrow(ctx)->r4.s64 = 30;
	// li ctx_arrow(ctx)->r3,212
	ctx_arrow(ctx)->r3.s64 = 212;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
loc_820FBDD4:
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r17,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r17.s32, 0, xer);
	// mr ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r26.u64;
	// ble ctx_arrow(ctx)->r6,0x820fc00c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FC00C;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,-19524
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + -19524;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,-19444
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + -19444;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lfs f31,6580(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r20,-31994
	ctx_arrow(ctx)->r20.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11,-17024
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r11.s64 + -17024;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r28,-31991
	ctx_arrow(ctx)->r28.s64 = -2096562176;
	// lis ctx_arrow(ctx)->r29,-31994
	ctx_arrow(ctx)->r29.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11,3888
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r11.s64 + 3888;
	// li ctx_arrow(ctx)->r23,-1
	ctx_arrow(ctx)->r23.s64 = -1;
loc_820FBE20:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r17,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r17.s32, 2, xer);
	// li ctx_arrow(ctx)->r11,140
	ctx_arrow(ctx)->r11.s64 = 140;
	// bgt ctx_arrow(ctx)->r6,0x820fbe44
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FBE44;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r18,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r18.s32, 0, xer);
	// bgt ctx_arrow(ctx)->r6,0x820fbe38
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FBE38;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64;
loc_820FBE38:
	// li ctx_arrow(ctx)->r9,38
	ctx_arrow(ctx)->r9.s64 = 38;
	// li ctx_arrow(ctx)->r10,350
	ctx_arrow(ctx)->r10.s64 = 350;
	// b 0x820fbe68
	goto loc_820FBE68;
loc_820FBE44:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r18,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r18.s32, 1, xer);
	// bgt ctx_arrow(ctx)->r6,0x820fbe50
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FBE50;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64;
loc_820FBE50:
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r18,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r18.u32 & 0x1;
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// li ctx_arrow(ctx)->r10,175
	ctx_arrow(ctx)->r10.s64 = 175;
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,175
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & 175;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,38
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 38;
loc_820FBE68:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 30;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,70
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 70;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fbf14
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FBF14;
	// lis ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,40022
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 40022;
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,124(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 1;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r10.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-15
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -15;
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 128, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210e198
	sub_8210E198(&ctx);
	// extsh ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r16.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// stw ctx_arrow(ctx)->r26,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// stw ctx_arrow(ctx)->r26,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r16.u64;
	// bl 0x820ec9c0
	sub_820EC9C0(ctx, base);
loc_820FBF14:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r21.u32);
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,140
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 140;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 1;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r10.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 15;
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210e198
	sub_8210E198(&ctx);
	// extsh ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// lwz ctx_arrow(ctx)->r11,11488(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// beq ctx_arrow(ctx)->r6,0x820fbfdc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FBFDC;
	// lbz ctx_arrow(ctx)->r10,-31(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r8,-30(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,-29(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,8,16,23
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0xFF00) | (ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u32 & 0xFFFF;
	// stw ctx_arrow(ctx)->r23,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// stw ctx_arrow(ctx)->r26,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,8,0,23
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFF000000FF);
	// stw ctx_arrow(ctx)->r26,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,8,0,23
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF000000FF);
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8213e398
	sub_8213E398(ctx, base);
	// b 0x820fbffc
	goto loc_820FBFFC;
loc_820FBFDC:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r23,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// stw ctx_arrow(ctx)->r26,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r26,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x8213e0d8
	sub_8213E0D8(&ctx);
loc_820FBFFC:
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r18,1
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r18.s64 + 1;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r24,4
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r24.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r18.s32, ctx_arrow(ctx)->r17.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820fbe20
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FBE20;
loc_820FC00C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// lfd f31,-144(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed158
	return;
}

alias(__imp__sub_820FC018) PPC_WEAK_FUNC(sub_820FC018);
PPC_FUNC_IMPL(__imp__sub_820FC018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// stfd f29,-176(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -176);
	// stfd f30,-168(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -168);
	// stfd f31,-160(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -160);
	// stwu ctx_arrow(ctx)->r1,-272(ctx_arrow(ctx)->r1)
	ea = -272 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// li ctx_arrow(ctx)->r18,1
	ctx_arrow(ctx)->r18.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,-19604(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc050
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC050;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r14,4220(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r14.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x820fc054
	goto loc_820FC054;
loc_820FC050:
	// mr ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r14.u64 = ctx_arrow(ctx)->r18.u64;
loc_820FC054:
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r18.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r24.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r14,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r14.s32, 0, xer);
	// stw ctx_arrow(ctx)->r24,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x820fc58c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FC58C;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r16,-32141
	ctx_arrow(ctx)->r16.s64 = -2106392576;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11,3936
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r11.s64 + 3936;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r17,-32141
	ctx_arrow(ctx)->r17.s64 = -2106392576;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,3628
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + 3628;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r20,-31994
	ctx_arrow(ctx)->r20.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,24996
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + 24996;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r21,-31994
	ctx_arrow(ctx)->r21.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,3888
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s64 + 3888;
	// lis ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// ori ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r11,32768
	ctx_arrow(ctx)->r15.u64 = ctx_arrow(ctx)->r11.u64 | 32768;
loc_820FC0A4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x820ca110
	sub_820CA110(ctx, base);
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27,2,0,29
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc0f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC0F4;
	// li ctx_arrow(ctx)->r4,16384
	ctx_arrow(ctx)->r4.s64 = 16384;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc0f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC0F4;
	// li ctx_arrow(ctx)->r8,8936
	ctx_arrow(ctx)->r8.s64 = 8936;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r22.u64;
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stwx ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r26
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r26.u32);
	// li ctx_arrow(ctx)->r4,199
	ctx_arrow(ctx)->r4.s64 = 199;
	// bl 0x82144920
	sub_82144920(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
loc_820FC0F4:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc568
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC568;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a0248
	sub_820A0248(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x820a02c8
	sub_820A02C8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x820a0148
	sub_820A0148(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x820a01c8
	sub_820A01C8(ctx, base);
	// lfs f0,-14484(ctx_arrow(ctx)->r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu ctx_arrow(ctx)->r6,f31,f13
	ctx_arrow(ctx)->r6.compare(f31.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x820fc14c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FC14C;
	// fcmpu ctx_arrow(ctx)->r6,f1,f13
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x820fc14c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC14C;
	// li ctx_arrow(ctx)->r30,-2
	ctx_arrow(ctx)->r30.s64 = -2;
	// b 0x820fc164
	goto loc_820FC164;
loc_820FC14C:
	// fcmpu ctx_arrow(ctx)->r6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f31.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x820fc160
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FC160;
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r18.u64;
	// blt ctx_arrow(ctx)->r6,0x820fc164
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC164;
loc_820FC160:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r24.u64;
loc_820FC164:
	// lfs f0,-14480(ctx_arrow(ctx)->r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu ctx_arrow(ctx)->r6,f30,f13
	ctx_arrow(ctx)->r6.compare(f30.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x820fc184
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FC184;
	// fcmpu ctx_arrow(ctx)->r6,f29,f13
	ctx_arrow(ctx)->r6.compare(f29.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x820fc184
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC184;
	// li ctx_arrow(ctx)->r31,-2
	ctx_arrow(ctx)->r31.s64 = -2;
	// b 0x820fc19c
	goto loc_820FC19C;
loc_820FC184:
	// fcmpu ctx_arrow(ctx)->r6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f30.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x820fc198
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FC198;
	// fcmpu ctx_arrow(ctx)->r6,f29,f0
	ctx_arrow(ctx)->r6.compare(f29.f64, f0.f64);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r18.u64;
	// blt ctx_arrow(ctx)->r6,0x820fc19c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC19C;
loc_820FC198:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r24.u64;
loc_820FC19C:
	// li ctx_arrow(ctx)->r4,2056
	ctx_arrow(ctx)->r4.s64 = 2056;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc49c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC49C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bgt ctx_arrow(ctx)->r6,0x820fc49c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FC49C;
	// li ctx_arrow(ctx)->r4,1028
	ctx_arrow(ctx)->r4.s64 = 1028;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc484
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC484;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, -1, xer);
	// blt ctx_arrow(ctx)->r6,0x820fc484
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC484;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc21c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC21C;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r15.u64;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc4b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC4B4;
	// li ctx_arrow(ctx)->r8,8979
	ctx_arrow(ctx)->r8.s64 = 8979;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r22.u64;
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stwx ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r26
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r26.u32);
	// li ctx_arrow(ctx)->r4,199
	ctx_arrow(ctx)->r4.s64 = 199;
	// bl 0x82144920
	sub_82144920(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
	// b 0x820fc4b4
	goto loc_820FC4B4;
loc_820FC21C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc26c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC26C;
	// lis ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,33539
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 33539;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc248
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC248;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, -1, xer);
	// blt ctx_arrow(ctx)->r6,0x820fc248
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC248;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fc4b4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FC4B4;
loc_820FC248:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x820c2c28
	sub_820C2C28(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// bl 0x820c2c80
	sub_820C2C80(ctx, base);
	// b 0x820fc4b4
	goto loc_820FC4B4;
loc_820FC26C:
	// li ctx_arrow(ctx)->r4,514
	ctx_arrow(ctx)->r4.s64 = 514;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc360
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC360;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, -1, xer);
	// blt ctx_arrow(ctx)->r6,0x820fc360
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC360;
	// li ctx_arrow(ctx)->r4,257
	ctx_arrow(ctx)->r4.s64 = 257;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc304
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC304;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bgt ctx_arrow(ctx)->r6,0x820fc304
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FC304;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r15.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc4b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC4B4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc2d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC2D4;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x820fc2d8
	goto loc_820FC2D8;
loc_820FC2D4:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r24.u64;
loc_820FC2D8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc4b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC4B4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// addze ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	temp.s64 = ctx_arrow(ctx)->r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx_arrow(ctx)->r10.u32;
	ctx_arrow(ctx)->r10.s64 = temp.s64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// bl 0x820ea2d8
	sub_820EA2D8(ctx, base);
	// b 0x820fc4b4
	goto loc_820FC4B4;
loc_820FC304:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc324
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC324;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x820fc4b4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FC4B4;
loc_820FC324:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc340
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC340;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x820fc344
	goto loc_820FC344;
loc_820FC340:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r24.u64;
loc_820FC344:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc4b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC4B4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// bl 0x820ea2d8
	sub_820EA2D8(ctx, base);
	// b 0x820fc4b4
	goto loc_820FC4B4;
loc_820FC360:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc4b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC4B4;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fc4b4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FC4B4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r14,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r14.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc3d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC3D8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc3d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC3D8;
	// bl 0x8209fe50
	sub_8209FE50(ctx, base);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc3d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC3D8;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc3d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC3D8;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x820fc3d8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC3D8;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc4b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC4B4;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// ble ctx_arrow(ctx)->r6,0x820fc4b4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FC4B4;
loc_820FC3D8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc3f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC3F4;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x820fc3f8
	goto loc_820FC3F8;
loc_820FC3F4:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r24.u64;
loc_820FC3F8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc410
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC410;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + -1;
	// bl 0x820ea2d8
	sub_820EA2D8(ctx, base);
loc_820FC410:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r14,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r14.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc4b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC4B4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc4b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC4B4;
	// bl 0x8209fe50
	sub_8209FE50(ctx, base);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc4b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC4B4;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc44c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC44C;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// bge ctx_arrow(ctx)->r6,0x820fc4b4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FC4B4;
loc_820FC44C:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc4b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC4B4;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x820fc4b4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC4B4;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc4b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC4B4;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x820ea2d8
	sub_820EA2D8(ctx, base);
	// b 0x820fc4b4
	goto loc_820FC4B4;
loc_820FC484:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bge ctx_arrow(ctx)->r6,0x820fc4b4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FC4B4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// b 0x820fc4b0
	goto loc_820FC4B0;
loc_820FC49C:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r24.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820fc4b4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FC4B4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
loc_820FC4B0:
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r23.u32);
loc_820FC4B4:
	// bl 0x8209fe50
	sub_8209FE50(&ctx);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc52c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC52C;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc4f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC4F8;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x820fc4f8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC4F8;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc4f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC4F8;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x820ea2d8
	sub_820EA2D8(ctx, base);
loc_820FC4F8:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc52c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC52C;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x820fc52c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC52C;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc52c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC52C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x820ea2d8
	sub_820EA2D8(ctx, base);
loc_820FC52C:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,-2
	ctx_arrow(ctx)->r4.s64 = -2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a0648
	sub_820A0648(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc564
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC564;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// li ctx_arrow(ctx)->r4,-2
	ctx_arrow(ctx)->r4.s64 = -2;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x820a0648
	sub_820A0648(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc564
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC564;
	// stwx ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r19
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r19.u32);
	// b 0x820fc568
	goto loc_820FC568;
loc_820FC564:
	// stwx ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r19
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r19.u32);
loc_820FC568:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc580
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC580;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
loc_820FC580:
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, ctx_arrow(ctx)->r14.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820fc0a4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC0A4;
loc_820FC58C:
	// lis ctx_arrow(ctx)->r31,-32010
	ctx_arrow(ctx)->r31.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820ec288
	sub_820EC288(ctx, base);
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc5c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC5C0;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// stw ctx_arrow(ctx)->r18,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820FC5C0:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,168(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc5e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC5E0;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// stw ctx_arrow(ctx)->r18,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820FC5E0:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4216
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4216;
	// beq ctx_arrow(ctx)->r6,0x820fc600
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC600;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// b 0x820fc604
	goto loc_820FC604;
loc_820FC600:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r24.u64;
loc_820FC604:
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r14.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc61c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC61C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,300
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 300, xer);
	// ble ctx_arrow(ctx)->r6,0x820fc634
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FC634;
loc_820FC61C:
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r18.u64;
	// stw ctx_arrow(ctx)->r11,4116(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4116, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// li ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r11.s64 = 15;
	// stw ctx_arrow(ctx)->r11,4120(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4120, ctx_arrow(ctx)->r4.u32);
loc_820FC634:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,272
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 272;
	// lfd f29,-176(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-168(ctx_arrow(ctx)->r1)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-160(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed150
	return;
}

alias(__imp__sub_820FC648) PPC_WEAK_FUNC(sub_820FC648);
PPC_FUNC_IMPL(__imp__sub_820FC648) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed108
	// stfd f31,-144(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -144);
	// stwu ctx_arrow(ctx)->r1,-320(ctx_arrow(ctx)->r1)
	ea = -320 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lwz ctx_arrow(ctx)->r11,-19604(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc674
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC674;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r16,4220(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r16.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x820fc678
	goto loc_820FC678;
loc_820FC674:
	// li ctx_arrow(ctx)->r16,1
	ctx_arrow(ctx)->r16.s64 = 1;
loc_820FC678:
	// bl 0x820f5898
	sub_820F5898(ctx, base);
	// li ctx_arrow(ctx)->r7,144
	ctx_arrow(ctx)->r7.s64 = 144;
	// li ctx_arrow(ctx)->r6,171
	ctx_arrow(ctx)->r6.s64 = 171;
	// li ctx_arrow(ctx)->r5,388
	ctx_arrow(ctx)->r5.s64 = 388;
	// li ctx_arrow(ctx)->r4,169
	ctx_arrow(ctx)->r4.s64 = 169;
	// li ctx_arrow(ctx)->r3,38
	ctx_arrow(ctx)->r3.s64 = 38;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r16,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r16.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x820fc6b4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FC6B4;
	// li ctx_arrow(ctx)->r7,128
	ctx_arrow(ctx)->r7.s64 = 128;
	// li ctx_arrow(ctx)->r6,310
	ctx_arrow(ctx)->r6.s64 = 310;
	// li ctx_arrow(ctx)->r5,214
	ctx_arrow(ctx)->r5.s64 = 214;
	// li ctx_arrow(ctx)->r4,30
	ctx_arrow(ctx)->r4.s64 = 30;
	// li ctx_arrow(ctx)->r3,212
	ctx_arrow(ctx)->r3.s64 = 212;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
loc_820FC6B4:
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r16,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r16.s32, 0, xer);
	// mr ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r27.u64;
	// ble ctx_arrow(ctx)->r6,0x820fcb2c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FCB2C;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,-19524
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + -19524;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,3628
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r11.s64 + 3628;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lfs f31,6580(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r18,-31994
	ctx_arrow(ctx)->r18.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r11,-16936
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r11.s64 + -16936;
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r30,-31991
	ctx_arrow(ctx)->r30.s64 = -2096562176;
	// lis ctx_arrow(ctx)->r31,-31994
	ctx_arrow(ctx)->r31.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11,3888
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r11.s64 + 3888;
	// li ctx_arrow(ctx)->r21,-1
	ctx_arrow(ctx)->r21.s64 = -1;
loc_820FC700:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r16,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r16.s32, 2, xer);
	// li ctx_arrow(ctx)->r11,140
	ctx_arrow(ctx)->r11.s64 = 140;
	// bgt ctx_arrow(ctx)->r6,0x820fc724
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FC724;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r17,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r17.s32, 0, xer);
	// bgt ctx_arrow(ctx)->r6,0x820fc718
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FC718;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64;
loc_820FC718:
	// li ctx_arrow(ctx)->r9,38
	ctx_arrow(ctx)->r9.s64 = 38;
	// li ctx_arrow(ctx)->r10,350
	ctx_arrow(ctx)->r10.s64 = 350;
	// b 0x820fc748
	goto loc_820FC748;
loc_820FC724:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r17,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r17.s32, 1, xer);
	// bgt ctx_arrow(ctx)->r6,0x820fc730
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FC730;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64;
loc_820FC730:
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r17,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r17.u32 & 0x1;
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r9.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// li ctx_arrow(ctx)->r10,175
	ctx_arrow(ctx)->r10.s64 = 175;
	// subfe ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 < ~ctx_arrow(ctx)->r9.u32) | (~ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r9.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r9.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// andi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,175
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & 175;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,38
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 38;
loc_820FC748:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 30;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 1;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,70
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + 70;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc7f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC7F4;
	// lis ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,40221
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 40221;
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 1;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r26.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 140, ctx_arrow(ctx)->r4.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r25.s64 - ctx_arrow(ctx)->r10.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-15
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -15;
	// stw ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 136, ctx_arrow(ctx)->r4.u32);
	// bl 0x8210e198
	sub_8210E198(&ctx);
	// extsh ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// stw ctx_arrow(ctx)->r27,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,140
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 140;
	// stw ctx_arrow(ctx)->r27,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x820ec9c0
	sub_820EC9C0(ctx, base);
loc_820FC7F4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// bl 0x82183908
	sub_82183908(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fc80c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC80C;
	// bl 0x820e9148
	sub_820E9148(ctx, base);
	// b 0x820fc810
	goto loc_820FC810;
loc_820FC80C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
loc_820FC810:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r20.u32);
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,148
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 148;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// lwz ctx_arrow(ctx)->r9,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,1
	xer.ca = (ctx_arrow(ctx)->r9.s32 < 0) & ((ctx_arrow(ctx)->r9.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s32 >> 1;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r26.s64 - ctx_arrow(ctx)->r10.s64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r25.s64 - ctx_arrow(ctx)->r11.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 15;
	// stw ctx_arrow(ctx)->r10,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x820fc898
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC898;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc898
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC898;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r7,50
	ctx_arrow(ctx)->r7.s64 = 50;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 14;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r9.s64 + 3;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
loc_820FC898:
	// bl 0x8210e198
	sub_8210E198(ctx, base);
	// extsh ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// lwz ctx_arrow(ctx)->r11,11488(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsh ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r8.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// beq ctx_arrow(ctx)->r6,0x820fc908
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC908;
	// lbz ctx_arrow(ctx)->r11,-31(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,-30(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r10,-29(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,8,16,23
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0xFF00) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r28,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u32 & 0xFFFF;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r21,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,8,0,23
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF000000FF);
	// stw ctx_arrow(ctx)->r27,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,8,0,23
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF000000FF);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// bl 0x8213e398
	sub_8213E398(ctx, base);
	// b 0x820fc928
	goto loc_820FC928;
loc_820FC908:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r21,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// stw ctx_arrow(ctx)->r27,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x8213e0d8
	sub_8213E0D8(&ctx);
loc_820FC928:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// bl 0x820c2c28
	sub_820C2C28(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// lis ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// beq ctx_arrow(ctx)->r6,0x820fc944
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FC944;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,40268
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 40268;
	// b 0x820fc948
	goto loc_820FC948;
loc_820FC944:
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,40269
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 40269;
loc_820FC948:
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,152
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 152;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,156
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 156;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// lwz ctx_arrow(ctx)->r9,152(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,1
	xer.ca = (ctx_arrow(ctx)->r9.s32 < 0) & ((ctx_arrow(ctx)->r9.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s32 >> 1;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r26.s64 - ctx_arrow(ctx)->r10.s64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r25.s64 - ctx_arrow(ctx)->r11.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 1, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,35
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 35;
	// stw ctx_arrow(ctx)->r10,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x820fc9c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC9C8;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fc9c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FC9C8;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r7,50
	ctx_arrow(ctx)->r7.s64 = 50;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 14;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r9.s64 + 3;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
loc_820FC9C8:
	// bl 0x8210e198
	sub_8210E198(ctx, base);
	// extsh ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// lwz ctx_arrow(ctx)->r11,11488(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsh ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r8.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// beq ctx_arrow(ctx)->r6,0x820fca38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCA38;
	// lbz ctx_arrow(ctx)->r11,-31(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r7,-30(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r10,-29(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,8,16,23
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0xFF00) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r28,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u32 & 0xFFFF;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r21,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,8,0,23
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF000000FF);
	// stw ctx_arrow(ctx)->r27,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,8,0,23
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF000000FF);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// bl 0x8213e398
	sub_8213E398(ctx, base);
	// b 0x820fca58
	goto loc_820FCA58;
loc_820FCA38:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r21,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// stw ctx_arrow(ctx)->r27,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x8213e0d8
	sub_8213E0D8(&ctx);
loc_820FCA58:
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fcb1c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FCB1C;
	// lis ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,40294
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 40294;
	// bl 0x82136ad8
	sub_82136AD8(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,164
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 164;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8213e098
	sub_8213E098(ctx, base);
	// lwz ctx_arrow(ctx)->r9,160(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,164(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,1
	xer.ca = (ctx_arrow(ctx)->r9.s32 < 0) & ((ctx_arrow(ctx)->r9.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s32 >> 1;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r26.s64 - ctx_arrow(ctx)->r10.s64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r25.s64 - ctx_arrow(ctx)->r11.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 2, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,55
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 55;
	// stw ctx_arrow(ctx)->r10,172(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 172, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,168(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 168, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x820fcae0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FCAE0;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r7,50
	ctx_arrow(ctx)->r7.s64 = 50;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + 14;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r9.s64 + 3;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,-2
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + -2;
	// bl 0x8213e018
	sub_8213E018(ctx, base);
loc_820FCAE0:
	// bl 0x8210e198
	sub_8210E198(ctx, base);
	// extsh ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e188
	sub_8210E188(ctx, base);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r3, 0);
	// li ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r8.s64 = 255;
	// lwz ctx_arrow(ctx)->r7,15124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r6,-31556(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,168
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 168;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,172
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 172;
	// stw ctx_arrow(ctx)->r27,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r27,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// bl 0x820ec9c0
	sub_820EC9C0(&ctx);
loc_820FCB1C:
	// addi ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r17,1
	ctx_arrow(ctx)->r17.s64 = ctx_arrow(ctx)->r17.s64 + 1;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,4
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r23.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r17.s32, ctx_arrow(ctx)->r16.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820fc700
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FC700;
loc_820FCB2C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,320
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 320;
	// lfd f31,-144(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed158
	return;
}

alias(__imp__sub_820FCB38) PPC_WEAK_FUNC(sub_820FCB38);
PPC_FUNC_IMPL(__imp__sub_820FCB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed11c
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lis ctx_arrow(ctx)->r21,-32010
	ctx_arrow(ctx)->r21.s64 = -2097807360;
	// li ctx_arrow(ctx)->r24,1
	ctx_arrow(ctx)->r24.s64 = 1;
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// stw ctx_arrow(ctx)->r11,4284(ctx_arrow(ctx)->r21)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r21.u32 + 4284, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// stw ctx_arrow(ctx)->r11,4152(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4152, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r10,3544
	ctx_arrow(ctx)->r22.s64 = ctx_arrow(ctx)->r10.s64 + 3544;
loc_820FCB6C:
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820fcb88
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FCB88;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,81
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 81, xer);
	// blt ctx_arrow(ctx)->r6,0x820fcb6c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FCB6C;
	// b 0x820fcb8c
	goto loc_820FCB8C;
loc_820FCB88:
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r24.u64;
loc_820FCB8C:
	// lis ctx_arrow(ctx)->r27,-32010
	ctx_arrow(ctx)->r27.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,40960
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 40960;
	// lwz ctx_arrow(ctx)->r3,4208(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820a0548
	sub_820A0548(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// lis ctx_arrow(ctx)->r25,-32010
	ctx_arrow(ctx)->r25.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r31,-32010
	ctx_arrow(ctx)->r31.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r30,-32010
	ctx_arrow(ctx)->r30.s64 = -2097807360;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,2888
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r11.s64 + 2888;
	// bne ctx_arrow(ctx)->r6,0x820fcd54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FCD54;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r26.u32 & 0xFF;
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,4008(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 4008, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// stw ctx_arrow(ctx)->r11,4000(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4000, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32141
	ctx_arrow(ctx)->r10.s64 = -2106392576;
	// stw ctx_arrow(ctx)->r11,4004(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4004, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,4280(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 4280, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lfs f10,24796(ctx_arrow(ctx)->r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,24800(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-19588(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-19584(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// beq ctx_arrow(ctx)->r6,0x820fcc2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCC2C;
	// fcmpu ctx_arrow(ctx)->r6,f11,f12
	ctx_arrow(ctx)->r6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble ctx_arrow(ctx)->r6,0x820fcc48
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FCC48;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,24804(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// ble ctx_arrow(ctx)->r6,0x820fcc2c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FCC2C;
	// fcmpu ctx_arrow(ctx)->r6,f0,f10
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f10.f64);
	// bgt ctx_arrow(ctx)->r6,0x820fcc2c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820FCC2C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// stw ctx_arrow(ctx)->r11,4004(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4004, ctx_arrow(ctx)->r4.u32);
	// b 0x820fcd54
	goto loc_820FCD54;
loc_820FCC2C:
	// fcmpu ctx_arrow(ctx)->r6,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble ctx_arrow(ctx)->r6,0x820fcc48
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FCC48;
	// fcmpu ctx_arrow(ctx)->r6,f0,f10
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f10.f64);
	// ble ctx_arrow(ctx)->r6,0x820fcc48
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FCC48;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// stw ctx_arrow(ctx)->r11,4008(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 4008, ctx_arrow(ctx)->r4.u32);
	// b 0x820fcd54
	goto loc_820FCD54;
loc_820FCC48:
	// lis ctx_arrow(ctx)->r11,-32010
	ctx_arrow(ctx)->r11.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r11,4276(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 12, xer);
	// ble ctx_arrow(ctx)->r6,0x820fccf0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820FCCF0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// fctiwz f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,220
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 220, xer);
	// blt ctx_arrow(ctx)->r6,0x820fcce8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FCCE8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-13
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -13;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820fcce8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FCCE8;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r23,48
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r23.s64 + 48;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,53
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 53;
loc_820FCC98:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,23
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 23, xer);
	// beq ctx_arrow(ctx)->r6,0x820fccbc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCCBC;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820fccd8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FCCD8;
loc_820FCCBC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-20
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -20;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x820fcc98
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FCC98;
	// li ctx_arrow(ctx)->r11,11
	ctx_arrow(ctx)->r11.s64 = 11;
	// b 0x820fccfc
	goto loc_820FCCFC;
loc_820FCCD8:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,4280(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 4280, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x820fcd54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FCD54;
loc_820FCCE8:
	// li ctx_arrow(ctx)->r11,11
	ctx_arrow(ctx)->r11.s64 = 11;
	// b 0x820fccfc
	goto loc_820FCCFC;
loc_820FCCF0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820fcd54
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820FCD54;
loc_820FCCFC:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r23.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,53
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 53;
loc_820FCD14:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,23
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 23, xer);
	// beq ctx_arrow(ctx)->r6,0x820fcd38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCD38;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// fctiwz f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820fcd50
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FCD50;
loc_820FCD38:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-20
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -20;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x820fcd14
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820FCD14;
	// b 0x820fcd54
	goto loc_820FCD54;
loc_820FCD50:
	// stw ctx_arrow(ctx)->r11,4280(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 4280, ctx_arrow(ctx)->r4.u32);
loc_820FCD54:
	// lis ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,4208(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,40960
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 40960;
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// lis ctx_arrow(ctx)->r28,-32010
	ctx_arrow(ctx)->r28.s64 = -2097807360;
	// lis ctx_arrow(ctx)->r29,-32010
	ctx_arrow(ctx)->r29.s64 = -2097807360;
	// beq ctx_arrow(ctx)->r6,0x820fcdc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCDC8;
	// lwz ctx_arrow(ctx)->r11,4004(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fcd8c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCD8C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// stw ctx_arrow(ctx)->r11,3992(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 3992, ctx_arrow(ctx)->r4.u32);
	// b 0x820fcda8
	goto loc_820FCDA8;
loc_820FCD8C:
	// lwz ctx_arrow(ctx)->r11,4008(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// beq ctx_arrow(ctx)->r6,0x820fcda4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCDA4;
	// stw ctx_arrow(ctx)->r11,3996(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 3996, ctx_arrow(ctx)->r4.u32);
	// b 0x820fcda8
	goto loc_820FCDA8;
loc_820FCDA4:
	// stw ctx_arrow(ctx)->r11,4284(ctx_arrow(ctx)->r21)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r21.u32 + 4284, ctx_arrow(ctx)->r4.u32);
loc_820FCDA8:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r8,9708
	ctx_arrow(ctx)->r8.s64 = 9708;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,24996
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 24996;
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x820fce48
	goto loc_820FCE48;
loc_820FCDC8:
	// li ctx_arrow(ctx)->r4,4096
	ctx_arrow(ctx)->r4.s64 = 4096;
	// lwz ctx_arrow(ctx)->r3,4208(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fce10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCE10;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fce10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCE10;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r8,9713
	ctx_arrow(ctx)->r8.s64 = 9713;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,24996
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 24996;
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// stw ctx_arrow(ctx)->r11,3992(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 3992, ctx_arrow(ctx)->r4.u32);
	// b 0x820fce48
	goto loc_820FCE48;
loc_820FCE10:
	// li ctx_arrow(ctx)->r4,16384
	ctx_arrow(ctx)->r4.s64 = 16384;
	// lwz ctx_arrow(ctx)->r3,4208(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820a05b8
	sub_820A05B8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fce54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCE54;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r8,9718
	ctx_arrow(ctx)->r8.s64 = 9718;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,24996
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 24996;
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// stw ctx_arrow(ctx)->r11,3996(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 3996, ctx_arrow(ctx)->r4.u32);
loc_820FCE48:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,199
	ctx_arrow(ctx)->r4.s64 = 199;
	// bl 0x82144920
	sub_82144920(ctx, base);
loc_820FCE54:
	// lis ctx_arrow(ctx)->r31,-32010
	ctx_arrow(ctx)->r31.s64 = -2097807360;
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820ec288
	sub_820EC288(ctx, base);
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fce88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCE88;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// stw ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820FCE88:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,168(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fceac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCEAC;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// stw ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,4168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820FCEAC:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fcecc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCECC;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82118d48
	sub_82118D48(ctx, base);
	// stw ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_820FCECC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x820ec448
	sub_820EC448(ctx, base);
	// lwz ctx_arrow(ctx)->r11,3992(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fcf58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCF58;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lis ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,40353
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 40353;
	// lwz ctx_arrow(ctx)->r11,-15584(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32;
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// std ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lis ctx_arrow(ctx)->r10,-32141
	ctx_arrow(ctx)->r10.s64 = -2106392576;
	// lwz ctx_arrow(ctx)->r11,-15564(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s32;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// std ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f1,2780(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
	// stw ctx_arrow(ctx)->r11,-19612(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -19612, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// lfd f0,80(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,-19568(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -19568, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32141
	ctx_arrow(ctx)->r11.s64 = -2106392576;
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,-19564(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -19564, ctx_arrow(ctx)->r4.u32);
	// bl 0x8209dbd8
	sub_8209DBD8(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed16c
	return;
loc_820FCF58:
	// lwz ctx_arrow(ctx)->r11,3996(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fcf8c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCF8C;
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stw ctx_arrow(ctx)->r11,4116(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4116, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r10,-32010
	ctx_arrow(ctx)->r10.s64 = -2097807360;
	// li ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r11.s64 = 7;
	// stw ctx_arrow(ctx)->r11,4120(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4120, ctx_arrow(ctx)->r4.u32);
	// bl 0x820ee118
	sub_820EE118(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed16c
	return;
loc_820FCF8C:
	// lwz ctx_arrow(ctx)->r11,4284(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fcff0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCFF0;
	// lwz ctx_arrow(ctx)->r11,4280(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,26
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 26, xer);
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 1;
	ctx_arrow(ctx)->r10.s64 = 1 - ctx_arrow(ctx)->r10.s64;
	// stbx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx->r22.u32, ctx_arrow(ctx)->r4.u8));
	// bne ctx_arrow(ctx)->r6,0x820fcfd4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820FCFD4;
	// lbz ctx_arrow(ctx)->r11,26(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820fcff0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820FCFF0;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stb ctx_arrow(ctx)->r11,27(ctx_arrow(ctx)->r22)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r22.u32 + 27, ctx_arrow(ctx)->r1.u32.u8);
	// blr 
	return;
}

