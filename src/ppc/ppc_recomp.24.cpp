#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_8229E600) PPC_WEAK_FUNC(sub_8229E600);
PPC_FUNC_IMPL(__imp__sub_8229E600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,27,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x18;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8229e620
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229E620;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,0,27,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 0) & 0x18;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8229e620
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229E620;
loc_8229E618:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
loc_8229E620:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8229e630
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229E630;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8229e618
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229E618;
loc_8229E630:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229e644
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229E644;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bnelr 
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) return;
loc_8229E644:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
}

alias(__imp__sub_8229E650) PPC_WEAK_FUNC(sub_8229E650);
PPC_FUNC_IMPL(__imp__sub_8229E650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,0,27,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 0) & 0x1E;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,95
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 95, xer);
	// blt ctx_arrow(ctx)->r6,0x8229e670
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8229E670;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,101
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 101, xer);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// ble ctx_arrow(ctx)->r6,0x8229e674
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8229E674;
loc_8229E670:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_8229E674:
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8229e68c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229E68C;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,28,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
loc_8229E684:
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_8229E68C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x8229e6a0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8229E6A0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,81
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 81, xer);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// ble ctx_arrow(ctx)->r6,0x8229e6a4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8229E6A4;
loc_8229E6A0:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_8229E6A4:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229e6b4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229E6B4;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r9.u32);
	// b 0x8229e684
	goto loc_8229E684;
loc_8229E6B4:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
}

alias(__imp__sub_8229E6C0) PPC_WEAK_FUNC(sub_8229E6C0);
PPC_FUNC_IMPL(__imp__sub_8229E6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 31, xer);
	// ble ctx_arrow(ctx)->r6,0x8229e708
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8229E708;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r6.u64;
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,27,5,31
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr ctx_arrow(ctx)->r5
	ctr.u64 = ctx_arrow(ctx)->r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x8229e710
	goto loc_8229E710;
loc_8229E708:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_8229E710:
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

alias(__imp__sub_8229E728) PPC_WEAK_FUNC(sub_8229E728);
PPC_FUNC_IMPL(__imp__sub_8229E728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
loc_8229E734:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229e79c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229E79C;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,1,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229e754
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229E754;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,4,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// beq 0x8229e758
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229E758;
loc_8229E754:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64;
loc_8229E758:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229e794
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229E794;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,7,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 7) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// beq 0x8229e790
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229E790;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,27,24,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0xFF;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_8229E774:
	// srw ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u32 & 0x3;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// slw ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r4.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r4, 0, BINARY_OP_U8(ctx_arrow(ctx)->r4, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r6.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r4) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r4.u64 | ctx_arrow(ctx)->r8.u64;
	// bne 0x8229e774
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229E774;
loc_8229E790:
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r8.u64 | ctx_arrow(ctx)->r7.u64;
loc_8229E794:
	// lwz ctx_arrow(ctx)->r5,8(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8229e734
	goto loc_8229E734;
loc_8229E79C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229e7b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229E7B8;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r7.u32);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 32;
	ctx_arrow(ctx)->r11.s64 = 32 - ctx_arrow(ctx)->r11.s64;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r6.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
loc_8229E7B8:
	// lis ctx_arrow(ctx)->r8,-28311
	ctx_arrow(ctx)->r8.s64 = -1855389696;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,5192
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 | 5192;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,36262
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | 36262;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// rldimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,32,0
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFF);
	// srd ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r8.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// srd ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r8.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r8.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,13,16,18
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 13) & 0xE000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1,27,30
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 1) & 0x1E) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1,15,17
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 1) & 0x1C000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8229E7F8) PPC_WEAK_FUNC(sub_8229E7F8);
PPC_FUNC_IMPL(__imp__sub_8229E7F8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed118
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r29,244(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 244, ctx_arrow(ctx)->r4.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8229ee14
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229EE14;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,7,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229ee14
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229EE14;
	// lwz ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u64 & 27;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x8229ee14
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229EE14;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r28.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8229ee14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229EE14;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r21.u64;
	// li ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r22.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x8229e974
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229E974;
	// lwz ctx_arrow(ctx)->r4,40(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,7,3
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0xFFFFFFFFF1FFFFFF) | (ctx_arrow(ctx)->r10.u64 & 0xE000000);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0xFF;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,27,29,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x6;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,29,29,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x6;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,27,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,31,29,30
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x6;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,29,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x6;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,27,18
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,2,28,29
	ctx_arrow(ctx)->r6.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 2) & 0xC) | (ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u32 & 0xF;
	// rlwimi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r5.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r4,44(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// stw ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,7,3
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0xFFFFFFFFF1FFFFFF) | (ctx_arrow(ctx)->r11.u64 & 0xE000000);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r8,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0xFF;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,27,29,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x6;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,29,29,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x6;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,27,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,31,29,30
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x6;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,29,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x6;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,27,18
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,2,28,29
	ctx_arrow(ctx)->r6.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 2) & 0xC) | (ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u32 & 0xF;
	// rlwimi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r5.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229ece8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229ECE8;
	// li ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r4.s64 = 4;
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82281410
	sub_82281410(ctx, base);
	// b 0x8229ece8
	goto loc_8229ECE8;
loc_8229E974:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x8229ee14
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229EE14;
	// lwz ctx_arrow(ctx)->r27,40(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r26,44(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r26,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x822700e8
	sub_822700E8(&ctx);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229ebe4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229EBE4;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// li ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r25.s64 = 0;
	// bl 0x822700e8
	sub_822700E8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229eac4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229EAC4;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u32 & 0x1F;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229eac4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229EAC4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,27,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 27) & 0xFF;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,27,29,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x6;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,29,29,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x6;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,31,29,30
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x6;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,1,29,30
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x6;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,8,28,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 8) & 0xE;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,27,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,27,5,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,8,28,30
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 8) & 0xE;
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r22.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r3, 0, BINARY_OP_U8(ctx_arrow(ctx)->r3, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r22.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r3) & 0x3F)), 0));
	// and ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ctx_arrow(ctx)->r8.u64;
	// srw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,2,28,29
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 2) & 0xC) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r4, 0, BINARY_OP_U8(ctx_arrow(ctx)->r4, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r4) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,28
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u32 & 0xF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// rlwimi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r6.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFF00000003);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0xFF;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r6.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF00000003);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8229eac4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229EAC4;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r29,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r4,244(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 244, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// stw ctx_arrow(ctx)->r3,244(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 244, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r22.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,7,3
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0xFFFFFFFFF1FFFFFF) | (ctx_arrow(ctx)->r11.u64 & 0xE000000);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r8,244(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0xFF;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,27,29,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x6;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,29,29,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x6;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,27,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,31,29,30
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x6;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,29,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x6;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,27,18
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,2,28,29
	ctx_arrow(ctx)->r6.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 2) & 0xC) | (ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u32 & 0xF;
	// rlwimi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r5.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r29,244(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r26,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8229EAC4:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r25.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229ebe4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229EBE4;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x822700e8
	sub_822700E8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229ee14
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229EE14;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8229ee14
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229EE14;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0xFF;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,27,29,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x6;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,29,29,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x6;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,31,29,30
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x6;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,1,29,30
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x6;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,8,28,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 8) & 0xE;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,27,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,27,5,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,8,28,30
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 8) & 0xE;
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r22.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r3, 0, BINARY_OP_U8(ctx_arrow(ctx)->r3, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r22.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r3) & 0x3F)), 0));
	// and ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ctx_arrow(ctx)->r8.u64;
	// srw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,2,28,29
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 2) & 0xC) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r4, 0, BINARY_OP_U8(ctx_arrow(ctx)->r4, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r4) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,28
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u32 & 0xF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// rlwimi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r6.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFF00000003);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0xFF;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,2,0,29
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r6.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF00000003);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8229ee14
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229EE14;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r29,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r4,244(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 244, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// stw ctx_arrow(ctx)->r3,244(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 244, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,7,3
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0xFFFFFFFFF1FFFFFF) | (ctx_arrow(ctx)->r11.u64 & 0xE000000);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r8,244(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0xFF;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,27,29,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x6;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,29,29,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x6;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,27,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,31,29,30
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x6;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,29,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x6;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,27,18
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,2,28,29
	ctx_arrow(ctx)->r6.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 2) & 0xC) | (ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u32 & 0xF;
	// rlwimi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r5.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8229EBE4:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stw ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f1,3060(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,7,3
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFFFF1FFFFFF) | (ctx_arrow(ctx)->r10.u64 & 0xE000000);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0xFF;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,27,29,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x6;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,29,29,30
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x6;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,27,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 27) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,31,29,30
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x6;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,29,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x6;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,27,18
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,2,28,29
	ctx_arrow(ctx)->r6.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 2) & 0xC) | (ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r5.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r5, 0, BINARY_OP_U8(ctx_arrow(ctx)->r5, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r5) & 0x3F)), 0));
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u32 & 0xF;
	// rlwimi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r5.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 2) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229ec78
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229EC78;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f1,14264(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
loc_8229EC78:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lfs f4,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x8231eff8
	sub_8231EFF8(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,7,29,31
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x7;
	// bl 0x82281810
	sub_82281810(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,25,4,6
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r27.u32, 25) & 0xE000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82281410
	sub_82281410(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,18
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// bl 0x8229e728
	sub_8229E728(&ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 16777216;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_8229ECE8:
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,244
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 244;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x822a6150
	sub_822A6150(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229ee14
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229EE14;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x82323fd0
	sub_82323FD0(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229ee14
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229EE14;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r23.u64;
	// lwz ctx_arrow(ctx)->r8,244(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r6,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x822a2b10
	sub_822A2B10(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229ee14
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229EE14;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
loc_8229ED58:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229ed98
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229ED98;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,1,1
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8229ed78
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229ED78;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,4,6
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r22.u64;
	// beq 0x8229ed7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229ED7C;
loc_8229ED78:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_8229ED7C:
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8229ed8c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229ED8C;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,7,18
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x1FFE000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8229ed94
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229ED94;
loc_8229ED8C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8229ed58
	goto loc_8229ED58;
loc_8229ED94:
	// lwz ctx_arrow(ctx)->r7,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8229ED98:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8229ED9C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229eddc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229EDDC;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,1,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229edbc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229EDBC;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,4,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64;
	// beq 0x8229edc0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229EDC0;
loc_8229EDBC:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_8229EDC0:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229edd0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229EDD0;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,7,18
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x1FFE000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229edd8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229EDD8;
loc_8229EDD0:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8229ed9c
	goto loc_8229ED9C;
loc_8229EDD8:
	// lwz ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8229EDDC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229edf4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229EDF4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229edf4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229EDF4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8229ee14
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229EE14;
loc_8229EDF4:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,244(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r20)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r20.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r20)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r20.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r20)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r20.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// b 0x8229ee18
	goto loc_8229EE18;
loc_8229EE14:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_8229EE18:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed168
	return;
}

alias(__imp__sub_8229EE20) PPC_WEAK_FUNC(sub_8229EE20);
PPC_FUNC_IMPL(__imp__sub_8229EE20) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// b 0x8229ee6c
	goto loc_8229EE6C;
loc_8229EE40:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8229ee68
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229EE68;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r6,26
	ctx_arrow(ctx)->r6.s64 = 26;
	// li ctx_arrow(ctx)->r5,20
	ctx_arrow(ctx)->r5.s64 = 20;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82270940
	sub_82270940(&ctx);
	// b 0x8229ee6c
	goto loc_8229EE6C;
loc_8229EE68:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r4.s64 + 8;
loc_8229EE6C:
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne 0x8229ee40
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229EE40;
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

alias(__imp__sub_8229EE90) PPC_WEAK_FUNC(sub_8229EE90);
PPC_FUNC_IMPL(__imp__sub_8229EE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r7.u64;
	// li ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 4;
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// li ctx_arrow(ctx)->r6,6
	ctx_arrow(ctx)->r6.s64 = 6;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x8231b410
	sub_8231B410(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229eeec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229EEEC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
loc_8229EEEC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// stw ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229ef18
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229EF18;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
loc_8229EF18:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,7,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x7;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,14,15,17
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 14) & 0x1C000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bl 0x822778a0
	sub_822778A0(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_8229EF60) PPC_WEAK_FUNC(sub_8229EF60);
PPC_FUNC_IMPL(__imp__sub_8229EF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r7.u64;
	// li ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 4;
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// li ctx_arrow(ctx)->r6,7
	ctx_arrow(ctx)->r6.s64 = 7;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x8231b410
	sub_8231B410(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229efbc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229EFBC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
loc_8229EFBC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// stw ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229efe8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229EFE8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
loc_8229EFE8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,7,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x7;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,14,15,17
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 14) & 0x1C000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bl 0x822778a0
	sub_822778A0(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_8229F030) PPC_WEAK_FUNC(sub_8229F030);
PPC_FUNC_IMPL(__imp__sub_8229F030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 4;
	// li ctx_arrow(ctx)->r7,3
	ctx_arrow(ctx)->r7.s64 = 3;
	// li ctx_arrow(ctx)->r6,12
	ctx_arrow(ctx)->r6.s64 = 12;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x8231b410
	sub_8231B410(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f090
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F090;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
loc_8229F090:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// stw ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f0bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F0BC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
loc_8229F0BC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// stw ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f0e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F0E8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,12(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227ab28
	sub_8227AB28(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
loc_8229F0E8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,7,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x7;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,14,15,17
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 14) & 0x1C000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bl 0x822778a0
	sub_822778A0(&ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_8229F130) PPC_WEAK_FUNC(sub_8229F130);
PPC_FUNC_IMPL(__imp__sub_8229F130) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// b 0x82270d28
	sub_82270D28(ctx, base);
	return;
}

alias(__imp__sub_8229F138) PPC_WEAK_FUNC(sub_8229F138);
PPC_FUNC_IMPL(__imp__sub_8229F138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-152
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -152;
	// bl 0x823ed540
	// stwu ctx_arrow(ctx)->r1,-448(ctx_arrow(ctx)->r1)
	ea = -448 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// li ctx_arrow(ctx)->r20,1
	ctx_arrow(ctx)->r20.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r21,468(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 468, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u8);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,10,10
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x200000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229f69c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F69C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8229f69c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229F69C;
	// mr. ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r11.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// beq 0x8229f69c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F69C;
loc_8229F180:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8229f680
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229F680;
	// mr. ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq 0x8229f680
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F680;
loc_8229F194:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,13312
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 13312, xer);
	// bne ctx_arrow(ctx)->r6,0x8229f664
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F664;
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,9,18,24
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 9) & 0x3F80) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r26,44(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r24,48(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r25,40(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f1e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F1E8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8229f1ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F1EC;
loc_8229F1E8:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8229F1EC:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229f21c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F21C;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f210
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F210;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8229f214
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F214;
loc_8229F210:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8229F214:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229f664
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229F664;
loc_8229F21C:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,108
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 108;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x82325770
	sub_82325770(ctx, base);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x82325770
	sub_82325770(ctx, base);
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f26c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F26C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8229f270
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F270;
loc_8229F26C:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8229F270:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229f2a4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229F2A4;
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f298
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F298;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8229f29c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F29C;
loc_8229F298:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8229F29C:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229f860
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F860;
loc_8229F2A4:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,100
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 100;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x82325770
	sub_82325770(ctx, base);
	// lwz ctx_arrow(ctx)->r4,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f2dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F2DC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8229f2e0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F2E0;
loc_8229F2DC:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8229F2E0:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229f86c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F86C;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r25,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r26,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r24,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f314
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F314;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8229f318
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F318;
loc_8229F314:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8229F318:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229f360
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229F360;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// lwz ctx_arrow(ctx)->r29,124(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,7,29,31
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x7;
	// bl 0x82281810
	sub_82281810(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,25,4,6
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r30.u32, 25) & 0xE000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82281410
	sub_82281410(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,5,19,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r28.u32, 5) & 0x1FE0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
loc_8229F360:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f380
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F380;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8229f384
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F384;
loc_8229F380:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8229F384:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229f564
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229F564;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f3ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F3AC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8229f3b0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F3B0;
loc_8229F3AC:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8229F3B0:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8229f564
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8229F564;
	// lwz ctx_arrow(ctx)->r4,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f3d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F3D8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8229f3dc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F3DC;
loc_8229F3D8:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8229F3DC:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// beq 0x8229f508
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F508;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r29,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,7,29,31
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x7;
	// bl 0x82281810
	sub_82281810(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,25,4,6
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r30.u32, 25) & 0xE000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82281410
	sub_82281410(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,5,19,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r28.u32, 5) & 0x1FE0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r4,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r31,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25,25,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x7F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,124
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 124, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f444
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F444;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,123
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 123, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8229f448
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F448;
loc_8229F444:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8229F448:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229f4e0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F4E0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// lwz ctx_arrow(ctx)->r29,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r28,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,7,29,31
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x7;
	// bl 0x82281810
	sub_82281810(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,25,4,6
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r30.u32, 25) & 0xE000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82281410
	sub_82281410(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,5,19,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r28.u32, 5) & 0x1FE0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFE01F);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// bl 0x822a6150
	sub_822A6150(&ctx);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229f4b8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F4B8;
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// b 0x8229f4d4
	goto loc_8229F4D4;
loc_8229F4B8:
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x822a6150
	sub_822A6150(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229f4e0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F4E0;
loc_8229F4D4:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// b 0x8229f564
	goto loc_8229F564;
loc_8229F4E0:
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,92
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 92;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// bl 0x822a6150
	sub_822A6150(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229f878
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F878;
	// lwz ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// b 0x8229f564
	goto loc_8229F564;
loc_8229F508:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r4,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r29,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,7,29,31
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x7;
	// lwz ctx_arrow(ctx)->r28,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82281810
	sub_82281810(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,25,4,6
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r30.u32, 25) & 0xE000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x82281410
	sub_82281410(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,92
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 92;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,5,19,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r28.u32, 5) & 0x1FE0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFE01F);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// bl 0x822a6150
	sub_822A6150(&ctx);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8229f884
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8229F884;
loc_8229F564:
	// lwz ctx_arrow(ctx)->r31,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r25.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f590
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F590;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// lwz ctx_arrow(ctx)->r4,40(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x822820f0
	sub_822820F0(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// stw ctx_arrow(ctx)->r3,40(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 40, ctx_arrow(ctx)->r4.u32);
loc_8229F590:
	// lwz ctx_arrow(ctx)->r31,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r26.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f5bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F5BC;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// lwz ctx_arrow(ctx)->r4,44(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x822820f0
	sub_822820F0(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// stw ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 44, ctx_arrow(ctx)->r4.u32);
loc_8229F5BC:
	// lwz ctx_arrow(ctx)->r31,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r24.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8229f5e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8229F5E8;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r21.u64;
	// lwz ctx_arrow(ctx)->r4,48(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x822820f0
	sub_822820F0(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x822819e0
	sub_822819E0(ctx, base);
	// stw ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 48, ctx_arrow(ctx)->r4.u32);
loc_8229F5E8:
	// lwz ctx_arrow(ctx)->r3,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,15872
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 15872, xer);
	// bne ctx_arrow(ctx)->r6,0x8229f610
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F610;
	// bl 0x8229e728
	sub_8229E728(ctx, base);
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// oris ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,256
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 16777216;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_8229F610:
	// lwz ctx_arrow(ctx)->r3,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,15872
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 15872, xer);
	// bne ctx_arrow(ctx)->r6,0x8229f638
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F638;
	// bl 0x8229e728
	sub_8229E728(ctx, base);
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// oris ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,256
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 16777216;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_8229F638:
	// lwz ctx_arrow(ctx)->r3,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,15872
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 15872, xer);
	// bne ctx_arrow(ctx)->r6,0x8229f660
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8229F660;
	// bl 0x8229e728
	sub_8229E728(ctx, base);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// oris ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,256
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 16777216;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_8229F660:
	// stb ctx_arrow(ctx)->r20,88(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx.u8)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed18c
	return;
}

