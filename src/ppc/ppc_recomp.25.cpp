#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_822C8108) PPC_WEAK_FUNC(sub_822C8108);
PPC_FUNC_IMPL(__imp__sub_822C8108) {
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
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// stw ctx_arrow(ctx)->r4,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// bne 0x822c8130
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8130;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
loc_822C8130:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// stw ctx_arrow(ctx)->r5,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c8154
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8154;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_822C8154:
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
loc_822C8160:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8180
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8180;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x822c8184
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8184;
loc_822C8180:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C8184:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8240
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8240;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x822c1160
	sub_822C1160(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c81d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C81D0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c81d0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C81D0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c81d0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C81D0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8160
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8160;
loc_822C81D0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c81e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C81E8;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x822c81ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C81EC;
loc_822C81E8:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C81EC:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8238
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8238;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// bl 0x822c1160
	sub_822C1160(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8238
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8238;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8238
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8238;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8238
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8238;
	// lwz ctx_arrow(ctx)->r29,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r30,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822c8160
	goto loc_822C8160;
loc_822C8238:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x822c826c
	goto loc_822C826C;
loc_822C8240:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8258
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8258;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x822c825c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C825C;
loc_822C8258:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C825C:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
loc_822C826C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed188
	return;
}

alias(__imp__sub_822C8278) PPC_WEAK_FUNC(sub_822C8278);
PPC_FUNC_IMPL(__imp__sub_822C8278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x823ed104
	// stwu ctx_arrow(ctx)->r1,-288(ctx_arrow(ctx)->r1)
	ea = -288 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r15.s64 = 0;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r15.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822c82c8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C82C8;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822c82c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C82C8;
loc_822C82A8:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822c82c8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C82C8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822c82a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C82A8;
loc_822C82C8:
	// lis ctx_arrow(ctx)->r11,-32214
	ctx_arrow(ctx)->r11.s64 = -2111176704;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-3792
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -3792;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r15.u64;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r15.u64;
	// bl 0x8229e6c0
	sub_8229E6C0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r20,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c82f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C82F4;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
loc_822C82F4:
	// lwz ctx_arrow(ctx)->r17,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r15.u64;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r16,1
	ctx_arrow(ctx)->r16.s64 = 1;
	// stw ctx_arrow(ctx)->r15,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
loc_822C8308:
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8328
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8328;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
	// bne ctx_arrow(ctx)->r6,0x822c832c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C832C;
loc_822C8328:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64;
loc_822C832C:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c865c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C865C;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// bl 0x822c11b0
	sub_822C11B0(ctx, base);
	// not ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r17.u64;
	// lwz ctx_arrow(ctx)->r22,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r22.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r18,1
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r18.s64 + 1;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r17.s64 + 4;
	// bne 0x822c8358
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8358;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
loc_822C8358:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r18,29,3,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r18.u32 | (ctx_arrow(ctx)->r18.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r18,27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r18.u32 & 0x1F;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8308
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8308;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// bl 0x822c65d8
	sub_822C65D8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c84c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C84C8;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r15.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822c8394
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8394;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r11.u64;
loc_822C8394:
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r15.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r16.u64;
loc_822C839C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r15.u64;
	// stw ctx_arrow(ctx)->r20,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c83b4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C83B4;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
loc_822C83B4:
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r15.u64;
	// stw ctx_arrow(ctx)->r15,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
loc_822C83C0:
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c83e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C83E0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
	// bne ctx_arrow(ctx)->r6,0x822c83e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C83E4;
loc_822C83E0:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64;
loc_822C83E4:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c84a0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C84A0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// bl 0x822c11b0
	sub_822C11B0(ctx, base);
	// not ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r17.u64;
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// clrlwi. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r17.s64 + 4;
	// bne 0x822c8410
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8410;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
loc_822C8410:
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27,29,3,29
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27,27
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u32 & 0x1F;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r29, 0, BINARY_OP_U8(ctx_arrow(ctx)->r29, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r29) & 0x3F)), 0));
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c83c0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C83C0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x822c65d8
	sub_822C65D8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c83c0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C83C0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c8448
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8448;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
loc_822C8448:
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c83c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C83C0;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c83c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C83C0;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x822c83c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C83C0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r17.s64 + 4;
	// bne ctx_arrow(ctx)->r6,0x822c8484
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8484;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
loc_822C8484:
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r29, 0, BINARY_OP_U8(ctx_arrow(ctx)->r29, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r16.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r29) & 0x3F)), 0));
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 4, xer);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r10.u64;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lwz ctx_arrow(ctx)->r17,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bne ctx_arrow(ctx)->r6,0x822c83c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C83C0;
loc_822C84A0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 3, xer);
	// blt ctx_arrow(ctx)->r6,0x822c84b8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822C84B8;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r25.s64 + 1;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r16.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x822c839c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C839C;
loc_822C84B8:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c84c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C84C8;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r21,1
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r21.s64 + 1;
	// b 0x822c8308
	goto loc_822C8308;
loc_822C84C8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// bl 0x822c6628
	sub_822C6628(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c8308
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8308;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r15.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822c84ec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C84EC;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r11.u64;
loc_822C84EC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r15.u64;
	// bne ctx_arrow(ctx)->r6,0x822c84fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C84FC;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r11.u64;
loc_822C84FC:
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r16.u64;
loc_822C8500:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r15.u64;
	// stw ctx_arrow(ctx)->r20,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c8518
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8518;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
loc_822C8518:
	// stw ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r15.u64;
	// stw ctx_arrow(ctx)->r15,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 128, ctx_arrow(ctx)->r4.u32);
loc_822C8524:
	// lwz ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8544
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8544;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
	// bne ctx_arrow(ctx)->r6,0x822c8548
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8548;
loc_822C8544:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64;
loc_822C8548:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8634
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8634;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// bl 0x822c11b0
	sub_822C11B0(ctx, base);
	// not ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r17.u64;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// clrlwi. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r17.s64 + 4;
	// bne 0x822c8574
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8574;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
loc_822C8574:
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27,29,3,29
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27,27
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u32 & 0x1F;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r29, 0, BINARY_OP_U8(ctx_arrow(ctx)->r29, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r29) & 0x3F)), 0));
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8524
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8524;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822c6628
	sub_822C6628(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c8524
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8524;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r15.u64;
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822c85b0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C85B0;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
loc_822C85B0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c85bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C85BC;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
loc_822C85BC:
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8524
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8524;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8524
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8524;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8524
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8524;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8524
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8524;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8524
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8524;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r17.s64 + 4;
	// bne ctx_arrow(ctx)->r6,0x822c8618
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8618;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
loc_822C8618:
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r29, 0, BINARY_OP_U8(ctx_arrow(ctx)->r29, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r16.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r29) & 0x3F)), 0));
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 4, xer);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r10.u64;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lwz ctx_arrow(ctx)->r17,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bne ctx_arrow(ctx)->r6,0x822c8524
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8524;
loc_822C8634:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 2, xer);
	// blt ctx_arrow(ctx)->r6,0x822c8308
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822C8308;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r25.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x822c8500
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C8500;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r21,1
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r21.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8308
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8308;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r19,1
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r19.s64 + 1;
	// b 0x822c8308
	goto loc_822C8308;
loc_822C865C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r21.s64 + -1;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r15.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r19.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822c8678
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C8678;
	// subf ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r19.s64 - ctx_arrow(ctx)->r11.s64;
	// b 0x822c8684
	goto loc_822C8684;
loc_822C8678:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r19.s64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r15.u64;
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r21.u64;
loc_822C8684:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r20)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r15.u64;
	// stw ctx_arrow(ctx)->r20,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c869c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C869C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
loc_822C869C:
	// stw ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r15.u64;
	// stw ctx_arrow(ctx)->r15,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 128, ctx_arrow(ctx)->r4.u32);
loc_822C86A8:
	// lwz ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c86c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C86C8;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
	// bne ctx_arrow(ctx)->r6,0x822c86cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C86CC;
loc_822C86C8:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r16.u64;
loc_822C86CC:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c87ac
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C87AC;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// bl 0x822c11b0
	sub_822C11B0(ctx, base);
	// not ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r17.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r17.s64 + 4;
	// bne 0x822c86f8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C86F8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
loc_822C86F8:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,29,3,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r31.u32 & 0x1F;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c86a8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C86A8;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r15.u64;
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822c8748
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8748;
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x822c8748
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8748;
loc_822C8728:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822c8748
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8748;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8728
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8728;
loc_822C8748:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// ble ctx_arrow(ctx)->r6,0x822c8768
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C8768;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -2;
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
loc_822C875C:
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// bne 0x822c875c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C875C;
loc_822C8768:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8778
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8778;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
loc_822C8778:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c87a4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C87A4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8790
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8790;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,-1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + -1;
	// b 0x822c87a4
	goto loc_822C87A4;
loc_822C8790:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c87a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C87A0;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,-1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + -1;
	// b 0x822c87a4
	goto loc_822C87A4;
loc_822C87A0:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
loc_822C87A4:
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r16.u64;
	// b 0x822c86a8
	goto loc_822C86A8;
loc_822C87AC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// b 0x823ed154
	return;
}

alias(__imp__sub_822C87B8) PPC_WEAK_FUNC(sub_822C87B8);
PPC_FUNC_IMPL(__imp__sub_822C87B8) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r7.u64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8231f0e8
	sub_8231F0E8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r30,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r29,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8828
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8828;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x822c8828
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8828;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822c8834
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C8834;
loc_822C8828:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822ea6d0
	sub_822EA6D0(ctx, base);
loc_822C8834:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 * 12;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed188
	return;
}

alias(__imp__sub_822C8860) PPC_WEAK_FUNC(sub_822C8860);
PPC_FUNC_IMPL(__imp__sub_822C8860) {
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
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r5.s64 + 10;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8231f0e8
	sub_8231F0E8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8984
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8984;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,18,24
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,256
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 256, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8984
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8984;
	// li ctx_arrow(ctx)->r5,49
	ctx_arrow(ctx)->r5.s64 = 49;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x82270688
	sub_82270688(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64 | 1;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8920
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8920;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c8920
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8920;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822c8930
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C8930;
loc_822C8920:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8227bc28
	sub_8227BC28(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_822C8930:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stwx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r6,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x822c87b8
	sub_822C87B8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r6,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x822c87b8
	sub_822C87B8(ctx, base);
	// b 0x822c89ec
	goto loc_822C89EC;
loc_822C8984:
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r29,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822c89c0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C89C0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x822c89c0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C89C0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822c89cc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C89CC;
loc_822C89C0:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822ea6d0
	sub_822EA6D0(ctx, base);
loc_822C89CC:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 * 12;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
loc_822C89EC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed188
	return;
}

alias(__imp__sub_822C89F8) PPC_WEAK_FUNC(sub_822C89F8);
PPC_FUNC_IMPL(__imp__sub_822C89F8) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r5,49
	ctx_arrow(ctx)->r5.s64 = 49;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x82270688
	sub_82270688(ctx, base);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 | 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r27.s64 + 4;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 | 1;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x8231f0e8
	sub_8231F0E8(&ctx);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8c40
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8C40;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,18,24
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,256
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 256, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8c40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8C40;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r6,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r5,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822c87b8
	sub_822C87B8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r6,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r5,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x822c87b8
	sub_822C87B8(ctx, base);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// clrlwi. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x822c8ac4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8AC4;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_822C8AC4:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,27,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x18;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// lwz ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// beq 0x822c8ae4
	if (ctx_arrow(ctx)->r0.eq() goto loc_822C8AE4;
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,0,27,28
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x18;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8ae4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8AE4;
loc_822C8ADC:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// b 0x822c8b0c
	goto loc_822C8B0C;
loc_822C8AE4:
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8af4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8AF4;
	// clrlwi. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne 0x822c8adc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8ADC;
loc_822C8AF4:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c8b08
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8B08;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne 0x822c8b0c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8B0C;
loc_822C8B08:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C8B0C:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// beq 0x822c8b7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8B7C;
	// bne ctx_arrow(ctx)->r6,0x822c8b24
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8B24;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_822C8B24:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8b3c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8B3C;
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,0,30,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8b3c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8B3C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
loc_822C8B3C:
	// and ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r9.u64;
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,0,29,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8b50
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8B50;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -4;
loc_822C8B50:
	// clrlwi. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8b64
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8B64;
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,0,30,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8b64
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8B64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -2;
loc_822C8B64:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8b70
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8B70;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_822C8B70:
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// b 0x822c8cac
	goto loc_822C8CAC;
loc_822C8B7C:
	// bne ctx_arrow(ctx)->r6,0x822c8b84
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8B84;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_822C8B84:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,0,27,28
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x18;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8ba0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8BA0;
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,0,27,28
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x18;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8ba0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8BA0;
loc_822C8B98:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// b 0x822c8bc8
	goto loc_822C8BC8;
loc_822C8BA0:
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8bb0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8BB0;
	// clrlwi. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne 0x822c8b98
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8B98;
loc_822C8BB0:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c8bc4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8BC4;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne 0x822c8bc8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8BC8;
loc_822C8BC4:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C8BC8:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c8c38
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8C38;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x822c8be0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8BE0;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_822C8BE0:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8bf8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8BF8;
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,0,30,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8bf8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8BF8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
loc_822C8BF8:
	// and ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r9.u64;
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,0,29,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8c0c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8C0C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -4;
loc_822C8C0C:
	// clrlwi. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8c20
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8C20;
	// rlwinm. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,0,30,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822c8c20
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8C20;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -2;
loc_822C8C20:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8c2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8C2C;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_822C8C2C:
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// b 0x822c8cac
	goto loc_822C8CAC;
loc_822C8C38:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x822c6540
	sub_822C6540(ctx, base);
loc_822C8C40:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r31,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r29,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8c7c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8C7C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c8c7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8C7C;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822c8c8c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C8C8C;
loc_822C8C7C:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x822ea6d0
	sub_822EA6D0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_822C8C8C:
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 * 12;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,20(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 24, ctx_arrow(ctx)->r4.u32);
loc_822C8CAC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed184
	return;
}

alias(__imp__sub_822C8CB8) PPC_WEAK_FUNC(sub_822C8CB8);
PPC_FUNC_IMPL(__imp__sub_822C8CB8) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r5,56
	ctx_arrow(ctx)->r5.s64 = 56;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x82270688
	sub_82270688(ctx, base);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,49
	ctx_arrow(ctx)->r5.s64 = 49;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 | 1;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r27,4
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r27.s64 + 4;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64 | 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82270688
	sub_82270688(&ctx);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r30,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r23.s64 = 0;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 | 1;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r25.u64 | 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c8d30
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8D30;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
loc_822C8D30:
	// stw ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 124, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r23,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 128, ctx_arrow(ctx)->r4.u32);
loc_822C8D38:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8d54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8D54;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
	// bne ctx_arrow(ctx)->r6,0x822c8d58
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8D58;
loc_822C8D54:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C8D58:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8fc4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8FC4;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// bl 0x822c11b0
	sub_822C11B0(ctx, base);
	// lwz ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r26,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c8d80
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8D80;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
loc_822C8D80:
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r23,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
loc_822C8D88:
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8da8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8DA8;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
	// bne ctx_arrow(ctx)->r6,0x822c8dac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8DAC;
loc_822C8DA8:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C8DAC:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8fbc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8FBC;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// bl 0x822c1160
	sub_822C1160(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ld ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// rldicr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,32,63
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x822c6740
	sub_822C6740(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8eec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8EEC;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r23.u64;
	// stw ctx_arrow(ctx)->r26,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c8df8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8DF8;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
loc_822C8DF8:
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r23,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// b 0x822c8e08
	goto loc_822C8E08;
loc_822C8E04:
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822C8E08:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8e24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8E24;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
	// bne ctx_arrow(ctx)->r6,0x822c8e28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8E28;
loc_822C8E24:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C8E28:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8e88
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8E88;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// bl 0x822c1160
	sub_822C1160(ctx, base);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r29.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822c8e88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C8E88;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8e78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8E78;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c8e78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C8E78;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// xor ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r10.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// beq 0x822c8e7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8E7C;
loc_822C8E78:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
loc_822C8E7C:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c8e04
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8E04;
	// li ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = 1;
loc_822C8E88:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8d88
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8D88;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c8ea4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8EA4;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
loc_822C8EA4:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x822c8ed4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822C8ED4;
loc_822C8EB0:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c8ec8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8EC8;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
loc_822C8EC8:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x822c8eb0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_822C8EB0;
loc_822C8ED4:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// b 0x822c8d88
	goto loc_822C8D88;
loc_822C8EEC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stw ctx_arrow(ctx)->r29,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8f28
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8F28;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x822c8f28
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8F28;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822c8f34
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C8F34;
loc_822C8F28:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x822ea5c0
	sub_822EA5C0(ctx, base);
loc_822C8F34:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ld ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stdx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r3.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c8f8c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C8F8C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x822c8f8c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8F8C;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822c8f98
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C8F98;
loc_822C8F8C:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x822ea6d0
	sub_822EA6D0(ctx, base);
loc_822C8F98:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 * 12;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// b 0x822c8d88
	goto loc_822C8D88;
loc_822C8FBC:
	// lwz ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822c8d38
	goto loc_822C8D38;
loc_822C8FC4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// b 0x823ed174
	return;
}

alias(__imp__sub_822C8FD0) PPC_WEAK_FUNC(sub_822C8FD0);
PPC_FUNC_IMPL(__imp__sub_822C8FD0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r25,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c8ffc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C8FFC;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
loc_822C8FFC:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r24,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// bl 0x822c1160
	sub_822C1160(&ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_822C9010:
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9030
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9030;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// bne ctx_arrow(ctx)->r6,0x822c9034
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9034;
loc_822C9030:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C9034:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9064
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9064;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x822c1160
	sub_822C1160(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x822bdff8
	sub_822BDFF8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9060
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9060;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r7.u64;
	// b 0x822c9010
	goto loc_822C9010;
loc_822C9060:
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822C9064:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9080
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9080;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// bne ctx_arrow(ctx)->r6,0x822c9084
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9084;
loc_822C9080:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C9084:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c91cc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C91CC;
	// li ctx_arrow(ctx)->r5,49
	ctx_arrow(ctx)->r5.s64 = 49;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x82270688
	sub_82270688(ctx, base);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 | 1;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r27,4
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r27.s64 + 4;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64 | 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x822c1200
	sub_822C1200(&ctx);
loc_822C90BC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822c91cc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C91CC;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822c91cc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C91CC;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// stw ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c90e4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C90E4;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
loc_822C90E4:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r24,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// bl 0x822c1160
	sub_822C1160(&ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_822C90F8:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9118
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9118;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64;
	// bne ctx_arrow(ctx)->r6,0x822c911c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C911C;
loc_822C9118:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C911C:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9148
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9148;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x822c1160
	sub_822C1160(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x822bdff8
	sub_822BDFF8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c90f8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C90F8;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r7.u64;
	// b 0x822c90f8
	goto loc_822C90F8;
loc_822C9148:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9184
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9184;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9184
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9184;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822c9194
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C9194;
loc_822C9184:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x822ea6d0
	sub_822EA6D0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_822C9194:
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 * 12;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,20(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ld ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// rldicr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,32,63
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x822c67f8
	sub_822C67F8(ctx, base);
	// b 0x822c90bc
	goto loc_822C90BC;
loc_822C91CC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed178
	return;
}

alias(__imp__sub_822C91D8) PPC_WEAK_FUNC(sub_822C91D8);
PPC_FUNC_IMPL(__imp__sub_822C91D8) {
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
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,6,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 6) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822c9258
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9258;
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1024
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 67108864;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9230
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9230;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9230
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9230;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822c9240
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822C9240;
loc_822C9230:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x8227bc28
	sub_8227BC28(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_822C9240:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stwx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r11.u32);
loc_822C9258:
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

alias(__imp__sub_822C9270) PPC_WEAK_FUNC(sub_822C9270);
PPC_FUNC_IMPL(__imp__sub_822C9270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
loc_822C9288:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c92b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C92B0;
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x822c92a8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C92A8;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x822c91d8
	sub_822C91D8(ctx, base);
loc_822C92A8:
	// lwz ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822c9288
	goto loc_822C9288;
loc_822C92B0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_822C92B8) PPC_WEAK_FUNC(sub_822C92B8);
PPC_FUNC_IMPL(__imp__sub_822C92B8) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed124
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r7.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28,40
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r28.s64 + 40;
	// li ctx_arrow(ctx)->r23,1
	ctx_arrow(ctx)->r23.s64 = 1;
	// li ctx_arrow(ctx)->r27,3
	ctx_arrow(ctx)->r27.s64 = 3;
loc_822C92E8:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x822c9394
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_822C9394;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_822C9310:
	// slw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r5.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r23.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// and. ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u64 & ctx_arrow(ctx)->r26.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// beq 0x822c9344
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9344;
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// slw ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r27.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,27,24,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 27) & 0xFF;
	// andc ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & ~ctx_arrow(ctx)->r4.u64;
	// srw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r5.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r5.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u32 & 0x3;
	// slw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r5.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// or ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r5.u64 | ctx_arrow(ctx)->r8.u64;
loc_822C9344:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 2;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 8, xer);
	// blt ctx_arrow(ctx)->r6,0x822c9310
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822C9310;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,20,9,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 20) & 0x700000;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u32 & 0xFF;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,0,27,18
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,5,0,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,7,3
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x822c91d8
	sub_822C91D8(&ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// b 0x822c92e8
	goto loc_822C92E8;
loc_822C9394:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r23.u64;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_822C93A8:
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & ctx_arrow(ctx)->r26.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9468
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9468;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r24.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r3.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r27.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r5.u64 & ~ctx_arrow(ctx)->r10.u64;
	// or ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// bne 0x822c945c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C945C;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = 7;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFF;
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// and ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,29
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0x7;
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,20
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u32 & 0xFFF;
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r9.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9410
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9410;
	// not ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r29,-4096
	ctx_arrow(ctx)->r29.s64 = -4096;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,20
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0xFFF;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r29.u64;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r11.u64;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 16, ctx_arrow(ctx)->r4.u32);
loc_822C9410:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822c945c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C945C;
loc_822C941C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9434
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9434;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x822c941c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C941C;
loc_822C9434:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c945c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C945C;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// lfd f0,8(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// stfd f0,8(ctx_arrow(ctx)->r9)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 8);
	// lfd f0,40(ctx_arrow(ctx)->r29)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// stfd f0,40(ctx_arrow(ctx)->r11)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 40);
loc_822C945C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 1;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,3
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 3;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 8;
loc_822C9468:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,2
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 2;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,3
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 3;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 8;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 8, xer);
	// blt ctx_arrow(ctx)->r6,0x822c93a8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822C93A8;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822C9484:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c94f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C94F0;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c94e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C94E8;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,4,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c94e8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C94E8;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,27,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,27,18
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,27,29,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x6;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,29,29,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x6;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,31,29,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x6;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,29,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x6;
	// srw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r5.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r5.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r5.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,2,28,29
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 2) & 0xC) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r5.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,28
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u32 & 0xF;
	// rlwimi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r6.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r6.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_822C94E8:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822c9484
	goto loc_822C9484;
loc_822C94F0:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9544
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9544;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,8,8
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x800000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9520
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9520;
	// lhz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r28.u32 + 12);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9520
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9520;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8228c9a8
	sub_8228C9A8(ctx, base);
loc_822C9520:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x8228c600
	sub_8228C600(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,14,15,17
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r3.u32, 14) & 0x1C000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,18,29,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 18) & 0x7;
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r23.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,1,27,30
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 1) & 0x1E) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_822C9544:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed174
	return;
}

alias(__imp__sub_822C9550) PPC_WEAK_FUNC(sub_822C9550);
PPC_FUNC_IMPL(__imp__sub_822C9550) {
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
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed110
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r22.s64 = 0;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r23,4
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r23.s64 + 4;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r20,1
	ctx_arrow(ctx)->r20.s64 = 1;
loc_822C9578:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c95cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C95CC;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c95c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C95C4;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,7,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 7) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c95c0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C95C0;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,27,24,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0xFF;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_822C95A4:
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u32 & 0x3;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// slw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r20.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r9.u64;
	// bne 0x822c95a4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C95A4;
loc_822C95C0:
	// or ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r22.u64;
loc_822C95C4:
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822c9578
	goto loc_822C9578;
loc_822C95CC:
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,17,17
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9698
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9698;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r20.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9698
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9698;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23,40
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r23.s64 + 40;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
loc_822C95F0:
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,18,24
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,14336
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 14336, xer);
	// beq ctx_arrow(ctx)->r6,0x822c966c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C966C;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822C9610:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9670
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9670;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822c9664
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9664;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r23.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9664
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9664;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,7,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 7) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9660
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9660;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,27,24,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0xFF;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_822C9644:
	// srw ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,30
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u32 & 0x3;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// slw ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r30, 0, BINARY_OP_U8(ctx_arrow(ctx)->r30, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r20.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r30) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64 | ctx_arrow(ctx)->r9.u64;
	// bne 0x822c9644
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9644;
loc_822C9660:
	// or ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r6.u64;
loc_822C9664:
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822c9610
	goto loc_822C9610;
loc_822C966C:
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,31,28,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 31) & 0xF;
loc_822C9670:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,30,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x3;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r20.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r6.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9688
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9688;
	// or ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r31.u64 | ctx_arrow(ctx)->r22.u64;
loc_822C9688:
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-1
	xer.ca = ctx_arrow(ctx)->r3.u32 > 0;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822c95f0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C95F0;
loc_822C9698:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r20.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c96b8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C96B8;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x822c98f8
	goto loc_822C98F8;
loc_822C96B8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// lwz ctx_arrow(ctx)->r31,24(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8228c600
	sub_8228C600(ctx, base);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x8231b578
	sub_8231B578(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r23.u32 | (ctx_arrow(ctx)->r23.u64 << 32), 0) & 0xFFFFFFFE;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,-32
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + -32;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 32;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r21.u32, 0, xer);
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,-32
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 + -32;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x822c972c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C972C;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x822c91d8
	sub_822C91D8(ctx, base);
loc_822C972C:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// li ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r25.s64 = 0;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r20.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,10,12
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x380000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c97a8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C97A8;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r24,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r24.s64 + 40;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23,40
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r23.s64 + 40;
loc_822C9754:
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64 & ctx_arrow(ctx)->r22.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9788
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9788;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r31, 0, BINARY_OP_U8(ctx_arrow(ctx)->r31, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r27.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r31) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r31, 0, BINARY_OP_U8(ctx_arrow(ctx)->r31, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r31) & 0x3F)), 0));
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 & ~ctx_arrow(ctx)->r11.u64;
	// or ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
loc_822C9788:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r25.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 2;
	// rlwinm ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,1,0,30
	ctx_arrow(ctx)->r26.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r26.u32 | (ctx_arrow(ctx)->r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x822c9754
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822C9754;
loc_822C97A8:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r19.u64;
loc_822C97AC:
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq 0x822c986c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C986C;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9858
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9858;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,27,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,27,18
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,27,29,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x6;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,29,29,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x6;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,31,29,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x6;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,29,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x6;
	// srw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r28.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r28.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r28.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,2,28,29
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 2) & 0xC) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r28.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,28
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u32 & 0xF;
	// rlwimi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r6.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r6.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x822c981c
	goto loc_822C981C;
loc_822C9818:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 8;
loc_822C981C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9818
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9818;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r21.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r24.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r24,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x822c9858
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9858;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x822c91d8
	sub_822C91D8(ctx, base);
loc_822C9858:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c97ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C97AC;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// b 0x822c97ac
	goto loc_822C97AC;
loc_822C986C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r21.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c98c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C98C4;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r20.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,10,12
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x380000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c98c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C98C4;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r23,40
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r23.s64 + 40;
loc_822C988C:
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 & ctx_arrow(ctx)->r22.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c98a8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C98A8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x822c91d8
	sub_822C91D8(ctx, base);
loc_822C98A8:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1,0,30
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x822c988c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822C988C;
loc_822C98C4:
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,17,17
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c98f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C98F4;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,256
	ctx_arrow(ctx)->r10.s64 = 16777216;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,18,29,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 18) & 0x7;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,0,31,26
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r20.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,27,30
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 1) & 0x1E) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r24.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_822C98F4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
loc_822C98F8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// b 0x823ed160
	return;
}

alias(__imp__sub_822C9900) PPC_WEAK_FUNC(sub_822C9900);
PPC_FUNC_IMPL(__imp__sub_822C9900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r7.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12160
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 12160, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9938
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9938;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x822c9d10
	goto loc_822C9D10;
loc_822C9938:
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r22,4
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r22.s64 + 4;
	// li ctx_arrow(ctx)->r24,1
	ctx_arrow(ctx)->r24.s64 = 1;
loc_822C9944:
	// lwz ctx_arrow(ctx)->r23,0(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r23.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, 0, xer);
	// beq 0x822c9d0c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9D0C;
	// lwz ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq 0x822c9cf8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9CF8;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9cf8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9CF8;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9cf8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9CF8;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,7,31,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822c9cf8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9CF8;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822c9cf8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9CF8;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,26,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 26) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c99a4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C99A4;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9cf8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9CF8;
loc_822C99A4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,111
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 111, xer);
	// bne ctx_arrow(ctx)->r6,0x822c99bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C99BC;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9cf8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9CF8;
loc_822C99BC:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,76(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// xor ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r10.u64;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7FFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9cf8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9CF8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82270718
	sub_82270718(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9cf8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9CF8;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8231c030
	sub_8231C030(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9cf8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9CF8;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9a38
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9A38;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r24.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r22.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9aa8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9AA8;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8231c3d8
	sub_8231C3D8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9aa8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9AA8;
	// b 0x822c9a9c
	goto loc_822C9A9C;
loc_822C9A38:
	// lwz ctx_arrow(ctx)->r9,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,40(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,13
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0x7FFFF;
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,27
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r9.u32 & 0x1F;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,27,5,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0x7FFFFFF;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// slw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r24.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// and. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ctx_arrow(ctx)->r8.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x822c9a6c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9A6C;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r24.u64;
	// b 0x822c9aa8
	goto loc_822C9AA8;
loc_822C9A6C:
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,13
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x7FFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,5,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r24.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9aa8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9AA8;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r24.u64;
loc_822C9A9C:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
loc_822C9AA8:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9bf0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9BF0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,95
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 95, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9b3c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9B3C;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,18,29,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 18) & 0x7;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x822701f8
	sub_822701F8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,-20
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + -20;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,18,29,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 18) & 0x7;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// bl 0x822701f8
	sub_822701F8(ctx, base);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,-20
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + -20;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
loc_822C9B08:
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 - ctx_arrow(ctx)->r6.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne 0x822c9b28
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9B28;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r8.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9b08
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9B08;
loc_822C9B28:
	// cmpwi ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne 0x822c9bec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9BEC;
	// lwz ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822c9bdc
	goto loc_822C9BDC;
loc_822C9B3C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,96
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 96, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9b58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9B58;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,98
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 98, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9b58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9B58;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,99
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 99, xer);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x822c9b5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9B5C;
loc_822C9B58:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r24.u64;
loc_822C9B5C:
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c9bf0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9BF0;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,18,29,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 18) & 0x7;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x822701f8
	sub_822701F8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,-24
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + -24;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,18,29,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 18) & 0x7;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// bl 0x822701f8
	sub_822701F8(ctx, base);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,-24
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + -24;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 20;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
loc_822C9BAC:
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// subf. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 - ctx_arrow(ctx)->r6.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne 0x822c9bcc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9BCC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r8.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9bac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9BAC;
loc_822C9BCC:
	// cmpwi ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne 0x822c9bec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9BEC;
	// lwz ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822C9BDC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x822bdf70
	sub_822BDF70(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9bf0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9BF0;
loc_822C9BEC:
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
loc_822C9BF0:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9cf8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9CF8;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14208
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 14208, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9c84
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9C84;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r30.s64 + 4;
loc_822C9C0C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822c9c6c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9C6C;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9c58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9C58;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// b 0x822c9c34
	goto loc_822C9C34;
loc_822C9C30:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 + 8;
loc_822C9C34:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9c30
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9C30;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
loc_822C9C58:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9c0c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9C0C;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// b 0x822c9c0c
	goto loc_822C9C0C;
loc_822C9C6C:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x822c91d8
	sub_822C91D8(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// b 0x822c9ce4
	goto loc_822C9CE4;
loc_822C9C84:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r20.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r25.u64;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,228
	ctx_arrow(ctx)->r6.s64 = 228;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x82323860
	sub_82323860(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9cf8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9CF8;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x822c91d8
	sub_822C91D8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFF;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// andi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2340
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 2340;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9cf0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9CF0;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,20,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0xFFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF000);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
loc_822C9CE4:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x822c91d8
	sub_822C91D8(ctx, base);
loc_822C9CF0:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r24.u64;
loc_822C9CF8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r23.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9944
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9944;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r23,8
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r23.s64 + 8;
	// b 0x822c9944
	goto loc_822C9944;
loc_822C9D0C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
loc_822C9D10:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed168
	return;
}

alias(__imp__sub_822C9D18) PPC_WEAK_FUNC(sub_822C9D18);
PPC_FUNC_IMPL(__imp__sub_822C9D18) {
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,3,3
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9e38
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9E38;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,3,3
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9e38
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9E38;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,76(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// xor ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 ^ ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,13
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0x7FFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822c9e38
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9E38;
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r6.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x822c9e4c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9E4C;
	// lwz ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,23,23
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x100;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x822c9e4c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9E4C;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,10,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 10) & 0x1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,10,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 10) & 0x1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9e38
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9E38;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9e4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9E4C;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r23.u32 | (ctx_arrow(ctx)->r23.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x822c9e20
	goto loc_822C9E20;
loc_822C9D90:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r22.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9e44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9E44;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,10,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 10) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9e38
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9E38;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29,32
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r29.s64 + 32;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9db8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9DB8;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r29.s64 + 24;
loc_822C9DB8:
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9dc8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9DC8;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_822C9DC8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9e1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9E1C;
loc_822C9DD0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8226ffa0
	sub_8226FFA0(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9e38
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9E38;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r31,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9df8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9DF8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9dd0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9DD0;
loc_822C9DF8:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 32;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9e1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9E1C;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9e1c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9E1C;
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne 0x822c9dd0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9DD0;
loc_822C9E1C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0xFFFFFFFE;
loc_822C9E20:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822c9e38
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9E38;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64;
	// bne ctx_arrow(ctx)->r6,0x822c9d90
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9D90;
loc_822C9E38:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_822C9E3C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed16c
	return;
loc_822C9E44:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9e38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9E38;
loc_822C9E4C:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9ea4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9EA4;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9e6c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9E6C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x822c9e78
	goto loc_822C9E78;
loc_822C9E6C:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-36
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -36;
loc_822C9E78:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,11264
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 11264, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9e98
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9E98;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x82321c20
	sub_82321C20(ctx, base);
loc_822C9E98:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9e38
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9E38;
loc_822C9EA4:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822c9ffc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9FFC;
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// beq 0x822c9ffc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9FFC;
loc_822C9EBC:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14208
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 14208, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9e38
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9E38;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8229ee20
	sub_8229EE20(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82270718
	sub_82270718(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9f34
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9F34;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x82321c20
	sub_82321C20(ctx, base);
loc_822C9EFC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9fd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9FD0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne 0x822c9f1c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9F1C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_822C9F1C:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9fc0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9FC0;
loc_822C9F24:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r31,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822c9fec
	goto loc_822C9FEC;
loc_822C9F34:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r23.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9efc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9EFC;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822C9F54:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9efc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9EFC;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9fb8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9FB8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,0,27,28
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x18;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// beq 0x822c9f88
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9F88;
	// rlwinm. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,0,27,28
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x18;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x822c9f88
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9F88;
loc_822C9F80:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// b 0x822c9fb0
	goto loc_822C9FB0;
loc_822C9F88:
	// rlwinm. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,0,30,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x822c9f98
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9F98;
	// clrlwi. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x822c9f80
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9F80;
loc_822C9F98:
	// rlwinm. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,0,29,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x822c9fac
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9FAC;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne 0x822c9fb0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9FB0;
loc_822C9FAC:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822C9FB0:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822c9e38
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9E38;
loc_822C9FB8:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822c9f54
	goto loc_822C9F54;
loc_822C9FC0:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9ffc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9FFC;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r10.u64;
	// b 0x822c9ff4
	goto loc_822C9FF4;
loc_822C9FD0:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822c9fe0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822C9FE0;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_822C9FE0:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822c9f24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822C9F24;
	// lwz ctx_arrow(ctx)->r31,20(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822C9FEC:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822c9ffc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822C9FFC;
loc_822C9FF4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822c9ebc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822C9EBC;
loc_822C9FFC:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca2b0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA2B0;
	// mr. ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq 0x822ca2b0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA2B0;
loc_822CA014:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r29,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,27,24,31
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0xFF;
	// clrlwi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r23.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca1dc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA1DC;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r27,4
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r27.s64 + 4;
loc_822CA038:
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq 0x822ca1c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA1C4;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822ca1b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CA1B0;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// b 0x822ca060
	goto loc_822CA060;
loc_822CA05C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 8;
loc_822CA060:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca05c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA05C;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26,0,29,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r26.u32 | (ctx_arrow(ctx)->r26.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// beq 0x822ca0a4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA0A4;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x822ca0a4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA0A4;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26,-4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r26.s64 + -4;
loc_822CA0A4:
	// and ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r11.u64;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,29,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x822ca0b8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA0B8;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -4;
loc_822CA0B8:
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x822ca0cc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA0CC;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x822ca0cc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA0CC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -2;
loc_822CA0CC:
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,0,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0xFFFFFFE0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0000001F);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,27,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,18
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,27,29,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0x6;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,29,29,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 29) & 0x6;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,31,29,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 31) & 0x6;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,29,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0x6;
	// srw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r28.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r28.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r28.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,2,28,29
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 2) & 0xC) | (ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r28.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u32 & 0xF;
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFF00000003);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,2,0,29
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,5,0,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,14208
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 14208, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca198
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA198;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822ca14c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA14C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x822ca150
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA150;
loc_822CA14C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_822CA150:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca198
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA198;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x822ca174
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CA174;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x822ca178
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA178;
loc_822CA174:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822CA178:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca198
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA198;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r23.s64 + 24;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 | 3;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x8231e508
	sub_8231E508(ctx, base);
loc_822CA198:
	// lwz ctx_arrow(ctx)->r5,624(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beq 0x822ca1b0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA1B0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x822c91d8
	sub_822C91D8(ctx, base);
loc_822CA1B0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca038
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA038;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// b 0x822ca038
	goto loc_822CA038;
loc_822CA1C4:
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x82321c20
	sub_82321C20(ctx, base);
	// b 0x822ca238
	goto loc_822CA238;
loc_822CA1DC:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r23.s64 + 16;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -32;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-32
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -32;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r9.u64 | 1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,0,0,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r5,32(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,0,0,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,0,0,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r23,24(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 24, ctx_arrow(ctx)->r4.u32);
loc_822CA238:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822ca280
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CA280;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne 0x822ca258
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA258;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_822CA258:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca270
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA270;
loc_822CA260:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 0) & 0xFFFFFFFE;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822ca29c
	goto loc_822CA29C;
loc_822CA270:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822ca2b0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA2B0;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r10.u64;
	// b 0x822ca2a8
	goto loc_822CA2A8;
loc_822CA280:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822ca290
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA290;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_822CA290:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822ca260
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CA260;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822CA29C:
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca2b0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA2B0;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64;
loc_822CA2A8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca014
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA014;
loc_822CA2B0:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_822CA2B4:
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x822c1260
	sub_822C1260(ctx, base);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 3, xer);
	// ble ctx_arrow(ctx)->r6,0x822ca2b4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822CA2B4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r22,24
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r22.s64 + 24;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca308
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA308;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822ca308
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA308;
loc_822CA2EC:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r23,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca308
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA308;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca2ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA2EC;
loc_822CA308:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r23.s64 + 24;
	// bl 0x822833c0
	sub_822833C0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,6,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2000000;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca3a8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA3A8;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64;
loc_822CA334:
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,12,12
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x80000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca34c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA34C;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x822ca334
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA334;
loc_822CA34C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca368
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA368;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,0,0,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 0) & 0xFFFFF000;
	// li ctx_arrow(ctx)->r4,4800
	ctx_arrow(ctx)->r4.s64 = 4800;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,148(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8225d328
	sub_8225D328(ctx, base);
loc_822CA368:
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// b 0x822ca380
	goto loc_822CA380;
loc_822CA374:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822ca408
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA408;
loc_822CA380:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r22.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca374
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA374;
	// stw ctx_arrow(ctx)->r23,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1048576;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,10
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r22)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r22.u32 + 48, ctx_arrow(ctx)->r4.u32);
loc_822CA3A8:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r22,32
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r22.s64 + 32;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca3dc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA3DC;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822ca3dc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA3DC;
loc_822CA3C0:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r23,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca3dc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA3DC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca3c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA3C0;
loc_822CA3DC:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23,32
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r23.s64 + 32;
	// bl 0x822833c0
	sub_822833C0(ctx, base);
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822CA3E8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822ca434
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CA434;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x82325f78
	sub_82325F78(ctx, base);
	// lwz ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822ca3e8
	goto loc_822CA3E8;
loc_822CA408:
	// li ctx_arrow(ctx)->r4,4800
	ctx_arrow(ctx)->r4.s64 = 4800;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x8225d328
	sub_8225D328(ctx, base);
loc_822CA414:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822ca428
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA428;
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822CA428:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r22.u64;
	// bl 0x82325e08
	sub_82325E08(ctx, base);
loc_822CA434:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca414
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA414;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x82325e08
	sub_82325E08(ctx, base);
	// lwz ctx_arrow(ctx)->r9,48(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,68(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,6,4
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0xFFFFFFFFFBFFFFFF) | (ctx_arrow(ctx)->r11.u64 & 0x4000000);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFFFFF;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r8,48(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,0,5,3
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFFFF7FFFFFF) | (ctx_arrow(ctx)->r8.u64 & 0x8000000);
	// stw ctx_arrow(ctx)->r8,48(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFFFFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x822ca488
	if (ctx_arrow(ctx)->r6.gt()) goto loc_822CA488;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
loc_822CA488:
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,4,31
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0xFFFFFFF) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFF0000000);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 0) & 0xFFFFFFFE;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stw ctx_arrow(ctx)->r10,68(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r23,80(ctx_arrow(ctx)->r22)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r22.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4194304;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r22)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r22.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// b 0x822c9e3c
	goto loc_822C9E3C;
}

alias(__imp__sub_822CA4D0) PPC_WEAK_FUNC(sub_822CA4D0);
PPC_FUNC_IMPL(__imp__sub_822CA4D0) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x822bfc18
	sub_822BFC18(ctx, base);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r25.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca6dc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA6DC;
	// li ctx_arrow(ctx)->r5,37
	ctx_arrow(ctx)->r5.s64 = 37;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82270688
	sub_82270688(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 | 1;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64 | 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_822CA520:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x822be910
	sub_822BE910(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,18,29,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 18) & 0x7;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// bl 0x822701f8
	sub_822701F8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,-12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + -12;
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca658
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA658;
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq 0x822ca658
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA658;
loc_822CA560:
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7FFFF;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,5,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca63c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA63C;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca63c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA63C;
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// beq 0x822ca63c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA63C;
loc_822CA5A4:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,85
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 85, xer);
	// beq ctx_arrow(ctx)->r6,0x822ca5c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CA5C0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,86
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 86, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x822ca5c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA5C4;
loc_822CA5C0:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822CA5C4:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca620
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA620;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822ca5fc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA5FC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x822ca5fc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA5FC;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822ca608
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822CA608;
loc_822CA5FC:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8227bc28
	sub_8227BC28(ctx, base);
loc_822CA608:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stwx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
loc_822CA620:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca63c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA63C;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca5a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA5A4;
loc_822CA63C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca658
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA658;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca560
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA560;
loc_822CA658:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca6d0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA6D0;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x822ca6d0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA6D0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bne 0x822ca520
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA520;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8225d2c8
	sub_8225D2C8(ctx, base);
	// b 0x822ca520
	goto loc_822CA520;
loc_822CA6D0:
	// lwz ctx_arrow(ctx)->r11,936(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,936(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 936, ctx_arrow(ctx)->r4.u32);
loc_822CA6DC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_822CA6E8) PPC_WEAK_FUNC(sub_822CA6E8);
PPC_FUNC_IMPL(__imp__sub_822CA6E8) {
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
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r22,24(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r22.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r21.s64 = 0;
	// b 0x822ca714
	goto loc_822CA714;
loc_822CA704:
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,12
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822ca71c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA71C;
	// lwz ctx_arrow(ctx)->r22,52(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r22.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822CA714:
	// cmplwi ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, 0, xer);
	// bne 0x822ca704
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA704;
loc_822CA71C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822cab60
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAB60;
	// mr. ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r11.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 0, xer);
	// beq 0x822cab60
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CAB60;
loc_822CA730:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca758
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA758;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca750
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA750;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r24.s64 + 32;
	// b 0x822ca75c
	goto loc_822CA75C;
loc_822CA750:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24,24
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r24.s64 + 24;
	// b 0x822ca75c
	goto loc_822CA75C;
loc_822CA758:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r24.s64 + 16;
loc_822CA75C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822ca770
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA770;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64;
loc_822CA770:
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r10.u64;
	// b 0x822cab3c
	goto loc_822CAB3C;
loc_822CA778:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,6,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 6) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822caae4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CAAE4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,6,4
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,85
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 85, xer);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x822ca7a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CA7A4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,86
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 86, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x822ca7a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA7A8;
loc_822CA7A4:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_822CA7A8:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca7dc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA7DC;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca7c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA7C4;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x822ca7d0
	goto loc_822CA7D0;
loc_822CA7C4:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-36
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -36;
loc_822CA7D0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x822be910
	sub_822BE910(ctx, base);
	// b 0x822caae4
	goto loc_822CAAE4;
loc_822CA7DC:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822ca7f4
	goto loc_822CA7F4;
loc_822CA7E4:
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,12,12
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x80000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822ca7fc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA7FC;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822CA7F4:
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x822ca7e4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA7E4;
loc_822CA7FC:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822caae4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAAE4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r22.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822caae4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAAE4;
	// li ctx_arrow(ctx)->r5,6
	ctx_arrow(ctx)->r5.s64 = 6;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x82270688
	sub_82270688(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 | 1;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 | 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_822CA838:
	// lwz ctx_arrow(ctx)->r28,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822CA83C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822caac4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAAC4;
	// lwz ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq 0x822ca86c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA86C;
loc_822CA854:
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,12
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822ca86c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA86C;
	// lwz ctx_arrow(ctx)->r31,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne 0x822ca854
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA854;
loc_822CA86C:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r22.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca938
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA938;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca888
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA888;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x822ca894
	goto loc_822CA894;
loc_822CA888:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-36
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -36;
loc_822CA894:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x822be910
	sub_822BE910(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r21,1
	ctx_arrow(ctx)->r21.s64 = 1;
	// bl 0x822a6618
	sub_822A6618(ctx, base);
loc_822CA8AC:
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca8dc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA8DC;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x822ca8cc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA8CC;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_822CA8CC:
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// beq ctx_arrow(ctx)->r6,0x822ca8e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CA8E0;
loc_822CA8DC:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_822CA8E0:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822ca9e0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA9E0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x822a56c8
	sub_822A56C8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x822a56c8
	sub_822A56C8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca8ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA8AC;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822ca920
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA920;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x822ca92c
	goto loc_822CA92C;
loc_822CA920:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-36
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -36;
loc_822CA92C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x822be910
	sub_822BE910(ctx, base);
	// b 0x822ca8ac
	goto loc_822CA8AC;
loc_822CA938:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822ca968
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA968;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x822ca968
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA968;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822ca974
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822CA974;
loc_822CA968:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8227bc28
	sub_8227BC28(ctx, base);
loc_822CA974:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stwx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822ca9bc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA9BC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x822ca9bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CA9BC;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822ca9c8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822CA9C8;
loc_822CA9BC:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8227bc28
	sub_8227BC28(ctx, base);
loc_822CA9C8:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
loc_822CA9E0:
	// lwz ctx_arrow(ctx)->r28,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822ca83c
	goto loc_822CA83C;
loc_822CA9E8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bne 0x822caa48
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAA48;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8225d2c8
	sub_8225D2C8(ctx, base);
loc_822CAA48:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822caa5c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CAA5C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x822caa68
	goto loc_822CAA68;
loc_822CAA5C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -4;
loc_822CAA68:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bne 0x822caabc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAABC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8225d2c8
	sub_8225D2C8(ctx, base);
loc_822CAABC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822cab6c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CAB6C;
loc_822CAAC4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822caad8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAAD8;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x822ca9e8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CA9E8;
loc_822CAAD8:
	// lwz ctx_arrow(ctx)->r11,936(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,936(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 936, ctx_arrow(ctx)->r4.u32);
loc_822CAAE4:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r26.u32 | (ctx_arrow(ctx)->r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822cab00
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAB00;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca778
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA778;
loc_822CAB00:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r24.s64 + 32;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822cab44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAB44;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r24.s64 + 24;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822cab28
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAB28;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x822cab2c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CAB2C;
loc_822CAB28:
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r10.u64;
loc_822CAB2C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822cab44
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAB44;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64;
loc_822CAB3C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca778
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA778;
loc_822CAB44:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822cab60
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAB60;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822ca730
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CA730;
loc_822CAB60:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed16c
	return;
loc_822CAB6C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822cab9c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAB9C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x822cab9c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CAB9C;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822caba8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822CABA8;
loc_822CAB9C:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8227bc28
	sub_8227BC28(ctx, base);
loc_822CABA8:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822cabf4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CABF4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	xer.ca = ctx_arrow(ctx)->r11.u32 > 3;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x822cabf4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CABF4;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822cac00
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822CAC00;
loc_822CABF4:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8227bc28
	sub_8227BC28(ctx, base);
loc_822CAC00:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
	// b 0x822ca838
	goto loc_822CA838;
}

alias(__imp__sub_822CAC20) PPC_WEAK_FUNC(sub_822CAC20);
PPC_FUNC_IMPL(__imp__sub_822CAC20) {
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
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed120
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r7.u64;
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r22.s64 = 1;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x7FFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822cac6c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAC6C;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,12
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822cac6c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAC6C;
	// lwz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFFFFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x822cad78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAD78;
loc_822CAC6C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822cad78
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAD78;
	// mr. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x822cad78
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CAD78;
	// lis ctx_arrow(ctx)->r11,4095
	ctx_arrow(ctx)->r11.s64 = 268369920;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,65535
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u64 | 65535;
loc_822CAC88:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822caca4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CACA4;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r24.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822cad5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CAD5C;
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822cad00
	goto loc_822CAD00;
loc_822CACA4:
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7FFFF;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,5,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r22.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822cad5c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CAD5C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64;
loc_822CACD4:
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,12,12
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x80000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822cacec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CACEC;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x822cacd4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CACD4;
loc_822CACEC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822cadc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CADC8;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r29.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822cad5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CAD5C;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64;
loc_822CAD00:
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0x7FFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822cad18
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAD18;
	// lwz ctx_arrow(ctx)->r9,76(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,13,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x7FFFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFF80000);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 76, ctx_arrow(ctx)->r4.u32);
loc_822CAD18:
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,12,12
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822cad30
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAD30;
	// lwz ctx_arrow(ctx)->r9,76(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,12,12
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0x80000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 76, ctx_arrow(ctx)->r4.u32);
loc_822CAD30:
	// lwz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,68(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFFFFF;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0xFFFFFFF;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r6.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x822cad54
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822CAD54;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r6.u64;
loc_822CAD54:
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,4,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0xFFFFFFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFF0000000);
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 68, ctx_arrow(ctx)->r4.u32);
loc_822CAD5C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822cad78
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAD78;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x822cac88
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CAC88;
loc_822CAD78:
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x82321c20
	sub_82321C20(ctx, base);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
loc_822CAD90:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822cade8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CADE8;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822caddc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CADDC;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822CADA8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822caddc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CADDC;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,48(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,13,31,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 13) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822cade4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CADE4;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822cada8
	goto loc_822CADA8;
loc_822CADC8:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,0,0,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 0) & 0xFFFFF000;
	// li ctx_arrow(ctx)->r4,4800
	ctx_arrow(ctx)->r4.s64 = 4800;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,148(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8225d328
	sub_8225D328(ctx, base);
loc_822CADDC:
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822cad90
	goto loc_822CAD90;
loc_822CADE4:
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r22.u64;
loc_822CADE8:
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822cae84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAE84;
loc_822CAE00:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822cae84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAE84;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,10,31,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 10) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x822cae7c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAE7C;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,12,31,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x822cae7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CAE7C;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822cae34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAE34;
	// lwz ctx_arrow(ctx)->r28,80(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822cae3c
	goto loc_822CAE3C;
loc_822CAE34:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,12,10
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 48, ctx_arrow(ctx)->r4.u32);
loc_822CAE3C:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822cae50
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822CAE50;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x822cae5c
	goto loc_822CAE5C;
loc_822CAE50:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-36
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -36;
loc_822CAE5C:
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x82321c20
	sub_82321C20(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x82325f78
	sub_82325F78(ctx, base);
loc_822CAE7C:
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x822cae00
	goto loc_822CAE00;
loc_822CAE84:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82325e08
	sub_82325E08(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822caeec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAEEC;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82325e08
	sub_82325E08(ctx, base);
	// lwz ctx_arrow(ctx)->r29,80(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29,8
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r29.s64 + 8;
loc_822CAEB4:
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822caef8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAEF8;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r27.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822caed8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822CAED8;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x82325e08
	sub_82325E08(ctx, base);
loc_822CAED8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822caeb4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822CAEB4;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,12
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 12;
	// b 0x822caeb4
	goto loc_822CAEB4;
loc_822CAEEC:
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,13,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 48, ctx_arrow(ctx)->r4.u32);
loc_822CAEF8:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822caf0c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822CAF0C;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,11,9
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 48, ctx_arrow(ctx)->r4.u32);
loc_822CAF0C:
	// stb ctx_arrow(ctx)->r22,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r1.u32.u8);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

