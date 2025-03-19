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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28,4,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 28) & 0xFFFFFFF;
	// blr 
	return;
}

alias(__imp__sub_823DC208) PPC_WEAK_FUNC(sub_823DC208);
PPC_FUNC_IMPL(__imp__sub_823DC208) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_823DC210) PPC_WEAK_FUNC(sub_823DC210);
PPC_FUNC_IMPL(__imp__sub_823DC210) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,28,4,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 28) & 0xFFFFFFF;
loc_823DC2EC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dc2fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC2FC;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x823dc300
	goto loc_823DC300;
loc_823DC2FC:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_823DC300:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + 1;
	// lwz ctx_arrow(ctx)->r7,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x823dc36c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC36C;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,28,4,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 28) & 0xFFFFFFF;
loc_823DC36C:
	// lwz ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dc470
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC470;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,156(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r3,56(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x823dc4c0
	goto loc_823DC4C0;
loc_823DC470:
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r7)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r5.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc538
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC538;
	// lwz ctx_arrow(ctx)->r5,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r5.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc554
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC554;
loc_823DC538:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x823dc5d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DC5D4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r3,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x3;
	// stw ctx_arrow(ctx)->r3,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r4.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823dc608
	sub_823DC608(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// blt ctx_arrow(ctx)->r6,0x823dc7fc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DC7FC;
	// bne ctx_arrow(ctx)->r6,0x823dc7fc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC7FC;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x823dc608
	sub_823DC608(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x823dc868
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DC868;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823dc608
	sub_823DC608(ctx, base);
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r3.s64;
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

alias(__imp__sub_823DC898) PPC_WEAK_FUNC(sub_823DC898);
PPC_FUNC_IMPL(__imp__sub_823DC898) {
	PPC_FUNC_PROLOGUE();
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DCA3C:
	// lwz ctx_arrow(ctx)->r11,260(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r24.u64;
	// lwz ctx_arrow(ctx)->r7,252(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r6,244(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r10,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r24,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r9,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r29,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,284(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823dcbe0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DCBE0;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,204(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 204, ctx_arrow(ctx)->r4.u32);
	// b 0x823dcbec
	goto loc_823DCBEC;
loc_823DCBE0:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
loc_823DCBEC:
	// lwz ctx_arrow(ctx)->r11,208(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r11.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x823dcc04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DCC04;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,208(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 208, ctx_arrow(ctx)->r4.u32);
	// b 0x823dcc10
	goto loc_823DCC10;
loc_823DCC04:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_823DCC10:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,212(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,212(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 212, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-8
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -8;
	// bl 0x823ed538
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f4,0(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f4.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r9,-32256
	ctx_arrow(ctx)->r9.s64 = -2113929216;
	// lfs f3,0(ctx_arrow(ctx)->r5)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f3.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lfs f2,0(ctx_arrow(ctx)->r6)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,0(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// fmr f8,f1
	ctx.f8.f64 = ctx.f1.f64;
	// lfs f30,4(ctx_arrow(ctx)->r6)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f30.f64 = double(temp.f32);
	// lfs f7,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f7.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f29,4(ctx_arrow(ctx)->r5)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f29.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f28,4(ctx_arrow(ctx)->r7)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f28.f64 = double(temp.f32);
	// lfs f27,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f27.f64 = double(temp.f32);
	// lfs f9,3908(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f6.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f25,14440(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f25.f64 = double(temp.f32);
	// lfs f26,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,2688(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 5;
	// lbz ctx_arrow(ctx)->r10,2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,40(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// bgt ctx_arrow(ctx)->r6,0x823dcd7c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823DCD7C;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// b 0x823dd020
	goto loc_823DD020;
loc_823DCD7C:
	// lbz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 3);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r10,-9(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// blt ctx_arrow(ctx)->r6,0x823dcdbc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCDBC;
	// lwz ctx_arrow(ctx)->r11,-5(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,64
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 64;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r10,44(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u8);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r6,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f0,80(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// blt ctx_arrow(ctx)->r6,0x823dcdf8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCDF8;
	// lwz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r6,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// stw ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - f0.f64));
	// stw ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f13,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f0,f13,f1,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// b 0x823dd020
	goto loc_823DD020;
loc_823DCE8C:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// blt ctx_arrow(ctx)->r6,0x823dcee8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823DCEE8;
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f31,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f0,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f12,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fmadds f0,f12,f13,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// b 0x823dd020
	goto loc_823DD020;
loc_823DCF1C:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f30,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f30.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfs f29,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f31,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,-21824
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 + -21824;
	// lis ctx_arrow(ctx)->r10,-32015
	ctx_arrow(ctx)->r10.s64 = -2098135040;
	// stw ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f31,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,-21848
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r10.s64 + -21848;
	// b 0x823dd008
	goto loc_823DD008;
loc_823DCF94:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f30,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f30.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// lfs f29,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f31,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,-20404
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 + -20404;
	// lis ctx_arrow(ctx)->r10,-31987
	ctx_arrow(ctx)->r10.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lfs f31,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
loc_823DD024:
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,36(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,40(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,120(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x823df890
	sub_823DF890(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD1C0:
	// lfs f0,124(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,40(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x823df900
	sub_823DF900(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD1E4:
	// lfs f0,116(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,40(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x823df860
	sub_823DF860(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD208:
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
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
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,40(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// bl 0x823e1670
	sub_823E1670(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD244:
	// lfs f0,56(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,40(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x823e1640
	sub_823E1640(ctx, base);
	// lbz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,25,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823dd2c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823DD2C8;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lhz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x823dd294
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_823DD294;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r3,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823e1198
	sub_823E1198(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_823DD294:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,25
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7F;
	// stb ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx.u8);
	// blr 
	return;
}

