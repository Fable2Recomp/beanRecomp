#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_823DC1F8) PPC_WEAK_FUNC(sub_823DC1F8);
PPC_FUNC_IMPL(__imp__sub_823DC1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28,4,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 28) & 0xFFFFFFF;
	// blr 
	return;
}

alias(__imp__sub_823DC208) PPC_WEAK_FUNC(sub_823DC208);
PPC_FUNC_IMPL(__imp__sub_823DC208) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DC210) PPC_WEAK_FUNC(sub_823DC210);
PPC_FUNC_IMPL(__imp__sub_823DC210) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DC218) PPC_WEAK_FUNC(sub_823DC218);
PPC_FUNC_IMPL(__imp__sub_823DC218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// blr 
	return;
}

alias(__imp__sub_823DC230) PPC_WEAK_FUNC(sub_823DC230);
PPC_FUNC_IMPL(__imp__sub_823DC230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r3.s64 = 3;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc250
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC250;
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
loc_823DC250:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823DC258) PPC_WEAK_FUNC(sub_823DC258);
PPC_FUNC_IMPL(__imp__sub_823DC258) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 16;
	// blr 
	return;
}

alias(__imp__sub_823DC260) PPC_WEAK_FUNC(sub_823DC260);
PPC_FUNC_IMPL(__imp__sub_823DC260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,30,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_823DC270) PPC_WEAK_FUNC(sub_823DC270);
PPC_FUNC_IMPL(__imp__sub_823DC270) {
	PPC_FUNC_PROLOGUE();
	// lhz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 4);
	// blr 
	return;
}

alias(__imp__sub_823DC278) PPC_WEAK_FUNC(sub_823DC278);
PPC_FUNC_IMPL(__imp__sub_823DC278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r9,6815
	ctx_arrow(ctx)->r9.s64 = 446627840;
	// lis ctx_arrow(ctx)->r8,1572
	ctx_arrow(ctx)->r8.s64 = 103022592;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,59,46
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 59) & 0x3FFFF;
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s32;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,48759
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 48759;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,56623
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 | 56623;
	// mulld ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * ctx_arrow(ctx)->r10.s64;
	// rldimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,32,0
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft64(ctx_arrow(ctx)->r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF);
	// mulhdu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,63,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rldicl ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,55,9
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 55) & 0x7FFFFFFFFFFFFF;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// blr 
	return;
}

alias(__imp__sub_823DC2B8) PPC_WEAK_FUNC(sub_823DC2B8);
PPC_FUNC_IMPL(__imp__sub_823DC2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r4.u32 & 0xFF;
	// lis ctx_arrow(ctx)->r3,32767
	ctx_arrow(ctx)->r3.s64 = 2147418112;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,255
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 255, xer);
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,65535
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 65535;
	// bgelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) return;
	// lwz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dc2e4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC2E4;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64;
	// b 0x823dc2ec
	goto loc_823DC2EC;
loc_823DC2E4:
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,28,4,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 28) & 0xFFFFFFF;
loc_823DC2EC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dc2fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC2FC;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823dc300
	goto loc_823DC300;
loc_823DC2FC:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_823DC300:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// lwz ctx_arrow(ctx)->r7,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r8.s32) * int64_t(ctx_arrow(ctx)->r9.s32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rldicl ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,59,46
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 59) & 0x3FFFF;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// tdllei ctx_arrow(ctx)->r10,0
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1000
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 1000;
	// divd ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 / ctx_arrow(ctx)->r10.s64;
	// rotldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 1);
	// extsw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s32;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r11.u64;
	// tdlgei ctx_arrow(ctx)->r11,-1
	// blr 
	return;
}

alias(__imp__sub_823DC340) PPC_WEAK_FUNC(sub_823DC340);
PPC_FUNC_IMPL(__imp__sub_823DC340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r4.u32 & 0xFF;
	// lis ctx_arrow(ctx)->r3,32767
	ctx_arrow(ctx)->r3.s64 = 2147418112;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,255
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 255, xer);
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,65535
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 65535;
	// bgelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) return;
	// lwz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823dc36c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC36C;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,28,4,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 28) & 0xFFFFFFF;
loc_823DC36C:
	// lwz ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,28,4,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 28) & 0xFFFFFFF;
	// rldicl ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,59,46
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 59) & 0x3FFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// tdllei ctx_arrow(ctx)->r8,0
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1000
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 1000;
	// divd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 / ctx_arrow(ctx)->r8.s64;
	// rotldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 1);
	// extsw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s32;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u64 & ~ctx_arrow(ctx)->r11.u64;
	// tdlgei ctx_arrow(ctx)->r11,-1
	// blr 
	return;
}

alias(__imp__sub_823DC3B0) PPC_WEAK_FUNC(sub_823DC3B0);
PPC_FUNC_IMPL(__imp__sub_823DC3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc3d4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC3D4;
	// bne ctx_arrow(ctx)->r6,0x823dc3d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC3D8;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// b 0x823dc3d8
	goto loc_823DC3D8;
loc_823DC3D4:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_823DC3D8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc3ec
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC3EC;
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// lis ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 65536;
	// blr 
	return;
loc_823DC3EC:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x80000000;
	// lis ctx_arrow(ctx)->r10,-32768
	ctx_arrow(ctx)->r10.s64 = -2147483648;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// li ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = 16;
	// beq ctx_arrow(ctx)->r6,0x823dc404
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC404;
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
loc_823DC404:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,30,29,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 30) & 0x7;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29,19,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1FFF;
	// mullw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// blr 
	return;
}

alias(__imp__sub_823DC418) PPC_WEAK_FUNC(sub_823DC418);
PPC_FUNC_IMPL(__imp__sub_823DC418) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dc470
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC470;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r3,56(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823dc4c0
	goto loc_823DC4C0;
loc_823DC470:
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc490
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC490;
	// bne ctx_arrow(ctx)->r6,0x823dc494
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC494;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x823dc494
	goto loc_823DC494;
loc_823DC490:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823DC494:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc4b8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC4B8;
	// beq ctx_arrow(ctx)->r6,0x823dc4b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC4B0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc4b8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC4B8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// b 0x823dc4c0
	goto loc_823DC4C0;
loc_823DC4B0:
	// li ctx_arrow(ctx)->r3,2048
	ctx_arrow(ctx)->r3.s64 = 2048;
	// b 0x823dc4c0
	goto loc_823DC4C0;
loc_823DC4B8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dc3b0
	sub_823DC3B0(ctx, base);
loc_823DC4C0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DC4D8) PPC_WEAK_FUNC(sub_823DC4D8);
PPC_FUNC_IMPL(__imp__sub_823DC4D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r5.s64 + 4;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + 0);
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc554
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC554;
loc_823DC508:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823dc554
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DC554;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,31,1,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r5,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r5.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc538
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC538;
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r5.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc554
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC554;
loc_823DC538:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823dc54c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DC54C;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// b 0x823dc508
	goto loc_823DC508;
loc_823DC54C:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// b 0x823dc508
	goto loc_823DC508;
loc_823DC554:
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.s64 = 3;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc578
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC578;
	// bne ctx_arrow(ctx)->r6,0x823dc57c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC57C;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// b 0x823dc57c
	goto loc_823DC57C;
loc_823DC578:
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
loc_823DC57C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc590
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC590;
	// bne ctx_arrow(ctx)->r6,0x823dc5b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC5B4;
	// lis ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 65536;
	// b 0x823dc5b4
	goto loc_823DC5B4;
loc_823DC590:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 0) & 0x80000000;
	// lis ctx_arrow(ctx)->r9,-32768
	ctx_arrow(ctx)->r9.s64 = -2147483648;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// li ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = 16;
	// beq ctx_arrow(ctx)->r6,0x823dc5a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC5A8;
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
loc_823DC5A8:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,30,29,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 30) & 0x7;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29,19,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1FFF;
	// mullw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r5.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r9.s32);
loc_823DC5B4:
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r5.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r6)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + 0);
	// beq ctx_arrow(ctx)->r6,0x823dc5d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC5D4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r11.s64;
loc_823DC5D4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,128
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 128, xer);
	// ble ctx_arrow(ctx)->r6,0x823dc5f0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823DC5F0;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,25
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 & 0x7F;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 0);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DC5F0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,127
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 127;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFF80;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 0);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DC608) PPC_WEAK_FUNC(sub_823DC608);
PPC_FUNC_IMPL(__imp__sub_823DC608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.s64 = 3;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x3;
	// stw ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc64c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC64C;
	// bne ctx_arrow(ctx)->r6,0x823dc650
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC650;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// b 0x823dc650
	goto loc_823DC650;
loc_823DC64C:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r3.u64;
loc_823DC650:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc694
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC694;
	// bne ctx_arrow(ctx)->r6,0x823dc6bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC6BC;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dc4d8
	sub_823DC4D8(ctx, base);
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823dc6bc
	goto loc_823DC6BC;
loc_823DC694:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x80000000;
	// lis ctx_arrow(ctx)->r9,-32768
	ctx_arrow(ctx)->r9.s64 = -2147483648;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// li ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = 16;
	// beq ctx_arrow(ctx)->r6,0x823dc6ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC6AC;
	// li ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.s64 = 8;
loc_823DC6AC:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,30,29,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 30) & 0x7;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29,19,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1FFF;
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// mullw ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r30.s32);
loc_823DC6BC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dc6cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC6CC;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
loc_823DC6CC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DC6D8) PPC_WEAK_FUNC(sub_823DC6D8);
PPC_FUNC_IMPL(__imp__sub_823DC6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// li ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.s64 = 3;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc714
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC714;
	// bne ctx_arrow(ctx)->r6,0x823dc718
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC718;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// b 0x823dc718
	goto loc_823DC718;
loc_823DC714:
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
loc_823DC718:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc770
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC770;
	// bne ctx_arrow(ctx)->r6,0x823dc780
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC780;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,16,16,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 16) & 0xFFFF;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc754
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC754;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + -1;
loc_823DC754:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DC770:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x823dc3b0
	sub_823DC3B0(ctx, base);
	// twllei ctx_arrow(ctx)->r3,0
	// divwu ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r3.u32 = ctx_arrow(ctx)->r31.u32 / ctx_arrow(ctx)->r3.u32;
loc_823DC780:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DC798) PPC_WEAK_FUNC(sub_823DC798);
PPC_FUNC_IMPL(__imp__sub_823DC798) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823dc608
	sub_823DC608(ctx, base);
	return;
}

alias(__imp__sub_823DC7A8) PPC_WEAK_FUNC(sub_823DC7A8);
PPC_FUNC_IMPL(__imp__sub_823DC7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823dc608
	sub_823DC608(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc7fc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC7FC;
	// bne ctx_arrow(ctx)->r6,0x823dc7fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC7FC;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 65536;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823dc7f8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DC7F8;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_823DC7F8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
loc_823DC7FC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DC810) PPC_WEAK_FUNC(sub_823DC810);
PPC_FUNC_IMPL(__imp__sub_823DC810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823dc608
	sub_823DC608(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823dc868
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC868;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 65536;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823dc864
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DC864;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_823DC864:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
loc_823DC868:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dc608
	sub_823DC608(ctx, base);
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r3.s64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DC898) PPC_WEAK_FUNC(sub_823DC898);
PPC_FUNC_IMPL(__imp__sub_823DC898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823dad48
	sub_823DAD48(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r9,-32249
	ctx_arrow(ctx)->r9.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3784
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3784;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3476
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 3476;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3776
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 3776;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DC8F0) PPC_WEAK_FUNC(sub_823DC8F0);
PPC_FUNC_IMPL(__imp__sub_823DC8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r9,-32249
	ctx_arrow(ctx)->r9.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3784
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3784;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3476
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 3476;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3776
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 3776;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// b 0x823dadf8
	sub_823DADF8(&ctx);
	return;
}

alias(__imp__sub_823DC918) PPC_WEAK_FUNC(sub_823DC918);
PPC_FUNC_IMPL(__imp__sub_823DC918) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-8
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -8;
	// b 0x823dc920
	sub_823DC920(ctx, base);
	return;
}

alias(__imp__sub_823DC920) PPC_WEAK_FUNC(sub_823DC920);
PPC_FUNC_IMPL(__imp__sub_823DC920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r9,-32249
	ctx_arrow(ctx)->r9.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3784
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3784;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3476
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 3476;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3776
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 3776;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// bl 0x823dadf8
	sub_823DADF8(&ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dc984
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC984;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32874
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32874;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823DC984:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DC9A0) PPC_WEAK_FUNC(sub_823DC9A0);
PPC_FUNC_IMPL(__imp__sub_823DC9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32798
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32798;
	// li ctx_arrow(ctx)->r3,140
	ctx_arrow(ctx)->r3.s64 = 140;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r10.u64;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dca54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DCA54;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e75e0
	sub_823E75E0(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823dca5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DCA5C;
loc_823DCA14:
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
loc_823DCA1C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dca3c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DCA3C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DCA3C:
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
loc_823DCA54:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// b 0x823dca14
	goto loc_823DCA14;
loc_823DCA5C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r7,252(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r6,244(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823dca1c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCA1C;
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed178
	return;
}

alias(__imp__sub_823DCAA0) PPC_WEAK_FUNC(sub_823DCAA0);
PPC_FUNC_IMPL(__imp__sub_823DCAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0xFFFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r3.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823dcb00
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCB00;
	// lis ctx_arrow(ctx)->r3,-30009
	ctx_arrow(ctx)->r3.s64 = -1966669824;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,13
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 13;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed178
	return;
loc_823DCB00:
	// lwz ctx_arrow(ctx)->r9,276(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r24,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r9,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dc9a0
	sub_823DC9A0(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823dcb68
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCB68;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r29,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,284(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
loc_823DCB68:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed178
	return;
}

alias(__imp__sub_823DCB78) PPC_WEAK_FUNC(sub_823DCB78);
PPC_FUNC_IMPL(__imp__sub_823DCB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2400
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2400, xer);
	// blt ctx_arrow(ctx)->r6,0x823dcb90
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCB90;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f1,3060(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_823DCB90:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-2400
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -2400, xer);
	// bgt ctx_arrow(ctx)->r6,0x823dcba4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DCBA4;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f1,14264(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_823DCBA4:
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfd f0,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,3932(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// blr 
	return;
}

alias(__imp__sub_823DCBC8) PPC_WEAK_FUNC(sub_823DCBC8);
PPC_FUNC_IMPL(__imp__sub_823DCBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823dcbe0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DCBE0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 204);
	// b 0x823dcbec
	goto loc_823DCBEC;
loc_823DCBE0:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823DCBEC:
	// lwz ctx_arrow(ctx)->r11,208(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823dcc04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DCC04;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,208(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 208);
	// b 0x823dcc10
	goto loc_823DCC10;
loc_823DCC04:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
loc_823DCC10:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,212(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,212(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 212);
	// blr 
	return;
}

alias(__imp__sub_823DCC30) PPC_WEAK_FUNC(sub_823DCC30);
PPC_FUNC_IMPL(__imp__sub_823DCC30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-8
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -8;
	// bl 0x823ed538
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f4,0(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f4.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lfs f3,0(ctx_arrow(ctx)->r5)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f3.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lfs f2,0(ctx_arrow(ctx)->r6)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,0(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// fmr f8,f1
	ctx.f8.f64 = ctx.f1.f64;
	// lfs f30,4(ctx_arrow(ctx)->r6)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// lfs f7,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f7.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f29,4(ctx_arrow(ctx)->r5)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f29.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f28,4(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f28.f64 = double(temp.f32);
	// lfs f27,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f27.f64 = double(temp.f32);
	// lfs f9,3908(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f6.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f25,14440(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f25.f64 = double(temp.f32);
	// lfs f26,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f26.f64 = double(temp.f32);
loc_823DCC90:
	// fadds f0,f6,f5
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fmuls f0,f0,f26
	f0.f64 = double(float(f0.f64 * f26.f64));
	// fsubs f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 - f0.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f24,f28,f12
	f24.f64 = double(float(f28.f64 * ctx.f12.f64));
	// fmuls f11,f1,f9
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmadds f12,f31,f12,f1
	ctx.f12.f64 = double(float(f31.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f1,f27,f13,f24
	ctx.f1.f64 = double(float(f27.f64 * ctx.f13.f64 + f24.f64));
	// fmadds f12,f3,f11,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f11,f29,f11,f1
	ctx.f11.f64 = double(float(f29.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f13,f4,f13,f12
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f1,f30,f10,f11
	ctx.f1.f64 = double(float(f30.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu ctx_arrow(ctx)->r6,f13,f8
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f8.f64);
	// ble ctx_arrow(ctx)->r6,0x823dccec
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823DCCEC;
	// fmr f5,f0
	ctx.f5.f64 = f0.f64;
	// b 0x823dccf8
	goto loc_823DCCF8;
loc_823DCCEC:
	// fcmpu ctx_arrow(ctx)->r6,f13,f8
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge ctx_arrow(ctx)->r6,0x823dccf8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DCCF8;
	// fmr f6,f0
	ctx.f6.f64 = f0.f64;
loc_823DCCF8:
	// fsubs f0,f8,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu ctx_arrow(ctx)->r6,f0,f25
	ctx_arrow(ctx)->r6.compare(f0.f64, f25.f64);
	// bgt ctx_arrow(ctx)->r6,0x823dcc90
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DCC90;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-8
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -8;
	// bl 0x823ed584
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823DCD20) PPC_WEAK_FUNC(sub_823DCD20);
PPC_FUNC_IMPL(__imp__sub_823DCD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x823ed13c
	// stfd f29,-56(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -56);
	// stfd f30,-48(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -48);
	// stfd f31,-40(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -40);
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f0,2688(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 5;
	// lbz ctx_arrow(ctx)->r10,2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stfs f0,40(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// bgt ctx_arrow(ctx)->r6,0x823dcd7c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DCD7C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823dd020
	goto loc_823DD020;
loc_823DCD7C:
	// lbz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 3);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r10,-9(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// blt ctx_arrow(ctx)->r6,0x823dcdbc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCDBC;
	// lwz ctx_arrow(ctx)->r11,-5(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,64
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 64;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stb ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 44));
	// lfs f0,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823dd020
	goto loc_823DD020;
loc_823DCDBC:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823dd024
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823DD024;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 + 9;
loc_823DCDD0:
	// lwz ctx_arrow(ctx)->r6,-9(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r6,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// blt ctx_arrow(ctx)->r6,0x823dcdf8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCDF8;
	// lwz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r6,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x823dce10
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823DCE10;
loc_823DCDF8:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,9
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 9;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r7.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823dcdd0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCDD0;
	// b 0x823dd024
	goto loc_823DD024;
loc_823DCE10:
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// stw ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - f0.f64));
	// stw ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfs f13,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fdivs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 / f0.f64));
	// beq ctx_arrow(ctx)->r6,0x823dcf94
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DCF94;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823dcf1c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DCF1C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x823dce8c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DCE8C;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f13,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f1,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// b 0x823dd020
	goto loc_823DD020;
loc_823DCE8C:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f13,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x823dcee8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCEE8;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f31,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// lfd f0,2728(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fsub f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 - f0.f64;
	// bl 0x823f0f38
	sub_823F0F38(ctx, base);
	// bl 0x823edbe0
	sub_823EDBE0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// fmadd f0,f1,f0,f31
	f0.f64 = ctx.f1.f64 * f0.f64 + f31.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// b 0x823dd020
	goto loc_823DD020;
loc_823DCEE8:
	// bl 0x823edbe0
	sub_823EDBE0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x823edcb0
	sub_823EDCB0(ctx, base);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f12,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fmadds f0,f12,f13,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// b 0x823dd020
	goto loc_823DD020;
loc_823DCF1C:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f30,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfs f29,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f29.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f30,f29
	ctx_arrow(ctx)->r6.compare(f30.f64, f29.f64);
	// blt ctx_arrow(ctx)->r6,0x823dcf74
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCF74;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,3896
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 3896;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-21832
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -21832;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r4.s64 + 16;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-20428
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -20428;
	// stw ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f31,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// bl 0x823dcc30
	sub_823DCC30(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - f31.f64));
	// b 0x823dd01c
	goto loc_823DD01C;
loc_823DCF74:
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,-21824
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 + -21824;
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// stw ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f31,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-21848
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -21848;
	// b 0x823dd008
	goto loc_823DD008;
loc_823DCF94:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f30,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfs f29,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f29.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f30,f29
	ctx_arrow(ctx)->r6.compare(f30.f64, f29.f64);
	// blt ctx_arrow(ctx)->r6,0x823dcfec
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCFEC;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,3896
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 3896;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-21840
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -21840;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r4.s64 + 16;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,-20420
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + -20420;
	// stw ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f31,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// bl 0x823dcc30
	sub_823DCC30(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - f31.f64));
	// b 0x823dd01c
	goto loc_823DD01C;
loc_823DCFEC:
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,-20404
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 + -20404;
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfs f31,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-20412
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -20412;
loc_823DD008:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3896
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3896;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// bl 0x823dcc30
	sub_823DCC30(ctx, base);
	// fsubs f0,f29,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 - f31.f64));
loc_823DD01C:
	// fmadds f0,f1,f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f0.f64 + f31.f64));
loc_823DD020:
	// stfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
loc_823DD024:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 3);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd0d0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD0D0;
	// beq ctx_arrow(ctx)->r6,0x823dd070
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD070;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x823dd120
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DD120;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6400
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 6400, xer);
	// ble ctx_arrow(ctx)->r6,0x823dd060
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823DD060;
	// li ctx_arrow(ctx)->r11,6400
	ctx_arrow(ctx)->r11.s64 = 6400;
loc_823DD060:
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823dd0fc
	goto loc_823DD0FC;
loc_823DD070:
	// lfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lhz ctx_arrow(ctx)->r11,94(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 94);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2400
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2400, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd098
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD098;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,3060(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823dd11c
	goto loc_823DD11C;
loc_823DD098:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-2400
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -2400, xer);
	// bgt ctx_arrow(ctx)->r6,0x823dd0ac
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DD0AC;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,14264(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823dd11c
	goto loc_823DD11C;
loc_823DD0AC:
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,3932(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x823dd11c
	goto loc_823DD11C;
loc_823DD0D0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6400
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 6400, xer);
	// ble ctx_arrow(ctx)->r6,0x823dd0f0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823DD0F0;
	// li ctx_arrow(ctx)->r11,6400
	ctx_arrow(ctx)->r11.s64 = 6400;
loc_823DD0F0:
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
loc_823DD0FC:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(f0.s64);
	// lfd f1,28184(ctx_arrow(ctx)->r11)
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfd f0,4696(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f2,f13,f0
	ctx.f2.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x823f0100
	sub_823F0100(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
loc_823DD11C:
	// stfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
loc_823DD120:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lfd f29,-56(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-48(ctx_arrow(ctx)->r1)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-40(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DD138) PPC_WEAK_FUNC(sub_823DD138);
PPC_FUNC_IMPL(__imp__sub_823DD138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// lhz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 3);
	// beq ctx_arrow(ctx)->r6,0x823dd208
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD208;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd1e4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD1E4;
	// beq ctx_arrow(ctx)->r6,0x823dd1c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD1C0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x823dd2c8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DD2C8;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,31(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 31);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd2c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD2C8;
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f13,120(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x823df890
	sub_823DF890(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD1C0:
	// lfs f0,124(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f13,40(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x823df900
	sub_823DF900(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD1E4:
	// lfs f0,116(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f13,40(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x823df860
	sub_823DF860(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD208:
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd2b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD2B0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd244
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD244;
	// bne ctx_arrow(ctx)->r6,0x823dd2c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DD2C8;
	// lfs f0,60(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f13,40(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x823e1670
	sub_823E1670(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD244:
	// lfs f0,56(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f13,40(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x823e1640
	sub_823E1640(ctx, base);
	// lbz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,25,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd2c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD2C8;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823dd294
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DD294;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e1198
	sub_823E1198(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD294:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7F;
	// stb ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 44, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD2B0:
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 65536;
	// lfs f1,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -3;
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// bl 0x823d4540
	sub_823D4540(ctx, base);
loc_823DD2C8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DD2E0) PPC_WEAK_FUNC(sub_823DD2E0);
PPC_FUNC_IMPL(__imp__sub_823DD2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd328
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD328;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd328
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD328;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f1,20(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
loc_823DD328:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd3d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD3D0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823dd494
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DD494;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd494
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD494;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd494
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD494;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd390
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD390;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x823dd394
	goto loc_823DD394;
loc_823DD390:
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
loc_823DD394:
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r29.s64;
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
loc_823DD3D0:
	// lbz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 128, xer);
	// bne ctx_arrow(ctx)->r6,0x823dd494
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DD494;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd478
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD478;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd478
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD478;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd438
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD438;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x823dd43c
	goto loc_823DD43C;
loc_823DD438:
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
loc_823DD43C:
	// lwz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r29.s64;
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
loc_823DD478:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lfs f1,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DD494:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DD4A0) PPC_WEAK_FUNC(sub_823DD4A0);
PPC_FUNC_IMPL(__imp__sub_823DD4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd4cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD4CC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823dd52c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DD52C;
loc_823DD4CC:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd4f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD4F8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823dd524
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DD524;
loc_823DD4F8:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd52c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD52C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd52c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD52C;
loc_823DD524:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dd2e0
	sub_823DD2E0(ctx, base);
loc_823DD52C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DD540) PPC_WEAK_FUNC(sub_823DD540);
PPC_FUNC_IMPL(__imp__sub_823DD540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// li ctx_arrow(ctx)->r6,128
	ctx_arrow(ctx)->r6.s64 = 128;
	// lfs f0,2688(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,748
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 748;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,3940
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 3940;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// stfs f0,40(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 40);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,3936
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 3936;
	// stb ctx_arrow(ctx)->r6,44(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 44));
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// stw ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 28);
	// stw ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// stw ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 36);
	// blr 
	return;
}

alias(__imp__sub_823DD5A0) PPC_WEAK_FUNC(sub_823DD5A0);
PPC_FUNC_IMPL(__imp__sub_823DD5A0) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -4;
	// b 0x823d3758
	sub_823D3758(ctx, base);
	return;
}

alias(__imp__sub_823DD5A8) PPC_WEAK_FUNC(sub_823DD5A8);
PPC_FUNC_IMPL(__imp__sub_823DD5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r7,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r6,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r7.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd694
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD694;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,28
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 28;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd630
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD630;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823d6cb8
	sub_823D6CB8(ctx, base);
	// b 0x823dd640
	goto loc_823DD640;
loc_823DD630:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 0);
	// bl 0x823cef50
	sub_823CEF50(ctx, base);
loc_823DD640:
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd690
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD690;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 3);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd674
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD674;
	// beq ctx_arrow(ctx)->r6,0x823dd668
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD668;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x823dd680
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DD680;
loc_823DD668:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823dd67c
	goto loc_823DD67C;
loc_823DD674:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
loc_823DD67C:
	// stfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
loc_823DD680:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// bl 0x823d1fd0
	sub_823D1FD0(ctx, base);
loc_823DD690:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
loc_823DD694:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DD6A0) PPC_WEAK_FUNC(sub_823DD6A0);
PPC_FUNC_IMPL(__imp__sub_823DD6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r6,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r6.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd794
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD794;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd70c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD70C;
	// lis ctx_arrow(ctx)->r3,-30009
	ctx_arrow(ctx)->r3.s64 = -1966669824;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 10;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
loc_823DD70C:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,28
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 28;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// lhz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 0);
	// bl 0x823cef50
	sub_823CEF50(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd790
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD790;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 3);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd758
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD758;
	// beq ctx_arrow(ctx)->r6,0x823dd74c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD74C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x823dd764
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DD764;
loc_823DD74C:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823dd760
	goto loc_823DD760;
loc_823DD758:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
loc_823DD760:
	// stfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
loc_823DD764:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// bl 0x823d1fd0
	sub_823D1FD0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f1,20(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DD790:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
loc_823DD794:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DD7A0) PPC_WEAK_FUNC(sub_823DD7A0);
PPC_FUNC_IMPL(__imp__sub_823DD7A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3940
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3940;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3936
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 3936;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// beq ctx_arrow(ctx)->r6,0x823dd808
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD808;
	// lwz ctx_arrow(ctx)->r4,228(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd808
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD808;
loc_823DD7E4:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r31.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd800
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD800;
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823dd7e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DD7E4;
	// b 0x823dd808
	goto loc_823DD808;
loc_823DD800:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r9.s64 + 24;
	// bl 0x823dcbc8
	sub_823DCBC8(ctx, base);
loc_823DD808:
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,748
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 748;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DD828) PPC_WEAK_FUNC(sub_823DD828);
PPC_FUNC_IMPL(__imp__sub_823DD828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823dcd20
	sub_823DCD20(ctx, base);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd870
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD870;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 3);
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// bl 0x823e0560
	sub_823E0560(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD870:
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd8a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD8A0;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 3);
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// bl 0x823e1870
	sub_823E1870(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD8A0:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dd138
	sub_823DD138(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DD8C0) PPC_WEAK_FUNC(sub_823DD8C0);
PPC_FUNC_IMPL(__imp__sub_823DD8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,28
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 28;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd910
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD910;
	// lwz ctx_arrow(ctx)->r4,228(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd910
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD910;
loc_823DD8EC:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd908
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD908;
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823dd8ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DD8EC;
	// b 0x823dd910
	goto loc_823DD910;
loc_823DD908:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// bl 0x823dcbc8
	sub_823DCBC8(ctx, base);
loc_823DD910:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd9dc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD9DC;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd9ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD9AC;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd980
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD980;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// bl 0x823d6cb8
	sub_823D6CB8(ctx, base);
	// b 0x823dd9c0
	goto loc_823DD9C0;
loc_823DD980:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd9c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD9C4;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lhz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823d6cb8
	sub_823D6CB8(ctx, base);
	// b 0x823dd9c0
	goto loc_823DD9C0;
loc_823DD9AC:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 0);
	// bl 0x823cef50
	sub_823CEF50(ctx, base);
loc_823DD9C0:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_823DD9C4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823dd9dc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DD9DC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// bl 0x823d1fd0
	sub_823D1FD0(ctx, base);
loc_823DD9DC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DD9E8) PPC_WEAK_FUNC(sub_823DD9E8);
PPC_FUNC_IMPL(__imp__sub_823DD9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// stw ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// stw ctx_arrow(ctx)->r7,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r6,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// bl 0x823dd8c0
	sub_823DD8C0(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823dda4c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DDA4C;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 3);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dda40
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DDA40;
	// beq ctx_arrow(ctx)->r6,0x823dda34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DDA34;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x823dda4c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DDA4C;
loc_823DDA34:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823dda48
	goto loc_823DDA48;
loc_823DDA40:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
loc_823DDA48:
	// stfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
loc_823DDA4C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DDA60) PPC_WEAK_FUNC(sub_823DDA60);
PPC_FUNC_IMPL(__imp__sub_823DDA60) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x82364e98
	sub_82364E98(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823ddb2c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DDB2C;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823ddae0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DDAE0;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stb ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 12, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// lbz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ddae8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DDAE8;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,12
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 12;
loc_823DDAB8:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// lbz ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// stb ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12));
	// lbz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823ddab8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DDAB8;
	// b 0x823ddae8
	goto loc_823DDAE8;
loc_823DDAE0:
	// lbz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 12, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823DDAE8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ddb2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DDB2C;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// lfs f0,0(ctx_arrow(ctx)->r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f0,16(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DDB2C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823DDB38) PPC_WEAK_FUNC(sub_823DDB38);
PPC_FUNC_IMPL(__imp__sub_823DDB38) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823649f8
	sub_823649F8(ctx, base);
	return;
}

alias(__imp__sub_823DDB40) PPC_WEAK_FUNC(sub_823DDB40);
PPC_FUNC_IMPL(__imp__sub_823DDB40) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x82364a70
	sub_82364A70(ctx, base);
	return;
}

alias(__imp__sub_823DDB48) PPC_WEAK_FUNC(sub_823DDB48);
PPC_FUNC_IMPL(__imp__sub_823DDB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// b 0x82364898
	sub_82364898(ctx, base);
	return;
}

alias(__imp__sub_823DDB60) PPC_WEAK_FUNC(sub_823DDB60);
PPC_FUNC_IMPL(__imp__sub_823DDB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// b 0x823648e0
	sub_823648E0(ctx, base);
	return;
}

alias(__imp__sub_823DDB78) PPC_WEAK_FUNC(sub_823DDB78);
PPC_FUNC_IMPL(__imp__sub_823DDB78) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x82364938
	sub_82364938(ctx, base);
	return;
}

alias(__imp__sub_823DDB80) PPC_WEAK_FUNC(sub_823DDB80);
PPC_FUNC_IMPL(__imp__sub_823DDB80) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x823649a0
	sub_823649A0(ctx, base);
	return;
}

alias(__imp__sub_823DDB90) PPC_WEAK_FUNC(sub_823DDB90);
PPC_FUNC_IMPL(__imp__sub_823DDB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// sth ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r11, 0);
	// blr 
	return;
}

alias(__imp__sub_823DDBA0) PPC_WEAK_FUNC(sub_823DDBA0);
PPC_FUNC_IMPL(__imp__sub_823DDBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed12c
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32816
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32816;
	// li ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r3.s64 = 24;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ddc40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DDC40;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// stw ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r26.u64;
	// stb ctx_arrow(ctx)->r29,12(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 12, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3944
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3944;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// lfs f0,2776(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// stfs f0,16(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// bl 0x823dda60
	sub_823DDA60(&ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823ddc58
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DDC58;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r25.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
loc_823DDC40:
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r25.u32 + 0);
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
loc_823DDC58:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r25)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r25.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_823DDC80) PPC_WEAK_FUNC(sub_823DDC80);
PPC_FUNC_IMPL(__imp__sub_823DDC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 2;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// lfs f0,2776(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// stfs f0,116(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// lbz ctx_arrow(ctx)->r7,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// stfs f0,124(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
	// stb ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 112, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stb ctx_arrow(ctx)->r11,113(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 113, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 1, xer);
	// stb ctx_arrow(ctx)->r11,120(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 120, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// lfs f0,2688(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// stfs f0,132(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// stb ctx_arrow(ctx)->r8,121(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 121));
	// stfs f0,140(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 140);
	// stb ctx_arrow(ctx)->r9,128(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128));
	// stfs f0,148(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 148);
	// stb ctx_arrow(ctx)->r9,129(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 129));
	// stfs f0,156(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 156);
	// stb ctx_arrow(ctx)->r10,136(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 136));
	// stb ctx_arrow(ctx)->r10,137(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 137));
	// li ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = 4;
	// stb ctx_arrow(ctx)->r10,144(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 144));
	// stb ctx_arrow(ctx)->r10,145(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 145));
	// li ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r10.s64 = 5;
	// stb ctx_arrow(ctx)->r10,152(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 152));
	// stb ctx_arrow(ctx)->r10,153(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 153));
	// ble ctx_arrow(ctx)->r6,0x823ddd14
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823DDD14;
	// stb ctx_arrow(ctx)->r8,120(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120));
loc_823DDD14:
	// li ctx_arrow(ctx)->r7,6
	ctx_arrow(ctx)->r7.s64 = 6;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// stw ctx_arrow(ctx)->r4,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stb ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80));
	// stb ctx_arrow(ctx)->r7,88(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88));
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stw ctx_arrow(ctx)->r7,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// beq ctx_arrow(ctx)->r6,0x823ddd4c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DDD4C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// stb ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80));
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
loc_823DDD4C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// bl 0x823646d0
	sub_823646D0(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823ddd90
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DDD90;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ddd90
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DDD90;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DDD90:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DDDA8) PPC_WEAK_FUNC(sub_823DDDA8);
PPC_FUNC_IMPL(__imp__sub_823DDDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82364780
	sub_82364780(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823ddde0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DDDE0;
	// lbz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// not ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_823DDDE0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DDDF8) PPC_WEAK_FUNC(sub_823DDDF8);
PPC_FUNC_IMPL(__imp__sub_823DDDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,255
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 255, xer);
	// stw ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// lwz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// lwz ctx_arrow(ctx)->r9,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// bne ctx_arrow(ctx)->r6,0x823dde48
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DDE48;
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
loc_823DDE48:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r5.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r5.u32);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// bl 0x82364838
	sub_82364838(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823DDE80) PPC_WEAK_FUNC(sub_823DDE80);
PPC_FUNC_IMPL(__imp__sub_823DDE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stb ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stb ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88));
	// bl 0x82364728
	sub_82364728(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823DDEC8) PPC_WEAK_FUNC(sub_823DDEC8);
PPC_FUNC_IMPL(__imp__sub_823DDEC8) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823646d0
	sub_823646D0(ctx, base);
	return;
}

alias(__imp__sub_823DDED0) PPC_WEAK_FUNC(sub_823DDED0);
PPC_FUNC_IMPL(__imp__sub_823DDED0) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x82364728
	sub_82364728(ctx, base);
	return;
}

alias(__imp__sub_823DDED8) PPC_WEAK_FUNC(sub_823DDED8);
PPC_FUNC_IMPL(__imp__sub_823DDED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
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
	// bl 0x823ed128
	// stwu ctx_arrow(ctx)->r1,-240(ctx_arrow(ctx)->r1)
	ea = -240 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ddf04
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DDF04;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 8, xer);
	// ble ctx_arrow(ctx)->r6,0x823ddf10
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823DDF10;
loc_823DDF04:
	// lis ctx_arrow(ctx)->r27,-32768
	ctx_arrow(ctx)->r27.s64 = -2147483648;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,16389
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 16389;
	// b 0x823de134
	goto loc_823DE134;
loc_823DDF10:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82364c98
	sub_82364C98(ctx, base);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823de134
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DE134;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x82364ae8
	sub_82364AE8(ctx, base);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// lbz ctx_arrow(ctx)->r11,89(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823de134
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DE134;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823ddf54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DDF54;
	// lis ctx_arrow(ctx)->r27,-32761
	ctx_arrow(ctx)->r27.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,87
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 87;
	// b 0x823de134
	goto loc_823DE134;
loc_823DDF54:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823ddf68
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DDF68;
	// lis ctx_arrow(ctx)->r27,-32761
	ctx_arrow(ctx)->r27.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,87
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r27.u64 | 87;
	// b 0x823de134
	goto loc_823DE134;
loc_823DDF68:
	// lbz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d38c0
	sub_823D38C0(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24,16
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u32 & 0xFFFF;
	// bl 0x823d38c0
	sub_823D38C0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de134
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE134;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
loc_823DDF90:
	// neg ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.s64 = -ctx_arrow(ctx)->r30.s64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 16, xer);
	// andc ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 & ~ctx_arrow(ctx)->r10.u64;
	// bgt ctx_arrow(ctx)->r6,0x823de050
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DE050;
	// beq ctx_arrow(ctx)->r6,0x823de024
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE024;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823de104
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE104;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823ddff4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DDFF4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x823de114
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DE114;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,28,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823ddfec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DDFEC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,30,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 30) & 0x1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,31,31,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 31) & 0x1;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u32 & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// b 0x823de114
	goto loc_823DE114;
loc_823DDFEC:
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// b 0x823de114
	goto loc_823DE114;
loc_823DDFF4:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de010
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE010;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,31,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 31) & 0x1;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u32 & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// b 0x823de114
	goto loc_823DE114;
loc_823DE010:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,30,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x2;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de114
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE114;
	// li ctx_arrow(ctx)->r8,2
	ctx_arrow(ctx)->r8.s64 = 2;
	// b 0x823de114
	goto loc_823DE114;
loc_823DE024:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x10;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de114
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE114;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,30,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 30) & 0x1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,29,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 29) & 0x1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,31,31,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 31) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u32 & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// b 0x823de114
	goto loc_823DE114;
loc_823DE050:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 32, xer);
	// beq ctx_arrow(ctx)->r6,0x823de0d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE0D4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 512, xer);
	// beq ctx_arrow(ctx)->r6,0x823de090
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE090;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1024
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1024, xer);
	// bne ctx_arrow(ctx)->r6,0x823de114
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DE114;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,21,21
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x400;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de07c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE07C;
	// li ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r11.s64 = 7;
	// b 0x823de114
	goto loc_823DE114;
loc_823DE07C:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,26,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x20;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de104
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE104;
	// li ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = 4;
	// b 0x823de0e0
	goto loc_823DE0E0;
loc_823DE090:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,22,22
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x200;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de0a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE0A4;
	// li ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r11.s64 = 6;
	// b 0x823de114
	goto loc_823DE114;
loc_823DE0A4:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x10;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de114
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE114;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,30,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 30) & 0x1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,29,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 29) & 0x1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,31,31,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 31) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u32 & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r8,3
	ctx_arrow(ctx)->r8.s64 = 3;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// b 0x823de114
	goto loc_823DE114;
loc_823DE0D4:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,26,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x20;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de104
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE104;
loc_823DE0E0:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,30,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 30) & 0x1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,29,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 29) & 0x1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,31,31,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 31) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u32 & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// b 0x823de114
	goto loc_823DE114;
loc_823DE104:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0,30,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 0) & 0x2;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de114
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE114;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_823DE114:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + -1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx)->r10.u32);
	// stwx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + ctx_arrow(ctx)->r9.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,4
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 4;
	// bne ctx_arrow(ctx)->r6,0x823ddf90
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DDF90;
loc_823DE134:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823de3a8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DE3A8;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// lbz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r25.s32);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 1;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// beq ctx_arrow(ctx)->r6,0x823de188
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE188;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823de1a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DE1A4;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,14
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 14;
	// b 0x823de350
	goto loc_823DE350;
loc_823DE188:
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823de1a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DE1A4;
	// lis ctx_arrow(ctx)->r31,-32761
	ctx_arrow(ctx)->r31.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,14
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | 14;
	// b 0x823de368
	goto loc_823DE368;
loc_823DE1A4:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de30c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE30C;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24,2,0,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r26.u64;
	// lfs f13,2692(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
loc_823DE1CC:
	// lbz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de2f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE2F8;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
loc_823DE1E0:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 4, xer);
	// bgt ctx_arrow(ctx)->r6,0x823de270
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DE270;
	// lis ctx_arrow(ctx)->r12,-32194
	ctx_arrow(ctx)->r12.s64 = -2109865984;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-7668
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -7668;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r0
	ctr.u64 = ctx_arrow(ctx)->r0.u64;
	// bctr 
	switch (ctx_arrow(ctx)->r9.u64) {
	case 0:
		goto loc_823DE220;
	case 1:
		goto loc_823DE270;
	case 2:
		goto loc_823DE238;
	case 3:
		goto loc_823DE248;
	case 4:
		goto loc_823DE250;
	default:
		__builtin_unreachable();
	}
	// lwz ctx_arrow(ctx)->r17,-7648(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,-7568(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,-7624(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,-7608(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,-7600(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
loc_823DE220:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r7.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823de270
	goto loc_823DE270;
loc_823DE238:
	// lfs f0,4(ctx_arrow(ctx)->r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f11,0(ctx_arrow(ctx)->r6)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f11
	f0.f64 = double(float(f0.f64 + ctx.f11.f64));
	// b 0x823de26c
	goto loc_823DE26C;
loc_823DE248:
	// lfs f0,0(ctx_arrow(ctx)->r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823de254
	goto loc_823DE254;
loc_823DE250:
	// lfs f0,4(ctx_arrow(ctx)->r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
loc_823DE254:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r7.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
loc_823DE26C:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_823DE270:
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// lbz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// beq ctx_arrow(ctx)->r6,0x823de2c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE2C0;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r30.u32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// lbz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r30.u64;
	// stb ctx_arrow(ctx)->r10,1(ctx_arrow(ctx)->r9)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 1));
	// lbz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r30.u64;
	// b 0x823de2e0
	goto loc_823DE2E0;
loc_823DE2C0:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r28.u32));
	// lbz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r28.u64;
loc_823DE2E0:
	// stfs f0,4(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 4);
	// lbz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823de1e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DE1E0;
loc_823DE2F8:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r24.u64;
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r6.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r25.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823de1cc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DE1CC;
loc_823DE30C:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// lbz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r25.s32);
	// stb ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 80, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// beq ctx_arrow(ctx)->r6,0x823de33c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE33C;
	// lwz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// b 0x823de344
	goto loc_823DE344;
loc_823DE33C:
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r28,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
loc_823DE344:
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
loc_823DE350:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de368
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE368;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 1;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
loc_823DE368:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de380
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE380;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 1;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
loc_823DE380:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// blt ctx_arrow(ctx)->r6,0x823de3ac
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DE3AC;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de3ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE3AC;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 20);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// b 0x823ed178
	return;
loc_823DE3A8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
loc_823DE3AC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// b 0x823ed178
	return;
}

alias(__imp__sub_823DE3B8) PPC_WEAK_FUNC(sub_823DE3B8);
PPC_FUNC_IMPL(__imp__sub_823DE3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lfs f13,0(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// stfs f13,116(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// stfs f13,124(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
	// lfs f0,2688(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 2;
	// lbz ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// stfs f0,132(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// stfs f0,140(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 140);
	// stb ctx_arrow(ctx)->r9,112(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112));
	// stfs f0,148(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 148);
	// stb ctx_arrow(ctx)->r9,120(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120));
	// stfs f0,156(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 156);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 1, xer);
	// stb ctx_arrow(ctx)->r10,128(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128));
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// stb ctx_arrow(ctx)->r10,136(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 136));
	// li ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = 4;
	// stb ctx_arrow(ctx)->r10,144(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 144));
	// li ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r10.s64 = 5;
	// stb ctx_arrow(ctx)->r10,152(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 152));
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// ble ctx_arrow(ctx)->r6,0x823de42c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823DE42C;
	// stb ctx_arrow(ctx)->r10,120(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120));
loc_823DE42C:
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f13,16(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stb ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88));
	// li ctx_arrow(ctx)->r9,6
	ctx_arrow(ctx)->r9.s64 = 6;
	// stb ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96));
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stb ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80));
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// bl 0x82364728
	sub_82364728(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823DE478) PPC_WEAK_FUNC(sub_823DE478);
PPC_FUNC_IMPL(__imp__sub_823DE478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3944
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 3944;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// beq ctx_arrow(ctx)->r6,0x823de4b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE4B0;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
loc_823DE4B0:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de4d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE4D0;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32816
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32816;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823DE4D0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DE4E8) PPC_WEAK_FUNC(sub_823DE4E8);
PPC_FUNC_IMPL(__imp__sub_823DE4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32817
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32817;
	// li ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r3.s64 = 8;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de558
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE558;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4008
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4008;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// bl 0x82364ef8
	sub_82364EF8(&ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823de570
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DE570;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823DE558:
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823DE570:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823DE598) PPC_WEAK_FUNC(sub_823DE598);
PPC_FUNC_IMPL(__imp__sub_823DE598) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed124
	// stwu ctx_arrow(ctx)->r1,-224(ctx_arrow(ctx)->r1)
	ea = -224 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// lfs f13,84(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// lfs f0,3904(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f0,80(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// bl 0x82364660
	sub_82364660(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823de6b0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DE6B0;
	// lfs f0,52(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f0,112(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f0,56(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f0,116(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f0,60(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f0,120(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// stb ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 100, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// lfs f0,64(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// stfs f0,124(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
	// lwz ctx_arrow(ctx)->r30,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f0,68(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r29,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f0,128(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
	// lwz ctx_arrow(ctx)->r28,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f0,72(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r27,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f0,132(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// lwz ctx_arrow(ctx)->r26,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f0,76(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r25,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f0,136(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 136);
	// lwz ctx_arrow(ctx)->r24,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r23,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r23.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f0,80(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// li ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r11.s64 = 48;
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r6,3
	ctx_arrow(ctx)->r6.s64 = 3;
	// stfs f0,140(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 140);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stb ctx_arrow(ctx)->r10,102(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 102));
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stb ctx_arrow(ctx)->r9,103(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 103));
	// stb ctx_arrow(ctx)->r8,104(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104));
	// stw ctx_arrow(ctx)->r31,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// stb ctx_arrow(ctx)->r30,105(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 105, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// stb ctx_arrow(ctx)->r29,106(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 106, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// stb ctx_arrow(ctx)->r28,107(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 107, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// stb ctx_arrow(ctx)->r27,108(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 108, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r27), 0);
	// stb ctx_arrow(ctx)->r26,109(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 109, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r26), 0);
	// stb ctx_arrow(ctx)->r25,110(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 110, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r25), 0);
	// stb ctx_arrow(ctx)->r24,111(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 111, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r24), 0);
	// stb ctx_arrow(ctx)->r23,101(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 101, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r23), 0);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// bl 0x82364660
	sub_82364660(&ctx);
loc_823DE6B0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// b 0x823ed174
	return;
}

alias(__imp__sub_823DE6B8) PPC_WEAK_FUNC(sub_823DE6B8);
PPC_FUNC_IMPL(__imp__sub_823DE6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4008
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4008;
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// beq ctx_arrow(ctx)->r6,0x823de6f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE6F0;
	// bl 0x823645f8
	sub_823645F8(ctx, base);
loc_823DE6F0:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de710
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE710;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32817
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32817;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823DE710:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DE728) PPC_WEAK_FUNC(sub_823DE728);
PPC_FUNC_IMPL(__imp__sub_823DE728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 1;
	// stb ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24));
	// li ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = 4;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// beq ctx_arrow(ctx)->r6,0x823de828
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE828;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32785
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32785;
	// li ctx_arrow(ctx)->r3,72
	ctx_arrow(ctx)->r3.s64 = 72;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de7b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE7B8;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e82b0
	sub_823E82B0(ctx, base);
	// b 0x823de7bc
	goto loc_823DE7BC;
loc_823DE7B8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
loc_823DE7BC:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de828
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE828;
	// stw ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823de870
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DE870;
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// beq ctx_arrow(ctx)->r6,0x823de874
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE874;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823DE828:
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// stb ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 24, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r28), 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
	// beq ctx_arrow(ctx)->r6,0x823de870
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE870;
	// lwz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de85c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE85C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DE85C:
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 1;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// stw ctx_arrow(ctx)->r28,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_823DE870:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_823DE874:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823DE880) PPC_WEAK_FUNC(sub_823DE880);
PPC_FUNC_IMPL(__imp__sub_823DE880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de8f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE8F0;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823DE8B0:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32, xer);
	// bne ctx_arrow(ctx)->r6,0x823de8dc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DE8DC;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823df440
	sub_823DF440(ctx, base);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 1;
loc_823DE8DC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// lbz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823de8b0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DE8B0;
loc_823DE8F0:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,48
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 48;
loc_823DE8F4:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823de924
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE924;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823de924
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE924;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823df440
	sub_823DF440(ctx, base);
	// b 0x823de8f4
	goto loc_823DE8F4;
loc_823DE924:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DE940) PPC_WEAK_FUNC(sub_823DE940);
PPC_FUNC_IMPL(__imp__sub_823DE940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// lbz ctx_arrow(ctx)->r11,45(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 48;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// li ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r11.s64 = 6;
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 40);
	// blr 
	return;
}

alias(__imp__sub_823DE980) PPC_WEAK_FUNC(sub_823DE980);
PPC_FUNC_IMPL(__imp__sub_823DE980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823de9bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE9BC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r31.u32, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// beq ctx_arrow(ctx)->r6,0x823de9c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DE9C0;
loc_823DE9BC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823DE9C0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DE9D8) PPC_WEAK_FUNC(sub_823DE9D8);
PPC_FUNC_IMPL(__imp__sub_823DE9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823DE9F4) PPC_WEAK_FUNC(sub_823DE9F4);
PPC_FUNC_IMPL(__imp__sub_823DE9F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DE9F8) PPC_WEAK_FUNC(sub_823DE9F8);
PPC_FUNC_IMPL(__imp__sub_823DE9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823DEA14) PPC_WEAK_FUNC(sub_823DEA14);
PPC_FUNC_IMPL(__imp__sub_823DEA14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DEA18) PPC_WEAK_FUNC(sub_823DEA18);
PPC_FUNC_IMPL(__imp__sub_823DEA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823DEA34) PPC_WEAK_FUNC(sub_823DEA34);
PPC_FUNC_IMPL(__imp__sub_823DEA34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DEA38) PPC_WEAK_FUNC(sub_823DEA38);
PPC_FUNC_IMPL(__imp__sub_823DEA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823DEA54) PPC_WEAK_FUNC(sub_823DEA54);
PPC_FUNC_IMPL(__imp__sub_823DEA54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DEA58) PPC_WEAK_FUNC(sub_823DEA58);
PPC_FUNC_IMPL(__imp__sub_823DEA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823DEA74) PPC_WEAK_FUNC(sub_823DEA74);
PPC_FUNC_IMPL(__imp__sub_823DEA74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DEA78) PPC_WEAK_FUNC(sub_823DEA78);
PPC_FUNC_IMPL(__imp__sub_823DEA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823DEA94) PPC_WEAK_FUNC(sub_823DEA94);
PPC_FUNC_IMPL(__imp__sub_823DEA94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DEA98) PPC_WEAK_FUNC(sub_823DEA98);
PPC_FUNC_IMPL(__imp__sub_823DEA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823DEAB4) PPC_WEAK_FUNC(sub_823DEAB4);
PPC_FUNC_IMPL(__imp__sub_823DEAB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DEAB8) PPC_WEAK_FUNC(sub_823DEAB8);
PPC_FUNC_IMPL(__imp__sub_823DEAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823DEADC) PPC_WEAK_FUNC(sub_823DEADC);
PPC_FUNC_IMPL(__imp__sub_823DEADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DEAE0) PPC_WEAK_FUNC(sub_823DEAE0);
PPC_FUNC_IMPL(__imp__sub_823DEAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823deafc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DEAFC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_823DEAFC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823DEB08) PPC_WEAK_FUNC(sub_823DEB08);
PPC_FUNC_IMPL(__imp__sub_823DEB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823deb24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DEB24;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_823DEB24:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823DEB30) PPC_WEAK_FUNC(sub_823DEB30);
PPC_FUNC_IMPL(__imp__sub_823DEB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lbz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823deb90
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DEB90;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823DEB54:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823deb7c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DEB7C;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
loc_823DEB7C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// lbz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823deb54
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DEB54;
loc_823DEB90:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DEBA0) PPC_WEAK_FUNC(sub_823DEBA0);
PPC_FUNC_IMPL(__imp__sub_823DEBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 48;
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,4020
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 4020;
	// stw ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,748
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 748;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// stb ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 24, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 28);
	// stb ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 36);
	// stw ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 40);
	// stb ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 44, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stb ctx_arrow(ctx)->r11,45(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 45, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 60);
	// blr 
	return;
}

alias(__imp__sub_823DEC08) PPC_WEAK_FUNC(sub_823DEC08);
PPC_FUNC_IMPL(__imp__sub_823DEC08) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4020
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4020;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r31.u32, xer);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// beq ctx_arrow(ctx)->r6,0x823dec5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DEC5C;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r31.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823dec5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DEC5C;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_823DEC5C:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823deccc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DECCC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823de880
	sub_823DE880(ctx, base);
	// lbz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823decbc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DECBC;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823DEC80:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823deca8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DECA8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DECA8:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// lbz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823dec80
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DEC80;
loc_823DECBC:
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 1;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
loc_823DECCC:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,48
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 48;
loc_823DECD0:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823ded0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DED0C;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823ded0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DED0C;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823decd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DECD0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823decd0
	goto loc_823DECD0;
loc_823DED0C:
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823ded20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DED20;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// bne ctx_arrow(ctx)->r6,0x823ded28
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DED28;
loc_823DED20:
	// li ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r11.s64 = 6;
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
loc_823DED28:
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,748
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 748;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 0);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DED50) PPC_WEAK_FUNC(sub_823DED50);
PPC_FUNC_IMPL(__imp__sub_823DED50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823dede8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DEDE8;
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// lbz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = 4;
	// stw ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stb ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 44, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stw ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// beq ctx_arrow(ctx)->r6,0x823dedf4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DEDF4;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823DED98:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,2,2
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20000000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dedc4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DEDC4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823e95e0
	sub_823E95E0(ctx, base);
	// b 0x823dedd0
	goto loc_823DEDD0;
loc_823DEDC4:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823dfef8
	sub_823DFEF8(ctx, base);
loc_823DEDD0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// lbz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823ded98
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DED98;
	// b 0x823dedf4
	goto loc_823DEDF4;
loc_823DEDE8:
	// lbz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 64;
	// stb ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823DEDF4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DEE10) PPC_WEAK_FUNC(sub_823DEE10);
PPC_FUNC_IMPL(__imp__sub_823DEE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,92
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 92;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// li ctx_arrow(ctx)->r8,2
	ctx_arrow(ctx)->r8.s64 = 2;
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,52(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r26,300(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// stw ctx_arrow(ctx)->r8,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 1;
	// stb ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 24, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 2);
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// stw ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// beq ctx_arrow(ctx)->r6,0x823deea8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DEEA8;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u64;
	// b 0x823deeb0
	goto loc_823DEEB0;
loc_823DEEA8:
	// lis ctx_arrow(ctx)->r29,-32761
	ctx_arrow(ctx)->r29.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,14
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 14;
loc_823DEEB0:
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r27.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823df01c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DF01C;
	// lis ctx_arrow(ctx)->r11,-30009
	ctx_arrow(ctx)->r11.s64 = -1966669824;
	// ori ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,25
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r11.u64 | 25;
loc_823DEEC4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df090
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF090;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,2,2
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20000000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823deee4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DEEE4;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// b 0x823deef4
	goto loc_823DEEF4;
loc_823DEEE4:
	// lbz ctx_arrow(ctx)->r11,6(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 2);
	// lwzx ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
loc_823DEEF4:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r27,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e8b98
	sub_823E8B98(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r27.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823deff4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DEFF4;
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 9, xer);
	// bne ctx_arrow(ctx)->r6,0x823def50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DEF50;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,8,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0xFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r25.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x823def50
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DEF50;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// b 0x823defc8
	goto loc_823DEFC8;
loc_823DEF50:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823defac
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DEFAC;
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823def94
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DEF94;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 6, xer);
	// bgt ctx_arrow(ctx)->r6,0x823def94
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DEF94;
	// stw ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
loc_823DEF94:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u32 & 0xFF;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r9.u32);
loc_823DEFAC:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r22.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823defc4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DEFC4;
	// li ctx_arrow(ctx)->r23,1
	ctx_arrow(ctx)->r23.s64 = 1;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u64;
	// b 0x823defd0
	goto loc_823DEFD0;
loc_823DEFC4:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
loc_823DEFC8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823deff8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DEFF8;
loc_823DEFD0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r26)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df014
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF014;
loc_823DEFF4:
	// lwz ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
loc_823DEFF8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df014
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF014;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DF014:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823deec4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DEEC4;
loc_823DF01C:
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r24,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r24.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df060
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF060;
loc_823DF028:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,255
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 255;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df058
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF058;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DF058:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823df028
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF028;
loc_823DF060:
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r27,24(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 24, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r27), 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df080
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF080;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 1;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// stw ctx_arrow(ctx)->r27,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
loc_823DF080:
	// stw ctx_arrow(ctx)->r27,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed170
	return;
loc_823DF090:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823df01c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DF01C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df0b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF0B4;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r24.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823df0b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF0B4;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r22.u64;
	// b 0x823df01c
	goto loc_823DF01C;
loc_823DF0B4:
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r24,24(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 24, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r24), 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df0d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF0D4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DF0D4:
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed170
	return;
}

alias(__imp__sub_823DF0E8) PPC_WEAK_FUNC(sub_823DF0E8);
PPC_FUNC_IMPL(__imp__sub_823DF0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 6, xer);
	// beq ctx_arrow(ctx)->r6,0x823df1b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF1B8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// bne ctx_arrow(ctx)->r6,0x823df128
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF128;
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823df1b8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF1B8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df1b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF1B8;
loc_823DF128:
	// li ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r11.s64 = 5;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// beq ctx_arrow(ctx)->r6,0x823df14c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF14C;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 60);
	// bl 0x823de880
	sub_823DE880(&ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
loc_823DF14C:
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df194
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF194;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df168
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF168;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// b 0x823df180
	goto loc_823DF180;
loc_823DF168:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r3.u32);
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_823DF180:
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DF194:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df1b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF1B8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x823df1bc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF1BC;
	// li ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r11.s64 = 6;
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823DF1B8:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823DF1BC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DF1C8) PPC_WEAK_FUNC(sub_823DF1C8);
PPC_FUNC_IMPL(__imp__sub_823DF1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 48;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 8);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// stw ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// blr 
	return;
}

alias(__imp__sub_823DF1E8) PPC_WEAK_FUNC(sub_823DF1E8);
PPC_FUNC_IMPL(__imp__sub_823DF1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,48
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 48;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
loc_823DF1F8:
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r4.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df214
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF214;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df1f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF1F8;
	// blr 
	return;
loc_823DF214:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// blr 
	return;
}

alias(__imp__sub_823DF238) PPC_WEAK_FUNC(sub_823DF238);
PPC_FUNC_IMPL(__imp__sub_823DF238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
}

alias(__imp__sub_823DF268) PPC_WEAK_FUNC(sub_823DF268);
PPC_FUNC_IMPL(__imp__sub_823DF268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df2cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF2CC;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1F;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823df2c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF2C4;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,168(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFFFF;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823DF2C4:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
loc_823DF2CC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823DF2E0) PPC_WEAK_FUNC(sub_823DF2E0);
PPC_FUNC_IMPL(__imp__sub_823DF2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df344
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF344;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1F;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823df33c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF33C;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,172(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFFFF;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823DF33C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
loc_823DF344:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823DF358) PPC_WEAK_FUNC(sub_823DF358);
PPC_FUNC_IMPL(__imp__sub_823DF358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823dec08
	sub_823DEC08(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df398
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF398;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32780
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32780;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823DF398:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DF3B0) PPC_WEAK_FUNC(sub_823DF3B0);
PPC_FUNC_IMPL(__imp__sub_823DF3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823df3fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF3FC;
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df3fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF3FC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df3fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF3FC;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
loc_823DF3FC:
	// lbz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,25,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,64
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 64, xer);
	// bne ctx_arrow(ctx)->r6,0x823df428
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF428;
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823df428
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF428;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,191
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 191;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stb ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bl 0x823ded50
	sub_823DED50(ctx, base);
loc_823DF428:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DF440) PPC_WEAK_FUNC(sub_823DF440);
PPC_FUNC_IMPL(__imp__sub_823DF440) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// b 0x823e9510
	sub_823E9510(ctx, base);
	return;
}

alias(__imp__sub_823DF448) PPC_WEAK_FUNC(sub_823DF448);
PPC_FUNC_IMPL(__imp__sub_823DF448) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// bgt ctx_arrow(ctx)->r6,0x823df548
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DF548;
	// lbz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r10.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df548
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF548;
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r28.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 ^ 1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,5,26,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 5) & 0x20) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 32, xer);
	// stb ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r30.u32 + 56, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bne ctx_arrow(ctx)->r6,0x823df4ac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF4AC;
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// stw ctx_arrow(ctx)->r3,112(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 112);
	// b 0x823df4e0
	goto loc_823DF4E0;
loc_823DF4AC:
	// lwz ctx_arrow(ctx)->r31,112(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,60
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 60;
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r31.s64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df4e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF4E0;
loc_823DF4C8:
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df4c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF4C8;
loc_823DF4E0:
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,40
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r30.s64 + 40;
loc_823DF4E8:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r29.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df50c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF50C;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1570
	sub_823E1570(ctx, base);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823df4e8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DF4E8;
loc_823DF50C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823df548
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF548;
	// lwz ctx_arrow(ctx)->r31,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,196
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,232(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 232);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823DF548:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823DF558) PPC_WEAK_FUNC(sub_823DF558);
PPC_FUNC_IMPL(__imp__sub_823DF558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 40;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df598
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF598;
loc_823DF578:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1378
	sub_823E1378(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823df5a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF5A4;
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df578
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF578;
loc_823DF598:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823DF5A4:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DF5B0) PPC_WEAK_FUNC(sub_823DF5B0);
PPC_FUNC_IMPL(__imp__sub_823DF5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df5e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF5E8;
loc_823DF5D4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e13f0
	sub_823E13F0(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df5d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF5D4;
loc_823DF5E8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DF600) PPC_WEAK_FUNC(sub_823DF600);
PPC_FUNC_IMPL(__imp__sub_823DF600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df638
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF638;
loc_823DF624:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1470
	sub_823E1470(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df624
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF624;
loc_823DF638:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DF650) PPC_WEAK_FUNC(sub_823DF650);
PPC_FUNC_IMPL(__imp__sub_823DF650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 40;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df688
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF688;
loc_823DF670:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e14d8
	sub_823E14D8(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df670
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF670;
loc_823DF688:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DF690) PPC_WEAK_FUNC(sub_823DF690);
PPC_FUNC_IMPL(__imp__sub_823DF690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 40;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df6c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF6C8;
loc_823DF6B0:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e14f0
	sub_823E14F0(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df6b0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF6B0;
loc_823DF6C8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DF6D0) PPC_WEAK_FUNC(sub_823DF6D0);
PPC_FUNC_IMPL(__imp__sub_823DF6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 40;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df708
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF708;
loc_823DF6F0:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1508
	sub_823E1508(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df6f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF6F0;
loc_823DF708:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DF710) PPC_WEAK_FUNC(sub_823DF710);
PPC_FUNC_IMPL(__imp__sub_823DF710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 40;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df748
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF748;
loc_823DF730:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1520
	sub_823E1520(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df730
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF730;
loc_823DF748:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DF750) PPC_WEAK_FUNC(sub_823DF750);
PPC_FUNC_IMPL(__imp__sub_823DF750) {
	PPC_FUNC_PROLOGUE();
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,40
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 40;
loc_823DF778:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r27.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df7a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF7A0;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1538
	sub_823E1538(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823df778
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823DF778;
loc_823DF7A0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823DF7A8) PPC_WEAK_FUNC(sub_823DF7A8);
PPC_FUNC_IMPL(__imp__sub_823DF7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df7e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF7E8;
loc_823DF7CC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1558
	sub_823E1558(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823df804
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF804;
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df7cc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF7CC;
loc_823DF7E8:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823DF7EC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DF804:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x823df7ec
	goto loc_823DF7EC;
}

alias(__imp__sub_823DF810) PPC_WEAK_FUNC(sub_823DF810);
PPC_FUNC_IMPL(__imp__sub_823DF810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823df84c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF84C;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823cfe48
	sub_823CFE48(ctx, base);
loc_823DF84C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DF860) PPC_WEAK_FUNC(sub_823DF860);
PPC_FUNC_IMPL(__imp__sub_823DF860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// blt ctx_arrow(ctx)->r6,0x823df878
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DF878;
	// stfs f1,116(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 116);
	// b 0x823df87c
	goto loc_823DF87C;
loc_823DF878:
	// stfs f0,116(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 116);
loc_823DF87C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823df5b0
	sub_823DF5B0(ctx, base);
	return;
}

alias(__imp__sub_823DF888) PPC_WEAK_FUNC(sub_823DF888);
PPC_FUNC_IMPL(__imp__sub_823DF888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DF890) PPC_WEAK_FUNC(sub_823DF890);
PPC_FUNC_IMPL(__imp__sub_823DF890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823df8f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF8F8;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// blt ctx_arrow(ctx)->r6,0x823df8cc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DF8CC;
	// stfs f1,120(ctx_arrow(ctx)->r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 120);
	// b 0x823df8d0
	goto loc_823DF8D0;
loc_823DF8CC:
	// stfs f0,120(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 120);
loc_823DF8D0:
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,40
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r30.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r29.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823df8f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF8F8;
loc_823DF8E0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lfs f1,120(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823e1458
	sub_823E1458(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r29.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823df8e0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF8E0;
loc_823DF8F8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DF900) PPC_WEAK_FUNC(sub_823DF900);
PPC_FUNC_IMPL(__imp__sub_823DF900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// stfs f1,124(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 124);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823df600
	sub_823DF600(ctx, base);
	return;
}

alias(__imp__sub_823DF910) PPC_WEAK_FUNC(sub_823DF910);
PPC_FUNC_IMPL(__imp__sub_823DF910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DF918) PPC_WEAK_FUNC(sub_823DF918);
PPC_FUNC_IMPL(__imp__sub_823DF918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x823df960
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DF960;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 2);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// b 0x823df964
	goto loc_823DF964;
loc_823DF960:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823DF964:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,2,22,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 2) & 0x3FC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r3,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823DF990) PPC_WEAK_FUNC(sub_823DF990);
PPC_FUNC_IMPL(__imp__sub_823DF990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,124(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f13,96(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

alias(__imp__sub_823DF9A0) PPC_WEAK_FUNC(sub_823DF9A0);
PPC_FUNC_IMPL(__imp__sub_823DF9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df9f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF9F0;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823df9e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DF9E0;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DF9E0:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-255
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -255;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_823DF9F0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823DFA00) PPC_WEAK_FUNC(sub_823DFA00);
PPC_FUNC_IMPL(__imp__sub_823DFA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfa50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFA50;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfa40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFA40;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFA40:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
loc_823DFA50:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823DFA60) PPC_WEAK_FUNC(sub_823DFA60);
PPC_FUNC_IMPL(__imp__sub_823DFA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823df238
	sub_823DF238(ctx, base);
	return;
}

alias(__imp__sub_823DFA78) PPC_WEAK_FUNC(sub_823DFA78);
PPC_FUNC_IMPL(__imp__sub_823DFA78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DFA80) PPC_WEAK_FUNC(sub_823DFA80);
PPC_FUNC_IMPL(__imp__sub_823DFA80) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfb0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFB0C;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfad0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFAD0;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFAD0:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfb0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFB0C;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfb10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFB10;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823dfb10
	goto loc_823DFB10;
loc_823DFB0C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_823DFB10:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DFB28) PPC_WEAK_FUNC(sub_823DFB28);
PPC_FUNC_IMPL(__imp__sub_823DFB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823DFB54) PPC_WEAK_FUNC(sub_823DFB54);
PPC_FUNC_IMPL(__imp__sub_823DFB54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823DFB58) PPC_WEAK_FUNC(sub_823DFB58);
PPC_FUNC_IMPL(__imp__sub_823DFB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823DFB70) PPC_WEAK_FUNC(sub_823DFB70);
PPC_FUNC_IMPL(__imp__sub_823DFB70) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x823dfbbc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DFBBC;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 2);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// b 0x823dfbc0
	goto loc_823DFBC0;
loc_823DFBBC:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823DFBC0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r30.u64;
	// lbz ctx_arrow(ctx)->r3,2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DFBF8) PPC_WEAK_FUNC(sub_823DFBF8);
PPC_FUNC_IMPL(__imp__sub_823DFBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5064
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 5064;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,5048
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 5048;
	// lwz ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// beq ctx_arrow(ctx)->r6,0x823dfc48
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFC48;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
	// lhz ctx_arrow(ctx)->r4,1(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 1);
	// bl 0x823d5a18
	sub_823D5A18(ctx, base);
loc_823DFC48:
	// lwz ctx_arrow(ctx)->r3,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,40
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r29.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfc98
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFC98;
loc_823DFC58:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r29.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823dfc58
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DFC58;
loc_823DFC98:
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfcd4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFCD4;
	// lwz ctx_arrow(ctx)->r10,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfcd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFCD0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823dfcd4
	goto loc_823DFCD4;
loc_823DFCD0:
	// bl 0x8209d150
	sub_8209D150(ctx, base);
loc_823DFCD4:
	// lbz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823dfcfc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DFCFC;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFCFC:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,748
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 748;
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 72);
	// stw ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 60);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 0);
	// bl 0x823e0e30
	sub_823E0E30(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823DFD40) PPC_WEAK_FUNC(sub_823DFD40);
PPC_FUNC_IMPL(__imp__sub_823DFD40) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -4;
	// b 0x823e0820
	sub_823E0820(ctx, base);
	return;
}

alias(__imp__sub_823DFD48) PPC_WEAK_FUNC(sub_823DFD48);
PPC_FUNC_IMPL(__imp__sub_823DFD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,239
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 239;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stb ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 56, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DFDB0) PPC_WEAK_FUNC(sub_823DFDB0);
PPC_FUNC_IMPL(__imp__sub_823DFDB0) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 6, xer);
	// bne ctx_arrow(ctx)->r6,0x823dfdfc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DFDFC;
	// bl 0x823df7a8
	sub_823DF7A8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823dfdfc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DFDFC;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823dfe20
	goto loc_823DFE20;
loc_823DFDFC:
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfe20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFE20;
loc_823DFE0C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1f80
	sub_823E1F80(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823dfe0c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DFE0C;
loc_823DFE20:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DFE38) PPC_WEAK_FUNC(sub_823DFE38);
PPC_FUNC_IMPL(__imp__sub_823DFE38) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823dfe98
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DFE98;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823dfedc
	goto loc_823DFEDC;
loc_823DFE98:
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,60
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 60;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823dfec0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DFEC0;
loc_823DFEA8:
	// lwz ctx_arrow(ctx)->r8,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823dfec0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DFEC0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823dfea8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DFEA8;
loc_823DFEC0:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_823DFEDC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823DFEF8) PPC_WEAK_FUNC(sub_823DFEF8);
PPC_FUNC_IMPL(__imp__sub_823DFEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,72
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 72;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 8);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// stw ctx_arrow(ctx)->r4,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// blr 
	return;
}

alias(__imp__sub_823DFF18) PPC_WEAK_FUNC(sub_823DFF18);
PPC_FUNC_IMPL(__imp__sub_823DFF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,-3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + -3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e002c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E002C;
	// lis ctx_arrow(ctx)->r12,-32194
	ctx_arrow(ctx)->r12.s64 = -2109865984;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-168
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -168;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r0
	ctr.u64 = ctx_arrow(ctx)->r0.u64;
	// bctr 
	switch (ctx_arrow(ctx)->r11.u64) {
	case 0:
		goto loc_823DFF68;
	case 1:
		goto loc_823DFFA8;
	case 2:
		goto loc_823E0008;
	case 3:
		goto loc_823E0048;
	default:
		__builtin_unreachable();
	}
	// lwz ctx_arrow(ctx)->r17,-152(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,-88(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,72(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
loc_823DFF68:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bge ctx_arrow(ctx)->r6,0x823e002c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E002C;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 84);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0030
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0030;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823d5a80
	sub_823D5A80(ctx, base);
	// b 0x823e0030
	goto loc_823E0030;
loc_823DFFA8:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// bge ctx_arrow(ctx)->r6,0x823e002c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E002C;
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 84);
	// stw ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
	// lhz ctx_arrow(ctx)->r4,1(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + 1);
	// bl 0x823d5a00
	sub_823D5A00(ctx, base);
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0030
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0030;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823e0030
	goto loc_823E0030;
loc_823E0008:
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e002c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E002C;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
	// lhz ctx_arrow(ctx)->r4,1(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 1);
	// bl 0x823d5a18
	sub_823D5A18(ctx, base);
loc_823E002C:
	// stw ctx_arrow(ctx)->r30,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 84);
loc_823E0030:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823E0048:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 6, xer);
	// bge ctx_arrow(ctx)->r6,0x823e002c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E002C;
	// li ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r11.s64 = 6;
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 84);
	// beq ctx_arrow(ctx)->r6,0x823e0080
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0080;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
	// lhz ctx_arrow(ctx)->r4,1(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 1);
	// bl 0x823d5a18
	sub_823D5A18(ctx, base);
loc_823E0080:
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0030
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0030;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823e0030
	goto loc_823E0030;
}

alias(__imp__sub_823E00B8) PPC_WEAK_FUNC(sub_823E00B8);
PPC_FUNC_IMPL(__imp__sub_823E00B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r3.s64 + 2;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0108
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0108;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823dfb70
	sub_823DFB70(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,2,22,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0x3FC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 1;
loc_823E0108:
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0138
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0138;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823E0118:
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 2);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r31.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// blt ctx_arrow(ctx)->r6,0x823e0118
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E0118;
loc_823E0138:
	// lbz ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E0148) PPC_WEAK_FUNC(sub_823E0148);
PPC_FUNC_IMPL(__imp__sub_823E0148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r3.s64 + 2;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e019c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E019C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823dfb70
	sub_823DFB70(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,2,22,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0x3FC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 1;
loc_823E019C:
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29,24
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r29.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e01cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E01CC;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823E01AC:
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 2);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r31.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// blt ctx_arrow(ctx)->r6,0x823e01ac
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E01AC;
loc_823E01CC:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,2,22,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 2) & 0x3FC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r3,1(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E01E0) PPC_WEAK_FUNC(sub_823E01E0);
PPC_FUNC_IMPL(__imp__sub_823E01E0) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0320
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0320;
	// bl 0x823dfb70
	sub_823DFB70(ctx, base);
	// clrlwi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0224
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0224;
	// li ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = 4;
	// bl 0x8209d088
	sub_8209D088(ctx, base);
	// b 0x823e0268
	goto loc_823E0268;
loc_823E0224:
	// lis ctx_arrow(ctx)->r11,1365
	ctx_arrow(ctx)->r11.s64 = 89456640;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,21845
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 21845;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e0250
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E0250;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li ctx_arrow(ctx)->r10,-5
	ctx_arrow(ctx)->r10.s64 = -5;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// ble ctx_arrow(ctx)->r6,0x823e0254
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823E0254;
loc_823E0250:
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
loc_823E0254:
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,93
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 93;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
loc_823E0268:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e02a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E02A8;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r27.s64 + -1;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r28.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e02a0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E02A0;
loc_823E0288:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823dd540
	sub_823DD540(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,48
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 48;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823e0288
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E0288;
loc_823E02A0:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
	// b 0x823e02ac
	goto loc_823E02AC;
loc_823E02A8:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823E02AC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 100);
	// beq ctx_arrow(ctx)->r6,0x823e0374
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0374;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lwz ctx_arrow(ctx)->r28,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
loc_823E02C4:
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r27.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823e032c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E032C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r29,100(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823df918
	sub_823DF918(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823cffe8
	sub_823CFFE8(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r4,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
	// bl 0x823dd9e8
	sub_823DD9E8(ctx, base);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// bge ctx_arrow(ctx)->r6,0x823e02c4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E02C4;
loc_823E0320:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
loc_823E032C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e0320
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E0320;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0320
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0320;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823E0340:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823dd2e0
	sub_823DD2E0(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r27.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823e0340
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E0340;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
loc_823E0374:
	// lis ctx_arrow(ctx)->r3,-32761
	ctx_arrow(ctx)->r3.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 14;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823E0388) PPC_WEAK_FUNC(sub_823E0388);
PPC_FUNC_IMPL(__imp__sub_823E0388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-8
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -8;
	// bl 0x823ed548
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f31,92(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f30,8(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// lfs f29,116(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f29.f64 = double(temp.f32);
	// lfs f28,28(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f28.f64 = double(temp.f32);
	// lhz ctx_arrow(ctx)->r4,1(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 1);
	// bl 0x823d6a70
	sub_823D6A70(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f28.f64));
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-8
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -8;
	// bl 0x823ed594
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823E03E8) PPC_WEAK_FUNC(sub_823E03E8);
PPC_FUNC_IMPL(__imp__sub_823E03E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,60
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 + 60;
	// lwz ctx_arrow(ctx)->r8,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
loc_823E0400:
	// lwz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0434
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0434;
	// lwz ctx_arrow(ctx)->r7,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r7)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,27
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u32 & 0x1F;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0444
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0444;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r3.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x823e0434
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823E0434;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
loc_823E0434:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0400
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0400;
	// blr 
	return;
loc_823E0444:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// blr 
	return;
}

alias(__imp__sub_823E0450) PPC_WEAK_FUNC(sub_823E0450);
PPC_FUNC_IMPL(__imp__sub_823E0450) {
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
	// stwu ctx_arrow(ctx)->r1,-1168(ctx_arrow(ctx)->r1)
	ea = -1168 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r26,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,1024
	ctx_arrow(ctx)->r5.s64 = 1024;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,60
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 60;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r6.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0514
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0514;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
loc_823E04A0:
	// lwz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r26.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0508
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0508;
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1F;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 9, xer);
	// beq ctx_arrow(ctx)->r6,0x823e04cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E04CC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,18
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 18, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0508
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0508;
loc_823E04CC:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r27.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x823e0508
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823E0508;
	// lwz ctx_arrow(ctx)->r10,7(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r29.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823e0508
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E0508;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r28.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e0508
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E0508;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32 + 0);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,4
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 4;
	// bne ctx_arrow(ctx)->r6,0x823e0514
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0514;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,256
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 256, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0514
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0514;
loc_823E0508:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r6.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e04a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E04A0;
loc_823E0514:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823e0558
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823E0558;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e053c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E053C;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,1168
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 1168;
	// b 0x823ed180
	return;
loc_823E053C:
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r8.s64 + -1;
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823ce788
	sub_823CE788(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
loc_823E0558:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,1168
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 1168;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823E0560) PPC_WEAK_FUNC(sub_823E0560);
PPC_FUNC_IMPL(__imp__sub_823E0560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u32 & 0xFF;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e058c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E058C;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,116(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 116);
	// b 0x823e05b8
	goto loc_823E05B8;
loc_823E058C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823e05a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E05A4;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,124(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 124);
	// b 0x823e05b8
	goto loc_823E05B8;
loc_823E05A4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e05b8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E05B8;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,120(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 120);
loc_823E05B8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823dfb70
	sub_823DFB70(ctx, base);
	// clrlwi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0610
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0610;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823E05D0:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 3);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r29.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0600
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0600;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823dd138
	sub_823DD138(ctx, base);
loc_823E0600:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r28.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823e05d0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E05D0;
loc_823E0610:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0644
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0644;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e06a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E06A0;
loc_823E0628:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e13f0
	sub_823E13F0(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0628
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0628;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823E0644:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823e065c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E065C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823df600
	sub_823DF600(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823E065C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e06a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E06A0;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823e06a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E06A0;
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30,40
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r30.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r29.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e06a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E06A0;
loc_823E0688:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lfs f1,120(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823e1458
	sub_823E1458(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r29.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0688
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0688;
loc_823E06A0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E06A8) PPC_WEAK_FUNC(sub_823E06A8);
PPC_FUNC_IMPL(__imp__sub_823E06A8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2444
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2444;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// bl 0x823e0e00
	sub_823E0E00(&ctx);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r7,-32256
	ctx_arrow(ctx)->r7.s64 = -2113929216;
	// stw ctx_arrow(ctx)->r27,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,40
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 40;
	// stw ctx_arrow(ctx)->r30,32(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,60
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 60;
	// stw ctx_arrow(ctx)->r28,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r31,72
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r31.s64 + 72;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfs f13,2688(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r7,-32249
	ctx_arrow(ctx)->r7.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5064
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 5064;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,5048
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r7.s64 + 5048;
	// lis ctx_arrow(ctx)->r7,-32249
	ctx_arrow(ctx)->r7.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,748
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 748;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// stw ctx_arrow(ctx)->r29,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// stb ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 56, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 0);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 4);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 8);
	// stw ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 0);
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 4);
	// stw ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 8);
	// stfs f0,116(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 116);
	// lwz ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f0,120(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 120);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 84);
	// stfs f13,124(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 124);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 88);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 100);
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 104);
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 108);
	// stw ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 112);
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 128);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4024
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4024;
	// lbz ctx_arrow(ctx)->r9,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 2);
	// lfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,92(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 92);
	// lhz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 4);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2400
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2400, xer);
	// blt ctx_arrow(ctx)->r6,0x823e07d0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E07D0;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,3060(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823e0804
	goto loc_823E0804;
loc_823E07D0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-2400
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -2400, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e07e4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E07E4;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,14264(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x823e0804
	goto loc_823E0804;
loc_823E07E4:
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfd f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,3932(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_823E0804:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stfs f0,96(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 96);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dff18
	sub_823DFF18(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823E0820) PPC_WEAK_FUNC(sub_823E0820);
PPC_FUNC_IMPL(__imp__sub_823E0820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823dfbf8
	sub_823DFBF8(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0860
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0860;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32875
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32875;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823E0860:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E0878) PPC_WEAK_FUNC(sub_823E0878);
PPC_FUNC_IMPL(__imp__sub_823E0878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0944
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0944;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,144(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e08f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E08F4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823df810
	sub_823DF810(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823e08d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E08D8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e08f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E08F4;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823E08D8:
	// li ctx_arrow(ctx)->r4,6
	ctx_arrow(ctx)->r4.s64 = 6;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823dff18
	sub_823DFF18(ctx, base);
	// lis ctx_arrow(ctx)->r3,-30009
	ctx_arrow(ctx)->r3.s64 = -1966669824;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 8;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823E08F4:
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,40
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 40;
loc_823E08FC:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r28.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0920
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1190
	sub_823E1190(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823e08fc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E08FC;
	// b 0x823e0964
	goto loc_823E0964;
loc_823E0920:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e0964
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E0964;
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r4.s64 = 4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 104);
	// bl 0x823dff18
	sub_823DFF18(&ctx);
	// b 0x823e0964
	goto loc_823E0964;
loc_823E0944:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// bge ctx_arrow(ctx)->r6,0x823e095c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E095C;
	// lbz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 64;
	// stb ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r30.u32 + 56, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// b 0x823e0964
	goto loc_823E0964;
loc_823E095C:
	// lis ctx_arrow(ctx)->r29,-30009
	ctx_arrow(ctx)->r29.s64 = -1966669824;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,6
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 6;
loc_823E0964:
	// lwz ctx_arrow(ctx)->r31,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,196
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,232(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 232);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E09A8) PPC_WEAK_FUNC(sub_823E09A8);
PPC_FUNC_IMPL(__imp__sub_823E09A8) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lbz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e09dc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E09DC;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,223
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 223;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = 1;
	// stb ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r30)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r30.u32 + 56, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823E09DC:
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 6, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0a50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0A50;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0a08
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0A08;
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0a50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0A50;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0a50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0A50;
	// b 0x823e0a10
	goto loc_823E0A10;
loc_823E0A08:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0a18
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0A18;
loc_823E0A10:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 128);
loc_823E0A18:
	// li ctx_arrow(ctx)->r4,5
	ctx_arrow(ctx)->r4.s64 = 5;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823dff18
	sub_823DFF18(ctx, base);
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 40;
loc_823E0A2C:
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0a50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0A50;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1198
	sub_823E1198(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823e0a2c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E0A2C;
loc_823E0A50:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E0A60) PPC_WEAK_FUNC(sub_823E0A60);
PPC_FUNC_IMPL(__imp__sub_823E0A60) {
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
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// lbz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0de4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0DE4;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0c28
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0C28;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0c28
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0C28;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0b04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0B04;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28,40
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r28.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0ad0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0AD0;
loc_823E0AAC:
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0b04
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0B04;
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0b04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0B04;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0aac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0AAC;
loc_823E0AD0:
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823dff18
	sub_823DFF18(ctx, base);
	// lbz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,25,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,64
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 64, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0b04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0B04;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,191
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 191;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// stb ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r28)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r28.u32 + 56, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bl 0x823e0878
	sub_823E0878(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e0de4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E0DE4;
loc_823E0B04:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0b58
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0B58;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823dfb70
	sub_823DFB70(ctx, base);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0b58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0B58;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823E0B30:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823dd4a0
	sub_823DD4A0(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823e0b30
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E0B30;
loc_823E0B58:
	// lwz ctx_arrow(ctx)->r31,44(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28,40
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r28.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0b7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0B7C;
loc_823E0B68:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1ed0
	sub_823E1ED0(ctx, base);
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0b68
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0B68;
loc_823E0B7C:
	// lwz ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28,60
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r28.s64 + 60;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0bdc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0BDC;
loc_823E0B8C:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,76(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e0bdc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E0BDC;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stw ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r3,64(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0b8c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0B8C;
loc_823E0BDC:
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lwz ctx_arrow(ctx)->r11,-21864(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0c9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0C9C;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x82408118
	sub_82408118(ctx, base);
	// ld ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1000
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 * 1000;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// ld ctx_arrow(ctx)->r11,-20456(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// divd ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 / ctx_arrow(ctx)->r11.s64;
	// rotldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u64, 1);
	// tdllei ctx_arrow(ctx)->r11,0
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// std ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// andc ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ~ctx_arrow(ctx)->r10.u64;
	// tdlgei ctx_arrow(ctx)->r11,-1
	// lwz ctx_arrow(ctx)->r3,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823e0ca0
	goto loc_823E0CA0;
loc_823E0C28:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r28.s64 + 4;
	// bl 0x823e0f78
	sub_823E0F78(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0c40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0C40;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823df5b0
	sub_823DF5B0(ctx, base);
loc_823E0C40:
	// lwz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r28,40
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r28.s64 + 40;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r8.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0c88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0C88;
loc_823E0C50:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0c7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0C7C;
	// lwz ctx_arrow(ctx)->r9,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0b04
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0B04;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0c7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0C7C;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0b04
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0B04;
loc_823E0C7C:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r8.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0c50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0C50;
loc_823E0C88:
	// li ctx_arrow(ctx)->r4,6
	ctx_arrow(ctx)->r4.s64 = 6;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823dff18
	sub_823DFF18(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed180
	return;
loc_823E0C9C:
	// bl 0x8235d778
	sub_8235D778(ctx, base);
loc_823E0CA0:
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r31,64(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// beq ctx_arrow(ctx)->r6,0x823e0d38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0D38;
loc_823E0CB8:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r27.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e0d38
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E0D38;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 10, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0ce4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0CE4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 11, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0d2c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0D2C;
loc_823E0CE4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e97e8
	sub_823E97E8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0d24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0D24;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,36(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 36);
	// lwz ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r30.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0d2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0D2C;
loc_823E0D0C:
	// lwz ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e9510
	sub_823E9510(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0d0c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0D0C;
	// b 0x823e0d2c
	goto loc_823E0D2C;
loc_823E0D24:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e9510
	sub_823E9510(ctx, base);
loc_823E0D2C:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r29.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r30.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0cb8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0CB8;
loc_823E0D38:
	// lwz ctx_arrow(ctx)->r31,76(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r28,72
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r28.s64 + 72;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r26.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0de4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0DE4;
loc_823E0D48:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,0,24
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,128
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 128, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0dd8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0DD8;
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,1,1
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x40000000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0d7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0D7C;
	// lwz ctx_arrow(ctx)->r30,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823e0d94
	goto loc_823E0D94;
loc_823E0D7C:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,25,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x40;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,64
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 64, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0d90
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0D90;
	// lwz ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823e0d94
	goto loc_823E0D94;
loc_823E0D90:
	// lwz ctx_arrow(ctx)->r30,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
loc_823E0D94:
	// lwz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r29,76(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e95d0
	sub_823E95D0(ctx, base);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 - ctx_arrow(ctx)->r30.s64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823e0dd8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E0DD8;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// bl 0x823e95e0
	sub_823E95E0(&ctx);
loc_823E0DD8:
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r27.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, ctx_arrow(ctx)->r26.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0d48
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0D48;
loc_823E0DE4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823E0DF0) PPC_WEAK_FUNC(sub_823E0DF0);
PPC_FUNC_IMPL(__imp__sub_823E0DF0) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -4;
	// b 0x823e09a8
	sub_823E09A8(ctx, base);
	return;
}

alias(__imp__sub_823E0E00) PPC_WEAK_FUNC(sub_823E0E00);
PPC_FUNC_IMPL(__imp__sub_823E0E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,5096
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 5096;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stfs f0,20(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// sth ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r11, 0);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_823E0E30) PPC_WEAK_FUNC(sub_823E0E30);
PPC_FUNC_IMPL(__imp__sub_823E0E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5096
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 5096;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// blr 
	return;
}

alias(__imp__sub_823E0E40) PPC_WEAK_FUNC(sub_823E0E40);
PPC_FUNC_IMPL(__imp__sub_823E0E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5096
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 5096;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u32 & 0x1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// beq ctx_arrow(ctx)->r6,0x823e0e7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0E7C;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32886
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32886;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823E0E7C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E0E90) PPC_WEAK_FUNC(sub_823E0E90);
PPC_FUNC_IMPL(__imp__sub_823E0E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 1, xer);
	// stw ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// beq ctx_arrow(ctx)->r6,0x823e0ed4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0ED4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 2, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0eec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0EEC;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stw ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// sth ctx_arrow(ctx)->r5,8(ctx_arrow(ctx)->r3)
	PPC_STORE_U16(ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r5.u16);
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stfs f0,20(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// blr 
	return;
loc_823E0ED4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0eec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0EEC;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stfs f0,20(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
loc_823E0EEC:
	// stw ctx_arrow(ctx)->r6,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// sth ctx_arrow(ctx)->r5,8(ctx_arrow(ctx)->r3)
	PPC_STORE_U16(ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r5.u16);
	// blr 
	return;
}

alias(__imp__sub_823E0EF8) PPC_WEAK_FUNC(sub_823E0EF8);
PPC_FUNC_IMPL(__imp__sub_823E0EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823e0f3c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E0F3C;
	// lfs f0,20(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e0f5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E0F5C;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfd f13,5112(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f1,f0,f13
	ctx.f1.f64 = f0.f64 * ctx.f13.f64;
	// bl 0x823edbe0
	sub_823EDBE0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// b 0x823e0f5c
	goto loc_823E0F5C;
loc_823E0F3C:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// lfs f2,20(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f2.f64 = double(temp.f32);
	// lfd f1,28184(ctx_arrow(ctx)->r11)
	ctx.f1.u64 = PPC_Read_U64(ctx,  ctx);
	// bl 0x823f0100
	sub_823F0100(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,13964(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_823E0F5C:
	// stfs f0,4(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E0F78) PPC_WEAK_FUNC(sub_823E0F78);
PPC_FUNC_IMPL(__imp__sub_823E0F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e102c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E102C;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lhz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 8);
	// lfs f0,20(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32;
	// lwz ctx_arrow(ctx)->r11,-21816(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f12,88(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,80(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfs f13,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x823e1014
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1014;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stfs f13,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823E1014:
	// bl 0x823e0ef8
	sub_823E0EF8(ctx, base);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823E102C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823e10b8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E10B8;
	// lis ctx_arrow(ctx)->r11,-32015
	ctx_arrow(ctx)->r11.s64 = -2098135040;
	// lhz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 8);
	// lfs f0,20(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32;
	// lwz ctx_arrow(ctx)->r11,-21816(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// std ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f12,80(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f13,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bgt ctx_arrow(ctx)->r6,0x823e1014
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E1014;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stfs f13,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823E10B8:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823E10D0) PPC_WEAK_FUNC(sub_823E10D0);
PPC_FUNC_IMPL(__imp__sub_823E10D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,6144
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 6144;
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// beq ctx_arrow(ctx)->r6,0x823e1110
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1110;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E1110:
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1130
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1130;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E1130:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e116c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E116C;
	// lwz ctx_arrow(ctx)->r10,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1168
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1168;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823e116c
	goto loc_823E116C;
loc_823E1168:
	// bl 0x8209d150
	sub_8209D150(ctx, base);
loc_823E116C:
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,748
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 748;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1190) PPC_WEAK_FUNC(sub_823E1190);
PPC_FUNC_IMPL(__imp__sub_823E1190) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823ded50
	sub_823DED50(ctx, base);
	return;
}

alias(__imp__sub_823E1198) PPC_WEAK_FUNC(sub_823E1198);
PPC_FUNC_IMPL(__imp__sub_823E1198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e11fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E11FC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e11ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E11EC;
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e11e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E11E8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e11ec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E11EC;
loc_823E11E8:
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
loc_823E11EC:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823df0e8
	sub_823DF0E8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E11FC:
	// lwz ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1218
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1218;
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823d0ec0
	sub_823D0EC0(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
loc_823E1218:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E1228) PPC_WEAK_FUNC(sub_823E1228);
PPC_FUNC_IMPL(__imp__sub_823E1228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stfd f30,-24(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// stfd f31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f31,40(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// lfs f30,56(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// bl 0x823e0388
	sub_823E0388(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f30,-24(ctx_arrow(ctx)->r1)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-16(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1270) PPC_WEAK_FUNC(sub_823E1270);
PPC_FUNC_IMPL(__imp__sub_823E1270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stfd f30,-24(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// stfd f31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f31,44(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// lfs f30,60(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// bl 0x823df990
	sub_823DF990(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f30,-24(ctx_arrow(ctx)->r1)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-16(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E12B8) PPC_WEAK_FUNC(sub_823E12B8);
PPC_FUNC_IMPL(__imp__sub_823E12B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32780
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32780;
	// li ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r3.s64 = 64;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1344
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1344;
	// li ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r6.s64 = -1;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823deba0
	sub_823DEBA0(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e134c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E134C;
loc_823E1310:
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
loc_823E1318:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1338
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1338;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E1338:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823E1344:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// b 0x823e1310
	goto loc_823E1310;
loc_823E134C:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dee10
	sub_823DEE10(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e1318
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1318;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E1378) PPC_WEAK_FUNC(sub_823E1378);
PPC_FUNC_IMPL(__imp__sub_823E1378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e13b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E13B4;
	// bl 0x823de980
	sub_823DE980(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e13b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E13B4;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x823e13d8
	goto loc_823E13D8;
loc_823E13B4:
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e13d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E13D4;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823de980
	sub_823DE980(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// bne ctx_arrow(ctx)->r6,0x823e13d8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E13D8;
loc_823E13D4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823E13D8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E13F0) PPC_WEAK_FUNC(sub_823E13F0);
PPC_FUNC_IMPL(__imp__sub_823E13F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stfd f30,-32(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// stfd f31,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1438
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1438;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f31,40(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// lfs f30,56(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// bl 0x823e0388
	sub_823E0388(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x823de9d8
	sub_823DE9D8(ctx, base);
loc_823E1438:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f30,-32(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-24(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1458) PPC_WEAK_FUNC(sub_823E1458);
PPC_FUNC_IMPL(__imp__sub_823E1458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823de9f8
	sub_823DE9F8(ctx, base);
	return;
}

alias(__imp__sub_823E1468) PPC_WEAK_FUNC(sub_823E1468);
PPC_FUNC_IMPL(__imp__sub_823E1468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823E1470) PPC_WEAK_FUNC(sub_823E1470);
PPC_FUNC_IMPL(__imp__sub_823E1470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stfd f30,-32(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// stfd f31,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e14b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E14B8;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f31,44(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// lfs f30,60(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// bl 0x823df990
	sub_823DF990(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// bl 0x823dea18
	sub_823DEA18(ctx, base);
loc_823E14B8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f30,-32(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-24(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E14D8) PPC_WEAK_FUNC(sub_823E14D8);
PPC_FUNC_IMPL(__imp__sub_823E14D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823dea38
	sub_823DEA38(ctx, base);
	return;
}

alias(__imp__sub_823E14E8) PPC_WEAK_FUNC(sub_823E14E8);
PPC_FUNC_IMPL(__imp__sub_823E14E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823E14F0) PPC_WEAK_FUNC(sub_823E14F0);
PPC_FUNC_IMPL(__imp__sub_823E14F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823dea58
	sub_823DEA58(ctx, base);
	return;
}

alias(__imp__sub_823E1500) PPC_WEAK_FUNC(sub_823E1500);
PPC_FUNC_IMPL(__imp__sub_823E1500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823E1508) PPC_WEAK_FUNC(sub_823E1508);
PPC_FUNC_IMPL(__imp__sub_823E1508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823dea78
	sub_823DEA78(ctx, base);
	return;
}

alias(__imp__sub_823E1518) PPC_WEAK_FUNC(sub_823E1518);
PPC_FUNC_IMPL(__imp__sub_823E1518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823E1520) PPC_WEAK_FUNC(sub_823E1520);
PPC_FUNC_IMPL(__imp__sub_823E1520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823dea98
	sub_823DEA98(ctx, base);
	return;
}

alias(__imp__sub_823E1530) PPC_WEAK_FUNC(sub_823E1530);
PPC_FUNC_IMPL(__imp__sub_823E1530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823E1538) PPC_WEAK_FUNC(sub_823E1538);
PPC_FUNC_IMPL(__imp__sub_823E1538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// b 0x823deab8
	sub_823DEAB8(ctx, base);
	return;
}

alias(__imp__sub_823E1550) PPC_WEAK_FUNC(sub_823E1550);
PPC_FUNC_IMPL(__imp__sub_823E1550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823E1558) PPC_WEAK_FUNC(sub_823E1558);
PPC_FUNC_IMPL(__imp__sub_823E1558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1568
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1568;
	// b 0x823deae0
	sub_823DEAE0(ctx, base);
	return;
loc_823E1568:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823E1570) PPC_WEAK_FUNC(sub_823E1570);
PPC_FUNC_IMPL(__imp__sub_823E1570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1580
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1580;
	// b 0x823deb08
	sub_823DEB08(ctx, base);
	return;
loc_823E1580:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_823E1588) PPC_WEAK_FUNC(sub_823E1588);
PPC_FUNC_IMPL(__imp__sub_823E1588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823e160c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E160C;
	// lbz ctx_arrow(ctx)->r4,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823e00b8
	sub_823E00B8(ctx, base);
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e160c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E160C;
	// lwz ctx_arrow(ctx)->r9,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823E15D0:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e15fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E15FC;
	// lhz ctx_arrow(ctx)->r10,3(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 3);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1624
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1624;
loc_823E15FC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r8.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823e15d0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E15D0;
loc_823E160C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823E1624:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1640) PPC_WEAK_FUNC(sub_823E1640);
PPC_FUNC_IMPL(__imp__sub_823E1640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// blt ctx_arrow(ctx)->r6,0x823e1658
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1658;
	// stfs f1,56(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 56);
	// b 0x823e165c
	goto loc_823E165C;
loc_823E1658:
	// stfs f0,56(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 56);
loc_823E165C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823e13f0
	sub_823E13F0(ctx, base);
	return;
}

alias(__imp__sub_823E1668) PPC_WEAK_FUNC(sub_823E1668);
PPC_FUNC_IMPL(__imp__sub_823E1668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823E1670) PPC_WEAK_FUNC(sub_823E1670);
PPC_FUNC_IMPL(__imp__sub_823E1670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// stfs f1,60(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 60);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// b 0x823e1470
	sub_823E1470(ctx, base);
	return;
}

alias(__imp__sub_823E1680) PPC_WEAK_FUNC(sub_823E1680);
PPC_FUNC_IMPL(__imp__sub_823E1680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823E1688) PPC_WEAK_FUNC(sub_823E1688);
PPC_FUNC_IMPL(__imp__sub_823E1688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823e17e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E17E4;
	// lbz ctx_arrow(ctx)->r4,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823e00b8
	sub_823E00B8(ctx, base);
	// clrlwi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e16d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E16D4;
	// li ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r3.s64 = 4;
	// bl 0x8209d088
	sub_8209D088(ctx, base);
	// b 0x823e1718
	goto loc_823E1718;
loc_823E16D4:
	// lis ctx_arrow(ctx)->r11,1365
	ctx_arrow(ctx)->r11.s64 = 89456640;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,21845
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 21845;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e1700
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E1700;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r26.u32 | (ctx_arrow(ctx)->r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li ctx_arrow(ctx)->r10,-5
	ctx_arrow(ctx)->r10.s64 = -5;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// ble ctx_arrow(ctx)->r6,0x823e1704
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823E1704;
loc_823E1700:
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
loc_823E1704:
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,93
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 93;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
loc_823E1718:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1758
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1758;
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3,4
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r3.s64 + 4;
	// stw ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r26.s64 + -1;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r27.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e1750
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1750;
loc_823E1738:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823dd540
	sub_823DD540(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,-1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + -1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,48
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 48;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x823e1738
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E1738;
loc_823E1750:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64;
	// b 0x823e175c
	goto loc_823E175C;
loc_823E1758:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823E175C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// beq ctx_arrow(ctx)->r6,0x823e17f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E17F0;
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r29,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
loc_823E1778:
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r26.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823e17e4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E17E4;
	// lbz ctx_arrow(ctx)->r4,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r28,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e0148
	sub_823E0148(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,1,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r3.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// bl 0x823dd5a8
	sub_823DD5A8(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// bge ctx_arrow(ctx)->r6,0x823e1778
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E1778;
loc_823E17E4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
loc_823E17F0:
	// lis ctx_arrow(ctx)->r3,-32761
	ctx_arrow(ctx)->r3.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 14;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_823E1800) PPC_WEAK_FUNC(sub_823E1800);
PPC_FUNC_IMPL(__imp__sub_823E1800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823e1868
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E1868;
	// lbz ctx_arrow(ctx)->r4,48(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823e00b8
	sub_823E00B8(ctx, base);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1868
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1868;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823E1840:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823dd2e0
	sub_823DD2E0(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823e1840
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1840;
loc_823E1868:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E1870) PPC_WEAK_FUNC(sub_823E1870);
PPC_FUNC_IMPL(__imp__sub_823E1870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stfd f30,-56(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -56);
	// stfd f31,-48(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -48);
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u32 & 0xFF;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e18a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E18A4;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,56(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 56);
	// b 0x823e18b0
	goto loc_823E18B0;
loc_823E18A4:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,60(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 60);
loc_823E18B0:
	// lbz ctx_arrow(ctx)->r4,48(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e00b8
	sub_823E00B8(ctx, base);
	// clrlwi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e190c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E190C;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823E18CC:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 3);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r29.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e18fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E18FC;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823dd138
	sub_823DD138(ctx, base);
loc_823E18FC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r28.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823e18cc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E18CC;
loc_823E190C:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e1950
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E1950;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1978
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1978;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f31,40(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// lfs f30,56(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// bl 0x823e0388
	sub_823E0388(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x823de9d8
	sub_823DE9D8(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lfd f30,-56(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-48(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed188
	return;
loc_823E1950:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1978
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1978;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f31,44(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// lfs f30,60(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// bl 0x823df990
	sub_823DF990(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// bl 0x823dea18
	sub_823DEA18(ctx, base);
loc_823E1978:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lfd f30,-56(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-48(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E1988) PPC_WEAK_FUNC(sub_823E1988);
PPC_FUNC_IMPL(__imp__sub_823E1988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e19d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E19D4;
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e19d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E19D4;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823E19D4:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823E19F0) PPC_WEAK_FUNC(sub_823E19F0);
PPC_FUNC_IMPL(__imp__sub_823E19F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1a3c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1A3C;
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1a3c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1A3C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823E1A3C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823E1A58) PPC_WEAK_FUNC(sub_823E1A58);
PPC_FUNC_IMPL(__imp__sub_823E1A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1a88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1A88;
	// bl 0x823df268
	sub_823DF268(ctx, base);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u32 & 0xFFFF;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
loc_823E1A88:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823E1AA0) PPC_WEAK_FUNC(sub_823E1AA0);
PPC_FUNC_IMPL(__imp__sub_823E1AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1ab0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1AB0;
	// b 0x823df2e0
	sub_823DF2E0(ctx, base);
	return;
loc_823E1AB0:
	// li ctx_arrow(ctx)->r3,-1
	ctx_arrow(ctx)->r3.s64 = -1;
	// blr 
	return;
}

alias(__imp__sub_823E1AB8) PPC_WEAK_FUNC(sub_823E1AB8);
PPC_FUNC_IMPL(__imp__sub_823E1AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823e10d0
	sub_823E10D0(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1af8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1AF8;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32776
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32776;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823E1AF8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1B10) PPC_WEAK_FUNC(sub_823E1B10);
PPC_FUNC_IMPL(__imp__sub_823E1B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x823e1688
	sub_823E1688(ctx, base);
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32780
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32780;
	// li ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r3.s64 = 64;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1b64
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1B64;
	// li ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r6.s64 = -1;
	// lwz ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823deba0
	sub_823DEBA0(ctx, base);
	// b 0x823e1b68
	goto loc_823E1B68;
loc_823E1B64:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823E1B68:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// stw ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// bne ctx_arrow(ctx)->r6,0x823e1bb0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E1BB0;
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
loc_823E1B7C:
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1b9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1B9C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E1B9C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823E1BB0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e1b7c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1B7C;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823de728
	sub_823DE728(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e1b7c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1B7C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1800
	sub_823E1800(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E1BE8) PPC_WEAK_FUNC(sub_823E1BE8);
PPC_FUNC_IMPL(__imp__sub_823E1BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x823e1688
	sub_823E1688(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// blt ctx_arrow(ctx)->r6,0x823e1c48
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1C48;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e12b8
	sub_823E12B8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e1c44
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1C44;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// bl 0x823e1800
	sub_823E1800(&ctx);
loc_823E1C44:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_823E1C48:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E1C50) PPC_WEAK_FUNC(sub_823E1C50);
PPC_FUNC_IMPL(__imp__sub_823E1C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1c7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1C7C;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,41(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823e1c80
	goto loc_823E1C80;
loc_823E1C7C:
	// li ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r4.s64 = -1;
loc_823E1C80:
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e12b8
	sub_823E12B8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e1ca0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1CA0;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
loc_823E1CA0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1CB8) PPC_WEAK_FUNC(sub_823E1CB8);
PPC_FUNC_IMPL(__imp__sub_823E1CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1d20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1D20;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823e1d20
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E1D20;
	// lwz ctx_arrow(ctx)->r4,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823d0ec0
	sub_823D0EC0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// bl 0x823ded50
	sub_823DED50(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823E1D20:
	// lbz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 128;
	// stb ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1D40) PPC_WEAK_FUNC(sub_823E1D40);
PPC_FUNC_IMPL(__imp__sub_823E1D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stfd f30,-32(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// stfd f31,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// blt ctx_arrow(ctx)->r6,0x823e1d74
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1D74;
	// stfs f1,40(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// b 0x823e1d78
	goto loc_823E1D78;
loc_823E1D74:
	// stfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
loc_823E1D78:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1da4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1DA4;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f31,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// lfs f30,56(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f30.f64 = double(temp.f32);
	// bl 0x823e0388
	sub_823E0388(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x823de9d8
	sub_823DE9D8(ctx, base);
loc_823E1DA4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f30,-32(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-24(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1DC0) PPC_WEAK_FUNC(sub_823E1DC0);
PPC_FUNC_IMPL(__imp__sub_823E1DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stfd f30,-32(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// stfd f31,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stfs f30,44(ctx_arrow(ctx)->r31)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 44);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1e0c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1E0C;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f31,60(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// bl 0x823df990
	sub_823DF990(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 + f30.f64));
	// bl 0x823dea18
	sub_823DEA18(ctx, base);
loc_823E1E0C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f30,-32(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-24(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1E28) PPC_WEAK_FUNC(sub_823E1E28);
PPC_FUNC_IMPL(__imp__sub_823E1E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,6144
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + 6144;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 0, xer);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stfs f0,44(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 44);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stfs f0,60(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 60);
	// stw ctx_arrow(ctx)->r4,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r6,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// stw ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 20);
	// lfs f1,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stfs f1,56(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 56);
	// stb ctx_arrow(ctx)->r7,48(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48));
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 28);
	// stb ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// beq ctx_arrow(ctx)->r6,0x823e1eb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1EB0;
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r6)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5120
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 5120;
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 2);
	// lfsx f1,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
loc_823E1EB0:
	// bl 0x823e1d40
	sub_823E1D40(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1ED0) PPC_WEAK_FUNC(sub_823E1ED0);
PPC_FUNC_IMPL(__imp__sub_823E1ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823e1f38
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E1F38;
	// lbz ctx_arrow(ctx)->r4,48(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// bl 0x823e00b8
	sub_823E00B8(ctx, base);
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1f38
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1F38;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
loc_823E1F10:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r31.u32 | (ctx_arrow(ctx)->r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823dd4a0
	sub_823DD4A0(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r29.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823e1f10
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E1F10;
loc_823E1F38:
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823df3b0
	sub_823DF3B0(ctx, base);
	// lbz ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,0,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 128, xer);
	// bne ctx_arrow(ctx)->r6,0x823e1f78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E1F78;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1f78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1F78;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823e1f78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E1F78;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,25
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x7F;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stb ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r30.u32 + 32, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bl 0x823e1cb8
	sub_823E1CB8(ctx, base);
loc_823E1F78:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E1F80) PPC_WEAK_FUNC(sub_823E1F80);
PPC_FUNC_IMPL(__imp__sub_823E1F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r4,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e1fac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E1FAC;
	// bl 0x823e1c50
	sub_823E1C50(ctx, base);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 36);
loc_823E1FAC:
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823d22e0
	sub_823D22E0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E1FC8) PPC_WEAK_FUNC(sub_823E1FC8);
PPC_FUNC_IMPL(__imp__sub_823E1FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823e06a8
	sub_823E06A8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,6164
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 6164;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,6148
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 6148;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2010) PPC_WEAK_FUNC(sub_823E2010);
PPC_FUNC_IMPL(__imp__sub_823E2010) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -4;
	// b 0x823e2128
	sub_823E2128(ctx, base);
	return;
}

alias(__imp__sub_823E2018) PPC_WEAK_FUNC(sub_823E2018);
PPC_FUNC_IMPL(__imp__sub_823E2018) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823e205c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E205C;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e205c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E205C;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2078
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2078;
loc_823E205C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r30.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 0);
	// b 0x823e207c
	goto loc_823E207C;
loc_823E2078:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823E207C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r30.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E20B0) PPC_WEAK_FUNC(sub_823E20B0);
PPC_FUNC_IMPL(__imp__sub_823E20B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r3,10(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 10);
	// blr 
	return;
}

alias(__imp__sub_823E20C0) PPC_WEAK_FUNC(sub_823E20C0);
PPC_FUNC_IMPL(__imp__sub_823E20C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r31,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 0);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// lhz ctx_arrow(ctx)->r3,10(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 10);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2108) PPC_WEAK_FUNC(sub_823E2108);
PPC_FUNC_IMPL(__imp__sub_823E2108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 10;
	// blr 
	return;
}

alias(__imp__sub_823E2118) PPC_WEAK_FUNC(sub_823E2118);
PPC_FUNC_IMPL(__imp__sub_823E2118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r3,9(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2128) PPC_WEAK_FUNC(sub_823E2128);
PPC_FUNC_IMPL(__imp__sub_823E2128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,6164
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 6164;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,6148
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 6148;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// bl 0x823dfbf8
	sub_823DFBF8(&ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2180
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2180;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32793
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32793;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823E2180:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2198) PPC_WEAK_FUNC(sub_823E2198);
PPC_FUNC_IMPL(__imp__sub_823E2198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823e21d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E21D8;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e21d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E21D8;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x823e21f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E21F4;
loc_823E21D8:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 0);
	// b 0x823e21f8
	goto loc_823E21F8;
loc_823E21F4:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823E21F8:
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2220
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2220;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e2018
	sub_823E2018(ctx, base);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r3.u32 & 0xFFFF;
	// b 0x823e2224
	goto loc_823E2224;
loc_823E2220:
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
loc_823E2224:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0xFFFF;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r9.u32 & 0xFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u32 & 0xFFFF;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r7.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E2258) PPC_WEAK_FUNC(sub_823E2258);
PPC_FUNC_IMPL(__imp__sub_823E2258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// li ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r22.s64 = 1;
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// bl 0x823dff18
	sub_823DFF18(ctx, base);
	// lis ctx_arrow(ctx)->r11,-30009
	ctx_arrow(ctx)->r11.s64 = -1966669824;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// ori ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,25
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r11.u64 | 25;
loc_823E2290:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	// lbz ctx_arrow(ctx)->r11,9(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bge ctx_arrow(ctx)->r6,0x823e23c0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E23C0;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32776
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32776;
	// li ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r3.s64 = 64;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e234c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E234C;
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u32 & 0xFF;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823e2198
	sub_823E2198(ctx, base);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r4,32(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1e28
	sub_823E1E28(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2354
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2354;
loc_823E22F8:
	// lis ctx_arrow(ctx)->r28,-32761
	ctx_arrow(ctx)->r28.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,14
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 14;
loc_823E2300:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2320
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2320;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E2320:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, ctx_arrow(ctx)->r23.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2330
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2330;
	// li ctx_arrow(ctx)->r24,1
	ctx_arrow(ctx)->r24.s64 = 1;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
loc_823E2330:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r25.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// bge ctx_arrow(ctx)->r6,0x823e2290
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_823E2290;
loc_823E2340:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed170
	return;
loc_823E234C:
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// b 0x823e22f8
	goto loc_823E22F8;
loc_823E2354:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e2300
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E2300;
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,1(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e1be8
	sub_823E1BE8(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e2300
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E2300;
	// stw ctx_arrow(ctx)->r27,108(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 108);
	// li ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e239c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E239C;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x823e23a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E23A0;
loc_823E239C:
	// li ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r22.s64 = 0;
loc_823E23A0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,40
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 40;
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// stw ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// b 0x823e2330
	goto loc_823E2330;
loc_823E23C0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e2340
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E2340;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e23e4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E23E4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e23e4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E23E4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r23.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed170
	return;
loc_823E23E4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823e01e0
	sub_823E01E0(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e240c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E240C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e240c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E240C;
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823dff18
	sub_823DFF18(ctx, base);
loc_823E240C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed170
	return;
}

alias(__imp__sub_823E2418) PPC_WEAK_FUNC(sub_823E2418);
PPC_FUNC_IMPL(__imp__sub_823E2418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823e06a8
	sub_823E06A8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,6208
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 6208;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,6192
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 6192;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2460) PPC_WEAK_FUNC(sub_823E2460);
PPC_FUNC_IMPL(__imp__sub_823E2460) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -4;
	// b 0x823e24d0
	sub_823E24D0(ctx, base);
	return;
}

alias(__imp__sub_823E2468) PPC_WEAK_FUNC(sub_823E2468);
PPC_FUNC_IMPL(__imp__sub_823E2468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 12);
	// blr 
	return;
}

alias(__imp__sub_823E2478) PPC_WEAK_FUNC(sub_823E2478);
PPC_FUNC_IMPL(__imp__sub_823E2478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r31,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 0);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// lhz ctx_arrow(ctx)->r3,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 12);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E24C0) PPC_WEAK_FUNC(sub_823E24C0);
PPC_FUNC_IMPL(__imp__sub_823E24C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// blr 
	return;
}

alias(__imp__sub_823E24D0) PPC_WEAK_FUNC(sub_823E24D0);
PPC_FUNC_IMPL(__imp__sub_823E24D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,6208
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 6208;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,6192
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 6192;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// bl 0x823dfbf8
	sub_823DFBF8(&ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2528
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2528;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32794
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32794;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823E2528:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2540) PPC_WEAK_FUNC(sub_823E2540);
PPC_FUNC_IMPL(__imp__sub_823E2540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,108(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r9.s64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2590) PPC_WEAK_FUNC(sub_823E2590);
PPC_FUNC_IMPL(__imp__sub_823E2590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823dff18
	sub_823DFF18(ctx, base);
	// lwz ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,27,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x1F) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// li ctx_arrow(ctx)->r10,255
	ctx_arrow(ctx)->r10.s64 = 255;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32776
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32776;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,2
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFE000001F;
	// li ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r3.s64 = 64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,132
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 132;
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 536870912;
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,2,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7FFFFFFF;
	// stw ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 132);
	// sth ctx_arrow(ctx)->r30,136(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 136, ctx_arrow(ctx)->r30, 0);
	// stb ctx_arrow(ctx)->r10,138(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 138));
	// lbz ctx_arrow(ctx)->r11,139(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb ctx_arrow(ctx)->r11,139(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 139, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,253
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 253;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stb ctx_arrow(ctx)->r11,139(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 139, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,251
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 251;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stb ctx_arrow(ctx)->r11,139(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 139, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,247
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 247;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stb ctx_arrow(ctx)->r11,139(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 139, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r10,9(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 9);
	// sth ctx_arrow(ctx)->r10,140(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 140, ctx_arrow(ctx)->r10.u16);
	// lbz ctx_arrow(ctx)->r11,11(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r30,143(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 143, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// sth ctx_arrow(ctx)->r30,144(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 144, ctx_arrow(ctx)->r30, 0);
	// sth ctx_arrow(ctx)->r30,146(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 146, ctx_arrow(ctx)->r30, 0);
	// stb ctx_arrow(ctx)->r11,142(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 142, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2690
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2690;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e1e28
	sub_823E1E28(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2704
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2704;
loc_823E2690:
	// lis ctx_arrow(ctx)->r28,-32761
	ctx_arrow(ctx)->r28.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,14
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 14;
loc_823E2698:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e26b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E26B8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E26B8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e2744
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E2744;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e01e0
	sub_823E01E0(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e26f8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E26F8;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e26f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E26F8;
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823e26f8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E26F8;
	// li ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r4.s64 = 3;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dff18
	sub_823DFF18(ctx, base);
loc_823E26F8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823E2704:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823e1b10
	sub_823E1B10(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e2698
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E2698;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,40
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 40;
	// stw ctx_arrow(ctx)->r29,108(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 108);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 4);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 8);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 4);
	// stw ctx_arrow(ctx)->r30,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// b 0x823e26b8
	goto loc_823E26B8;
loc_823E2744:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E2750) PPC_WEAK_FUNC(sub_823E2750);
PPC_FUNC_IMPL(__imp__sub_823E2750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e27cc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E27CC;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,1(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823d7050
	sub_823D7050(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e27cc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E27CC;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
loc_823E27CC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E27E0) PPC_WEAK_FUNC(sub_823E27E0);
PPC_FUNC_IMPL(__imp__sub_823E27E0) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e2844
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E2844;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d7050
	sub_823D7050(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e2844
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E2844;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
loc_823E2844:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2860) PPC_WEAK_FUNC(sub_823E2860);
PPC_FUNC_IMPL(__imp__sub_823E2860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// blt ctx_arrow(ctx)->r6,0x823e2948
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E2948;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e28cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E28CC;
	// lwz ctx_arrow(ctx)->r11,1(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// b 0x823e2948
	goto loc_823E2948;
loc_823E28CC:
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32795
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32795;
	// li ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r3.s64 = 16;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2920
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2920;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,300(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,1(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r4,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823ea2d0
	sub_823EA2D0(ctx, base);
	// b 0x823e2924
	goto loc_823E2924;
loc_823E2920:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_823E2924:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// stw ctx_arrow(ctx)->r3,304(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 304);
	// beq ctx_arrow(ctx)->r6,0x823e2940
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2940;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823ea588
	sub_823EA588(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// b 0x823e2948
	goto loc_823E2948;
loc_823E2940:
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
loc_823E2948:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// blt ctx_arrow(ctx)->r6,0x823e2984
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E2984;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lwz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d7050
	sub_823D7050(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e2984
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E2984;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
loc_823E2984:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E2998) PPC_WEAK_FUNC(sub_823E2998);
PPC_FUNC_IMPL(__imp__sub_823E2998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r9,14(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r5,10(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 10);
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r9.u32 & 0x3;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823E29C8) PPC_WEAK_FUNC(sub_823E29C8);
PPC_FUNC_IMPL(__imp__sub_823E29C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stb ctx_arrow(ctx)->r30,81(ctx_arrow(ctx)->r1)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r1.u32 + 81, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r30), 0);
	// sth ctx_arrow(ctx)->r10,82(ctx_arrow(ctx)->r1)
	PPC_STORE_U16(ctx_arrow(ctx)->r1.u32 + 82, ctx_arrow(ctx)->r10.u16);
	// stb ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80));
	// beq ctx_arrow(ctx)->r6,0x823e2a44
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2A44;
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2a3c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2A3C;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r4,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,81
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 81;
	// lwz ctx_arrow(ctx)->r3,304(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,82
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 82;
	// bl 0x823e9ea0
	sub_823E9EA0(ctx, base);
	// lhz ctx_arrow(ctx)->r10,82(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 82);
	// lbz ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// b 0x823e2a44
	goto loc_823E2A44;
loc_823E2A3C:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r9,255
	ctx_arrow(ctx)->r9.s64 = 255;
loc_823E2A44:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stw ctx_arrow(ctx)->r30,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// sth ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r10.u16);
	// stb ctx_arrow(ctx)->r9,2(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 2));
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stfs f0,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2A78) PPC_WEAK_FUNC(sub_823E2A78);
PPC_FUNC_IMPL(__imp__sub_823E2A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,364(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r3,360(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 64;
	// blr 
	return;
}

alias(__imp__sub_823E2A90) PPC_WEAK_FUNC(sub_823E2A90);
PPC_FUNC_IMPL(__imp__sub_823E2A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,384(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2af0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2AF0;
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,392(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r11.s64;
	// bgt ctx_arrow(ctx)->r6,0x823e2ac8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E2AC8;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_823E2AC8:
	// lwz ctx_arrow(ctx)->r10,388(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,384(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r10.s64;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r9.s64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823E2AF0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2B08) PPC_WEAK_FUNC(sub_823E2B08);
PPC_FUNC_IMPL(__imp__sub_823E2B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,384(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2b48
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2B48;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r31,92(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e2a90
	sub_823E2A90(ctx, base);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823E2B48:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2B60) PPC_WEAK_FUNC(sub_823E2B60);
PPC_FUNC_IMPL(__imp__sub_823E2B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823d7228
	sub_823D7228(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2444
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2444;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,6264
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 6264;
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r8,-32249
	ctx_arrow(ctx)->r8.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r7,-32249
	ctx_arrow(ctx)->r7.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r11,356(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 356);
	// lis ctx_arrow(ctx)->r6,-32249
	ctx_arrow(ctx)->r6.s64 = -2113470464;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// lis ctx_arrow(ctx)->r5,-32249
	ctx_arrow(ctx)->r5.s64 = -2113470464;
	// lfs f0,2688(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lis ctx_arrow(ctx)->r9,-32249
	ctx_arrow(ctx)->r9.s64 = -2113470464;
	// stfs f0,376(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 376);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2472
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 2472;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,2828
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 2828;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,6256
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 6256;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,6240
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 6240;
	// stw ctx_arrow(ctx)->r11,364(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 364);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,6236
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 6236;
	// stw ctx_arrow(ctx)->r11,368(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 368);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r7,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r6,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r5,356(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 356);
	// stw ctx_arrow(ctx)->r4,360(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 360);
	// stw ctx_arrow(ctx)->r11,372(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 372);
	// stw ctx_arrow(ctx)->r11,380(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 380);
	// stw ctx_arrow(ctx)->r11,384(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 384);
	// stw ctx_arrow(ctx)->r11,388(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 388);
	// stw ctx_arrow(ctx)->r11,392(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 392);
	// stw ctx_arrow(ctx)->r11,396(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 396);
	// stw ctx_arrow(ctx)->r11,400(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 400);
	// stw ctx_arrow(ctx)->r11,404(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 404);
	// stw ctx_arrow(ctx)->r11,408(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 408);
	// stw ctx_arrow(ctx)->r11,412(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 412);
	// stw ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 416);
	// stw ctx_arrow(ctx)->r11,420(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 420);
	// stw ctx_arrow(ctx)->r11,424(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 424);
	// sth ctx_arrow(ctx)->r10,428(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 428, ctx_arrow(ctx)->r10.u16);
	// sth ctx_arrow(ctx)->r10,430(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 430, ctx_arrow(ctx)->r10.u16);
	// stw ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 432);
	// stw ctx_arrow(ctx)->r11,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2C50) PPC_WEAK_FUNC(sub_823E2C50);
PPC_FUNC_IMPL(__imp__sub_823E2C50) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-12
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -12;
	// b 0x823e4288
	sub_823E4288(ctx, base);
	return;
}

alias(__imp__sub_823E2C58) PPC_WEAK_FUNC(sub_823E2C58);
PPC_FUNC_IMPL(__imp__sub_823E2C58) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -24;
	// b 0x823e4288
	sub_823E4288(ctx, base);
	return;
}

alias(__imp__sub_823E2C60) PPC_WEAK_FUNC(sub_823E2C60);
PPC_FUNC_IMPL(__imp__sub_823E2C60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,20(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f1
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f1.f64);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stfs f1,20(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// stw ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_823E2C80) PPC_WEAK_FUNC(sub_823E2C80);
PPC_FUNC_IMPL(__imp__sub_823E2C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,412(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 412);
	// blr 
	return;
}

alias(__imp__sub_823E2C90) PPC_WEAK_FUNC(sub_823E2C90);
PPC_FUNC_IMPL(__imp__sub_823E2C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2de0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2DE0;
	// lwz ctx_arrow(ctx)->r11,424(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2de0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2DE0;
	// lwz ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 8, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2ce4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2CE4;
	// lwz ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2de0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2DE0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2de0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2DE0;
loc_823E2CE4:
	// lwz ctx_arrow(ctx)->r11,436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2de0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2DE0;
	// lwz ctx_arrow(ctx)->r11,404(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2d18
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2D18;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e2b08
	sub_823E2B08(ctx, base);
	// lwz ctx_arrow(ctx)->r11,400(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r3.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e2da8
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E2DA8;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// b 0x823e2dac
	goto loc_823E2DAC;
loc_823E2D18:
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2d5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2D5C;
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,24,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xE0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 128, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2d5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2D5C;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2d5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2D5C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 6, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2d5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2D5C;
	// bl 0x823df9a0
	sub_823DF9A0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2d5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2D5C;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823E2D5C:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2d80
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2D80;
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,24,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xE0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,96
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 96, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2d80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2D80;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823E2D80:
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x7;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2d9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2D9C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2dac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2DAC;
loc_823E2D9C:
	// lwz ctx_arrow(ctx)->r11,412(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2dac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2DAC;
loc_823E2DA8:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823E2DAC:
	// lwz ctx_arrow(ctx)->r11,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2dc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2DC8;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2dc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2DC8;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_823E2DC8:
	// lwz ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2de8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2DE8;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2de8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2DE8;
loc_823E2DE0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x823e2dec
	goto loc_823E2DEC;
loc_823E2DE8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
loc_823E2DEC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2E08) PPC_WEAK_FUNC(sub_823E2E08);
PPC_FUNC_IMPL(__imp__sub_823E2E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2e98
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2E98;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 1, xer);
	// stw ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// sth ctx_arrow(ctx)->r10,428(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 428, ctx_arrow(ctx)->r10.u16);
	// stw ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 40);
	// bne ctx_arrow(ctx)->r6,0x823e2f04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2F04;
	// lwz ctx_arrow(ctx)->r11,404(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2f04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2F04;
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x7;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2e70
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2E70;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2f04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2F04;
loc_823E2E70:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e2a90
	sub_823E2A90(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r3,400(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 400);
	// stw ctx_arrow(ctx)->r11,404(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 404);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823E2E98:
	// lwz ctx_arrow(ctx)->r11,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2ec8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2EC8;
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// sth ctx_arrow(ctx)->r11,430(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 430, ctx_arrow(ctx)->r11, 0);
	// stw ctx_arrow(ctx)->r10,420(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 420);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823E2EC8:
	// lwz ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2ef0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2EF0;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 416);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823E2EF0:
	// lwz ctx_arrow(ctx)->r11,424(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e2f04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E2F04;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,424(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 424);
loc_823E2F04:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2F18) PPC_WEAK_FUNC(sub_823E2F18);
PPC_FUNC_IMPL(__imp__sub_823E2F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823dfb28
	sub_823DFB28(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e2a90
	sub_823E2A90(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r3,400(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 400);
	// stw ctx_arrow(ctx)->r11,404(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 404);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2F60) PPC_WEAK_FUNC(sub_823E2F60);
PPC_FUNC_IMPL(__imp__sub_823E2F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,412(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 412);
	// bl 0x823e2a90
	sub_823E2A90(&ctx);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r3,400(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 400);
	// stw ctx_arrow(ctx)->r11,404(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 404);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E2FA0) PPC_WEAK_FUNC(sub_823E2FA0);
PPC_FUNC_IMPL(__imp__sub_823E2FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x7;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e3178
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E3178;
	// lis ctx_arrow(ctx)->r12,-32194
	ctx_arrow(ctx)->r12.s64 = -2109865984;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,12260
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 12260;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r0
	ctr.u64 = ctx_arrow(ctx)->r0.u64;
	// bctr 
	switch (ctx_arrow(ctx)->r11.u64) {
	case 0:
		goto loc_823E2FF8;
	case 1:
		goto loc_823E30C4;
	case 2:
		goto loc_823E30C4;
	case 3:
		goto loc_823E3048;
	case 4:
		goto loc_823E3010;
	default:
		__builtin_unreachable();
	}
	// lwz ctx_arrow(ctx)->r17,12280(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,12484(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,12484(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,12360(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,12304(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
loc_823E2FF8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e2b08
	sub_823E2B08(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r3,400(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 400);
	// stw ctx_arrow(ctx)->r11,404(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 404);
	// b 0x823e314c
	goto loc_823E314C;
loc_823E3010:
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis ctx_arrow(ctx)->r11,32767
	ctx_arrow(ctx)->r11.s64 = 2147418112;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,65535
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 65535;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r11.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2ff8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2FF8;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,384(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r11.s64;
	// stw ctx_arrow(ctx)->r10,404(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 404);
	// b 0x823e3148
	goto loc_823E3148;
loc_823E3048:
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r30,404(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 404);
	// bl 0x823dfa00
	sub_823DFA00(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e30a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E30A4;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823dfa60
	sub_823DFA60(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e30a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E30A4;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis ctx_arrow(ctx)->r11,32767
	ctx_arrow(ctx)->r11.s64 = 2147418112;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,65535
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 65535;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r11.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e2ff8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E2FF8;
	// lwz ctx_arrow(ctx)->r11,384(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r30,404(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 404);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r11.s64;
	// b 0x823e3148
	goto loc_823E3148;
loc_823E30A4:
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823dfa80
	sub_823DFA80(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stw ctx_arrow(ctx)->r11,400(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 400);
	// bl 0x823dfb28
	sub_823DFB28(&ctx);
	// b 0x823e314c
	goto loc_823E314C;
loc_823E30C4:
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r30,404(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 404);
	// bl 0x823e2b08
	sub_823E2B08(&ctx);
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r3,400(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 400);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64;
	// lhz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// lwz ctx_arrow(ctx)->r6,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,24,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xE0;
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,-32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + -32;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// bl 0x823e0450
	sub_823E0450(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,412(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 412);
	// beq ctx_arrow(ctx)->r6,0x823e314c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E314C;
	// stw ctx_arrow(ctx)->r30,64(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 64);
	// lwz ctx_arrow(ctx)->r11,412(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r9,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 56);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e312c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E312C;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_823E312C:
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lwz ctx_arrow(ctx)->r8,384(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,404(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 404);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r8.s64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
loc_823E3148:
	// stw ctx_arrow(ctx)->r11,400(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 400);
loc_823E314C:
	// lwz ctx_arrow(ctx)->r11,400(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,26214
	ctx_arrow(ctx)->r10.s64 = 1717960704;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,26215
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 26215;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r10.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,400(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 400);
loc_823E3178:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E3190) PPC_WEAK_FUNC(sub_823E3190);
PPC_FUNC_IMPL(__imp__sub_823E3190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e31dc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E31DC;
	// lis ctx_arrow(ctx)->r29,-30009
	ctx_arrow(ctx)->r29.s64 = -1966669824;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,6
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 6;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823E31DC:
	// lwz ctx_arrow(ctx)->r11,364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r11.s32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e32b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E32B4;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d5cb8
	sub_823D5CB8(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e32b4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E32B4;
	// lwz ctx_arrow(ctx)->r3,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3224
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3224;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r30.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// bl 0x823df448
	sub_823DF448(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E3224:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e32b4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E32B4;
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e324c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E324C;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r30.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// bl 0x823df448
	sub_823DF448(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E324C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e32b4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E32B4;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r30.u32);
	// lwz ctx_arrow(ctx)->r10,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 8, xer);
	// xori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// stw ctx_arrow(ctx)->r11,364(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 364);
	// bne ctx_arrow(ctx)->r6,0x823e32b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E32B4;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3294
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3294;
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// stw ctx_arrow(ctx)->r3,392(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 392);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823E3294:
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// lwz ctx_arrow(ctx)->r10,392(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,388(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r10,392(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 392);
	// stw ctx_arrow(ctx)->r11,388(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 388);
loc_823E32B4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E32C8) PPC_WEAK_FUNC(sub_823E32C8);
PPC_FUNC_IMPL(__imp__sub_823E32C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3310
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3310;
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,87
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 87;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823E3310:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d64d8
	sub_823D64D8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e3364
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E3364;
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e333c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E333C;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,312
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 312;
	// bl 0x823df6d0
	sub_823DF6D0(ctx, base);
loc_823E333C:
	// lwz ctx_arrow(ctx)->r3,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3350
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3350;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,312
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 312;
	// bl 0x823df6d0
	sub_823DF6D0(ctx, base);
loc_823E3350:
	// lwz ctx_arrow(ctx)->r3,424(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3364
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3364;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,312
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 312;
	// bl 0x823df6d0
	sub_823DF6D0(ctx, base);
loc_823E3364:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E3378) PPC_WEAK_FUNC(sub_823E3378);
PPC_FUNC_IMPL(__imp__sub_823E3378) {
	PPC_FUNC_PROLOGUE();
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d6748
	sub_823D6748(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e3434
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E3434;
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e33e4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E33E4;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r6,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 72);
	// bl 0x823df750
	sub_823DF750(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E33E4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e3434
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E3434;
	// lwz ctx_arrow(ctx)->r3,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e340c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E340C;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r6,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 72);
	// bl 0x823df750
	sub_823DF750(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E340C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e3434
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E3434;
	// lwz ctx_arrow(ctx)->r3,424(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3434
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3434;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r6,68(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r4,72(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 72);
	// bl 0x823df750
	sub_823DF750(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E3434:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823E3448) PPC_WEAK_FUNC(sub_823E3448);
PPC_FUNC_IMPL(__imp__sub_823E3448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r11,304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r29,6(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 6);
	// bne ctx_arrow(ctx)->r6,0x823e349c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E349C;
	// lis ctx_arrow(ctx)->r30,-30009
	ctx_arrow(ctx)->r30.s64 = -1966669824;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,10
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 10;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
loc_823E349C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e3504
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E3504;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,372
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r31.s64 + 372;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e34f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E34F8;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d6cb8
	sub_823D6CB8(ctx, base);
	// b 0x823e3500
	goto loc_823E3500;
loc_823E34F8:
	// lwz ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823cef50
	sub_823CEF50(ctx, base);
loc_823E3500:
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E3504:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E3518) PPC_WEAK_FUNC(sub_823E3518);
PPC_FUNC_IMPL(__imp__sub_823E3518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d6128
	sub_823D6128(ctx, base);
	// lwz ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3564
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3564;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,344
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 344;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x823df650
	sub_823DF650(ctx, base);
loc_823E3564:
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3578
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3578;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,344
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 344;
	// bl 0x823df650
	sub_823DF650(ctx, base);
loc_823E3578:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E3590) PPC_WEAK_FUNC(sub_823E3590);
PPC_FUNC_IMPL(__imp__sub_823E3590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d63c8
	sub_823D63C8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e35dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E35DC;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// bl 0x823df690
	sub_823DF690(ctx, base);
loc_823E35DC:
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e35f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E35F0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823df690
	sub_823DF690(ctx, base);
loc_823E35F0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_823E3608) PPC_WEAK_FUNC(sub_823E3608);
PPC_FUNC_IMPL(__imp__sub_823E3608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r3,304(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,300(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x823ea2a8
	sub_823EA2A8(ctx, base);
	return;
}

alias(__imp__sub_823E3620) PPC_WEAK_FUNC(sub_823E3620);
PPC_FUNC_IMPL(__imp__sub_823E3620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lhz ctx_arrow(ctx)->r4,428(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 428);
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,80(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r29,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// stfs f0,84(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 65535, xer);
	// beq ctx_arrow(ctx)->r6,0x823e366c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E366C;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lwz ctx_arrow(ctx)->r3,304(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823e9f40
	sub_823E9F40(ctx, base);
loc_823E366C:
	// lhz ctx_arrow(ctx)->r11,428(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 428);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stb ctx_arrow(ctx)->r29,2(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 2, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r29), 0);
	// lfs f0,84(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// sth ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r11, 0);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E3698) PPC_WEAK_FUNC(sub_823E3698);
PPC_FUNC_IMPL(__imp__sub_823E3698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x823d68c0
	sub_823D68C0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r3,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e36d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E36D4;
	// bl 0x823df5b0
	sub_823DF5B0(ctx, base);
loc_823E36D4:
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e36e4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E36E4;
	// bl 0x823df5b0
	sub_823DF5B0(ctx, base);
loc_823E36E4:
	// lwz ctx_arrow(ctx)->r3,424(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e36f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E36F4;
	// bl 0x823df5b0
	sub_823DF5B0(ctx, base);
loc_823E36F4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E3718) PPC_WEAK_FUNC(sub_823E3718);
PPC_FUNC_IMPL(__imp__sub_823E3718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,356
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 356;
	// bne ctx_arrow(ctx)->r6,0x823e373c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E373C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_823E373C:
	// lwz ctx_arrow(ctx)->r11,372(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 24;
	// bl 0x823d1fd0
	sub_823D1FD0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,372(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// lfs f0,20(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,376(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 376);
	// stw ctx_arrow(ctx)->r10,380(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 380);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E3770) PPC_WEAK_FUNC(sub_823E3770);
PPC_FUNC_IMPL(__imp__sub_823E3770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r9,-32249
	ctx_arrow(ctx)->r9.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r8,-32249
	ctx_arrow(ctx)->r8.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r7,-32249
	ctx_arrow(ctx)->r7.s64 = -2113470464;
	// lwz ctx_arrow(ctx)->r5,372(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r6,-32249
	ctx_arrow(ctx)->r6.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,6264
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 6264;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2472
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2472;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2828
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 2828;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,6256
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 6256;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,6240
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 6240;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,6236
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 6236;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,356
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 356;
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r7,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r6,356(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 356);
	// lwz ctx_arrow(ctx)->r4,228(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3804
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3804;
loc_823E37E0:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e37fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E37FC;
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e37e0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E37E0;
	// b 0x823e3804
	goto loc_823E3804;
loc_823E37FC:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r5.s64 + 24;
	// bl 0x823dcbc8
	sub_823DCBC8(ctx, base);
loc_823E3804:
	// lwz ctx_arrow(ctx)->r3,408(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3824
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3824;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E3824:
	// lwz ctx_arrow(ctx)->r11,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3848
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3848;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E3848:
	// lwz ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e386c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E386C;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E386C:
	// lwz ctx_arrow(ctx)->r11,424(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3890
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3890;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E3890:
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r10,-32249
	ctx_arrow(ctx)->r10.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r9,-32249
	ctx_arrow(ctx)->r9.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r8,-32249
	ctx_arrow(ctx)->r8.s64 = -2113470464;
	// lis ctx_arrow(ctx)->r7,-32249
	ctx_arrow(ctx)->r7.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2832
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2832;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2472
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 2472;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2828
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 2828;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,2824
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 2824;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,2808
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 2808;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 4);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// stw ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r7,24(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// bl 0x823d74d0
	sub_823D74D0(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E38E8) PPC_WEAK_FUNC(sub_823E38E8);
PPC_FUNC_IMPL(__imp__sub_823E38E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3a68
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3A68;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3980
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3980;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3cb0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3CB0;
	// lwz ctx_arrow(ctx)->r10,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3934
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3934;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3cb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CB0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3cb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CB0;
loc_823E3934:
	// lwz ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3954
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3954;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3cb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CB0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3cb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CB0;
loc_823E3954:
	// lhz ctx_arrow(ctx)->r11,430(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 430);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = -1;
	// stw ctx_arrow(ctx)->r10,424(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 424);
	// stw ctx_arrow(ctx)->r28,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
	// sth ctx_arrow(ctx)->r11,428(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 428, ctx_arrow(ctx)->r11, 0);
	// stw ctx_arrow(ctx)->r9,52(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 52);
	// sth ctx_arrow(ctx)->r8,430(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 430, ctx_arrow(ctx)->r8.u16);
	// stw ctx_arrow(ctx)->r28,420(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 420);
	// b 0x823e3cb0
	goto loc_823E3CB0;
loc_823E3980:
	// lwz ctx_arrow(ctx)->r11,444(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3a34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3A34;
	// lwz ctx_arrow(ctx)->r3,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e39c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E39C0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 20);
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r3.s64 - ctx_arrow(ctx)->r11.s64;
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, ctx_arrow(ctx)->r30.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x823e3a34
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E3A34;
loc_823E39C0:
	// lwz ctx_arrow(ctx)->r10,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e39f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E39F4;
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lhz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 20);
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r9.u32 & 0x3;
	// mtctr ctx_arrow(ctx)->r10
	ctr.u64 = ctx_arrow(ctx)->r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E39F4:
	// lwz ctx_arrow(ctx)->r10,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// lhz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 20);
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u32 & 0x3;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e0878
	sub_823E0878(ctx, base);
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stw ctx_arrow(ctx)->r11,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
	// b 0x823e3cb0
	goto loc_823E3CB0;
loc_823E3A34:
	// lwz ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3a54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3A54;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3cb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CB0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 5, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3cb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CB0;
loc_823E3A54:
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e0878
	sub_823E0878(ctx, base);
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// stw ctx_arrow(ctx)->r11,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
	// b 0x823e3cb0
	goto loc_823E3CB0;
loc_823E3A68:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e2c90
	sub_823E2C90(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3cb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CB0;
	// lwz ctx_arrow(ctx)->r9,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 2;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// li ctx_arrow(ctx)->r27,3
	ctx_arrow(ctx)->r27.s64 = 3;
	// lhz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30,29,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x7;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 7, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e3b38
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E3B38;
	// lis ctx_arrow(ctx)->r12,-32194
	ctx_arrow(ctx)->r12.s64 = -2109865984;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,15024
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 15024;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r0
	ctr.u64 = ctx_arrow(ctx)->r0.u64;
	// bctr 
	switch (ctx_arrow(ctx)->r11.u64) {
	case 0:
		goto loc_823E3AD0;
	case 1:
		goto loc_823E3B28;
	case 2:
		goto loc_823E3ADC;
	case 3:
		goto loc_823E3AEC;
	case 4:
		goto loc_823E3B00;
	case 5:
		goto loc_823E3B14;
	case 6:
		goto loc_823E3AD0;
	case 7:
		goto loc_823E3B28;
	default:
		__builtin_unreachable();
	}
	// lwz ctx_arrow(ctx)->r17,15056(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,15144(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,15068(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,15084(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,15104(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,15124(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,15056(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,15144(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
loc_823E3AD0:
	// stw ctx_arrow(ctx)->r28,440(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 440);
	// stw ctx_arrow(ctx)->r28,444(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 444);
	// b 0x823e3b34
	goto loc_823E3B34;
loc_823E3ADC:
	// stw ctx_arrow(ctx)->r10,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
	// stw ctx_arrow(ctx)->r28,440(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 440);
	// stw ctx_arrow(ctx)->r28,444(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 444);
	// b 0x823e3b38
	goto loc_823E3B38;
loc_823E3AEC:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r10,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
	// stw ctx_arrow(ctx)->r28,444(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 444);
	// stw ctx_arrow(ctx)->r11,440(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 440);
	// b 0x823e3b38
	goto loc_823E3B38;
loc_823E3B00:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r10,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
	// stw ctx_arrow(ctx)->r28,440(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 440);
	// stw ctx_arrow(ctx)->r11,444(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 444);
	// b 0x823e3b38
	goto loc_823E3B38;
loc_823E3B14:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r10,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
	// stw ctx_arrow(ctx)->r11,440(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 440);
	// stw ctx_arrow(ctx)->r11,444(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 444);
	// b 0x823e3b38
	goto loc_823E3B38;
loc_823E3B28:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,444(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 444);
	// stw ctx_arrow(ctx)->r11,440(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 440);
loc_823E3B34:
	// stw ctx_arrow(ctx)->r27,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
loc_823E3B38:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,60
	ctx_arrow(ctx)->r30.s64 = 60;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r10.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3bbc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3BBC;
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3b60
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3B60;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 5, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3bbc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3BBC;
loc_823E3B60:
	// lwz ctx_arrow(ctx)->r10,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3b7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3B7C;
	// lwz ctx_arrow(ctx)->r10,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64;
	// beq ctx_arrow(ctx)->r6,0x823e3b80
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3B80;
loc_823E3B7C:
	// li ctx_arrow(ctx)->r10,60
	ctx_arrow(ctx)->r10.s64 = 60;
loc_823E3B80:
	// lwz ctx_arrow(ctx)->r8,440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3b9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3B9C;
	// lhz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + 24);
	// lhz ctx_arrow(ctx)->r30,22(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r30.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + 22);
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r10.u32 & 0x3;
loc_823E3B9C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E3BBC:
	// lwz ctx_arrow(ctx)->r10,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3c24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3C24;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0xFFFF;
	// bne ctx_arrow(ctx)->r6,0x823e3bdc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3BDC;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
loc_823E3BDC:
	// lwz ctx_arrow(ctx)->r9,440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3bfc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3BFC;
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// lhz ctx_arrow(ctx)->r30,22(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r30.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 22);
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r9,30
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r9.u32 & 0x3;
loc_823E3BFC:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r3,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e0878
	sub_823E0878(ctx, base);
loc_823E3C24:
	// lwz ctx_arrow(ctx)->r10,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3ca0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CA0;
	// lwz ctx_arrow(ctx)->r11,436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3ca0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3CA0;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3c58
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3C58;
	// lwz ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64;
	// beq ctx_arrow(ctx)->r6,0x823e3c5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3C5C;
loc_823E3C58:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0xFFFF;
loc_823E3C5C:
	// lwz ctx_arrow(ctx)->r9,444(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3c7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3C7C;
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r9,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// lhz ctx_arrow(ctx)->r5,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 20);
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r9,30
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r9.u32 & 0x3;
loc_823E3C7C:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.s64 = 2;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823e0878
	sub_823E0878(ctx, base);
loc_823E3CA0:
	// lwz ctx_arrow(ctx)->r11,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3cb0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3CB0;
	// stw ctx_arrow(ctx)->r27,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
loc_823E3CB0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d5e48
	sub_823D5E48(ctx, base);
	// lwz ctx_arrow(ctx)->r3,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3cc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CC8;
	// bl 0x823e0a60
	sub_823E0A60(ctx, base);
loc_823E3CC8:
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3cd8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CD8;
	// bl 0x823e0a60
	sub_823E0A60(ctx, base);
loc_823E3CD8:
	// lwz ctx_arrow(ctx)->r3,424(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3ce8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3CE8;
	// bl 0x823e0a60
	sub_823E0A60(ctx, base);
loc_823E3CE8:
	// lwz ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3d40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3D40;
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3d40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3D40;
	// lwz ctx_arrow(ctx)->r11,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3d40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3D40;
	// lwz ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3d40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3D40;
	// lwz ctx_arrow(ctx)->r11,424(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3d40
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3D40;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = 32;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,360(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 360);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E3D40:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823E3D48) PPC_WEAK_FUNC(sub_823E3D48);
PPC_FUNC_IMPL(__imp__sub_823E3D48) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 2;
	// lwz ctx_arrow(ctx)->r30,300(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r29,396(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 396);
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 360);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r4,1(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r4,5(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e3e9c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E3E9C;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32795
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32795;
	// li ctx_arrow(ctx)->r3,16
	ctx_arrow(ctx)->r3.s64 = 16;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3e14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3E14;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r4,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x823ea2d0
	sub_823EA2D0(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3e30
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3E30;
loc_823E3E14:
	// lis ctx_arrow(ctx)->r30,-32761
	ctx_arrow(ctx)->r30.s64 = -2147024896;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,14
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 14;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_823E3E30:
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// stw ctx_arrow(ctx)->r11,304(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 304);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32819
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32819;
	// li ctx_arrow(ctx)->r3,12
	ctx_arrow(ctx)->r3.s64 = 12;
	// bl 0x823d17d8
	sub_823D17D8(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3e14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3E14;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// bl 0x823ea5f8
	sub_823EA5F8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3e14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3E14;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,408(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 408);
	// bl 0x823e3448
	sub_823E3448(&ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e3e9c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E3E9C;
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 360);
	// bl 0x823d5a80
	sub_823D5A80(&ctx);
loc_823E3E9C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823E3EB0) PPC_WEAK_FUNC(sub_823E3EB0);
PPC_FUNC_IMPL(__imp__sub_823E3EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lhz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,24,29,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 24) & 0x7;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 5, xer);
	// bgt ctx_arrow(ctx)->r6,0x823e4018
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823E4018;
	// lis ctx_arrow(ctx)->r12,-32194
	ctx_arrow(ctx)->r12.s64 = -2109865984;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,16124
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 16124;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r8,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r0
	ctr.u64 = ctx_arrow(ctx)->r0.u64;
	// bctr 
	switch (ctx_arrow(ctx)->r8.u64) {
	case 0:
		goto loc_823E3F14;
	case 1:
		goto loc_823E3F30;
	case 2:
		goto loc_823E3F94;
	case 3:
		goto loc_823E3F94;
	case 4:
		goto loc_823E3FF0;
	case 5:
		goto loc_823E3FF0;
	default:
		__builtin_unreachable();
	}
	// lwz ctx_arrow(ctx)->r17,16148(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,16176(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,16276(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,16276(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,16368(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r17,16368(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
loc_823E3F14:
	// lwz ctx_arrow(ctx)->r6,396(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r6.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// bl 0x823d7050
	sub_823D7050(ctx, base);
	// stw ctx_arrow(ctx)->r30,396(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 396);
	// b 0x823e4018
	goto loc_823E4018;
loc_823E3F30:
	// lwz ctx_arrow(ctx)->r11,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r30.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3f7c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3F7C;
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3f54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3F54;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 5, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3f7c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3F7C;
loc_823E3F54:
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,400(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r7,104(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,384(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,92(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r10.s64;
	// lwz ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
loc_823E3F7C:
	// lwz ctx_arrow(ctx)->r11,396(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// bl 0x823d7050
	sub_823D7050(ctx, base);
	// b 0x823e4018
	goto loc_823E4018;
loc_823E3F94:
	// lwz ctx_arrow(ctx)->r9,412(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e3fdc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E3FDC;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,21,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x700;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-768
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -768;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e3fc0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E3FC0;
	// lhz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r9.u32 + 48);
loc_823E3FC0:
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r5.u64;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r8,7(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r8.u64;
	// b 0x823e4010
	goto loc_823E4010;
loc_823E3FDC:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d7050
	sub_823D7050(ctx, base);
	// b 0x823e4018
	goto loc_823E4018;
loc_823E3FF0:
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r7,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,21,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x700;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1024
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1024;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_823E4010:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d7170
	sub_823D7170(ctx, base);
loc_823E4018:
	// stw ctx_arrow(ctx)->r30,396(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 396);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E4038) PPC_WEAK_FUNC(sub_823E4038);
PPC_FUNC_IMPL(__imp__sub_823E4038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4074
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4074;
	// lwz ctx_arrow(ctx)->r11,364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e407c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E407C;
loc_823E4074:
	// lis ctx_arrow(ctx)->r30,-30009
	ctx_arrow(ctx)->r30.s64 = -1966669824;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 6;
loc_823E407C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e40d8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E40D8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x823e40ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E40EC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823e40d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E40D8;
	// bl 0x823cefc8
	sub_823CEFC8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,384(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 384);
	// bl 0x823e3718
	sub_823E3718(&ctx);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = 8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,360(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 360);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E40D8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
loc_823E40EC:
	// lis ctx_arrow(ctx)->r30,-30009
	ctx_arrow(ctx)->r30.s64 = -1966669824;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 8;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E4108) PPC_WEAK_FUNC(sub_823E4108);
PPC_FUNC_IMPL(__imp__sub_823E4108) {
	PPC_FUNC_PROLOGUE();
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32, xer);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r29.u64;
	// beq ctx_arrow(ctx)->r6,0x823e4270
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4270;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4160
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4160;
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4270
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4270;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4270
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4270;
loc_823E4160:
	// lwz ctx_arrow(ctx)->r11,364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4170
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4170;
	// li ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = 1;
loc_823E4170:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d5928
	sub_823D5928(ctx, base);
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -2;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e41f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E41F8;
	// lwz ctx_arrow(ctx)->r3,52(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e41b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E41B4;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823e09a8
	sub_823E09A8(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e4270
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E4270;
loc_823E41B4:
	// lwz ctx_arrow(ctx)->r3,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e41cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E41CC;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823e09a8
	sub_823E09A8(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E41CC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e4270
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E4270;
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e41ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E41EC;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x823e09a8
	sub_823E09A8(ctx, base);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E41EC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e4270
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E4270;
	// stw ctx_arrow(ctx)->r29,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
loc_823E41F8:
	// li ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.s64 = 16;
	// lwz ctx_arrow(ctx)->r11,412(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stw ctx_arrow(ctx)->r10,360(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 360);
	// beq ctx_arrow(ctx)->r6,0x823e4214
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4214;
	// stw ctx_arrow(ctx)->r29,64(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 64);
	// stw ctx_arrow(ctx)->r29,412(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 412);
loc_823E4214:
	// lwz ctx_arrow(ctx)->r10,372(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,356
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 356;
	// stw ctx_arrow(ctx)->r29,364(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 364);
	// stw ctx_arrow(ctx)->r29,384(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 384);
	// stw ctx_arrow(ctx)->r29,388(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 388);
	// stw ctx_arrow(ctx)->r29,392(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 392);
	// stw ctx_arrow(ctx)->r29,380(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 380);
	// lwz ctx_arrow(ctx)->r4,228(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4270
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4270;
loc_823E423C:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4268
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4268;
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e423c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E423C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_823E4268:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 + 24;
	// bl 0x823dcbc8
	sub_823DCBC8(ctx, base);
loc_823E4270:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_823E4288) PPC_WEAK_FUNC(sub_823E4288);
PPC_FUNC_IMPL(__imp__sub_823E4288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x823e3770
	sub_823E3770(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u32 & 0x1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e42c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E42C8;
	// lis ctx_arrow(ctx)->r4,8324
	ctx_arrow(ctx)->r4.s64 = 545521664;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,32779
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r4.u64 | 32779;
	// bl 0x823d17e0
	sub_823D17E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
loc_823E42C8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E42E0) PPC_WEAK_FUNC(sub_823E42E0);
PPC_FUNC_IMPL(__imp__sub_823E42E0) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stfd f31,-64(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -64);
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// sth ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r11, 0);
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// stw ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// lhz ctx_arrow(ctx)->r4,428(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 428);
	// lwz ctx_arrow(ctx)->r29,304(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 65535, xer);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// beq ctx_arrow(ctx)->r6,0x823e4344
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4344;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823e9c90
	sub_823E9C90(ctx, base);
loc_823E4344:
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r26.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e438c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E438C;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4368
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4368;
	// lwz ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// beq ctx_arrow(ctx)->r6,0x823e43a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E43A0;
loc_823E4368:
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823e9b58
	sub_823E9B58(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e4464
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E4464;
	// b 0x823e43a0
	goto loc_823E43A0;
loc_823E438C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4464
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4464;
	// lwz ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4464
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4464;
loc_823E43A0:
	// lhz ctx_arrow(ctx)->r4,428(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 428);
	// lhz ctx_arrow(ctx)->r5,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 80);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4464
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4464;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,432
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 432;
	// lwz ctx_arrow(ctx)->r3,408(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x823ea6e8
	sub_823EA6E8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e43dc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E43DC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e2fa0
	sub_823E2FA0(ctx, base);
loc_823E43DC:
	// stw ctx_arrow(ctx)->r26,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e4464
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E4464;
	// lhz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 80);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 65535, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4408
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4408;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lwz ctx_arrow(ctx)->r4,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823e3eb0
	sub_823E3EB0(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E4408:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e4464
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E4464;
	// lhz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r26,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// sth ctx_arrow(ctx)->r10,430(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 430, ctx_arrow(ctx)->r10.u16);
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,420(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 420);
	// lwz ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, -1, xer);
	// beq ctx_arrow(ctx)->r6,0x823e444c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E444C;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,92
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 92;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d7050
	sub_823D7050(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_823E444C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e4464
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E4464;
	// lwz ctx_arrow(ctx)->r10,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r10,416(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 416);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
loc_823E4464:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lfd f31,-64(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed180
	return;
}

alias(__imp__sub_823E4480) PPC_WEAK_FUNC(sub_823E4480);
PPC_FUNC_IMPL(__imp__sub_823E4480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// beq ctx_arrow(ctx)->r6,0x823e44d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E44D0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 32, xer);
	// beq ctx_arrow(ctx)->r6,0x823e44d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E44D0;
	// lwz ctx_arrow(ctx)->r10,364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e44d0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E44D0;
	// lwz ctx_arrow(ctx)->r10,380(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e44d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E44D0;
	// lwz ctx_arrow(ctx)->r10,436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e44f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E44F0;
loc_823E44D0:
	// lwz ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4600
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4600;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4600
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4600;
	// lwz ctx_arrow(ctx)->r11,368(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4600
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4600;
loc_823E44F0:
	// lwz ctx_arrow(ctx)->r11,412(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4508
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4508;
	// stw ctx_arrow(ctx)->r30,64(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 64);
	// stw ctx_arrow(ctx)->r30,412(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 412);
loc_823E4508:
	// lwz ctx_arrow(ctx)->r11,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4558
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4558;
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4528
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4528;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 5, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4540
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4540;
loc_823E4528:
	// lwz ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4558
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4558;
	// lwz ctx_arrow(ctx)->r10,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4558
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4558;
loc_823E4540:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E4558:
	// lwz ctx_arrow(ctx)->r11,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e45a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E45A8;
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4578
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4578;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 5, xer);
	// bne ctx_arrow(ctx)->r6,0x823e4590
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E4590;
loc_823E4578:
	// lwz ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e45a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E45A8;
	// lwz ctx_arrow(ctx)->r10,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 16, xer);
	// bne ctx_arrow(ctx)->r6,0x823e45a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E45A8;
loc_823E4590:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E45A8:
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfs f1,376(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r30,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// stw ctx_arrow(ctx)->r30,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
	// bl 0x823e42e0
	sub_823E42E0(&ctx);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823e45dc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823E45DC;
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e45dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E45DC;
	// stw ctx_arrow(ctx)->r11,436(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 436);
loc_823E45DC:
	// lwz ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823e45f4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E45F4;
	// lwz ctx_arrow(ctx)->r10,360(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 16, xer);
	// beq ctx_arrow(ctx)->r6,0x823e45f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E45F8;
loc_823E45F4:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
loc_823E45F8:
	// stw ctx_arrow(ctx)->r11,368(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 368);
	// stw ctx_arrow(ctx)->r30,380(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 380);
loc_823E4600:
	// lwz ctx_arrow(ctx)->r3,416(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4610
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4610;
	// bl 0x823dfdb0
	sub_823DFDB0(ctx, base);
loc_823E4610:
	// lwz ctx_arrow(ctx)->r3,420(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4620
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4620;
	// bl 0x823dfdb0
	sub_823DFDB0(ctx, base);
loc_823E4620:
	// lwz ctx_arrow(ctx)->r3,424(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4630
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4630;
	// bl 0x823dfdb0
	sub_823DFDB0(ctx, base);
loc_823E4630:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823d5ec0
	sub_823D5EC0(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E4650) PPC_WEAK_FUNC(sub_823E4650);
PPC_FUNC_IMPL(__imp__sub_823E4650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,72(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,72
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 72;
	// stw ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
loc_823E4664:
	// mfmsr ctx_arrow(ctx)->r6
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r7,0,ctx_arrow(ctx)->r8
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r8.u32);
	ctx_arrow(ctx)->r7.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. ctx_arrow(ctx)->r9,0,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r8.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r9.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r6,1
	// bne 0x823e4664
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823E4664;
	// lwz ctx_arrow(ctx)->r9,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823e46fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823E46FC;
loc_823E4688:
	// mfmsr ctx_arrow(ctx)->r8
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r9,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r10.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r8,1
	// bne 0x823e4688
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823E4688;
	// lbz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,255
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 255, xer);
	// beq ctx_arrow(ctx)->r6,0x823e46bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E46BC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e46bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E46BC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,255
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 255;
	// stb ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r3)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r3.u32 + 60, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_823E46BC:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,64
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 64;
loc_823E46C4:
	// mfmsr ctx_arrow(ctx)->r8
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r9,0,ctx_arrow(ctx)->r10
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r10.u32);
	ctx_arrow(ctx)->r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. ctx_arrow(ctx)->r11,0,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r10.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r11.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r8,1
	// bne 0x823e46c4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823E46C4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,68
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 68;
loc_823E46E0:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. ctx_arrow(ctx)->r5,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r5.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x823e46e0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823E46E0;
	// blr 
	return;
loc_823E46FC:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,68
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 68;
loc_823E4700:
	// mfmsr ctx_arrow(ctx)->r9
	// mtmsrd ctx_arrow(ctx)->r13,1
	// lwarx ctx_arrow(ctx)->r10,0,ctx_arrow(ctx)->r11
	reserved.u32 = *(uint32_t*)(base + ctx_arrow(ctx)->r11.u32);
	ctx_arrow(ctx)->r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. ctx_arrow(ctx)->r5,0,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r0.lt() = 0;
	ctx_arrow(ctx)->r0.gt() = 0;
	ctx_arrow(ctx)->r0.eq() = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx_arrow(ctx)->r11.u32), reserved.s32, __builtin_bswap32(ctx_arrow(ctx)->r5.s32));
	ctx_arrow(ctx)->r0.so() = xer.so;
	// mtmsrd ctx_arrow(ctx)->r9,1
	// bne 0x823e4700
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823E4700;
	// blr 
	return;
}

alias(__imp__sub_823E4720) PPC_WEAK_FUNC(sub_823E4720);
PPC_FUNC_IMPL(__imp__sub_823E4720) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 24;
	// b 0x823dc2b8
	sub_823DC2B8(ctx, base);
	return;
}

alias(__imp__sub_823E4728) PPC_WEAK_FUNC(sub_823E4728);
PPC_FUNC_IMPL(__imp__sub_823E4728) {
	PPC_FUNC_PROLOGUE();
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 24;
	// b 0x823dc340
	sub_823DC340(ctx, base);
	return;
}

alias(__imp__sub_823E4730) PPC_WEAK_FUNC(sub_823E4730);
PPC_FUNC_IMPL(__imp__sub_823E4730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed13c
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x823dc178
	sub_823DC178(ctx, base);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823dc188
	sub_823DC188(ctx, base);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823dc1f8
	sub_823DC1F8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,68(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 68);
	// bl 0x823dc258
	sub_823DC258(&ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lbz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r10,64(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 64));
	// lbz ctx_arrow(ctx)->r10,1(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r10,65(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 65));
	// lbz ctx_arrow(ctx)->r10,2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r10,66(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 66));
	// lbz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// stb ctx_arrow(ctx)->r11,67(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 67, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e47e0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E47E0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,64(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r5,64
	ctx_arrow(ctx)->r5.s64 = 64;
	// bl 0x823f0600
	sub_823F0600(ctx, base);
loc_823E47E0:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823dc218
	sub_823DC218(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e4810
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E4810;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823dc208
	sub_823DC208(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,72(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 72);
	// bl 0x823dc210
	sub_823DC210(&ctx);
	// stw ctx_arrow(ctx)->r3,76(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 76);
	// b 0x823e482c
	goto loc_823E482C;
loc_823E4810:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,72
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 72;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// li ctx_arrow(ctx)->r9,8
	ctx_arrow(ctx)->r9.s64 = 8;
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
loc_823E4820:
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// bdnz 0x823e4820
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823E4820;
loc_823E482C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 80);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_823E4850) PPC_WEAK_FUNC(sub_823E4850);
PPC_FUNC_IMPL(__imp__sub_823E4850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,196
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,232(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 232);
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823E48A0) PPC_WEAK_FUNC(sub_823E48A0);
PPC_FUNC_IMPL(__imp__sub_823E48A0) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,196
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 196;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,-12
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + -12;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823e48e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823E48E8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E48E8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

