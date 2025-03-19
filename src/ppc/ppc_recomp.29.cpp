#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_82347C68) PPC_WEAK_FUNC(sub_82347C68);
PPC_FUNC_IMPL(__imp__sub_82347C68) {
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
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r7.u64;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r6.u64;
	// stb ctx_arrow(ctx)->r10,896(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 896, ctx_arrow(ctx)->r4.u8);
	// lbz ctx_arrow(ctx)->r11,1872(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-20196
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -20196;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,31696
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 31696;
	// beq 0x82347ccc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82347CCC;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// li ctx_arrow(ctx)->r7,512
	ctx_arrow(ctx)->r7.s64 = 512;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,31916
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 31916;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82263fb8
	sub_82263FB8(ctx, base);
loc_82347CCC:
	// lbz ctx_arrow(ctx)->r11,1873(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x82347cf4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82347CF4;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// li ctx_arrow(ctx)->r7,514
	ctx_arrow(ctx)->r7.s64 = 514;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,31896
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 31896;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82263fb8
	sub_82263FB8(ctx, base);
loc_82347CF4:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,228
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 228;
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82347d24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82347D24;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// li ctx_arrow(ctx)->r7,515
	ctx_arrow(ctx)->r7.s64 = 515;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,31880
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 31880;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bl 0x82263fb8
	sub_82263FB8(ctx, base);
loc_82347D24:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,244
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 244;
	// stwx ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,260
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 260;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,33
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 33, xer);
	// stwx ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// stwx ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// beq ctx_arrow(ctx)->r6,0x82347d68
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82347D68;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,69
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 69;
	// li ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r10.s64 = 5;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
loc_82347D68:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
}

alias(__imp__sub_82347D78) PPC_WEAK_FUNC(sub_82347D78);
PPC_FUNC_IMPL(__imp__sub_82347D78) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r11,-32251
	ctx_arrow(ctx)->r11.s64 = -2113601536;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,31944
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 31944;
	// lwz ctx_arrow(ctx)->r3,1876(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823d22e0
	sub_823D22E0(ctx, base);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,912
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r30.s64 + 912;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,1616
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r30.s64 + 1616;
loc_82347DA4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x82347ddc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82347DDC;
	// lwz ctx_arrow(ctx)->r5,64(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,18
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 18, xer);
	// beq ctx_arrow(ctx)->r6,0x82347ddc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82347DDC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,-512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + -512;
	// lwz ctx_arrow(ctx)->r7,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r6,128(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,-256
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r31.s64 + -256;
	// lwz ctx_arrow(ctx)->r3,1876(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x82313438
	sub_82313438(ctx, base);
loc_82347DDC:
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,16
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 16, xer);
	// blt ctx_arrow(ctx)->r6,0x82347da4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82347DA4;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_82347DF8) PPC_WEAK_FUNC(sub_82347DF8);
PPC_FUNC_IMPL(__imp__sub_82347DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,1360
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 + 1360;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,384
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r4.s64 + 384;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,976
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 976;
	// li ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r7.s64 = 16;
loc_82347E0C:
	// lwz ctx_arrow(ctx)->r5,64(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = 4;
	// stw ctx_arrow(ctx)->r5,64(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 64, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_82347E20:
	// lwz ctx_arrow(ctx)->r5,-256(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addic. ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,-1
	xer.ca = ctx_arrow(ctx)->r6.u32 > 0;
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// stw ctx_arrow(ctx)->r5,-256(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + -256, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r5,256(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// stw ctx_arrow(ctx)->r5,256(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 256, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// bne 0x82347e20
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82347E20;
	// addic. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	xer.ca = ctx_arrow(ctx)->r7.u32 > 0;
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// bne 0x82347e0c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82347E0C;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stb ctx_arrow(ctx)->r11,1872(ctx_arrow(ctx)->r4)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r4.u32 + 1872, ctx_arrow(ctx.u8)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

