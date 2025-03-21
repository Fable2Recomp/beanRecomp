#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_82206EB0) PPC_WEAK_FUNC(sub_82206EB0);
PPC_FUNC_IMPL(__imp__sub_82206EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x823ed114
	// stwu ctx_arrow(ctx)->r1,-352(ctx_arrow(ctx)->r1)
	ea = -352 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r5.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82206ed8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82206ED8;
loc_82206ED0:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x82207184
	goto loc_82207184;
loc_82206ED8:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFF00000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82207180
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82207180;
	// lis ctx_arrow(ctx)->r9,8304
	ctx_arrow(ctx)->r9.s64 = 544210944;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207180
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207180;
	// clrlwi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFFF;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r9,28752
	ctx_arrow(ctx)->r9.s64 = 1884291072;
	// divwu ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r25.u32 = ctx_arrow(ctx)->r10.u32 / ctx_arrow(ctx)->r22.u32;
	// twllei ctx_arrow(ctx)->r22,0
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82206f24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82206F24;
	// lis ctx_arrow(ctx)->r10,28768
	ctx_arrow(ctx)->r10.s64 = 1885339648;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82206f24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82206F24;
	// lis ctx_arrow(ctx)->r10,28784
	ctx_arrow(ctx)->r10.s64 = 1886388224;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82206f28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82206F28;
loc_82206F24:
	// li ctx_arrow(ctx)->r25,2
	ctx_arrow(ctx)->r25.s64 = 2;
loc_82206F28:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x82207180
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207180;
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// lwz ctx_arrow(ctx)->r9,124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r8,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// li ctx_arrow(ctx)->r29,3
	ctx_arrow(ctx)->r29.s64 = 3;
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r6.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r5.u32);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r4.u32);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stwx ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r27.u32);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r30.u64;
	// stwx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r26.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r20
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r20.u32);
	// stwx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r19
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r19.u32);
	// beq ctx_arrow(ctx)->r6,0x82207108
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207108;
	// rlwinm ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r22,2,0,29
	ctx_arrow(ctx)->r26.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r30.u64;
loc_82206FB4:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,108(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,17
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 17, xer);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bne ctx_arrow(ctx)->r6,0x82206ff0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82206FF0;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x822070f8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822070F8;
loc_82206FF0:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,22,22
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x200;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8220700c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8220700C;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,24,24
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x8220700c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8220700C;
	// lwz ctx_arrow(ctx)->r6,124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82207054
	goto loc_82207054;
loc_8220700C:
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,24,24
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x8220701c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8220701C;
	// lwz ctx_arrow(ctx)->r6,148(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82207054
	goto loc_82207054;
loc_8220701C:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82207050
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82207050;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82207050
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82207050;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 65535, xer);
	// beq ctx_arrow(ctx)->r6,0x82207050
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207050;
	// lwz ctx_arrow(ctx)->r6,128(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82207054
	goto loc_82207054;
loc_82207050:
	// lwz ctx_arrow(ctx)->r6,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_82207054:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x822070b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822070B4;
	// lwz ctx_arrow(ctx)->r8,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8220706C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r5.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822070a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822070A4;
	// lwz ctx_arrow(ctx)->r5,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r4.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822070a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822070A4;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822070b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822070B4;
loc_822070A4:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64 + ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r28.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8220706c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8220706C;
loc_822070B4:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r28.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822070e0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822070E0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwzx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r8.u32, xer);
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r9.u32);
	// bgt ctx_arrow(ctx)->r6,0x8220718c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8220718C;
loc_822070E0:
	// lwz ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822070f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822070F8;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,1
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r23.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, 2, xer);
	// bgt ctx_arrow(ctx)->r6,0x8220718c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8220718C;
loc_822070F8:
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// add ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r26.u64 + ctx_arrow(ctx)->r27.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, ctx_arrow(ctx)->r25.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82206fb4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82206FB4;
loc_82207108:
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82207180
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207180;
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r22,2,0,29
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 2) & 0xFFFFFFFC;
loc_82207118:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,24576
	ctx_arrow(ctx)->r10.s64 = 1610612736;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,3
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF0000000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82207170
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82207170;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r9,112(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,108(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,18
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 18, xer);
	// bne ctx_arrow(ctx)->r6,0x82207170
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82207170;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,128(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220718c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220718C;
loc_82207170:
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r27.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, ctx_arrow(ctx)->r25.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207118
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207118;
loc_82207180:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_82207184:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,352
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 352;
	// b 0x823ed164
	return;
loc_8220718C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r21.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82206ed0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82206ED0;
	// stw ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r21)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r21.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x82206ed0
	goto loc_82206ED0;
}

alias(__imp__sub_822071A0) PPC_WEAK_FUNC(sub_822071A0);
PPC_FUNC_IMPL(__imp__sub_822071A0) {
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
	// lhz ctx_arrow(ctx)->r11,202(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 202);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 512, xer);
	// bge ctx_arrow(ctx)->r6,0x8220721c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8220721C;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFF00000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8220721c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8220721C;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq 0x8220721c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8220721C;
	// lwz ctx_arrow(ctx)->r8,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_822071E0:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r6,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x8220720c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8220720C;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r7.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x822071e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822071E0;
	// b 0x8220721c
	goto loc_8220721C;
loc_8220720C:
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82206680
	sub_82206680(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x82207220
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207220;
loc_8220721C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_82207220:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_82207230) PPC_WEAK_FUNC(sub_82207230);
PPC_FUNC_IMPL(__imp__sub_82207230) {
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
	// stwu ctx_arrow(ctx)->r1,-224(ctx_arrow(ctx)->r1)
	ea = -224 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,7,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8220725c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8220725C;
	// bl 0x82206bb0
	sub_82206BB0(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
loc_8220725C:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lis ctx_arrow(ctx)->r19,4416
	ctx_arrow(ctx)->r19.s64 = 289406976;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x822072c0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822072C0;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_82207274:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r19.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220729c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220729C;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// b 0x822072ac
	goto loc_822072AC;
loc_8220729C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f3ab0
	sub_821F3AB0(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
loc_822072AC:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207274
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207274;
loc_822072C0:
	// lwz ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82207330
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82207330;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8220e168
	sub_8220E168(ctx, base);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207328
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207328;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_822072E8:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,4096
	ctx_arrow(ctx)->r10.s64 = 268435456;
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82207314
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82207314;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f1d18
	sub_821F1D18(ctx, base);
loc_82207314:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x822072e8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822072E8;
loc_82207328:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82213030
	sub_82213030(ctx, base);
loc_82207330:
	// lwz ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r17,4176
	ctx_arrow(ctx)->r17.s64 = 273678336;
	// lis ctx_arrow(ctx)->r16,20480
	ctx_arrow(ctx)->r16.s64 = 1342177280;
	// lis ctx_arrow(ctx)->r18,28720
	ctx_arrow(ctx)->r18.s64 = 1882193920;
	// lis ctx_arrow(ctx)->r22,29792
	ctx_arrow(ctx)->r22.s64 = 1952448512;
	// lis ctx_arrow(ctx)->r21,29808
	ctx_arrow(ctx)->r21.s64 = 1953497088;
	// lis ctx_arrow(ctx)->r23,29760
	ctx_arrow(ctx)->r23.s64 = 1950351360;
	// lis ctx_arrow(ctx)->r20,29776
	ctx_arrow(ctx)->r20.s64 = 1951399936;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x822078e8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_822078E8;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lis ctx_arrow(ctx)->r26,8192
	ctx_arrow(ctx)->r26.s64 = 536870912;
	// lis ctx_arrow(ctx)->r25,8208
	ctx_arrow(ctx)->r25.s64 = 537919488;
	// lis ctx_arrow(ctx)->r27,12288
	ctx_arrow(ctx)->r27.s64 = 805306368;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207400
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207400;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_82207378:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,4112
	ctx_arrow(ctx)->r10.s64 = 269484032;
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822073d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822073D4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r26.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822073bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822073BC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822073bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822073BC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822073bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822073BC;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// b 0x822073ec
	goto loc_822073EC;
loc_822073BC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821fb848
	sub_821FB848(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f0ce8
	sub_821F0CE8(ctx, base);
	// b 0x822073e4
	goto loc_822073E4;
loc_822073D4:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821fed18
	sub_821FED18(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_822073E4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x82207c30
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207C30;
loc_822073EC:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207378
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207378;
loc_82207400:
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,8,8
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x800000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82207560
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82207560;
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,9,9
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x400000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82207560
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82207560;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x822074a8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822074A8;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_8220742C:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207454
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207454;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// b 0x82207494
	goto loc_82207494;
loc_82207454:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x82207c30
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207C30;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f1dc8
	sub_821F1DC8(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f2448
	sub_821F2448(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
loc_82207494:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8220742c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8220742C;
loc_822074A8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82213c78
	sub_82213C78(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f0ce8
	sub_821F0CE8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207560
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207560;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_822074D4:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r26.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207530
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207530;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207510
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207510;
	// lis ctx_arrow(ctx)->r10,28848
	ctx_arrow(ctx)->r10.s64 = 1890582528;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207530
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207530;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// b 0x8220754c
	goto loc_8220754C;
loc_82207510:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f6318
	sub_821F6318(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f6400
	sub_821F6400(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x82207544
	goto loc_82207544;
loc_82207530:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821fb848
	sub_821FB848(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f0ce8
	sub_821F0CE8(ctx, base);
loc_82207544:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x82207c30
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207C30;
loc_8220754C:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x822074d4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822074D4;
loc_82207560:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// lis ctx_arrow(ctx)->r24,8272
	ctx_arrow(ctx)->r24.s64 = 542113792;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x822076d0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822076D0;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
loc_82207578:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r27,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r17.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220763c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220763C;
	// lis ctx_arrow(ctx)->r10,4336
	ctx_arrow(ctx)->r10.s64 = 284164096;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207630
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207630;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r19.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207624
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207624;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220760c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220760C;
	// lis ctx_arrow(ctx)->r10,8256
	ctx_arrow(ctx)->r10.s64 = 541065216;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822075dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822075DC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r24.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822075d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822075D0;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// b 0x82207664
	goto loc_82207664;
loc_822075D0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f55b8
	sub_821F55B8(ctx, base);
	// b 0x82207650
	goto loc_82207650;
loc_822075DC:
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,6,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822075f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822075F4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f5a40
	sub_821F5A40(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_822075F4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x8220765c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8220765C;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821fc688
	sub_821FC688(ctx, base);
	// b 0x82207650
	goto loc_82207650;
loc_8220760C:
	// lhz ctx_arrow(ctx)->r11,202(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 202);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 512, xer);
	// blt ctx_arrow(ctx)->r6,0x82207658
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207658;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f61e0
	sub_821F61E0(ctx, base);
	// b 0x82207650
	goto loc_82207650;
loc_82207624:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f3ab0
	sub_821F3AB0(ctx, base);
	// b 0x82207650
	goto loc_82207650;
loc_82207630:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f2ce8
	sub_821F2CE8(ctx, base);
	// b 0x82207650
	goto loc_82207650;
loc_8220763C:
	// lhz ctx_arrow(ctx)->r11,202(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 202);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 512, xer);
	// blt ctx_arrow(ctx)->r6,0x82207658
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207658;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f1b80
	sub_821F1B80(ctx, base);
loc_82207650:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x8220765c
	goto loc_8220765C;
loc_82207658:
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
loc_8220765C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x82207c30
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207C30;
loc_82207664:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x822076bc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822076BC;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
loc_8220767C:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,28672
	ctx_arrow(ctx)->r10.s64 = 1879048192;
	// stw ctx_arrow(ctx)->r28,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822076a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822076A8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821fed78
	sub_821FED78(ctx, base);
loc_822076A8:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8220767c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8220767C;
loc_822076BC:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + 1;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,4
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207578
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207578;
loc_822076D0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82213c78
	sub_82213C78(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f0ce8
	sub_821F0CE8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lis ctx_arrow(ctx)->r25,29520
	ctx_arrow(ctx)->r25.s64 = 1934622720;
	// lis ctx_arrow(ctx)->r26,29536
	ctx_arrow(ctx)->r26.s64 = 1935671296;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x822077e4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822077E4;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_82207704:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r24.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822077bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822077BC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r16.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822077a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822077A4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r18.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207794
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207794;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207778
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207778;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r26.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207778
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207778;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r22.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220775c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220775C;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r21.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220775c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220775C;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// b 0x822077d0
	goto loc_822077D0;
loc_8220775C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f4fd0
	sub_821F4FD0(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f5178
	sub_821F5178(ctx, base);
	// b 0x822077c4
	goto loc_822077C4;
loc_82207778:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f34c8
	sub_821F34C8(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f3670
	sub_821F3670(ctx, base);
	// b 0x822077c4
	goto loc_822077C4;
loc_82207794:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f6ab0
	sub_821F6AB0(ctx, base);
	// b 0x822077c4
	goto loc_822077C4;
loc_822077A4:
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,6,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822077c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822077C8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f5d70
	sub_821F5D70(ctx, base);
	// b 0x822077c4
	goto loc_822077C4;
loc_822077BC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f5758
	sub_821F5758(ctx, base);
loc_822077C4:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_822077C8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x82207c30
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207C30;
loc_822077D0:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207704
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207704;
loc_822077E4:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lis ctx_arrow(ctx)->r27,29552
	ctx_arrow(ctx)->r27.s64 = 1936719872;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207890
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207890;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_822077FC:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r23.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82207850
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82207850;
	// beq ctx_arrow(ctx)->r6,0x82207868
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207868;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207844
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207844;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r26.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207844
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207844;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207844
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207844;
	// lis ctx_arrow(ctx)->r10,29568
	ctx_arrow(ctx)->r10.s64 = 1937768448;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8220787c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8220787C;
loc_82207844:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f3818
	sub_821F3818(ctx, base);
	// b 0x82207870
	goto loc_82207870;
loc_82207850:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r20.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207868
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207868;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r22.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207868
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207868;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r21.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8220787c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8220787C;
loc_82207868:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f5320
	sub_821F5320(ctx, base);
loc_82207870:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x82207c30
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207C30;
loc_8220787C:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x822077fc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822077FC;
loc_82207890:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x822078e8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822078E8;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_822078A4:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822078d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822078D4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f3398
	sub_821F3398(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
loc_822078D4:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x822078a4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822078A4;
loc_822078E8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f0ce8
	sub_821F0CE8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207960
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207960;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_82207904:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r22.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220792c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220792C;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r21.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8220794c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8220794C;
loc_8220792C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f4fd0
	sub_821F4FD0(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f5178
	sub_821F5178(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
loc_8220794C:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207904
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207904;
loc_82207960:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x822079c8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_822079C8;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
loc_82207974:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r30,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r23.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822079ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822079AC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r20.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822079ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822079AC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r22.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822079ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822079AC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r21.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x822079b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822079B4;
loc_822079AC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f5320
	sub_821F5320(ctx, base);
loc_822079B4:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207974
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207974;
loc_822079C8:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lis ctx_arrow(ctx)->r27,8336
	ctx_arrow(ctx)->r27.s64 = 546308096;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207a24
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207A24;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_822079E0:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82207a10
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82207A10;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f45c8
	sub_821F45C8(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
loc_82207A10:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x822079e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_822079E0;
loc_82207A24:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f0ce8
	sub_821F0CE8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207a84
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207A84;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_82207A40:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82207a70
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82207A70;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f3f68
	sub_821F3F68(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
loc_82207A70:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207a40
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207A40;
loc_82207A84:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207adc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207ADC;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_82207A98:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r19.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82207ac8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82207AC8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f0eb0
	sub_821F0EB0(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
loc_82207AC8:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207a98
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207A98;
loc_82207ADC:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207b38
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207B38;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_82207AF0:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r18.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82207b24
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82207B24;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f6ab0
	sub_821F6AB0(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
loc_82207B24:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207af0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207AF0;
loc_82207B38:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f0ce8
	sub_821F0CE8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207bdc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207BDC;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_82207B54:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,4144
	ctx_arrow(ctx)->r10.s64 = 271581184;
	// stw ctx_arrow(ctx)->r29,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207bb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207BB4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r17.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207bb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207BB4;
	// lis ctx_arrow(ctx)->r10,4192
	ctx_arrow(ctx)->r10.s64 = 274726912;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207bb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207BB4;
	// lis ctx_arrow(ctx)->r10,4208
	ctx_arrow(ctx)->r10.s64 = 275775488;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207bb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207BB4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r16.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207bb4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207BB4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r18.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82207bc8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82207BC8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821fcce8
	sub_821FCCE8(ctx, base);
	// b 0x82207bbc
	goto loc_82207BBC;
loc_82207BB4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f28e8
	sub_821F28E8(ctx, base);
loc_82207BBC:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x82207c30
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207C30;
loc_82207BC8:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207b54
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207B54;
loc_82207BDC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f0ce8
	sub_821F0CE8(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82213c78
	sub_82213C78(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82214368
	sub_82214368(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8220e858
	sub_8220E858(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82216dd0
	sub_82216DD0(ctx, base);
	// mr. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt 0x82207c30
	if (ctx_arrow(ctx)->r0.lt()) goto loc_82207C30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821f0ce8
	sub_821F0CE8(ctx, base);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_82207C30:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// b 0x823ed158
	return;
}

alias(__imp__sub_82207C40) PPC_WEAK_FUNC(sub_82207C40);
PPC_FUNC_IMPL(__imp__sub_82207C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// stwu ctx_arrow(ctx)->r1,-240(ctx_arrow(ctx)->r1)
	ea = -240 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82207c90
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82207C90;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
loc_82207C64:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r30,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// bl 0x821f15d0
	sub_821F15D0(&ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207c64
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207C64;
loc_82207C90:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r14,0
	ctx_arrow(ctx)->r14.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82208398
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82208398;
	// lis ctx_arrow(ctx)->r11,-32768
	ctx_arrow(ctx)->r11.s64 = -2147483648;
	// lis ctx_arrow(ctx)->r30,24816
	ctx_arrow(ctx)->r30.s64 = 1626341376;
	// lis ctx_arrow(ctx)->r15,8304
	ctx_arrow(ctx)->r15.s64 = 544210944;
	// lis ctx_arrow(ctx)->r16,4336
	ctx_arrow(ctx)->r16.s64 = 284164096;
	// lis ctx_arrow(ctx)->r17,4176
	ctx_arrow(ctx)->r17.s64 = 273678336;
	// ori ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r11,16385
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r11.u64 | 16385;
	// lis ctx_arrow(ctx)->r19,8208
	ctx_arrow(ctx)->r19.s64 = 537919488;
	// lis ctx_arrow(ctx)->r20,24640
	ctx_arrow(ctx)->r20.s64 = 1614807040;
	// lis ctx_arrow(ctx)->r21,20528
	ctx_arrow(ctx)->r21.s64 = 1345323008;
	// lis ctx_arrow(ctx)->r22,24736
	ctx_arrow(ctx)->r22.s64 = 1621098496;
	// lis ctx_arrow(ctx)->r23,29504
	ctx_arrow(ctx)->r23.s64 = 1933574144;
	// lis ctx_arrow(ctx)->r24,28768
	ctx_arrow(ctx)->r24.s64 = 1885339648;
	// lis ctx_arrow(ctx)->r25,28688
	ctx_arrow(ctx)->r25.s64 = 1880096768;
	// lis ctx_arrow(ctx)->r26,28880
	ctx_arrow(ctx)->r26.s64 = 1892679680;
	// lis ctx_arrow(ctx)->r27,29680
	ctx_arrow(ctx)->r27.s64 = 1945108480;
	// lis ctx_arrow(ctx)->r28,29600
	ctx_arrow(ctx)->r28.s64 = 1939865600;
	// lis ctx_arrow(ctx)->r29,29776
	ctx_arrow(ctx)->r29.s64 = 1951399936;
loc_82207CE4:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r14,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r14.u32 | (ctx_arrow(ctx)->r14.u64 << 32), 2) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r14,256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 260, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x82207d18
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82207D18;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,14
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 14, xer);
	// bne ctx_arrow(ctx)->r6,0x82207d18
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82207D18;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 48;
	// stw ctx_arrow(ctx)->r11,264(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 264, ctx_arrow(ctx)->r4.u32);
loc_82207D18:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822071a0
	sub_822071A0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt 0x8220839c
	if (ctx_arrow(ctx)->r0.lt()) goto loc_8220839C;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x822080b8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_822080B8;
	// beq ctx_arrow(ctx)->r6,0x822080a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822080A0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r15.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82207f3c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82207F3C;
	// beq ctx_arrow(ctx)->r6,0x82207f30
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207F30;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r16.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82207e64
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82207E64;
	// beq ctx_arrow(ctx)->r6,0x822082ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822082EC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r17.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82207de4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82207DE4;
	// beq ctx_arrow(ctx)->r6,0x82207dd8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207DD8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82207dcc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207DCC;
	// lis ctx_arrow(ctx)->r10,4096
	ctx_arrow(ctx)->r10.s64 = 268435456;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207dc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207DC0;
	// lis ctx_arrow(ctx)->r10,4112
	ctx_arrow(ctx)->r10.s64 = 269484032;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207db4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207DB4;
	// lis ctx_arrow(ctx)->r10,4144
	ctx_arrow(ctx)->r10.s64 = 271581184;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207da8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207DA8;
	// lis ctx_arrow(ctx)->r10,4160
	ctx_arrow(ctx)->r10.s64 = 272629760;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207DA8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207DB4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207DC0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207DCC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207DD8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207DE4:
	// lis ctx_arrow(ctx)->r10,4192
	ctx_arrow(ctx)->r10.s64 = 274726912;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207e58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207E58;
	// lis ctx_arrow(ctx)->r10,4208
	ctx_arrow(ctx)->r10.s64 = 275775488;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207e4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207E4C;
	// lis ctx_arrow(ctx)->r10,4304
	ctx_arrow(ctx)->r10.s64 = 282066944;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207e2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207E2C;
	// lis ctx_arrow(ctx)->r10,4320
	ctx_arrow(ctx)->r10.s64 = 283115520;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,5,5
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82207e44
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82207E44;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,228(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207E2C:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,5,5
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82207e44
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82207E44;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,224(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207E44:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// b 0x82208380
	goto loc_82208380;
loc_82207E4C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,152(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207E58:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207E64:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r19.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82207ed0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82207ED0;
	// beq ctx_arrow(ctx)->r6,0x822081f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822081F0;
	// lis ctx_arrow(ctx)->r10,4352
	ctx_arrow(ctx)->r10.s64 = 285212672;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207eb8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207EB8;
	// lis ctx_arrow(ctx)->r10,4384
	ctx_arrow(ctx)->r10.s64 = 287309824;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207dc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207DC0;
	// lis ctx_arrow(ctx)->r10,4400
	ctx_arrow(ctx)->r10.s64 = 288358400;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208388
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208388;
	// lis ctx_arrow(ctx)->r10,4432
	ctx_arrow(ctx)->r10.s64 = 290455552;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207dc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207DC0;
	// lis ctx_arrow(ctx)->r10,8192
	ctx_arrow(ctx)->r10.s64 = 536870912;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
loc_82207EAC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207EB8:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,7,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82208404
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,220(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207ED0:
	// lis ctx_arrow(ctx)->r10,8224
	ctx_arrow(ctx)->r10.s64 = 538968064;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207f24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207F24;
	// lis ctx_arrow(ctx)->r10,8240
	ctx_arrow(ctx)->r10.s64 = 540016640;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207f18
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207F18;
	// lis ctx_arrow(ctx)->r10,8256
	ctx_arrow(ctx)->r10.s64 = 541065216;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207f0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207F0C;
	// lis ctx_arrow(ctx)->r10,8272
	ctx_arrow(ctx)->r10.s64 = 542113792;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,176(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207F0C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,172(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207F18:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,168(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207F24:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,164(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207F30:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207F3C:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r20.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82208014
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82208014;
	// beq ctx_arrow(ctx)->r6,0x8220805c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220805C;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r21.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82207fcc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82207FCC;
	// beq ctx_arrow(ctx)->r6,0x82207fc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207FC0;
	// lis ctx_arrow(ctx)->r10,8320
	ctx_arrow(ctx)->r10.s64 = 545259520;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208388
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208388;
	// lis ctx_arrow(ctx)->r10,8336
	ctx_arrow(ctx)->r10.s64 = 546308096;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207dc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207DC0;
	// lis ctx_arrow(ctx)->r10,12288
	ctx_arrow(ctx)->r10.s64 = 805306368;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207fa8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207FA8;
	// lis ctx_arrow(ctx)->r10,20480
	ctx_arrow(ctx)->r10.s64 = 1342177280;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207f9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207F9C;
	// lis ctx_arrow(ctx)->r10,20496
	ctx_arrow(ctx)->r10.s64 = 1343225856;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,184(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207F9C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,180(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207FA8:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,7,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82208404
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,188(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207FC0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,232(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82207FCC:
	// lis ctx_arrow(ctx)->r10,24576
	ctx_arrow(ctx)->r10.s64 = 1610612736;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822080a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822080A0;
	// lis ctx_arrow(ctx)->r10,24592
	ctx_arrow(ctx)->r10.s64 = 1611661312;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220813c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220813C;
	// lis ctx_arrow(ctx)->r10,24608
	ctx_arrow(ctx)->r10.s64 = 1612709888;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208124
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208124;
	// lis ctx_arrow(ctx)->r10,24624
	ctx_arrow(ctx)->r10.s64 = 1613758464;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
loc_82207FFC:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,7,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82208404
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,272(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82208014:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r22.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82208074
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82208074;
	// beq ctx_arrow(ctx)->r6,0x822080a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822080A0;
	// lis ctx_arrow(ctx)->r10,24656
	ctx_arrow(ctx)->r10.s64 = 1615855616;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822080a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822080A0;
	// lis ctx_arrow(ctx)->r10,24672
	ctx_arrow(ctx)->r10.s64 = 1616904192;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220813c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220813C;
	// lis ctx_arrow(ctx)->r10,24688
	ctx_arrow(ctx)->r10.s64 = 1617952768;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208124
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208124;
	// lis ctx_arrow(ctx)->r10,24704
	ctx_arrow(ctx)->r10.s64 = 1619001344;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207ffc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207FFC;
	// lis ctx_arrow(ctx)->r10,24720
	ctx_arrow(ctx)->r10.s64 = 1620049920;
loc_82208054:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
loc_8220805C:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,6,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82208404
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,276(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82208074:
	// lis ctx_arrow(ctx)->r10,24752
	ctx_arrow(ctx)->r10.s64 = 1622147072;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220813c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220813C;
	// lis ctx_arrow(ctx)->r10,24768
	ctx_arrow(ctx)->r10.s64 = 1623195648;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208124
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208124;
	// lis ctx_arrow(ctx)->r10,24784
	ctx_arrow(ctx)->r10.s64 = 1624244224;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207ffc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207FFC;
	// lis ctx_arrow(ctx)->r10,24800
	ctx_arrow(ctx)->r10.s64 = 1625292800;
	// b 0x82208054
	goto loc_82208054;
loc_822080A0:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,7,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82208404
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,264(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_822080B8:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r23.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x8220828c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8220828C;
	// beq ctx_arrow(ctx)->r6,0x82208280
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208280;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r24.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x822081a8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_822081A8;
	// beq ctx_arrow(ctx)->r6,0x82208184
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208184;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82208154
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82208154;
	// beq ctx_arrow(ctx)->r6,0x82208148
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208148;
	// lis ctx_arrow(ctx)->r10,24832
	ctx_arrow(ctx)->r10.s64 = 1627389952;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220813c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220813C;
	// lis ctx_arrow(ctx)->r10,24848
	ctx_arrow(ctx)->r10.s64 = 1628438528;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208124
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208124;
	// lis ctx_arrow(ctx)->r10,24864
	ctx_arrow(ctx)->r10.s64 = 1629487104;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207ffc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207FFC;
	// lis ctx_arrow(ctx)->r10,24880
	ctx_arrow(ctx)->r10.s64 = 1630535680;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220805c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220805C;
	// lis ctx_arrow(ctx)->r10,28672
	ctx_arrow(ctx)->r10.s64 = 1879048192;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,196(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82208124:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,7,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82208404
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,268(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_8220813C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,280(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82208148:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,200(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82208154:
	// lis ctx_arrow(ctx)->r10,28704
	ctx_arrow(ctx)->r10.s64 = 1881145344;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220819c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220819C;
	// lis ctx_arrow(ctx)->r10,28720
	ctx_arrow(ctx)->r10.s64 = 1882193920;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208190
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208190;
	// lis ctx_arrow(ctx)->r10,28736
	ctx_arrow(ctx)->r10.s64 = 1883242496;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208190
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208190;
	// lis ctx_arrow(ctx)->r10,28752
	ctx_arrow(ctx)->r10.s64 = 1884291072;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
loc_82208184:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,216(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82208190:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,208(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_8220819C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_822081A8:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r26.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82208220
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82208220;
	// beq ctx_arrow(ctx)->r6,0x82208214
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208214;
	// lis ctx_arrow(ctx)->r10,28784
	ctx_arrow(ctx)->r10.s64 = 1886388224;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208184
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208184;
	// lis ctx_arrow(ctx)->r10,28800
	ctx_arrow(ctx)->r10.s64 = 1887436800;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208208
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208208;
	// lis ctx_arrow(ctx)->r10,28816
	ctx_arrow(ctx)->r10.s64 = 1888485376;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822081fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822081FC;
	// lis ctx_arrow(ctx)->r10,28848
	ctx_arrow(ctx)->r10.s64 = 1890582528;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82207eac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82207EAC;
	// lis ctx_arrow(ctx)->r10,28864
	ctx_arrow(ctx)->r10.s64 = 1891631104;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
loc_822081F0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,160(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_822081FC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,212(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82208208:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,284(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82208214:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,148(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82208220:
	// lis ctx_arrow(ctx)->r10,29440
	ctx_arrow(ctx)->r10.s64 = 1929379840;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208264
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208264;
	// lis ctx_arrow(ctx)->r10,29456
	ctx_arrow(ctx)->r10.s64 = 1930428416;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208250
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208250;
	// lis ctx_arrow(ctx)->r10,29472
	ctx_arrow(ctx)->r10.s64 = 1931476992;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220825c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220825C;
	// lis ctx_arrow(ctx)->r10,29488
	ctx_arrow(ctx)->r10.s64 = 1932525568;
loc_82208248:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
loc_82208250:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,296(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_8220825C:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// b 0x82208268
	goto loc_82208268;
loc_82208264:
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_82208268:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,292(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82208380
	goto loc_82208380;
loc_82208280:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,300(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_8220828C:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82208324
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82208324;
	// beq ctx_arrow(ctx)->r6,0x82208250
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208250;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r28.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x822082f8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_822082F8;
	// beq ctx_arrow(ctx)->r6,0x822082e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822082E0;
	// lis ctx_arrow(ctx)->r10,29520
	ctx_arrow(ctx)->r10.s64 = 1934622720;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822082ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822082EC;
	// lis ctx_arrow(ctx)->r10,29536
	ctx_arrow(ctx)->r10.s64 = 1935671296;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822082ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822082EC;
	// lis ctx_arrow(ctx)->r10,29552
	ctx_arrow(ctx)->r10.s64 = 1936719872;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822082ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822082EC;
	// lis ctx_arrow(ctx)->r10,29568
	ctx_arrow(ctx)->r10.s64 = 1937768448;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822082ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822082EC;
	// lis ctx_arrow(ctx)->r10,29584
	ctx_arrow(ctx)->r10.s64 = 1938817024;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
loc_822082E0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,288(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_822082EC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,256(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_822082F8:
	// lis ctx_arrow(ctx)->r10,29616
	ctx_arrow(ctx)->r10.s64 = 1940914176;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822082e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822082E0;
	// lis ctx_arrow(ctx)->r10,29632
	ctx_arrow(ctx)->r10.s64 = 1941962752;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822082e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822082E0;
	// lis ctx_arrow(ctx)->r10,29648
	ctx_arrow(ctx)->r10.s64 = 1943011328;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208250
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208250;
	// lis ctx_arrow(ctx)->r10,29664
	ctx_arrow(ctx)->r10.s64 = 1944059904;
	// b 0x82208248
	goto loc_82208248;
loc_82208324:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r29.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x822083bc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_822083BC;
	// beq ctx_arrow(ctx)->r6,0x8220836c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220836C;
	// lis ctx_arrow(ctx)->r10,29696
	ctx_arrow(ctx)->r10.s64 = 1946157056;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208250
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208250;
	// lis ctx_arrow(ctx)->r10,29712
	ctx_arrow(ctx)->r10.s64 = 1947205632;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822083b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822083B0;
	// lis ctx_arrow(ctx)->r10,29728
	ctx_arrow(ctx)->r10.s64 = 1948254208;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822083a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822083A4;
	// lis ctx_arrow(ctx)->r10,29744
	ctx_arrow(ctx)->r10.s64 = 1949302784;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220836c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220836C;
	// lis ctx_arrow(ctx)->r10,29760
	ctx_arrow(ctx)->r10.s64 = 1950351360;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
loc_8220836C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,252(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_82208374:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82208380:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r18.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x82208404
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208404;
loc_82208388:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r14,1
	ctx_arrow(ctx)->r14.s64 = ctx_arrow(ctx)->r14.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r14.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82207ce4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82207CE4;
loc_82208398:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_8220839C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// b 0x823ed150
	return;
loc_822083A4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,236(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_822083B0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,244(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_822083BC:
	// lis ctx_arrow(ctx)->r10,29792
	ctx_arrow(ctx)->r10.s64 = 1952448512;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220836c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220836C;
	// lis ctx_arrow(ctx)->r10,29808
	ctx_arrow(ctx)->r10.s64 = 1953497088;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8220836c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8220836C;
	// lis ctx_arrow(ctx)->r10,29856
	ctx_arrow(ctx)->r10.s64 = 1956642816;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x822083f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_822083F8;
	// lis ctx_arrow(ctx)->r10,29872
	ctx_arrow(ctx)->r10.s64 = 1957691392;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82208404
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82208404;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,240(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_822083F8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,248(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x82208374
	goto loc_82208374;
loc_82208404:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,4532
	ctx_arrow(ctx)->r5.s64 = 4532;
	// lwz ctx_arrow(ctx)->r10,260(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,60(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,7,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8220842c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8220842C;
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-12896
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -12896;
	// b 0x82208434
	goto loc_82208434;
loc_8220842C:
	// lis ctx_arrow(ctx)->r11,-32253
	ctx_arrow(ctx)->r11.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-12952
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -12952;
loc_82208434:
	// bl 0x8221b350
	sub_8221B350(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r18.u64;
	// b 0x8220839c
	goto loc_8220839C;
}

alias(__imp__sub_82208440) PPC_WEAK_FUNC(sub_82208440);
PPC_FUNC_IMPL(__imp__sub_82208440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,108(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r4,108(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,348(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82208628
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208628;
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x822084ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_822084AC;
loc_822084A4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x82208760
	goto loc_82208760;
loc_822084AC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 65535, xer);
	// beq ctx_arrow(ctx)->r6,0x82208614
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82208614;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x822084e8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_822084E8;
	// bl 0x821fe280
	sub_821FE280(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,4556
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 4556;
	// b 0x822084f4
	goto loc_822084F4;
loc_822084E8:
	// bl 0x821fe280
	sub_821FE280(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32253
	ctx_arrow(ctx)->r10.s64 = -2113732608;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,4548
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + 4548;
loc_822084F4:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821abd98
	sub_821ABD98(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,472
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 472;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// stb ctx_arrow(ctx)->r11,143(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 143, ctx_arrow(ctx.u8)->r1,3184
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 3184;
	// b 0x823ed17c
	return;
}

