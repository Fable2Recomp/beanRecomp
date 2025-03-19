#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_8227BD18) PPC_WEAK_FUNC(sub_8227BD18);
PPC_FUNC_IMPL(__imp__sub_8227BD18) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = 4;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x8227b2a8
	sub_8227B2A8(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x8227be28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227BE28;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// not ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227bd68
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227BD68;
	// li ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.s64 = 31;
	// b 0x8227bd74
	goto loc_8227BD74;
loc_8227BD68:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
loc_8227BD74:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,255
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 255, xer);
	// blt ctx_arrow(ctx)->r6,0x8227bdb4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227BDB4;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227bdac
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227BDAC;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,752(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227bda4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227BDA4;
	// li ctx_arrow(ctx)->r4,3518
	ctx_arrow(ctx)->r4.s64 = 3518;
	// bl 0x8225d328
	sub_8225D328(ctx, base);
loc_8227BDA4:
	// li ctx_arrow(ctx)->r4,3565
	ctx_arrow(ctx)->r4.s64 = 3565;
	// bl 0x8225d328
	sub_8225D328(ctx, base);
loc_8227BDAC:
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// b 0x8227be58
	goto loc_8227BE58;
loc_8227BDB4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// not ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227bdcc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227BDCC;
	// li ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.s64 = 31;
	// b 0x8227bdd8
	goto loc_8227BDD8;
loc_8227BDCC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
loc_8227BDD8:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// bl 0x8227bb78
	sub_8227BB78(ctx, base);
	// li ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = 4;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8227b2a8
	sub_8227B2A8(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x8227be28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227BE28;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227bdac
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227BDAC;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,752(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227be20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227BE20;
	// li ctx_arrow(ctx)->r4,3518
	ctx_arrow(ctx)->r4.s64 = 3518;
	// bl 0x8225d328
	sub_8225D328(ctx, base);
loc_8227BE20:
	// li ctx_arrow(ctx)->r4,3565
	ctx_arrow(ctx)->r4.s64 = 3565;
	// bl 0x8225d328
	sub_8225D328(ctx, base);
loc_8227BE28:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u32 & 0xF;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,30,2,29
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 30) & 0x3FFFFFFC;
	// bl 0x8227a5d0
	sub_8227A5D0(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r30.s64 + 3;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8227af28
	sub_8227AF28(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// rlwimi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,0,0,27
	ctx_arrow(ctx)->r3.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 0) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r3.u64 & 0xFFFFFFFF0000000F);
loc_8227BE58:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_8227BE60) PPC_WEAK_FUNC(sub_8227BE60);
PPC_FUNC_IMPL(__imp__sub_8227BE60) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,30,2,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u32 & 0xF;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 3;
	// bl 0x8227af98
	sub_8227AF98(ctx, base);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8227b410
	sub_8227B410(ctx, base);
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

alias(__imp__sub_8227BEB8) PPC_WEAK_FUNC(sub_8227BEB8);
PPC_FUNC_IMPL(__imp__sub_8227BEB8) {
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
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// lwz ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227BED4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227bf94
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227BF94;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,4,6
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227bf8c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227BF8C;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227bf8c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227BF8C;
	// lwz ctx_arrow(ctx)->r29,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,9,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227bf8c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227BF8C;
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,19,20,31
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 19) & 0xFFF;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,30,2,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 30) & 0x3FFFFFFC;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 3;
	// bl 0x8227ae98
	sub_8227AE98(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x8227bf8c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227BF8C;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
loc_8227BF20:
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 & ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227bf80
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227BF80;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,0,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 0) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0000000F);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30,2,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFC;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r7.u64;
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r10.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 31;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r29.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227bf80
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227BF80;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r27.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227bf80
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227BF80;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227bf7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227BF7C;
	// ori ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r26.u64 | 1;
	// b 0x8227bf80
	goto loc_8227BF80;
loc_8227BF7C:
	// ori ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,2
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r26.u64 | 2;
loc_8227BF80:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 16, xer);
	// blt ctx_arrow(ctx)->r6,0x8227bf20
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227BF20;
loc_8227BF8C:
	// lwz ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227bed4
	goto loc_8227BED4;
loc_8227BF94:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_8227BFA0) PPC_WEAK_FUNC(sub_8227BFA0);
PPC_FUNC_IMPL(__imp__sub_8227BFA0) {
	PPC_FUNC_PROLOGUE();
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
	// li ctx_arrow(ctx)->r5,52
	ctx_arrow(ctx)->r5.s64 = 52;
	// li ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r4.s64 = 32;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x82270688
	sub_82270688(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,35
	ctx_arrow(ctx)->r5.s64 = 35;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82270688
	sub_82270688(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 | 1;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 1;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_8227C010) PPC_WEAK_FUNC(sub_8227C010);
PPC_FUNC_IMPL(__imp__sub_8227C010) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227b930
	sub_8227B930(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,932
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 932;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 28, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_8227C070) PPC_WEAK_FUNC(sub_8227C070);
PPC_FUNC_IMPL(__imp__sub_8227C070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227c0b8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C0B8;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8227c0b8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C0B8;
loc_8227C098:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r7.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227c0b8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C0B8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c098
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C098;
loc_8227C0B8:
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c12c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C12C;
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5,31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r5.u32 & 0x1;
loc_8227C0CC:
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r9.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8227c0e0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C0E0;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
loc_8227C0E0:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8227c110
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227C110;
loc_8227C0EC:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r10.s64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227c104
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C104;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_8227C104:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8227c0ec
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8227C0EC;
loc_8227C110:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r7.u32, xer);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r6.u64;
	// blt ctx_arrow(ctx)->r6,0x8227c0cc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227C0CC;
loc_8227C12C:
	// stw ctx_arrow(ctx)->r6,24(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8227C138) PPC_WEAK_FUNC(sub_8227C138);
PPC_FUNC_IMPL(__imp__sub_8227C138) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c160
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C160;
	// bl 0x8227c070
	sub_8227C070(ctx, base);
loc_8227C160:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,997
	ctx_arrow(ctx)->r10.s64 = 997;
	// lwz ctx_arrow(ctx)->r9,684(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// divwu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u32 = ctx_arrow(ctx)->r11.u32 / ctx_arrow(ctx)->r10.u32;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,997
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 997;
	// subf ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// bne ctx_arrow(ctx)->r6,0x8227c190
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C190;
	// li ctx_arrow(ctx)->r4,3988
	ctx_arrow(ctx)->r4.s64 = 3988;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,932
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 932;
	// bl 0x82270c00
	sub_82270C00(ctx, base);
	// stw ctx_arrow(ctx)->r3,684(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 684, ctx_arrow(ctx)->r4.u32);
loc_8227C190:
	// lwz ctx_arrow(ctx)->r10,684(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,684(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// lwz ctx_arrow(ctx)->r11,688(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,25000
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 25000, xer);
	// stw ctx_arrow(ctx)->r11,688(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 688, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x8227c1c4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8227C1C4;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x8227c22c
	goto loc_8227C22C;
loc_8227C1C4:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227c228
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C228;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8227c228
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C228;
loc_8227C1D8:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,6,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 6) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227c210
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C210;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,12,21,24
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0x780;
	// lwz ctx_arrow(ctx)->r9,696(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,7,25,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 7) & 0x7F;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r8.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r9,-4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// stw ctx_arrow(ctx)->r9,-4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + -4, ctx_arrow(ctx)->r4.u32);
loc_8227C210:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227c228
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C228;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c1d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C1D8;
loc_8227C228:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
loc_8227C22C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_8227C238) PPC_WEAK_FUNC(sub_8227C238);
PPC_FUNC_IMPL(__imp__sub_8227C238) {
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
	// lwz ctx_arrow(ctx)->r11,684(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c438
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C438;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c264
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C264;
	// bl 0x8227c070
	sub_8227C070(ctx, base);
loc_8227C264:
	// lwz ctx_arrow(ctx)->r25,24(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r11.s64 = 997;
	// lwz ctx_arrow(ctx)->r24,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// divwu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u32 = ctx_arrow(ctx)->r25.u32 / ctx_arrow(ctx)->r11.u32;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,997
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 997;
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r25.s64 - ctx_arrow(ctx)->r11.s64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x8227c2b4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C2B4;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8227c2b4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C2B4;
loc_8227C294:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x8227c2b4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C2B4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c294
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C294;
loc_8227C2B4:
	// lwz ctx_arrow(ctx)->r11,684(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227c430
	goto loc_8227C430;
loc_8227C2C4:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c42c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C42C;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c42c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C42C;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c42c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C42C;
	// lwz ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227c32c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C32C;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8227c32c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C32C;
loc_8227C30C:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227c32c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C32C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c30c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C30C;
loc_8227C32C:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r26.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c42c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C42C;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C424;
	// lwz ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
loc_8227C348:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8227c35c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C35C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
loc_8227C35C:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8227c38c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227C38C;
loc_8227C368:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227c380
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C380;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_8227C380:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8227c368
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8227C368;
loc_8227C38C:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// lwzx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// beq ctx_arrow(ctx)->r6,0x8227c410
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C410;
	// lwz ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r7.u32 & 0x1;
loc_8227C3AC:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x8227c3c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C3C0;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64;
loc_8227C3C0:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8227c3f0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227C3F0;
loc_8227C3CC:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r10.s64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227c3e4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C3E4;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_8227C3E4:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8227c3cc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8227C3CC;
loc_8227C3F0:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r5.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c410
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C410;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r3.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8227c3ac
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227C3AC;
loc_8227C410:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r3.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C424;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r26.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8227c348
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227C348;
loc_8227C424:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r26.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c444
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C444;
loc_8227C42C:
	// lwz ctx_arrow(ctx)->r28,28(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227C430:
	// cmplwi ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// bne 0x8227c2c4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C2C4;
loc_8227C438:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_8227C43C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
loc_8227C444:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8227c43c
	goto loc_8227C43C;
}

alias(__imp__sub_8227C450) PPC_WEAK_FUNC(sub_8227C450);
PPC_FUNC_IMPL(__imp__sub_8227C450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// li ctx_arrow(ctx)->r4,256
	ctx_arrow(ctx)->r4.s64 = 256;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8227bb78
	sub_8227BB78(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// not ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227c49c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C49C;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x8227c4b0
	goto loc_8227C4B0;
loc_8227C49C:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
loc_8227C4B0:
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

alias(__imp__sub_8227C4C8) PPC_WEAK_FUNC(sub_8227C4C8);
PPC_FUNC_IMPL(__imp__sub_8227C4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r4.s64 + 4;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// not ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227c50c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C50C;
	// li ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r4.s64 = 31;
	// b 0x8227c518
	goto loc_8227C518;
loc_8227C50C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -1;
loc_8227C518:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8227bb78
	sub_8227BB78(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8227ae40
	sub_8227AE40(ctx, base);
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

alias(__imp__sub_8227C548) PPC_WEAK_FUNC(sub_8227C548);
PPC_FUNC_IMPL(__imp__sub_8227C548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,30,2,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 30) & 0x3FFFFFFC;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 3;
	// bl 0x8227ae98
	sub_8227AE98(ctx, base);
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 & ~ctx_arrow(ctx)->r3.u64;
	// clrlwi. ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// beq 0x8227c58c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C58C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,0,0,27
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 0) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x8227bcb0
	sub_8227BCB0(ctx, base);
loc_8227C58C:
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

alias(__imp__sub_8227C5A8) PPC_WEAK_FUNC(sub_8227C5A8);
PPC_FUNC_IMPL(__imp__sub_8227C5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,30,2,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 30) & 0x3FFFFFFC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 3;
	// bl 0x8227ae98
	sub_8227AE98(ctx, base);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 & ctx_arrow(ctx)->r31.u64;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227c5f8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C5F8;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,0,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 0) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0000000F);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,30,2,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 3;
	// bl 0x8227af98
	sub_8227AF98(ctx, base);
loc_8227C5F8:
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

alias(__imp__sub_8227C610) PPC_WEAK_FUNC(sub_8227C610);
PPC_FUNC_IMPL(__imp__sub_8227C610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x8227c450
	sub_8227C450(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// not ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227c648
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C648;
	// li ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.s64 = 31;
	// b 0x8227c654
	goto loc_8227C654;
loc_8227C648:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
loc_8227C654:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x82270d28
	sub_82270D28(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_8227C690) PPC_WEAK_FUNC(sub_8227C690);
PPC_FUNC_IMPL(__imp__sub_8227C690) {
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
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r22.s64 = 0;
	// lbz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8227c6bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C6BC;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r22.u64;
loc_8227C6BC:
	// lwz ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r20,1
	ctx_arrow(ctx)->r20.s64 = 1;
loc_8227C6C4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227ca4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CA4C;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,1,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227c6e4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C6E4;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,4,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64;
	// beq 0x8227c6e8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C6E8;
loc_8227C6E4:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8227C6E8:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227ca44
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CA44;
	// lwz ctx_arrow(ctx)->r26,12(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r30.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227ca44
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227CA44;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r22.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227c800
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C800;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x822705c8
	sub_822705C8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227c800
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C800;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,7,29,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 7) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64;
	// beq 0x8227c754
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C754;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,27,24,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 27) & 0xFF;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r22.u64;
loc_8227C738:
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	xer.ca = ctx_arrow(ctx)->r10.u32 > 0;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u32 & 0x3;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 2;
	// slw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r20.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r11.u64;
	// bne 0x8227c738
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C738;
loc_8227C754:
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,19,20,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 19) & 0xFF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF00F);
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// bl 0x8227aba0
	sub_8227ABA0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,19,13,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 19) & 0x7FFFF;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r22.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227c7a4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C7A4;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,19,20,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 19) & 0xFF0;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,0,0,27
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c7f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C7F8;
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// b 0x8227c7f8
	goto loc_8227C7F8;
loc_8227C7A4:
	// lwz ctx_arrow(ctx)->r27,8(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,9,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227c7f8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C7F8;
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227C7B4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c7f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C7F8;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c7d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C7D8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x822705c8
	sub_822705C8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227c7e0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C7E0;
loc_8227C7D8:
	// lwz ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227c7b4
	goto loc_8227C7B4;
loc_8227C7E0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// xor ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r10.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,7,14
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1FE0000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227c7f8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C7F8;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27,31,28,31
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 31) & 0xF;
loc_8227C7F8:
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 & ~ctx_arrow(ctx)->r30.u64;
	// andc ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r29.u64 & ~ctx_arrow(ctx)->r11.u64;
loc_8227C800:
	// lwz ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r22.u64;
loc_8227C80C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c930
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C930;
	// lwz ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x8227c928
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C928;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,1,1
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227c838
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C838;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64;
	// beq 0x8227c83c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C83C;
loc_8227C838:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8227C83C:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227c928
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C928;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r25.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c928
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C928;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c928
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C928;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,14208
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 14208, xer);
	// beq ctx_arrow(ctx)->r6,0x8227c928
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227C928;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,6,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 6) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227c894
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C894;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,6,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 6) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227c928
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C928;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8227b1d0
	sub_8227B1D0(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227c8a0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C8A0;
	// b 0x8227c928
	goto loc_8227C928;
loc_8227C894:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,7,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227c928
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C928;
loc_8227C8A0:
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,1,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227c8b8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C8B8;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,4,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
	// beq 0x8227c8bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C8BC;
loc_8227C8B8:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64;
loc_8227C8BC:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227c8cc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C8CC;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r30.u64;
	// b 0x8227c928
	goto loc_8227C928;
loc_8227C8CC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x822705c8
	sub_822705C8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227c928
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C928;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r30.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227c928
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C928;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,7,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 7) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r22.u64;
	// beq 0x8227c91c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C91C;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,27,24,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 27) & 0xFF;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r22.u64;
loc_8227C900:
	// srw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u32 & 0x3;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// slw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r7, 0, BINARY_OP_U8(ctx_arrow(ctx)->r7, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r20.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r7) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r9.u64;
	// bne 0x8227c900
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227C900;
loc_8227C91C:
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,19,20,27
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 19) & 0xFF0) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFF00F);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u32 & 0xF;
	// andc ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 & ~ctx_arrow(ctx)->r11.u64;
loc_8227C928:
	// lwz ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227c80c
	goto loc_8227C80C;
loc_8227C930:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x822705c8
	sub_822705C8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227ca10
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CA10;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,19,13,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 19) & 0x7FFFF;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227c9a0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C9A0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227c9a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227C9A0;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r21,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r21.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227c970
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C970;
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFF;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227be60
	sub_8227BE60(ctx, base);
	// b 0x8227c994
	goto loc_8227C994;
loc_8227C970:
	// lwz ctx_arrow(ctx)->r31,52(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFF;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8227c5a8
	sub_8227C5A8(ctx, base);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8227b410
	sub_8227B410(ctx, base);
loc_8227C994:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227a9c0
	sub_8227A9C0(ctx, base);
loc_8227C9A0:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227ca10
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CA10;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227ca10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CA10;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r31,52(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,15,24,31
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 15) & 0xFF;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 3;
	// bl 0x8227ae98
	sub_8227AE98(ctx, base);
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 & ctx_arrow(ctx)->r28.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227ca10
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CA10;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r21,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r21.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,4,0,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r30.u32, 4) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0000000F);
	// beq 0x8227c9f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227C9F4;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x8227be60
	sub_8227BE60(ctx, base);
	// b 0x8227ca10
	goto loc_8227CA10;
loc_8227C9F4:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8227c5a8
	sub_8227C5A8(ctx, base);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8227b410
	sub_8227B410(ctx, base);
loc_8227CA10:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227ca44
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227CA44;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r23.s64 + 4;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r22.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
loc_8227CA24:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227ca34
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227CA34;
	// stw ctx_arrow(ctx)->r22,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_8227CA34:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 8, xer);
	// blt ctx_arrow(ctx)->r6,0x8227ca24
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227CA24;
loc_8227CA44:
	// lwz ctx_arrow(ctx)->r24,4(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227c6c4
	goto loc_8227C6C4;
loc_8227CA4C:
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227CA50:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227caa0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CAA0;
	// lwz ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// beq 0x8227ca98
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CA98;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,1,1
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227ca7c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CA7C;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,4,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64;
	// beq 0x8227ca80
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CA80;
loc_8227CA7C:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r20.u64;
loc_8227CA80:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227ca98
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CA98;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r23.s64 + 4;
	// bl 0x82278f20
	sub_82278F20(ctx, base);
loc_8227CA98:
	// lwz ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227ca50
	goto loc_8227CA50;
loc_8227CAA0:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r23.s64 + 4;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8227a898
	sub_8227A898(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r21.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227cb9c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CB9C;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,19,13,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 19) & 0x7FFFF;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227caf0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CAF0;
	// lwz ctx_arrow(ctx)->r31,52(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFF;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8227bcb0
	sub_8227BCB0(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8227b410
	sub_8227B410(ctx, base);
loc_8227CAF0:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227cb9c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CB9C;
	// lwz ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r22.u64;
loc_8227CB08:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cb68
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CB68;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cb60
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CB60;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,7,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 7) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227cb60
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CB60;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r22.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cb5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CB5C;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,27,24,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0xFF;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r22.u64;
loc_8227CB40:
	// srw ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// addic. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	xer.ca = ctx_arrow(ctx)->r11.u32 > 0;
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u32 & 0x3;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2;
	// slw ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r4.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r4, 0, BINARY_OP_U8(ctx_arrow(ctx)->r4, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r20.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r4) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r4.u64 | ctx_arrow(ctx)->r9.u64;
	// bne 0x8227cb40
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CB40;
loc_8227CB5C:
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r7.u64;
loc_8227CB60:
	// lwz ctx_arrow(ctx)->r6,8(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227cb08
	goto loc_8227CB08;
loc_8227CB68:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cb9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CB9C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r31,52(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,19,20,27
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 19) & 0xFF0) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFFFFFFF00F);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7,20
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r7.u32 & 0xFFF;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8227c548
	sub_8227C548(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8227b410
	sub_8227B410(ctx, base);
loc_8227CB9C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r4,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227cbc0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CBC0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cbc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CBC0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x82278ae8
	sub_82278AE8(ctx, base);
	// b 0x8227cbc8
	goto loc_8227CBC8;
loc_8227CBC0:
	// stw ctx_arrow(ctx)->r22,36(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r22,44(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 44, ctx_arrow(ctx)->r4.u32);
loc_8227CBC8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed168
	return;
}

alias(__imp__sub_8227CBD0) PPC_WEAK_FUNC(sub_8227CBD0);
PPC_FUNC_IMPL(__imp__sub_8227CBD0) {
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
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x8227ccbc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CCBC;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r5,644(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82278b48
	sub_82278B48(ctx, base);
	// lwz ctx_arrow(ctx)->r11,640(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x8227ccbc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8227CCBC;
	// lwz ctx_arrow(ctx)->r29,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227CC18:
	// lwz ctx_arrow(ctx)->r11,680(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227CC28:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cc44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CC44;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,4,6
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227cc44
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CC44;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227cc28
	goto loc_8227CC28;
loc_8227CC44:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// rlwimi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,19,20,27
	ctx_arrow(ctx)->r29.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 19) & 0xFF0) | (ctx_arrow(ctx)->r29.u64 & 0xFFFFFFFFFFFFF00F);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,20
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u32 & 0xFFF;
	// bl 0x8227aba0
	sub_8227ABA0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,0,0,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r29.u32, 0) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0000000F);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8227c548
	sub_8227C548(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x8227b410
	sub_8227B410(ctx, base);
	// lwz ctx_arrow(ctx)->r11,640(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r28.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227cca0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227CCA0;
	// li ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = -1;
	// b 0x8227ccb4
	goto loc_8227CCB4;
loc_8227CCA0:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// lwz ctx_arrow(ctx)->r5,644(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,88(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82278b48
	sub_82278B48(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_8227CCB4:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r28.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8227cc18
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8227CC18;
loc_8227CCBC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_8227CCC8) PPC_WEAK_FUNC(sub_8227CCC8);
PPC_FUNC_IMPL(__imp__sub_8227CCC8) {
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
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// stwu ctx_arrow(ctx)->r1,-240(ctx_arrow(ctx)->r1)
	ea = -240 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r15.u64 = ctx_arrow(ctx)->r7.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r18,0
	ctx_arrow(ctx)->r18.s64 = 0;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227cdb8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CDB8;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227CCFC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cd24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CD24;
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cd1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CD1C;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,4,6
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x8227cd24
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CD24;
loc_8227CD1C:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227ccfc
	goto loc_8227CCFC;
loc_8227CD24:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,20,27,30
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 20) & 0x1E) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r19)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r19.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_8227CD30:
	// lwz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r22.s64 = 1;
loc_8227CD38:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227ce5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CE5C;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,7,29,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 7) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227cdb0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CDB0;
	// lwz ctx_arrow(ctx)->r30,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227cdb0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CDB0;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cd8c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CD8C;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,27,24,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 27) & 0xFF;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
loc_8227CD70:
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	xer.ca = ctx_arrow(ctx)->r10.u32 > 0;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u32 & 0x3;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 2;
	// slw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r22.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r11.u64;
	// bne 0x8227cd70
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CD70;
loc_8227CD8C:
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,19,20,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 19) & 0xFF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF00F);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFF;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8227c548
	sub_8227C548(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// bl 0x8227b410
	sub_8227B410(ctx, base);
loc_8227CDB0:
	// lwz ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227cd38
	goto loc_8227CD38;
loc_8227CDB8:
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,19,13,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 19) & 0x7FFFF;
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0xF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x8227cddc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CDDC;
	// clrlwi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r10,20
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFF;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x8227be60
	sub_8227BE60(ctx, base);
	// b 0x8227cd30
	goto loc_8227CD30;
loc_8227CDDC:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,15232
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 15232, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cd30
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CD30;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227CDEC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227ce44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CE44;
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227ce0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CE0C;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,4,6
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x8227ce14
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CE14;
loc_8227CE0C:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227cdec
	goto loc_8227CDEC;
loc_8227CE14:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,20,19,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 20) & 0x1FE0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r11,31,20,31
	ctx_arrow(ctx)->r18.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0xFFF;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r18.u64;
	// bl 0x8227c5a8
	sub_8227C5A8(ctx, base);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r18.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// bl 0x8227b410
	sub_8227B410(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r18,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r18.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227cd30
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227CD30;
loc_8227CE44:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,15,17
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1C000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227cd30
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CD30;
	// li ctx_arrow(ctx)->r4,4800
	ctx_arrow(ctx)->r4.s64 = 4800;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// bl 0x8225d328
	sub_8225D328(ctx, base);
loc_8227CE5C:
	// lwz ctx_arrow(ctx)->r21,0(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r21.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// li ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r23.s64 = 0;
loc_8227CE68:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r21.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d484
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D484;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,2,30,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0x3;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227ce8c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CE8C;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,4,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// beq 0x8227ce90
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CE90;
loc_8227CE8C:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64;
loc_8227CE90:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227d470
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D470;
	// lwz ctx_arrow(ctx)->r25,12(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227ceb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CEB0;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,4,6
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r22.u64;
	// beq 0x8227ceb4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CEB4;
loc_8227CEB0:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_8227CEB4:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227d470
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D470;
	// not ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r8.u64;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227d470
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D470;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,15,18
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1E000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227d470
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D470;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227cef4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227CEF4;
	// li ctx_arrow(ctx)->r5,33
	ctx_arrow(ctx)->r5.s64 = 33;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// bl 0x82270688
	sub_82270688(ctx, base);
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x8227cefc
	goto loc_8227CEFC;
loc_8227CEF4:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r24.s64 + 4;
	// bl 0x8227b258
	sub_8227B258(ctx, base);
loc_8227CEFC:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r20.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x8227c4c8
	sub_8227C4C8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r25.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,13952
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 13952, xer);
	// bne ctx_arrow(ctx)->r6,0x8227cfd0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227CFD0;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227CF20:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cfd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CFD0;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,6,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 6) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227cf44
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CF44;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,7,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 7) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227cfa4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CFA4;
loc_8227CF44:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r28.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cf98
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CF98;
loc_8227CF54:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r19.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cf9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CF9C;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// bne 0x8227cf74
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CF74;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227cf90
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227CF90;
loc_8227CF74:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227d478
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D478;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r16)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// clrlwi. ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq 0x8227cf90
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227CF90;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_8227CF90:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r28.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227cf54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227CF54;
loc_8227CF98:
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r10.u64;
loc_8227CF9C:
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227cf20
	goto loc_8227CF20;
loc_8227CFA4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r15,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r15.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227cfc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227CFC8;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r15.u32 | (ctx_arrow(ctx)->r15.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227cfc8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CFC8;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-36
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -36;
	// b 0x8227cfcc
	goto loc_8227CFCC;
loc_8227CFC8:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_8227CFCC:
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64;
loc_8227CFD0:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r19.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
loc_8227CFD8:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227cff4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227CFF4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-36
	xer.ca = ctx_arrow(ctx)->r11.u32 > 35;
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -36;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bne 0x8227d030
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D030;
loc_8227CFF4:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227d12c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D12C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8227a6e8
	sub_8227A6E8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227d12c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D12C;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r16)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r22.u64;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227d024
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D024;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// b 0x8227d030
	goto loc_8227D030;
loc_8227D024:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r16)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-36
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -36;
loc_8227D030:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r28.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d12c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D12C;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,9,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227d0b4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D0B4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
loc_8227D04C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d078
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D078;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0,4,6
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x8227d068
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D068;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227d04c
	goto loc_8227D04C;
loc_8227D068:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r22.u64;
	// bne 0x8227d07c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D07C;
loc_8227D078:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_8227D07C:
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227d0b4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D0B4;
loc_8227D084:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d0a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D0A0;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,4,6
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xE000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227d0a0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D0A0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227d084
	goto loc_8227D084;
loc_8227D0A0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,20,19,26
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 20) & 0x1FE0) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,31,20,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 31) & 0xFFF;
	// bl 0x8227c548
	sub_8227C548(ctx, base);
loc_8227D0B4:
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227D0B8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d124
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D124;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,7,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 7) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227d11c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D11C;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,9,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227d11c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D11C;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d10c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D10C;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,27,24,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 27) & 0xFF;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_8227D0F0:
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
	// slw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r22.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r9.u64;
	// bne 0x8227d0f0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D0F0;
loc_8227D10C:
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,19,20,27
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 19) & 0xFF0) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFF00F);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,20
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r9.u32 & 0xFFF;
	// bl 0x8227c548
	sub_8227C548(ctx, base);
loc_8227D11C:
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227d0b8
	goto loc_8227D0B8;
loc_8227D124:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r15.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227cfd8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227CFD8;
loc_8227D12C:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,18,24
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x3F80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,13952
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 13952, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d3a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D3A4;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,18,29,31
	ctx_arrow(ctx)->r26.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 18) & 0x7;
loc_8227D14C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d1cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D1CC;
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,7,29,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 7) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227d1c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D1C4;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227d1c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D1C4;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d1a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D1A0;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,27,24,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 27) & 0xFF;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
loc_8227D184:
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	xer.ca = ctx_arrow(ctx)->r10.u32 > 0;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u32 & 0x3;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 2;
	// slw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r22.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r11.u64;
	// bne 0x8227d184
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D184;
loc_8227D1A0:
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,19,20,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 19) & 0xFF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF00F);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r24.s64 + 4;
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFF;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,30,2,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 30) & 0x3FFFFFFC;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 3;
	// bl 0x8227ae98
	sub_8227AE98(ctx, base);
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 & ~ctx_arrow(ctx)->r3.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// or ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r30.u64;
loc_8227D1C4:
	// lwz ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227d14c
	goto loc_8227D14C;
loc_8227D1CC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d378
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D378;
	// lis ctx_arrow(ctx)->r10,-28311
	ctx_arrow(ctx)->r10.s64 = -1855389696;
	// lis ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,5192
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 5192;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,36262
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 36262;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & 0xFFFFFFFF;
	// rldimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,32,0
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF);
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r10.u64 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x7F)), 0));
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r10.u64 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x7F)), 0));
	// srd ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r10.u64 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x7F)), 0));
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r26.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8227d378
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227D378;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8227d224
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227D224;
	// li ctx_arrow(ctx)->r5,33
	ctx_arrow(ctx)->r5.s64 = 33;
	// li ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r4.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// bl 0x82270688
	sub_82270688(ctx, base);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x8227d22c
	goto loc_8227D22C;
loc_8227D224:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r23.s64 + 4;
	// bl 0x8227b258
	sub_8227B258(ctx, base);
loc_8227D22C:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r17.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x8227c450
	sub_8227C450(ctx, base);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r24,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r24.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// not ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227d254
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D254;
	// li ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r4.s64 = 31;
	// b 0x8227d260
	goto loc_8227D260;
loc_8227D254:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + -1;
loc_8227D260:
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r23,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r23.s64 + 4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8227bb78
	sub_8227BB78(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// not ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227d288
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D288;
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// b 0x8227d29c
	goto loc_8227D29C;
loc_8227D288:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,255
	ctx_arrow(ctx)->r4.s64 = 255;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
loc_8227D29C:
	// lwz ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8227D2A0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d358
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D358;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,7,29,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 7) & 0x7;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8227d350
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D350;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,9,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227d350
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D350;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d2f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D2F4;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,27,24,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 27) & 0xFF;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
loc_8227D2D8:
	// srw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r7.u32 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// addic. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	xer.ca = ctx_arrow(ctx)->r10.u32 > 0;
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u32 & 0x3;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 2;
	// slw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r6, 0, BINARY_OP_U8(ctx_arrow(ctx)->r6, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r22.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r6) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r11.u64;
	// bne 0x8227d2d8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D2D8;
loc_8227D2F4:
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,19,20,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 19) & 0xFF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF00F);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,28,4,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 3;
	// bl 0x8227ae98
	sub_8227AE98(ctx, base);
	// mr ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r14.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r30.s64 + 3;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8227ae98
	sub_8227AE98(ctx, base);
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 & ~ctx_arrow(ctx)->r14.u64;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r31.u64;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8227d350
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D350;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,0,0,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 0) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0000000F);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,30,2,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 3;
	// bl 0x8227af98
	sub_8227AF98(ctx, base);
loc_8227D350:
	// lwz ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227d2a0
	goto loc_8227D2A0;
loc_8227D358:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// bl 0x8227bd18
	sub_8227BD18(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d378
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D378;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x8227d448
	goto loc_8227D448;
loc_8227D378:
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x8227bd18
	sub_8227BD18(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r20.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,28,4,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 28) & 0xFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8227bb78
	sub_8227BB78(ctx, base);
	// b 0x8227d448
	goto loc_8227D448;
loc_8227D3A4:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,10,12
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x380000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r18,28
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r18.u32 & 0xF;
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,31,28,31
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 31) & 0xF;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// beq 0x8227d404
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D404;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r19,40
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r19.s64 + 40;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,13,29,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0x7;
loc_8227D3C8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64 & ~ctx_arrow(ctx)->r10.u64;
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r10.s64;
	// lwz ctx_arrow(ctx)->r7,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r25.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8227d3f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8227D3F8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// or ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r29.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,30,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x3;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r22.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// andc ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 & ~ctx_arrow(ctx)->r11.u64;
loc_8227D3F8:
	// addic. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-1
	xer.ca = ctx_arrow(ctx)->r8.u32 > 0;
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// bne 0x8227d3c8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D3C8;
loc_8227D404:
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r18,30,2,29
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r18.u32 | (ctx_arrow(ctx)->r18.u64 << 32), 30) & 0x3FFFFFFC;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r20.s64 + 4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r4.s64 + 3;
	// bl 0x8227ae98
	sub_8227AE98(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & ~ctx_arrow(ctx)->r3.u64;
	// beq ctx_arrow(ctx)->r6,0x8227d440
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D440;
loc_8227D420:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + -1;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// andc ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r31.u64 & ~ctx_arrow(ctx)->r10.u64;
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & ~ctx_arrow(ctx)->r9.u64;
	// subf. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 - ctx_arrow(ctx)->r8.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// or ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r29.u64;
	// bne 0x8227d420
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D420;
loc_8227D440:
	// rlwimi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r18,0,0,27
	ctx_arrow(ctx)->r29.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r18.u32, 0) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r29.u64 & 0xFFFFFFFF0000000F);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r29.u64;
loc_8227D448:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// bl 0x8227bcb0
	sub_8227BCB0(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r20.u64;
	// bl 0x8227b410
	sub_8227B410(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r25)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,13,7,18
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 13) & 0x1FFE000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFE001FFF);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r25.u32 + 16, ctx_arrow(ctx)->r4.u32);
loc_8227D470:
	// lwz ctx_arrow(ctx)->r21,4(ctx_arrow(ctx)->r21)
	ctx_arrow(ctx)->r21.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227ce68
	goto loc_8227CE68;
loc_8227D478:
	// li ctx_arrow(ctx)->r4,4800
	ctx_arrow(ctx)->r4.s64 = 4800;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r17.u64;
	// bl 0x8225d328
	sub_8225D328(ctx, base);
loc_8227D484:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d4a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D4A0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r24.s64 + 4;
	// bl 0x8227b258
	sub_8227B258(ctx, base);
	// lwz ctx_arrow(ctx)->r11,936(ctx_arrow(ctx)->r17)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r24)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r24.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r24,936(ctx_arrow(ctx)->r17)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r17.u32 + 936, ctx_arrow(ctx)->r4.u32);
loc_8227D4A0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d4bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D4BC;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r23.s64 + 4;
	// bl 0x8227b258
	sub_8227B258(ctx, base);
	// lwz ctx_arrow(ctx)->r11,936(ctx_arrow(ctx)->r17)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r23)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r23,936(ctx_arrow(ctx)->r17)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r17.u32 + 936, ctx_arrow(ctx)->r4.u32);
loc_8227D4BC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// b 0x823ed150
	return;
}

alias(__imp__sub_8227D4C8) PPC_WEAK_FUNC(sub_8227D4C8);
PPC_FUNC_IMPL(__imp__sub_8227D4C8) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227b4d0
	sub_8227B4D0(ctx, base);
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227b390
	sub_8227B390(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r5,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227cbd0
	sub_8227CBD0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227d57c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D57C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x8227d56c
	goto loc_8227D56C;
loc_8227D51C:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r28.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d580
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D580;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r6,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8227ccc8
	sub_8227CCC8(ctx, base);
	// lbz ctx_arrow(ctx)->r11,70(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x8227d55c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D55C;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x8227d580
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8227D580;
loc_8227D55C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x8227d57c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D57C;
loc_8227D56C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-36
	xer.ca = ctx_arrow(ctx)->r11.u32 > 35;
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -36;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bne 0x8227d51c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D51C;
	// b 0x8227d580
	goto loc_8227D580;
loc_8227D57C:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_8227D580:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_8227D590) PPC_WEAK_FUNC(sub_8227D590);
PPC_FUNC_IMPL(__imp__sub_8227D590) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lbz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8227d5b8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8227D5B8;
	// li ctx_arrow(ctx)->r4,4800
	ctx_arrow(ctx)->r4.s64 = 4800;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8225d328
	sub_8225D328(ctx, base);
loc_8227D5B8:
	// lwz ctx_arrow(ctx)->r30,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x82278ca8
	sub_82278CA8(ctx, base);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227d5dc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D5DC;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x8227d6d4
	goto loc_8227D6D4;
loc_8227D5DC:
	// lwz ctx_arrow(ctx)->r29,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r6,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227beb8
	sub_8227BEB8(ctx, base);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x82278f78
	sub_82278F78(ctx, base);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8227d62c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D62C;
	// lbz ctx_arrow(ctx)->r11,70(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne 0x8227d674
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8227D674;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x8227d674
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8227D674;
loc_8227D62C:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8227d4c8
	sub_8227D4C8(ctx, base);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8227d674
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8227D674;
loc_8227D644:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8227c690
	sub_8227C690(ctx, base);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8227b4d0
	sub_8227B4D0(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// li ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r3.s64 = 2;
	// stb ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 68, ctx_arrow(ctx)->r4.u32.u8);
	// blr 
	return;
}

