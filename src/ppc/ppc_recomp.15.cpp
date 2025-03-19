#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_8219B0D0) PPC_WEAK_FUNC(sub_8219B0D0);
PPC_FUNC_IMPL(__imp__sub_8219B0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0xF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b12c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B12C;
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,23,30,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 23) & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b0f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B0F8;
	// li ctx_arrow(ctx)->r11,18
	ctx_arrow(ctx)->r11.s64 = 18;
	// b 0x8219b154
	goto loc_8219B154;
loc_8219B0F8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b108
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B108;
	// li ctx_arrow(ctx)->r11,17
	ctx_arrow(ctx)->r11.s64 = 17;
	// b 0x8219b154
	goto loc_8219B154;
loc_8219B108:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b118
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B118;
	// li ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r11.s64 = 20;
	// b 0x8219b154
	goto loc_8219B154;
loc_8219B118:
	// lwz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,21,21
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x400;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8219b154
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B154;
	// li ctx_arrow(ctx)->r11,19
	ctx_arrow(ctx)->r11.s64 = 19;
	// b 0x8219b154
	goto loc_8219B154;
loc_8219B12C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b154
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B154;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,1,1
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8219b154
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B154;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,21,22
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x600;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1024
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1024, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b154
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B154;
	// li ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = 16;
loc_8219B154:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// blr 
	return;
}

alias(__imp__sub_8219B160) PPC_WEAK_FUNC(sub_8219B160);
PPC_FUNC_IMPL(__imp__sub_8219B160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,1768(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 8, xer);
	// bgt ctx_arrow(ctx)->r6,0x8219b330
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8219B330;
	// lis ctx_arrow(ctx)->r12,-32254
	ctx_arrow(ctx)->r12.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-17608
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -17608;
	// lbzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r0,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r0.u32 | (ctx_arrow(ctx)->r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis ctx_arrow(ctx)->r12,-32230
	ctx_arrow(ctx)->r12.s64 = -2112225280;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-20040
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -20040;
	// add ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 + ctx_arrow(ctx)->r0.u64;
	// mtctr ctx_arrow(ctx)->r12
	ctr.u64 = ctx_arrow(ctx)->r12.u64;
	// nop 
	// bctr 
	switch (ctx_arrow(ctx)->r10.u64) {
	case 0:
		goto loc_8219B248;
	case 1:
		goto loc_8219B278;
	case 2:
		goto loc_8219B1FC;
	case 3:
		goto loc_8219B1B8;
	case 4:
		goto loc_8219B330;
	case 5:
		goto loc_8219B2A4;
	case 6:
		goto loc_8219B2D0;
	case 7:
		goto loc_8219B2EC;
	case 8:
		goto loc_8219B308;
	default:
		__builtin_unreachable();
	}
loc_8219B1B8:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,1,1
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8219b330
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B330;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219b1e0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B1E0;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r9,5120
	ctx_arrow(ctx)->r9.s64 = 5120;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// divwu ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u32 = ctx_arrow(ctx)->r11.u32 / ctx_arrow(ctx)->r9.u32;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFF;
	// bl 0x8219c0f8
	sub_8219C0F8(ctx, base);
loc_8219B1E0:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219b330
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B330;
	// lis ctx_arrow(ctx)->r10,-31991
	ctx_arrow(ctx)->r10.s64 = -2096562176;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,-31440(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -31440, ctx_arrow(ctx)->r4.u32);
	// b 0x8219b330
	goto loc_8219B330;
loc_8219B1FC:
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x8219b21c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B21C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b21c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B21C;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r5,13
	ctx_arrow(ctx)->r5.s64 = 13;
	// bl 0x8219d060
	sub_8219D060(ctx, base);
loc_8219B21C:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r29,-20096
	ctx_arrow(ctx)->r29.s64 = -1317011456;
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0,0,19
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,0,0,19
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_8219B240:
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// b 0x8219b330
	goto loc_8219B330;
loc_8219B248:
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x8219b268
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B268;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b268
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B268;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r5,9
	ctx_arrow(ctx)->r5.s64 = 9;
	// bl 0x8219d060
	sub_8219D060(ctx, base);
loc_8219B268:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r4,-20096
	ctx_arrow(ctx)->r4.s64 = -1317011456;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0,0,29
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x8219b240
	goto loc_8219B240;
loc_8219B278:
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x8219b298
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B298;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b298
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B298;
	// li ctx_arrow(ctx)->r5,11
	ctx_arrow(ctx)->r5.s64 = 11;
loc_8219B290:
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d060
	sub_8219D060(ctx, base);
loc_8219B298:
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r4,-20096
	ctx_arrow(ctx)->r4.s64 = -1317011456;
	// b 0x8219b240
	goto loc_8219B240;
loc_8219B2A4:
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x8219b2c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B2C4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b2c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B2C4;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r5,7
	ctx_arrow(ctx)->r5.s64 = 7;
	// bl 0x8219d060
	sub_8219D060(ctx, base);
loc_8219B2C4:
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r4,-20096
	ctx_arrow(ctx)->r4.s64 = -1317011456;
	// b 0x8219b240
	goto loc_8219B240;
loc_8219B2D0:
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x8219b298
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B298;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b298
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B298;
	// li ctx_arrow(ctx)->r5,8
	ctx_arrow(ctx)->r5.s64 = 8;
	// b 0x8219b290
	goto loc_8219B290;
loc_8219B2EC:
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x8219b298
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B298;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b298
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B298;
	// li ctx_arrow(ctx)->r5,17
	ctx_arrow(ctx)->r5.s64 = 17;
	// b 0x8219b290
	goto loc_8219B290;
loc_8219B308:
	// lwz ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x8219b328
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B328;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b328
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B328;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r5,15
	ctx_arrow(ctx)->r5.s64 = 15;
	// bl 0x8219d060
	sub_8219D060(ctx, base);
loc_8219B328:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219bd60
	sub_8219BD60(ctx, base);
loc_8219B330:
	// lis ctx_arrow(ctx)->r4,9344
	ctx_arrow(ctx)->r4.s64 = 612368384;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_8219B348) PPC_WEAK_FUNC(sub_8219B348);
PPC_FUNC_IMPL(__imp__sub_8219B348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r10.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r8.u64;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r27.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b39c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B39C;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,1,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219b39c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B39C;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8219b39c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B39C;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
loc_8219B39C:
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,4112
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r25.u64 & 4112;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8219b3b0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B3B0;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8219b3b4
	goto loc_8219B3B4;
loc_8219B3B0:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8219B3B4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r31,-32256
	ctx_arrow(ctx)->r31.s64 = -2113929216;
	// beq ctx_arrow(ctx)->r6,0x8219b3d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B3D8;
	// lwz ctx_arrow(ctx)->r10,1768(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8219d060
	sub_8219D060(ctx, base);
loc_8219B3D8:
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,18
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r25.u64 & 18;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x8219b4b0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B4B0;
	// lwz ctx_arrow(ctx)->r11,1768(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28,12,20,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u32 & 0x1FFFFFFF;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r26.u64;
	// bl 0x8235eaa8
	sub_8235EAA8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,10888(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r3.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b428
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B428;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,11816
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 11816;
	// bl 0x8219c570
	sub_8219C570(ctx, base);
	// b 0x8219b4b0
	goto loc_8219B4B0;
loc_8219B428:
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219b444
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219B444;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219B444:
	// li ctx_arrow(ctx)->r9,2609
	ctx_arrow(ctx)->r9.s64 = 2609;
	// lwz ctx_arrow(ctx)->r8,260(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 65536;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,4095
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r29.s64 + 4095;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,2607
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | 2607;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,0,0,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0xFFFFF000;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,0,0,19
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 0) & 0xFFFFF000;
	// lis ctx_arrow(ctx)->r6,-16380
	ctx_arrow(ctx)->r6.s64 = -1073479680;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,15360
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 15360;
	// li ctx_arrow(ctx)->r5,3
	ctx_arrow(ctx)->r5.s64 = 3;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r4,2609
	ctx_arrow(ctx)->r4.s64 = 2609;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lis ctx_arrow(ctx)->r30,-32768
	ctx_arrow(ctx)->r30.s64 = -2147483648;
	// li ctx_arrow(ctx)->r29,8
	ctx_arrow(ctx)->r29.s64 = 8;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 48, ctx_arrow(ctx)->r4.u32);
loc_8219B4B0:
	// rlwinm. ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0,27,27
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// bne 0x8219b4c4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B4C4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,10,10
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x200000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219b550
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B550;
loc_8219B4C4:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r25.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8219b530
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B530;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b4e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B4E8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b4e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B4E8;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r24.s64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27,24
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r27.s64 + 24;
	// b 0x8219b4f0
	goto loc_8219B4F0;
loc_8219B4E8:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r23.s64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27,20
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r27.s64 + 20;
loc_8219B4F0:
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,25,7,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,127
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + 127;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,7,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16,16,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 16) & 0xFFFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x8219b518
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8219B518;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
loc_8219B518:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219b524
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219B524;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64;
loc_8219B524:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16,0,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 16) & 0xFFFF0000;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_8219B530:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b550
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B550;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,12,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addis ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-16384
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -1073741824;
loc_8219B550:
	// li ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.s64 = 256;
loc_8219B554:
	// mfmsr ctx_arrow(ctx)->r8
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r27
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r27.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// stwcx. ctx_arrow(ctx)->r9,0,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r27.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r9.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r8,1
	// bne 0x8219b554
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B554;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed170
	return;
}

alias(__imp__sub_8219B580) PPC_WEAK_FUNC(sub_8219B580);
PPC_FUNC_IMPL(__imp__sub_8219B580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r10,-256
	ctx_arrow(ctx)->r10.s64 = -256;
loc_8219B59C:
	// mfmsr ctx_arrow(ctx)->r7
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r9,0,ctx_arrow(ctx)->r31
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r31.u32);
	ctx_arrow(ctx)->r9.u64 = __builtin_bswap32(reserved.u32);
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// stwcx. ctx_arrow(ctx)->r8,0,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r31.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r8.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r7,1
	// bne 0x8219b59c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B59C;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,20,23
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xF00;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,256
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 256, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b680
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B680;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = -65536;
	// lis ctx_arrow(ctx)->r28,16384
	ctx_arrow(ctx)->r28.s64 = 1073741824;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b624
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B624;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,16,16,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 16) & 0xFFFF;
	// stw ctx_arrow(ctx)->r30,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,10,10
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x200000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x8219b60c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B60C;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,12,20,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r28.s64;
loc_8219B60C:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,7,0,24
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,7,0,24
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 7) & 0xFFFFFF80;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x821a39a0
	sub_821A39A0(ctx, base);
loc_8219B624:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b680
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B680;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8219b680
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219B680;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,16,16,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xFFFF;
	// stw ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,10,10
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x200000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8219b668
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B668;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,12,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// subf ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r28.s64;
loc_8219B668:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,7,0,24
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,7,0,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 7) & 0xFFFFFF80;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r29.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// bl 0x821a39a0
	sub_821A39A0(ctx, base);
loc_8219B680:
	// sync 
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_8219B690) PPC_WEAK_FUNC(sub_8219B690);
PPC_FUNC_IMPL(__imp__sub_8219B690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 4;
loc_8219B6A4:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stwcx. ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r10.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x8219b6a4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B6A4;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r10.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b6ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B6EC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b6ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B6EC;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,1,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219b6ec
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B6EC;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8219b690
	sub_8219B690(ctx, base);
loc_8219B6EC:
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

alias(__imp__sub_8219B708) PPC_WEAK_FUNC(sub_8219B708);
PPC_FUNC_IMPL(__imp__sub_8219B708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 4;
loc_8219B720:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// stwcx. ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r10.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x8219b720
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B720;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b774
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B774;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x8219b768
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219B768;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,1,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219b768
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B768;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8219b708
	sub_8219B708(ctx, base);
loc_8219B768:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219b160
	sub_8219B160(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_8219B774:
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

alias(__imp__sub_8219B788) PPC_WEAK_FUNC(sub_8219B788);
PPC_FUNC_IMPL(__imp__sub_8219B788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,25728
	ctx_arrow(ctx)->r4.s64 = 1686110208;
	// li ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r3.s64 = 32;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x8219b7b8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B7B8;
loc_8219B7B0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x8219b848
	goto loc_8219B848;
loc_8219B7B8:
	// lis ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r30.s64 = 1048576;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 1;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// beq 0x8219b7d8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B7D8;
	// lis ctx_arrow(ctx)->r30,48
	ctx_arrow(ctx)->r30.s64 = 3145728;
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 1;
loc_8219B7D8:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,0,22,22
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0x200;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8219b7e4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B7E4;
	// oris ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,64
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 4194304;
loc_8219B7E4:
	// lis ctx_arrow(ctx)->r4,-32128
	ctx_arrow(ctx)->r4.s64 = -2105540608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,28,1,3
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 28) & 0x70000000) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x8219b80c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B80C;
	// lis ctx_arrow(ctx)->r4,9344
	ctx_arrow(ctx)->r4.s64 = 612368384;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// b 0x8219b7b0
	goto loc_8219B7B0;
loc_8219B80C:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,0,6,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 0) & 0x3FFFFFC;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u64 | 3;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,4
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x8000000;
	// lis ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = -65536;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 268435456;
	// stw ctx_arrow(ctx)->r8,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2;
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
loc_8219B848:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_8219B850) PPC_WEAK_FUNC(sub_8219B850);
PPC_FUNC_IMPL(__imp__sub_8219B850) {
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
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r8,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r6,768
	ctx_arrow(ctx)->r6.s64 = 50331648;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r5,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,6,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3FFFFFC;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stw ctx_arrow(ctx)->r6,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r4,10
	ctx_arrow(ctx)->r4.s64 = 10;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r8.u64;
	// bl 0x8219b348
	sub_8219B348(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8219B8A0) PPC_WEAK_FUNC(sub_8219B8A0);
PPC_FUNC_IMPL(__imp__sub_8219B8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x8219b580
	sub_8219B580(ctx, base);
	return;
}

alias(__imp__sub_8219B8B0) PPC_WEAK_FUNC(sub_8219B8B0);
PPC_FUNC_IMPL(__imp__sub_8219B8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,25728
	ctx_arrow(ctx)->r4.s64 = 1686110208;
	// li ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r3.s64 = 32;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x8219b8e4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B8E4;
loc_8219B8DC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x8219b954
	goto loc_8219B954;
loc_8219B8E4:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,29,0,2
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 29) & 0xE0000000;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29,0,29,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// oris ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64 | 1048576;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,2
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 2;
	// beq 0x8219b904
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B904;
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// oris ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,32
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 2097152;
loc_8219B904:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,0,22,22
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0x200;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8219b910
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B910;
	// oris ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,64
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 4194304;
loc_8219B910:
	// lis ctx_arrow(ctx)->r4,-32128
	ctx_arrow(ctx)->r4.s64 = -2105540608;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,28,1,3
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 28) & 0x70000000) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bne 0x8219b938
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B938;
	// lis ctx_arrow(ctx)->r4,9344
	ctx_arrow(ctx)->r4.s64 = 612368384;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// b 0x8219b8dc
	goto loc_8219B8DC;
loc_8219B938:
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stw ctx_arrow(ctx)->r28,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = -65536;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
loc_8219B954:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_8219B960) PPC_WEAK_FUNC(sub_8219B960);
PPC_FUNC_IMPL(__imp__sub_8219B960) {
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
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r8,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r5,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64 | 2;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,12
	ctx_arrow(ctx)->r4.s64 = 12;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x8219b348
	sub_8219B348(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8219B9A8) PPC_WEAK_FUNC(sub_8219B9A8);
PPC_FUNC_IMPL(__imp__sub_8219B9A8) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// b 0x8219b580
	sub_8219B580(ctx, base);
	return;
}

alias(__imp__sub_8219B9B8) PPC_WEAK_FUNC(sub_8219B9B8);
PPC_FUNC_IMPL(__imp__sub_8219B9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// lwz ctx_arrow(ctx)->r9,13500(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// beq 0x8219ba40
	if (ctx_arrow(ctx)->r0.eq() goto loc_8219BA40;
	// lwz ctx_arrow(ctx)->r10,14900(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,30,2,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 30) & 0x3FFFFFFF;
	// bne 0x8219b9ec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219B9EC;
	// lwz ctx_arrow(ctx)->r10,156(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,152(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
loc_8219B9EC:
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r9,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r6.s64 + -1;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r8.s64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,164
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 164;
	// andc ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r8.u64 & ~ctx_arrow(ctx)->r7.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219ba14
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219BA14;
loc_8219BA0C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
loc_8219BA14:
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r3.s64;
	// lwz ctx_arrow(ctx)->r9,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 2;
	// stw ctx_arrow(ctx)->r3,14900(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 14900, ctx_arrow(ctx)->r4.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r10.s64;
	// stw ctx_arrow(ctx)->r9,52(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
loc_8219BA40:
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219ba0c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219BA0C;
	// lwz ctx_arrow(ctx)->r10,152(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,14912(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 14912, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,152(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_8219BA68) PPC_WEAK_FUNC(sub_8219BA68);
PPC_FUNC_IMPL(__imp__sub_8219BA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r9,156(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lis ctx_arrow(ctx)->r10,16384
	ctx_arrow(ctx)->r10.s64 = 1073741824;
	// lwz ctx_arrow(ctx)->r11,152(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,12,20,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0xFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8,512
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r8.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,512
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 0) & 0x1000;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,19,19
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x1000;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1FFFFFFF;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// subf ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r7.s64;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r6.s64;
	// b 0x821a39a0
	sub_821A39A0(ctx, base);
	return;
}

alias(__imp__sub_8219BAC4) PPC_WEAK_FUNC(sub_8219BAC4);
PPC_FUNC_IMPL(__imp__sub_8219BAC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_8219BAC8) PPC_WEAK_FUNC(sub_8219BAC8);
PPC_FUNC_IMPL(__imp__sub_8219BAC8) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,128
	ctx_arrow(ctx)->r5.s64 = 128;
	// li ctx_arrow(ctx)->r4,502
	ctx_arrow(ctx)->r4.s64 = 502;
	// lwz ctx_arrow(ctx)->r29,13504(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8219ca10
	sub_8219CA10(ctx, base);
	// lbz ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219bb00
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219BB00;
	// lwz ctx_arrow(ctx)->r31,16712(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8219bb5c
	goto loc_8219BB5C;
loc_8219BB00:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,12,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 12) & 0xFFF;
	// stw ctx_arrow(ctx)->r31,13504(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 13504, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 512;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u32 & 0x1FFFFFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addis ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-16384
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -1073741824;
	// bne ctx_arrow(ctx)->r6,0x8219bb38
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219BB38;
	// lwz ctx_arrow(ctx)->r11,13500(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// b 0x8219bb50
	goto loc_8219BB50;
loc_8219BB38:
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,13508(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r29.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -8;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x7) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 3;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 4, ctx_arrow(ctx)->r4.u32);
loc_8219BB50:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3,2008
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r3.s64 + 2008;
	// bl 0x821a39a0
	sub_821A39A0(ctx, base);
loc_8219BB5C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,2008
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 2008;
	// stw ctx_arrow(ctx)->r3,13508(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 13508, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,13512(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 13512, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_8219BB78) PPC_WEAK_FUNC(sub_8219BB78);
PPC_FUNC_IMPL(__imp__sub_8219BB78) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,128
	ctx_arrow(ctx)->r5.s64 = 128;
	// li ctx_arrow(ctx)->r4,136
	ctx_arrow(ctx)->r4.s64 = 136;
	// lwz ctx_arrow(ctx)->r29,13516(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8219ca10
	sub_8219CA10(ctx, base);
	// lbz ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219bbb0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219BBB0;
	// lwz ctx_arrow(ctx)->r31,16712(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8219bc0c
	goto loc_8219BC0C;
loc_8219BBB0:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,12,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 12) & 0xFFF;
	// stw ctx_arrow(ctx)->r31,13516(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 13516, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 512;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u32 & 0x1FFFFFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addis ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-16384
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -1073741824;
	// bne ctx_arrow(ctx)->r6,0x8219bbe8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219BBE8;
	// lwz ctx_arrow(ctx)->r11,13500(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r3,116(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// b 0x8219bc00
	goto loc_8219BC00;
loc_8219BBE8:
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,13520(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r29.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -8;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x7) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 3;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 4, ctx_arrow(ctx)->r4.u32);
loc_8219BC00:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3,136
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r3.s64 + 136;
	// bl 0x821a39a0
	sub_821A39A0(ctx, base);
loc_8219BC0C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,136
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 136;
	// stw ctx_arrow(ctx)->r3,13520(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 13520, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,13524(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 13524, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_8219BC28) PPC_WEAK_FUNC(sub_8219BC28);
PPC_FUNC_IMPL(__imp__sub_8219BC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r10,1768(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bge ctx_arrow(ctx)->r6,0x8219bc64
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219BC64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_8219BC64:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,14956
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r10.s64 + 14956;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r3,164(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,172(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_8219BCA8) PPC_WEAK_FUNC(sub_8219BCA8);
PPC_FUNC_IMPL(__imp__sub_8219BCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1768(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,14956
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 14956;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r3,164(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,176(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
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

alias(__imp__sub_8219BD08) PPC_WEAK_FUNC(sub_8219BD08);
PPC_FUNC_IMPL(__imp__sub_8219BD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,1768(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,14956
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 14956;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r3,164(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,180(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_8219BD60) PPC_WEAK_FUNC(sub_8219BD60);
PPC_FUNC_IMPL(__imp__sub_8219BD60) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,152(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219bd88
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219BD88;
	// bl 0x8219bca8
	sub_8219BCA8(ctx, base);
	// b 0x8219bd98
	goto loc_8219BD98;
loc_8219BD88:
	// bl 0x8219ba68
	sub_8219BA68(ctx, base);
	// lis ctx_arrow(ctx)->r4,-20096
	ctx_arrow(ctx)->r4.s64 = -1317011456;
	// lwz ctx_arrow(ctx)->r3,152(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8209d060
	sub_8209D060(ctx, base);
loc_8219BD98:
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

alias(__imp__sub_8219BDB0) PPC_WEAK_FUNC(sub_8219BDB0);
PPC_FUNC_IMPL(__imp__sub_8219BDB0) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r8,13216(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq 0x8219be54
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219BE54;
	// lbz ctx_arrow(ctx)->r7,10941(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,14888(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,14892(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r9.s64;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 2;
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,0,26,26
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// beq 0x8219be18
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219BE18;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r7.u64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// b 0x8219bebc
	goto loc_8219BEBC;
loc_8219BE18:
	// lwz ctx_arrow(ctx)->r10,14904(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,13220(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8219be40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219BE40;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r11.s64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r7.s64 - ctx_arrow(ctx)->r10.s64;
	// b 0x8219bebc
	goto loc_8219BEBC;
loc_8219BE40:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r8.s64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r7.s64 - ctx_arrow(ctx)->r9.s64;
	// b 0x8219bebc
	goto loc_8219BEBC;
loc_8219BE54:
	// lbz ctx_arrow(ctx)->r8,10940(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0,0,24
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 0) & 0xFFFFFF80;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x8219bebc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219BEBC;
	// lwz ctx_arrow(ctx)->r3,13500(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,152(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219be88
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219BE88;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// bl 0x8219bd08
	sub_8219BD08(ctx, base);
	// lwz ctx_arrow(ctx)->r9,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8219bebc
	goto loc_8219BEBC;
loc_8219BE88:
	// lbz ctx_arrow(ctx)->r10,10941(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,26,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8219be9c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219BE9C;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// b 0x8219beb0
	goto loc_8219BEB0;
loc_8219BE9C:
	// lwz ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8219BEB0:
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
loc_8219BEBC:
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
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

alias(__imp__sub_8219BEE0) PPC_WEAK_FUNC(sub_8219BEE0);
PPC_FUNC_IMPL(__imp__sub_8219BEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r3.s64 + 32;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,800
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r3.s64 + 800;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,29,3,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 29) & 0x1FFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r7.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8219bf04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219BF04;
loc_8219BEFC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
loc_8219BF04:
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u32 & 0x1F;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// srw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// andc ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & ~ctx_arrow(ctx)->r9.u64;
	// cntlzw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r8.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 32, xer);
	// bne ctx_arrow(ctx)->r6,0x8219bf48
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219BF48;
loc_8219BF24:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x8219bf24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219BF24;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r6.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8219befc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219BEFC;
	// rotlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0);
	// not ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.u64 = ~ctx_arrow(ctx)->r9.u64;
	// cntlzw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r8.u32);
loc_8219BF48:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r10.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// srw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r5.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r5.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// and ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r5.u64 & ctx_arrow(ctx)->r9.u64;
	// cntlzw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r9.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 32, xer);
	// bne ctx_arrow(ctx)->r6,0x8219bf94
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219BF94;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// b 0x8219bf70
	goto loc_8219BF70;
loc_8219BF6C:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
loc_8219BF70:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219bf6c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219BF6C;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8219bf8c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219BF8C;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// b 0x8219bf94
	goto loc_8219BF94;
loc_8219BF8C:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cntlzw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r9.u32);
loc_8219BF94:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r7.s64;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r7.s64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 2;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,5,0,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8219BFC0) PPC_WEAK_FUNC(sub_8219BFC0);
PPC_FUNC_IMPL(__imp__sub_8219BFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5,27,5,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,27,5,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,8
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r8.s64 + 8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,27
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r4.u32 & 0x1F;
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u32 & 0x1F;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, 0, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r3.u64;
	// beq ctx_arrow(ctx)->r6,0x8219c070
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219C070;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r8.u32, xer);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// bne ctx_arrow(ctx)->r6,0x8219c014
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C014;
	// srw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r8.u64;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r9.u64;
	// b 0x8219c0f0
	goto loc_8219C0F0;
loc_8219C014:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219c060
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C060;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r11.s64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,30,2,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 4294967294;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x8219c058
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C058;
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_8219C04C:
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// bdnz 0x8219c04c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8219C04C;
loc_8219C058:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
loc_8219C060:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// orc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 | ~ctx_arrow(ctx)->r10.u64;
	// b 0x8219c0f0
	goto loc_8219C0F0;
loc_8219C070:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r8.u32, xer);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// bne ctx_arrow(ctx)->r6,0x8219c094
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C094;
	// srw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r8.u64;
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r10.u64;
	// b 0x8219c0f0
	goto loc_8219C0F0;
loc_8219C094:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// andc ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & ~ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219c0e4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C0E4;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r11.s64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,30,2,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 4294967294;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x8219c0dc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C0DC;
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_8219C0D0:
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// bdnz 0x8219c0d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8219C0D0;
loc_8219C0DC:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
loc_8219C0E4:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r9.u64;
loc_8219C0F0:
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8219C0F8) PPC_WEAK_FUNC(sub_8219C0F8);
PPC_FUNC_IMPL(__imp__sub_8219C0F8) {
	PPC_FUNC_PROLOGUE();
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
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r31,-31400(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// bl 0x8219bfc0
	sub_8219BFC0(&ctx);
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_8219C148) PPC_WEAK_FUNC(sub_8219C148);
PPC_FUNC_IMPL(__imp__sub_8219C148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// li ctx_arrow(ctx)->r27,-1
	ctx_arrow(ctx)->r27.s64 = -1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-31400
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -31400;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r27.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne 0x8219c200
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219C200;
	// lis ctx_arrow(ctx)->r4,25728
	ctx_arrow(ctx)->r4.s64 = 1686110208;
	// li ctx_arrow(ctx)->r3,804
	ctx_arrow(ctx)->r3.s64 = 804;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x8219c198
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219C198;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x8219c2b4
	goto loc_8219C2B4;
loc_8219C198:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8240f94c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis ctx_arrow(ctx)->r10,21845
	ctx_arrow(ctx)->r10.s64 = 1431633920;
	// li ctx_arrow(ctx)->r11,6144
	ctx_arrow(ctx)->r11.s64 = 6144;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,21845
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 21845;
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,800(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 800, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64;
loc_8219C1B8:
	// mfmsr ctx_arrow(ctx)->r8
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r9,0,ctx_arrow(ctx)->r10
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r10.u32);
	ctx_arrow(ctx)->r9.u64 = __builtin_bswap32(reserved.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r29.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c1dc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C1DC;
	// stwcx. ctx_arrow(ctx)->r31,0,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r10.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r31.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r8,1
	// bne 0x8219c1b8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219C1B8;
	// b 0x8219c1e4
	goto loc_8219C1E4;
loc_8219C1DC:
	// stwcx. ctx_arrow(ctx)->r9,0,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r10.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r9.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r8,1
loc_8219C1E4:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219c200
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219C200;
	// lis ctx_arrow(ctx)->r4,25728
	ctx_arrow(ctx)->r4.s64 = 1686110208;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8219C200:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x8219c298
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8219C298;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r29,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8219bee0
	sub_8219BEE0(ctx, base);
	// mr. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219c298
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C298;
loc_8219C234:
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r28.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8219c250
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8219C250;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r29.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219c250
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C250;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64;
loc_8219C250:
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// bl 0x8219bee0
	sub_8219BEE0(&ctx);
	// mr. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8219c234
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219C234;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x8219c298
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219C298;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r28.u64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r28.s64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// bl 0x8219bfc0
	sub_8219BFC0(&ctx);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r30.u64;
loc_8219C298:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r27.s64 - ctx_arrow(ctx)->r26.s64;
	// stw ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
loc_8219C2B4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_8219C2C0) PPC_WEAK_FUNC(sub_8219C2C0);
PPC_FUNC_IMPL(__imp__sub_8219C2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,14912(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,14908(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r7,14900(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r6,14904(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,13392(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 13392, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,13396(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 13396, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,13400(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 13400, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,13404(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 13404, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r7,13408(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 13408, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r6,13412(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 13412, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8219C2F8) PPC_WEAK_FUNC(sub_8219C2F8);
PPC_FUNC_IMPL(__imp__sub_8219C2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r10,13392(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,13396(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,13400(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,13404(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r7,13408(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-160
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -160;
	// lwz ctx_arrow(ctx)->r6,13412(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,14912(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 14912, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,14908(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 14908, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r7,14900(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 14900, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r6,14904(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 14904, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8219C338) PPC_WEAK_FUNC(sub_8219C338);
PPC_FUNC_IMPL(__imp__sub_8219C338) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,10896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r11.s64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x3;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8219c3c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C3C8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c378
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C378;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219c3c8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219C3C8;
loc_8219C378:
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82198a90
	sub_82198A90(ctx, base);
loc_8219C388:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82198c28
	sub_82198C28(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x8219c3c0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C3C0;
	// lwz ctx_arrow(ctx)->r11,10896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r11.s64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x3;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8219c3c0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C3C0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c388
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C388;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x8219c388
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8219C388;
loc_8219C3C0:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82198ac0
	sub_82198AC0(ctx, base);
loc_8219C3C8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_8219C3D0) PPC_WEAK_FUNC(sub_8219C3D0);
PPC_FUNC_IMPL(__imp__sub_8219C3D0) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,14884(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,10896(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// and ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bge ctx_arrow(ctx)->r6,0x8219c414
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C414;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219c470
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C470;
loc_8219C408:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219c41c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219C41C;
	// b 0x8219c470
	goto loc_8219C470;
loc_8219C414:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219c408
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C408;
loc_8219C41C:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82198a90
	sub_82198A90(ctx, base);
loc_8219C42C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82198c28
	sub_82198C28(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x8219c468
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C468;
	// lwz ctx_arrow(ctx)->r11,10896(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bge ctx_arrow(ctx)->r6,0x8219c458
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C458;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219c468
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C468;
	// b 0x8219c460
	goto loc_8219C460;
loc_8219C458:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8219c42c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8219C42C;
loc_8219C460:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219c42c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219C42C;
loc_8219C468:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82198ac0
	sub_82198AC0(ctx, base);
loc_8219C470:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_8219C480) PPC_WEAK_FUNC(sub_8219C480);
PPC_FUNC_IMPL(__imp__sub_8219C480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r3,21516(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x8219c4b8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C4B8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8219C4B8:
	// lwz ctx_arrow(ctx)->r11,21656(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8219c4dc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C4DC;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8219C4DC:
	// lwz ctx_arrow(ctx)->r31,10952(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r27,14884(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r26,14880(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8219c3d0
	sub_8219C3D0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219c524
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219C524;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
loc_8219C504:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// addic. ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,-1
	xer.ca = ctx_arrow(ctx)->r29.u32 > 0;
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// and ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r8.u64 & ctx_arrow(ctx)->r27.u64;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r26.u32);
	// bne 0x8219c504
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219C504;
loc_8219C524:
	// lwz ctx_arrow(ctx)->r3,21516(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r31,10952(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 10952, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x8219c544
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C544;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8219C544:
	// lwz ctx_arrow(ctx)->r11,21656(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8219c568
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C568;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// li ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r3.s64 = 2;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8219C568:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_8219C570) PPC_WEAK_FUNC(sub_8219C570);
PPC_FUNC_IMPL(__imp__sub_8219C570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_8219C570:
	// ld ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219c584
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C584;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64;
loc_8219C584:
	// rldicl ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,32,32
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 32) & 0xFFFFFFFF;
	// rotlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, ctx_arrow(ctx)->r9.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219c598
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219C598;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r5.u64;
loc_8219C598:
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,32,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r10.u64;
loc_8219C5A4:
	// mfmsr ctx_arrow(ctx)->r7
	// mtmsrd ctx_arrow(ctx)->r13,1
	// ldarx ctx_arrow(ctx)->r8,0,ctx_arrow(ctx)->r3
	reserved.u64 = *(uint64_t*)(base + ctx_arrow(ctx)->r3.u32);
	ctx_arrow(ctx)->r8.u64 = __builtin_bswap64(reserved.u64);
	// cmpd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r8.s64, ctx_arrow(ctx)->r11.s64, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c5c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C5C8;
	// stdcx. ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx_arrow(ctx)->r3.u32), reserved.s64, __builtin_bswap64(ctx_arrow(ctx)->r10.s64));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r7,1
	// bne 0x8219c5a4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219C5A4;
	// b 0x8219c5d0
	goto loc_8219C5D0;
loc_8219C5C8:
	// stdcx. ctx_arrow(ctx)->r8,0,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx_arrow(ctx)->r3.u32), reserved.s64, __builtin_bswap64(ctx_arrow(ctx)->r8.s64));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r7,1
loc_8219C5D0:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64;
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, ctx_arrow(ctx)->r11.u64, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c570
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C570;
	// blr 
	return;
}

alias(__imp__sub_8219C5E0) PPC_WEAK_FUNC(sub_8219C5E0);
PPC_FUNC_IMPL(__imp__sub_8219C5E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_8219C5E0:
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// ld ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
loc_8219C5EC:
	// mfmsr ctx_arrow(ctx)->r8
	// mtmsrd ctx_arrow(ctx)->r13,1
	// ldarx ctx_arrow(ctx)->r9,0,ctx_arrow(ctx)->r3
	reserved.u64 = *(uint64_t*)(base + ctx_arrow(ctx)->r3.u32);
	ctx_arrow(ctx)->r9.u64 = __builtin_bswap64(reserved.u64);
	// cmpd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r9.s64, ctx_arrow(ctx)->r11.s64, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c610
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C610;
	// stdcx. ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx_arrow(ctx)->r3.u32), reserved.s64, __builtin_bswap64(ctx_arrow(ctx)->r10.s64));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r8,1
	// bne 0x8219c5ec
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219C5EC;
	// b 0x8219c618
	goto loc_8219C618;
loc_8219C610:
	// stdcx. ctx_arrow(ctx)->r9,0,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx_arrow(ctx)->r3.u32), reserved.s64, __builtin_bswap64(ctx_arrow(ctx)->r9.s64));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r8,1
loc_8219C618:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
	// cmpld ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, ctx_arrow(ctx)->r11.u64, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c5e0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C5E0;
	// rldicl ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,32,32
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 32) & 0xFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r5)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8219C638) PPC_WEAK_FUNC(sub_8219C638);
PPC_FUNC_IMPL(__imp__sub_8219C638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c6c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C6C8;
	// lwz ctx_arrow(ctx)->r11,10900(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,2989
	ctx_arrow(ctx)->r10.s64 = 195887104;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,61453
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 61453;
	// lwz ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c678
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C678;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-17560
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -17560;
	// bl 0x821a2690
	sub_821A2690(ctx, base);
	// twi 31,ctx_arrow(ctx)->r0,22
loc_8219C678:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219c690
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219C690;
	// lwz ctx_arrow(ctx)->r11,10900(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r31
	ctr.u64 = ctx_arrow(ctx)->r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8219C690:
	// lbz ctx_arrow(ctx)->r10,268(ctx_arrow(ctx)->r13)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30,10904
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r30.s64 + 10904;
	// lwz ctx_arrow(ctx)->r30,10900(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// slw ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// bl 0x8240f96c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ~ctx_arrow(ctx)->r29.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x3F;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x8240f95c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx);
	// b 0x8219c6e8
	goto loc_8219C6E8;
loc_8219C6C8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c6e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C6E8;
	// lis ctx_arrow(ctx)->r11,32712
	ctx_arrow(ctx)->r11.s64 = 2143813632;
	// lwz ctx_arrow(ctx)->r11,25924(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219c6e8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C6E8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x82198fb8
	sub_82198FB8(ctx, base);
loc_8219C6E8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_8219C6F0) PPC_WEAK_FUNC(sub_8219C6F0);
PPC_FUNC_IMPL(__imp__sub_8219C6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq 0x8219c728
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C728;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r7,-16384
	ctx_arrow(ctx)->r7.s64 = -1073741824;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,12,20,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-16384
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1073741824;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_8219C728:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8219C738) PPC_WEAK_FUNC(sub_8219C738);
PPC_FUNC_IMPL(__imp__sub_8219C738) {
	PPC_FUNC_PROLOGUE();
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
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,12,20,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 12) & 0xFFF;
	// lwz ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 512;
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5,3
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r5.u32 & 0x1FFFFFFF;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,0,19,19
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x1000;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,12,20,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0xFFF;
	// lis ctx_arrow(ctx)->r10,16384
	ctx_arrow(ctx)->r10.s64 = 1073741824;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r7.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,512
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 512;
	// subf ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r10.s64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,19,19
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x1000;
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5,-4
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r5.s64 + -4;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,12,20,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r31.u32 & 0x1FFFFFFF;
	// stw ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// subf ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r8.s64;
	// eieio 
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821a39a0
	sub_821A39A0(ctx, base);
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_MM_STORE_U32(ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r30.u32);
	// eieio 
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29,16
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r29.s64 + 16;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x821a39a0
	sub_821A39A0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_8219C7E0) PPC_WEAK_FUNC(sub_8219C7E0);
PPC_FUNC_IMPL(__imp__sub_8219C7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz ctx_arrow(ctx)->r10,10941(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,16712(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 32;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r10,10941(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 10941, ctx_arrow(ctx)->r4.u8);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4800
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 4800;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,-160
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + -160;
	// stw ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8219C808) PPC_WEAK_FUNC(sub_8219C808);
PPC_FUNC_IMPL(__imp__sub_8219C808) {
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
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,30,2,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz ctx_arrow(ctx)->r11,14900(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// beq 0x8219c908
	if (ctx_arrow(ctx)->r0.eq() goto loc_8219C908;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x8219c83c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219C83C;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,60
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 60;
loc_8219C83C:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r6.s64 + -1;
	// lwz ctx_arrow(ctx)->r8,14892(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r5,14904(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// not ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r9.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r9.u64 & ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r31.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x8219c8a4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8219C8A4;
	// lwz ctx_arrow(ctx)->r10,13216(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x8219c89c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C89C;
	// lwz ctx_arrow(ctx)->r11,13220(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r5.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x8219c894
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219C894;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c89c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C89C;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219c89c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C89C;
loc_8219C894:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x8219ca04
	goto loc_8219CA04;
loc_8219C89C:
	// stw ctx_arrow(ctx)->r4,14900(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 14900, ctx_arrow(ctx)->r4.u32);
	// b 0x8219c8fc
	goto loc_8219C8FC;
loc_8219C8A4:
	// lwz ctx_arrow(ctx)->r9,14908(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,13216(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r9.u64;
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// and ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r9.u64 & ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r31.u64;
	// beq 0x8219c8e8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C8E8;
	// lwz ctx_arrow(ctx)->r11,13220(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r5.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x8219c894
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219C894;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c8e8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C8E8;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r4.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8219c894
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8219C894;
loc_8219C8E8:
	// lwz ctx_arrow(ctx)->r11,14912(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x8219c894
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8219C894;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 1;
	// stw ctx_arrow(ctx)->r4,14908(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 14908, ctx_arrow(ctx)->r4.u32);
loc_8219C8FC:
	// bl 0x8219c338
	sub_8219C338(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// b 0x8219ca04
	goto loc_8219CA04;
loc_8219C908:
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x8219c918
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219C918;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
loc_8219C918:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 31;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,0,0,26
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne ctx_arrow(ctx)->r6,0x8219c92c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C92C;
	// li ctx_arrow(ctx)->r7,54
	ctx_arrow(ctx)->r7.s64 = 54;
loc_8219C92C:
	// lwz ctx_arrow(ctx)->r11,14896(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219c940
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219C940;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64;
loc_8219C940:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r11,14892(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219c958
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219C958;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64;
loc_8219C958:
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 - ctx_arrow(ctx)->r30.s64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r7.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219c998
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C998;
	// lwz ctx_arrow(ctx)->r9,14908(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,14904(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 31;
	// lbz ctx_arrow(ctx)->r8,10942(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r6,14888(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9,0,0,26
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFE0;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 | 4;
	// add ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,14904(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 14904, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r6,14908(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 14908, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r9,10942(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 10942, ctx_arrow(ctx)->r4.u8);
loc_8219C998:
	// lwz ctx_arrow(ctx)->r8,13216(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq 0x8219c9e4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219C9E4;
	// lwz ctx_arrow(ctx)->r11,13220(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,14904(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x8219c9c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219C9C8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c9e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C9E4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r31.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8219c9e4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8219C9E4;
loc_8219C9C8:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r8.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8219c894
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219C894;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 - ctx_arrow(ctx)->r30.s64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r7.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x8219c894
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8219C894;
loc_8219C9E4:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r5,14904(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8219c338
	sub_8219C338(ctx, base);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 - ctx_arrow(ctx)->r30.s64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_8219CA04:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_8219CA10) PPC_WEAK_FUNC(sub_8219CA10);
PPC_FUNC_IMPL(__imp__sub_8219CA10) {
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
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64;
	// lbz ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219ca3c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219CA3C;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x8219cae4
	goto loc_8219CAE4;
loc_8219CA3C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz ctx_arrow(ctx)->r3,13500(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// bne 0x8219ca64
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219CA64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219c808
	sub_8219C808(ctx, base);
	// b 0x8219ca80
	goto loc_8219CA80;
loc_8219CA64:
	// lwz ctx_arrow(ctx)->r11,152(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ca7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219CA7C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219b9b8
	sub_8219B9B8(ctx, base);
	// b 0x8219ca80
	goto loc_8219CA80;
loc_8219CA7C:
	// bl 0x8219bc28
	sub_8219BC28(ctx, base);
loc_8219CA80:
	// lwz ctx_arrow(ctx)->r11,14916(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,14920(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// stw ctx_arrow(ctx)->r11,14916(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 14916, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x8219cad0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219CAD0;
	// lwz ctx_arrow(ctx)->r11,13216(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219cad0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219CAD0;
	// lwz ctx_arrow(ctx)->r10,14908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,14888(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,160
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 160;
	// stw ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x8219cad0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219CAD0;
	// lwz ctx_arrow(ctx)->r11,14892(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,14900(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 14900, ctx_arrow(ctx)->r4.u32);
loc_8219CAD0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219cae4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219CAE4;
	// lbz ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 32;
	// stb ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 10941, ctx_arrow(ctx)->r1.u32.u8);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

