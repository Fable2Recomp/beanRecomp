#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_82193368) PPC_WEAK_FUNC(sub_82193368);
PPC_FUNC_IMPL(__imp__sub_82193368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz ctx_arrow(ctx)->r11,11840(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x1F;
	// blr 
	return;
}

alias(__imp__sub_82193378) PPC_WEAK_FUNC(sub_82193378);
PPC_FUNC_IMPL(__imp__sub_82193378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,30,1,1
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 30) & 0x40000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// stw ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11844, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,11840(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bne ctx_arrow(ctx)->r6,0x821933b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821933B4;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,4,0,27
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,4112
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 & 4112;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r8.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,12,0,15
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,12,10
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,4,2
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
loc_821933B4:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821933c4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821933C4;
	// lis ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 65536;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1;
loc_821933C4:
	// stw ctx_arrow(ctx)->r11,10552(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10552, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,10584(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10584, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,10588(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10588, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,10592(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10592, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1024
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1024;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193400) PPC_WEAK_FUNC(sub_82193400);
PPC_FUNC_IMPL(__imp__sub_82193400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,2,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82193410) PPC_WEAK_FUNC(sub_82193410);
PPC_FUNC_IMPL(__imp__sub_82193410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF;
	// std ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,6592(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,10500(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10500, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 134217728;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193448) PPC_WEAK_FUNC(sub_82193448);
PPC_FUNC_IMPL(__imp__sub_82193448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f12,10500(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f0,6596(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193478) PPC_WEAK_FUNC(sub_82193478);
PPC_FUNC_IMPL(__imp__sub_82193478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,28
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFF8) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF00000007);
	// stw ctx_arrow(ctx)->r4,10556(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10556, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 512;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193498) PPC_WEAK_FUNC(sub_82193498);
PPC_FUNC_IMPL(__imp__sub_82193498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x7;
	// blr 
	return;
}

alias(__imp__sub_821934A8) PPC_WEAK_FUNC(sub_821934A8);
PPC_FUNC_IMPL(__imp__sub_821934A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,24,24,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 24) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,16,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 16) & 0xFF;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,8,24,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 8) & 0xFF;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,56
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r4.u64 & 0xFF;
	// clrldi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,32
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFF;
	// li ctx_arrow(ctx)->r12,15
	ctx_arrow(ctx)->r12.s64 = 15;
	// std ctx_arrow(ctx)->r10,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r11,-32(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// std ctx_arrow(ctx)->r9,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,33,30
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 33) & 0xFFFFFFFE00000000;
	// std ctx_arrow(ctx)->r8,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lfd f13,-24(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f0,-32(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,-16(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f11,-8(ctx_arrow(ctx)->r1)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f0
	ctx.f10.f64 = double(float(f0.f64));
	// lfs f0,6592(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,10468(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10468, ctx_arrow(ctx)->r4.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f10,10464(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10464, ctx_arrow(ctx)->r4.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,10472(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10472, ctx_arrow(ctx)->r4.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,10476(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10476, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193548) PPC_WEAK_FUNC(sub_82193548);
PPC_FUNC_IMPL(__imp__sub_82193548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f12,10464(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f11,10476(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10468(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10472(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,6596(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	f0.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// fctidz f12,f10
	ctx.f12.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// stfiwx f13,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,8,0,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,8,0,23
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f0,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,8,0,23
	ctx_arrow(ctx)->r3.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

alias(__imp__sub_821935C8) PPC_WEAK_FUNC(sub_821935C8);
PPC_FUNC_IMPL(__imp__sub_821935C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r11,10680(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,10,21,21
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 10) & 0x400) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10680(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10680, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// blr 
	return;
}

alias(__imp__sub_821935F0) PPC_WEAK_FUNC(sub_821935F0);
PPC_FUNC_IMPL(__imp__sub_821935F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10680(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,22,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82193600) PPC_WEAK_FUNC(sub_82193600);
PPC_FUNC_IMPL(__imp__sub_82193600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,52,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,12272(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f13,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// sth ctx_arrow(ctx)->r11,10606(ctx_arrow(ctx)->r3)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r3.u32 + 10606, ctx_arrow(ctx)->r11, 0);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82193640) PPC_WEAK_FUNC(sub_82193640);
PPC_FUNC_IMPL(__imp__sub_82193640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lhz ctx_arrow(ctx)->r11,10606(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 10606);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,17872(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193670) PPC_WEAK_FUNC(sub_82193670);
PPC_FUNC_IMPL(__imp__sub_82193670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,22280(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82193684
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82193684;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1;
	// b 0x82193688
	goto loc_82193688;
loc_82193684:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82193688:
	// stw ctx_arrow(ctx)->r11,22280(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 22280, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82193690) PPC_WEAK_FUNC(sub_82193690);
PPC_FUNC_IMPL(__imp__sub_82193690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,22280(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// blr 
	return;
}

alias(__imp__sub_821936A0) PPC_WEAK_FUNC(sub_821936A0);
PPC_FUNC_IMPL(__imp__sub_821936A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,11868(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11868, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821936b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821936B4;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_821936B4:
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,1,30,30
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 1) & 0x2) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821936D8) PPC_WEAK_FUNC(sub_821936D8);
PPC_FUNC_IMPL(__imp__sub_821936D8) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,11868(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_821936E0) PPC_WEAK_FUNC(sub_821936E0);
PPC_FUNC_IMPL(__imp__sub_821936E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,29,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 2) & 0x4) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193700) PPC_WEAK_FUNC(sub_82193700);
PPC_FUNC_IMPL(__imp__sub_82193700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,30,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82193710) PPC_WEAK_FUNC(sub_82193710);
PPC_FUNC_IMPL(__imp__sub_82193710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4,25,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 4) & 0x70) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193738) PPC_WEAK_FUNC(sub_82193738);
PPC_FUNC_IMPL(__imp__sub_82193738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82193748) PPC_WEAK_FUNC(sub_82193748);
PPC_FUNC_IMPL(__imp__sub_82193748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,11872(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11872, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219375c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219375C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_8219375C:
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0,31,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 0) & 0x1) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193780) PPC_WEAK_FUNC(sub_82193780);
PPC_FUNC_IMPL(__imp__sub_82193780) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,11872(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193788) PPC_WEAK_FUNC(sub_82193788);
PPC_FUNC_IMPL(__imp__sub_82193788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,7,24,24
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 7) & 0x80) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821937B0) PPC_WEAK_FUNC(sub_821937B0);
PPC_FUNC_IMPL(__imp__sub_821937B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,25,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_821937C0) PPC_WEAK_FUNC(sub_821937C0);
PPC_FUNC_IMPL(__imp__sub_821937C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,8,21,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 8) & 0x700) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821937E0) PPC_WEAK_FUNC(sub_821937E0);
PPC_FUNC_IMPL(__imp__sub_821937E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_821937F0) PPC_WEAK_FUNC(sub_821937F0);
PPC_FUNC_IMPL(__imp__sub_821937F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,11,18,20
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 11) & 0x3800) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193818) PPC_WEAK_FUNC(sub_82193818);
PPC_FUNC_IMPL(__imp__sub_82193818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,21,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82193828) PPC_WEAK_FUNC(sub_82193828);
PPC_FUNC_IMPL(__imp__sub_82193828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,17,12,14
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 17) & 0xE0000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193850) PPC_WEAK_FUNC(sub_82193850);
PPC_FUNC_IMPL(__imp__sub_82193850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,15,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82193860) PPC_WEAK_FUNC(sub_82193860);
PPC_FUNC_IMPL(__imp__sub_82193860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,14,15,17
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 14) & 0x1C000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193880) PPC_WEAK_FUNC(sub_82193880);
PPC_FUNC_IMPL(__imp__sub_82193880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,18,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82193890) PPC_WEAK_FUNC(sub_82193890);
PPC_FUNC_IMPL(__imp__sub_82193890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,20,9,11
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 20) & 0x700000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821938B0) PPC_WEAK_FUNC(sub_821938B0);
PPC_FUNC_IMPL(__imp__sub_821938B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,12,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_821938C0) PPC_WEAK_FUNC(sub_821938C0);
PPC_FUNC_IMPL(__imp__sub_821938C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,23,6,8
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 23) & 0x3800000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821938E8) PPC_WEAK_FUNC(sub_821938E8);
PPC_FUNC_IMPL(__imp__sub_821938E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,9,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_821938F8) PPC_WEAK_FUNC(sub_821938F8);
PPC_FUNC_IMPL(__imp__sub_821938F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,29,0,2
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 29) & 0xE0000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193920) PPC_WEAK_FUNC(sub_82193920);
PPC_FUNC_IMPL(__imp__sub_82193920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,3,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82193930) PPC_WEAK_FUNC(sub_82193930);
PPC_FUNC_IMPL(__imp__sub_82193930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,26,3,5
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 26) & 0x1C000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10548, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193950) PPC_WEAK_FUNC(sub_82193950);
PPC_FUNC_IMPL(__imp__sub_82193950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,6,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82193960) PPC_WEAK_FUNC(sub_82193960);
PPC_FUNC_IMPL(__imp__sub_82193960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10499(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 10499, ctx_arrow(ctx)->r4.u8);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 268435456;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193978) PPC_WEAK_FUNC(sub_82193978);
PPC_FUNC_IMPL(__imp__sub_82193978) {
	PPC_FUNC_PROLOGUE();
	// lbz ctx_arrow(ctx)->r3,10499(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193980) PPC_WEAK_FUNC(sub_82193980);
PPC_FUNC_IMPL(__imp__sub_82193980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10498(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 10498, ctx_arrow(ctx)->r4.u8);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 268435456;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193998) PPC_WEAK_FUNC(sub_82193998);
PPC_FUNC_IMPL(__imp__sub_82193998) {
	PPC_FUNC_PROLOGUE();
	// lbz ctx_arrow(ctx)->r3,10498(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_821939A0) PPC_WEAK_FUNC(sub_821939A0);
PPC_FUNC_IMPL(__imp__sub_821939A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10497(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 10497, ctx_arrow(ctx)->r4.u8);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 268435456;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821939B8) PPC_WEAK_FUNC(sub_821939B8);
PPC_FUNC_IMPL(__imp__sub_821939B8) {
	PPC_FUNC_PROLOGUE();
	// lbz ctx_arrow(ctx)->r3,10497(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_821939C0) PPC_WEAK_FUNC(sub_821939C0);
PPC_FUNC_IMPL(__imp__sub_821939C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10495(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 10495, ctx_arrow(ctx)->r4.u8);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 536870912;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821939D8) PPC_WEAK_FUNC(sub_821939D8);
PPC_FUNC_IMPL(__imp__sub_821939D8) {
	PPC_FUNC_PROLOGUE();
	// lbz ctx_arrow(ctx)->r3,10495(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_821939E0) PPC_WEAK_FUNC(sub_821939E0);
PPC_FUNC_IMPL(__imp__sub_821939E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10494(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 10494, ctx_arrow(ctx)->r4.u8);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 536870912;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821939F8) PPC_WEAK_FUNC(sub_821939F8);
PPC_FUNC_IMPL(__imp__sub_821939F8) {
	PPC_FUNC_PROLOGUE();
	// lbz ctx_arrow(ctx)->r3,10494(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193A00) PPC_WEAK_FUNC(sub_82193A00);
PPC_FUNC_IMPL(__imp__sub_82193A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10493(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 10493, ctx_arrow(ctx)->r4.u8);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 536870912;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193A18) PPC_WEAK_FUNC(sub_82193A18);
PPC_FUNC_IMPL(__imp__sub_82193A18) {
	PPC_FUNC_PROLOGUE();
	// lbz ctx_arrow(ctx)->r3,10493(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193A20) PPC_WEAK_FUNC(sub_82193A20);
PPC_FUNC_IMPL(__imp__sub_82193A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	// lwz ctx_arrow(ctx)->r11,10564(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,0
	xer.ca = ctx_arrow(ctx)->r4.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r4.s64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,25
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFC0;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r4.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,44,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10564(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10564, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,10420(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10420, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 128;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193A60) PPC_WEAK_FUNC(sub_82193A60);
PPC_FUNC_IMPL(__imp__sub_82193A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10564(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x3F;
	// blr 
	return;
}

alias(__imp__sub_82193A70) PPC_WEAK_FUNC(sub_82193A70);
PPC_FUNC_IMPL(__imp__sub_82193A70) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,11848(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193A78) PPC_WEAK_FUNC(sub_82193A78);
PPC_FUNC_IMPL(__imp__sub_82193A78) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,14220(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,10832(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10832, ctx_arrow(ctx)->r4.u32);
	// stfs f0,10840(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10840, ctx_arrow(ctx)->r4.u32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bne ctx_arrow(ctx)->r6,0x82193ab4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193AB4;
	// lfs f12,10836(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// fcmpu ctx_arrow(ctx)->r6,f12,f13
	ctx_arrow(ctx)->r6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq ctx_arrow(ctx)->r6,0x82193ab8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82193AB8;
loc_82193AB4:
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
loc_82193AB8:
	// lwz ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,11,20,20
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 11) & 0x800) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10568, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x82193adc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193ADC;
	// lfs f0,10844(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// beq ctx_arrow(ctx)->r6,0x82193ae0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82193AE0;
loc_82193ADC:
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
loc_82193AE0:
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,12,19,19
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 12) & 0x1000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,45,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10568, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,43,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193B20) PPC_WEAK_FUNC(sub_82193B20);
PPC_FUNC_IMPL(__imp__sub_82193B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// lfs f13,10832(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18868(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193B40) PPC_WEAK_FUNC(sub_82193B40);
PPC_FUNC_IMPL(__imp__sub_82193B40) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f12,10832(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f12,f0
	ctx_arrow(ctx)->r6.compare(ctx.f12.f64, f0.f64);
	// lfs f13,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,10836(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10836, ctx_arrow(ctx)->r4.u32);
	// stfs f13,10844(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10844, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x82193b70
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193B70;
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// beq ctx_arrow(ctx)->r6,0x82193b74
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82193B74;
loc_82193B70:
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
loc_82193B74:
	// lwz ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f12,10840(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f12,f0
	ctx_arrow(ctx)->r6.compare(ctx.f12.f64, f0.f64);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,11,20,20
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 11) & 0x800) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10568, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x82193b98
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193B98;
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// beq ctx_arrow(ctx)->r6,0x82193b9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82193B9C;
loc_82193B98:
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
loc_82193B9C:
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,12,19,19
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 12) & 0x1000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,44,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10568, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,42,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193BD8) PPC_WEAK_FUNC(sub_82193BD8);
PPC_FUNC_IMPL(__imp__sub_82193BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10836(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193BE8) PPC_WEAK_FUNC(sub_82193BE8);
PPC_FUNC_IMPL(__imp__sub_82193BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,15,16,16
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 15) & 0x8000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10568, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193C08) PPC_WEAK_FUNC(sub_82193C08);
PPC_FUNC_IMPL(__imp__sub_82193C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,17,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82193C18) PPC_WEAK_FUNC(sub_82193C18);
PPC_FUNC_IMPL(__imp__sub_82193C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 & 0xFFFF;
	// stw ctx_arrow(ctx)->r11,10752(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10752, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 524288;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// blr 
	return;
}

alias(__imp__sub_82193C30) PPC_WEAK_FUNC(sub_82193C30);
PPC_FUNC_IMPL(__imp__sub_82193C30) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,10752(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193C38) PPC_WEAK_FUNC(sub_82193C38);
PPC_FUNC_IMPL(__imp__sub_82193C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r11,12432(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,11852(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11852, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82193c4c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193C4C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_82193C4C:
	// lwz ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,27
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF0000000F);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r4,10460(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10460, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193C70) PPC_WEAK_FUNC(sub_82193C70);
PPC_FUNC_IMPL(__imp__sub_82193C70) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,11852(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193C78) PPC_WEAK_FUNC(sub_82193C78);
PPC_FUNC_IMPL(__imp__sub_82193C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r11,12436(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,11856(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11856, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82193c8c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193C8C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_82193C8C:
	// lwz ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4,24,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 4) & 0xF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10460, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193CB0) PPC_WEAK_FUNC(sub_82193CB0);
PPC_FUNC_IMPL(__imp__sub_82193CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,11856(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193CB8) PPC_WEAK_FUNC(sub_82193CB8);
PPC_FUNC_IMPL(__imp__sub_82193CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r11,12440(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,11860(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11860, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82193ccc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193CCC;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_82193CCC:
	// lwz ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,8,20,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 8) & 0xF00) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10460, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193CF0) PPC_WEAK_FUNC(sub_82193CF0);
PPC_FUNC_IMPL(__imp__sub_82193CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,11860(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193CF8) PPC_WEAK_FUNC(sub_82193CF8);
PPC_FUNC_IMPL(__imp__sub_82193CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r11,12444(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,11864(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11864, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82193d0c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193D0C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_82193D0C:
	// lwz ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,12,16,19
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 12) & 0xF000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10460, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193D30) PPC_WEAK_FUNC(sub_82193D30);
PPC_FUNC_IMPL(__imp__sub_82193D30) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,11864(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193D38) PPC_WEAK_FUNC(sub_82193D38);
PPC_FUNC_IMPL(__imp__sub_82193D38) {
	PPC_FUNC_PROLOGUE();
	// stw ctx_arrow(ctx)->r4,11876(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11876, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82193D40) PPC_WEAK_FUNC(sub_82193D40);
PPC_FUNC_IMPL(__imp__sub_82193D40) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,11876(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193D48) PPC_WEAK_FUNC(sub_82193D48);
PPC_FUNC_IMPL(__imp__sub_82193D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,54,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,12272(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,11884(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11884, ctx_arrow(ctx)->r4.u32);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// sth ctx_arrow(ctx)->r11,10598(ctx_arrow(ctx)->r3)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r3.u32 + 10598, ctx_arrow(ctx)->r11, 0);
	// sth ctx_arrow(ctx)->r11,10596(ctx_arrow(ctx)->r3)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r3.u32 + 10596, ctx_arrow(ctx)->r11, 0);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82193D98) PPC_WEAK_FUNC(sub_82193D98);
PPC_FUNC_IMPL(__imp__sub_82193D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11884(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193DA8) PPC_WEAK_FUNC(sub_82193DA8);
PPC_FUNC_IMPL(__imp__sub_82193DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,53,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,14220(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,11888(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11888, ctx_arrow(ctx)->r4.u32);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// sth ctx_arrow(ctx)->r11,10602(ctx_arrow(ctx)->r3)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r3.u32 + 10602, ctx_arrow(ctx)->r11, 0);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82193DF0) PPC_WEAK_FUNC(sub_82193DF0);
PPC_FUNC_IMPL(__imp__sub_82193DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11888(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193E00) PPC_WEAK_FUNC(sub_82193E00);
PPC_FUNC_IMPL(__imp__sub_82193E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,53,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,14220(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,11892(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11892, ctx_arrow(ctx)->r4.u32);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// sth ctx_arrow(ctx)->r11,10600(ctx_arrow(ctx)->r3)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r3.u32 + 10600, ctx_arrow(ctx)->r11, 0);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82193E48) PPC_WEAK_FUNC(sub_82193E48);
PPC_FUNC_IMPL(__imp__sub_82193E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11892(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82193E58) PPC_WEAK_FUNC(sub_82193E58);
PPC_FUNC_IMPL(__imp__sub_82193E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10540, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8192;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193E78) PPC_WEAK_FUNC(sub_82193E78);
PPC_FUNC_IMPL(__imp__sub_82193E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,28,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10540, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8192;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193EA0) PPC_WEAK_FUNC(sub_82193EA0);
PPC_FUNC_IMPL(__imp__sub_82193EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,8,0,23
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,24,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10540, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8192;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193EC8) PPC_WEAK_FUNC(sub_82193EC8);
PPC_FUNC_IMPL(__imp__sub_82193EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,12,0,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,20,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10540, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8192;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193EF0) PPC_WEAK_FUNC(sub_82193EF0);
PPC_FUNC_IMPL(__imp__sub_82193EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,16,0,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,16,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10540, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8192;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193F18) PPC_WEAK_FUNC(sub_82193F18);
PPC_FUNC_IMPL(__imp__sub_82193F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,20,0,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10540, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8192;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193F40) PPC_WEAK_FUNC(sub_82193F40);
PPC_FUNC_IMPL(__imp__sub_82193F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,24,0,7
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,8,3
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10540, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8192;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193F68) PPC_WEAK_FUNC(sub_82193F68);
PPC_FUNC_IMPL(__imp__sub_82193F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,28,0,3
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 28) & 0xF0000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10540, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8192;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193F88) PPC_WEAK_FUNC(sub_82193F88);
PPC_FUNC_IMPL(__imp__sub_82193F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10544, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4096;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193FA8) PPC_WEAK_FUNC(sub_82193FA8);
PPC_FUNC_IMPL(__imp__sub_82193FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,28,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10544, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4096;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193FD0) PPC_WEAK_FUNC(sub_82193FD0);
PPC_FUNC_IMPL(__imp__sub_82193FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,8,0,23
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,24,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10544, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4096;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82193FF8) PPC_WEAK_FUNC(sub_82193FF8);
PPC_FUNC_IMPL(__imp__sub_82193FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,12,0,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,20,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10544, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4096;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194020) PPC_WEAK_FUNC(sub_82194020);
PPC_FUNC_IMPL(__imp__sub_82194020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,16,0,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,16,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10544, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4096;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194048) PPC_WEAK_FUNC(sub_82194048);
PPC_FUNC_IMPL(__imp__sub_82194048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,20,0,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10544, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4096;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194070) PPC_WEAK_FUNC(sub_82194070);
PPC_FUNC_IMPL(__imp__sub_82194070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,24,0,7
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,8,3
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10544, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4096;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194098) PPC_WEAK_FUNC(sub_82194098);
PPC_FUNC_IMPL(__imp__sub_82194098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,28,0,3
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 28) & 0xF0000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10544, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4096;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821940B8) PPC_WEAK_FUNC(sub_821940B8);
PPC_FUNC_IMPL(__imp__sub_821940B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// blr 
	return;
}

alias(__imp__sub_821940C8) PPC_WEAK_FUNC(sub_821940C8);
PPC_FUNC_IMPL(__imp__sub_821940C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

alias(__imp__sub_821940D8) PPC_WEAK_FUNC(sub_821940D8);
PPC_FUNC_IMPL(__imp__sub_821940D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

alias(__imp__sub_821940E8) PPC_WEAK_FUNC(sub_821940E8);
PPC_FUNC_IMPL(__imp__sub_821940E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,20,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

alias(__imp__sub_821940F8) PPC_WEAK_FUNC(sub_821940F8);
PPC_FUNC_IMPL(__imp__sub_821940F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 10540);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// blr 
	return;
}

alias(__imp__sub_82194108) PPC_WEAK_FUNC(sub_82194108);
PPC_FUNC_IMPL(__imp__sub_82194108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,12,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

alias(__imp__sub_82194118) PPC_WEAK_FUNC(sub_82194118);
PPC_FUNC_IMPL(__imp__sub_82194118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// blr 
	return;
}

alias(__imp__sub_82194128) PPC_WEAK_FUNC(sub_82194128);
PPC_FUNC_IMPL(__imp__sub_82194128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

alias(__imp__sub_82194138) PPC_WEAK_FUNC(sub_82194138);
PPC_FUNC_IMPL(__imp__sub_82194138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// blr 
	return;
}

alias(__imp__sub_82194148) PPC_WEAK_FUNC(sub_82194148);
PPC_FUNC_IMPL(__imp__sub_82194148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

alias(__imp__sub_82194158) PPC_WEAK_FUNC(sub_82194158);
PPC_FUNC_IMPL(__imp__sub_82194158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

alias(__imp__sub_82194168) PPC_WEAK_FUNC(sub_82194168);
PPC_FUNC_IMPL(__imp__sub_82194168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,20,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

alias(__imp__sub_82194178) PPC_WEAK_FUNC(sub_82194178);
PPC_FUNC_IMPL(__imp__sub_82194178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r3.u32 + 10544);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// blr 
	return;
}

alias(__imp__sub_82194188) PPC_WEAK_FUNC(sub_82194188);
PPC_FUNC_IMPL(__imp__sub_82194188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,12,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

alias(__imp__sub_82194198) PPC_WEAK_FUNC(sub_82194198);
PPC_FUNC_IMPL(__imp__sub_82194198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// blr 
	return;
}

alias(__imp__sub_821941A8) PPC_WEAK_FUNC(sub_821941A8);
PPC_FUNC_IMPL(__imp__sub_821941A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,4,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

alias(__imp__sub_821941B8) PPC_WEAK_FUNC(sub_821941B8);
PPC_FUNC_IMPL(__imp__sub_821941B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// li ctx_arrow(ctx)->r11,1087
	ctx_arrow(ctx)->r11.s64 = 1087;
	// bne ctx_arrow(ctx)->r6,0x821941c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821941C8;
	// li ctx_arrow(ctx)->r11,1024
	ctx_arrow(ctx)->r11.s64 = 1024;
loc_821941C8:
	// stw ctx_arrow(ctx)->r11,10572(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10572, ctx_arrow(ctx)->r4.u32);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,10564(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,16,15,15
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 16) & 0x10000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw ctx_arrow(ctx)->r10,10564(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10564, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 32;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 128;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821941F8) PPC_WEAK_FUNC(sub_821941F8);
PPC_FUNC_IMPL(__imp__sub_821941F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10572(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82194208) PPC_WEAK_FUNC(sub_82194208);
PPC_FUNC_IMPL(__imp__sub_82194208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r8,12432(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,12020(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12020, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,16,28,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 16) & 0xF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x82194240
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82194240;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x82194240
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82194240;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 10, xer);
	// beq ctx_arrow(ctx)->r6,0x82194240
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82194240;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 12, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
loc_82194240:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,13,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 13) & 0x1;
	// xor. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r4.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + -1;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,16,28,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xF;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,0,16,11
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,31,1,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r9.s64 + 3;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -3;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r10.u64;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,56,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xF0000;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,10372(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,16,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,10372(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10372, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821942B0) PPC_WEAK_FUNC(sub_821942B0);
PPC_FUNC_IMPL(__imp__sub_821942B0) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,12020(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_821942B8) PPC_WEAK_FUNC(sub_821942B8);
PPC_FUNC_IMPL(__imp__sub_821942B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r8,12436(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,12024(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12024, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,16,28,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 16) & 0xF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x821942f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821942F0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x821942f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821942F0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 10, xer);
	// beq ctx_arrow(ctx)->r6,0x821942f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821942F0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 12, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
loc_821942F0:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,13,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 13) & 0x1;
	// xor. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r4.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + -1;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,16,28,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xF;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,0,16,11
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,31,1,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r9.s64 + 3;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -3;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r10.u64;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,54,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xF0000;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,10380(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,16,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,10380(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10380, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194360) PPC_WEAK_FUNC(sub_82194360);
PPC_FUNC_IMPL(__imp__sub_82194360) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,12024(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194368) PPC_WEAK_FUNC(sub_82194368);
PPC_FUNC_IMPL(__imp__sub_82194368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r8,12440(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,12028(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12028, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,16,28,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 16) & 0xF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x821943a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821943A0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x821943a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821943A0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 10, xer);
	// beq ctx_arrow(ctx)->r6,0x821943a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821943A0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 12, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
loc_821943A0:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,13,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 13) & 0x1;
	// xor. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r4.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + -1;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,16,28,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xF;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,0,16,11
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,31,1,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r9.s64 + 3;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -3;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r10.u64;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,53,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xF0000;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,10384(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,16,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,10384(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10384, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194410) PPC_WEAK_FUNC(sub_82194410);
PPC_FUNC_IMPL(__imp__sub_82194410) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,12028(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194418) PPC_WEAK_FUNC(sub_82194418);
PPC_FUNC_IMPL(__imp__sub_82194418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r8,12444(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r4,12032(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12032, ctx_arrow(ctx)->r4.u32);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,16,28,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 16) & 0xF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x82194450
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82194450;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x82194450
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82194450;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 10, xer);
	// beq ctx_arrow(ctx)->r6,0x82194450
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82194450;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 12, xer);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
loc_82194450:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,13,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 13) & 0x1;
	// xor. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ ctx_arrow(ctx)->r4.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + -1;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,16,28,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xF;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,0,16,11
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,31,1,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r9.s64 + 3;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-3
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -3;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r10.u64;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,52,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xF0000;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r8.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,10388(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,16,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,10388(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10388, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821944C0) PPC_WEAK_FUNC(sub_821944C0);
PPC_FUNC_IMPL(__imp__sub_821944C0) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,12032(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_821944C8) PPC_WEAK_FUNC(sub_821944C8);
PPC_FUNC_IMPL(__imp__sub_821944C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,47,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,10624(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10624, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_821944F0) PPC_WEAK_FUNC(sub_821944F0);
PPC_FUNC_IMPL(__imp__sub_821944F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10624(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194500) PPC_WEAK_FUNC(sub_82194500);
PPC_FUNC_IMPL(__imp__sub_82194500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,48,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,10620(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10620, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82194528) PPC_WEAK_FUNC(sub_82194528);
PPC_FUNC_IMPL(__imp__sub_82194528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10620(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194538) PPC_WEAK_FUNC(sub_82194538);
PPC_FUNC_IMPL(__imp__sub_82194538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r11,10616(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,29
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF00000003);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,49,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r4,10616(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10616, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82194560) PPC_WEAK_FUNC(sub_82194560);
PPC_FUNC_IMPL(__imp__sub_82194560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10616(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x3;
	// blr 
	return;
}

alias(__imp__sub_82194570) PPC_WEAK_FUNC(sub_82194570);
PPC_FUNC_IMPL(__imp__sub_82194570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r11,10688(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFFE) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF00000001);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,35,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r4,10688(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10688, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// blr 
	return;
}

alias(__imp__sub_82194598) PPC_WEAK_FUNC(sub_82194598);
PPC_FUNC_IMPL(__imp__sub_82194598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10688(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// blr 
	return;
}

alias(__imp__sub_821945A8) PPC_WEAK_FUNC(sub_821945A8);
PPC_FUNC_IMPL(__imp__sub_821945A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,21,10,10
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 21) & 0x200000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10568, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821945C8) PPC_WEAK_FUNC(sub_821945C8);
PPC_FUNC_IMPL(__imp__sub_821945C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,11,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_821945D8) PPC_WEAK_FUNC(sub_821945D8);
PPC_FUNC_IMPL(__imp__sub_821945D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// stw ctx_arrow(ctx)->r4,10456(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10456, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,38,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821945F8) PPC_WEAK_FUNC(sub_821945F8);
PPC_FUNC_IMPL(__imp__sub_821945F8) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,10456(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194600) PPC_WEAK_FUNC(sub_82194600);
PPC_FUNC_IMPL(__imp__sub_82194600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4,27,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 4) & 0x10) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10556, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 512;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194620) PPC_WEAK_FUNC(sub_82194620);
PPC_FUNC_IMPL(__imp__sub_82194620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,28,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82194630) PPC_WEAK_FUNC(sub_82194630);
PPC_FUNC_IMPL(__imp__sub_82194630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24,0,7
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 24) & 0xFF000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10556, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 512;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194650) PPC_WEAK_FUNC(sub_82194650);
PPC_FUNC_IMPL(__imp__sub_82194650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,24,29
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFC) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	// blr 
	return;
}

alias(__imp__sub_82194668) PPC_WEAK_FUNC(sub_82194668);
PPC_FUNC_IMPL(__imp__sub_82194668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,32,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,10700(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10700, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// blr 
	return;
}

alias(__imp__sub_82194690) PPC_WEAK_FUNC(sub_82194690);
PPC_FUNC_IMPL(__imp__sub_82194690) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,10700(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194698) PPC_WEAK_FUNC(sub_82194698);
PPC_FUNC_IMPL(__imp__sub_82194698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,34,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,10692(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10692, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// blr 
	return;
}

alias(__imp__sub_821946C0) PPC_WEAK_FUNC(sub_821946C0);
PPC_FUNC_IMPL(__imp__sub_821946C0) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,10692(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_821946C8) PPC_WEAK_FUNC(sub_821946C8);
PPC_FUNC_IMPL(__imp__sub_821946C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,10704(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10704, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32768
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2147483648;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// blr 
	return;
}

alias(__imp__sub_821946E8) PPC_WEAK_FUNC(sub_821946E8);
PPC_FUNC_IMPL(__imp__sub_821946E8) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,10704(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_821946F0) PPC_WEAK_FUNC(sub_821946F0);
PPC_FUNC_IMPL(__imp__sub_821946F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,33,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,10696(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10696, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// blr 
	return;
}

alias(__imp__sub_82194718) PPC_WEAK_FUNC(sub_82194718);
PPC_FUNC_IMPL(__imp__sub_82194718) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,10696(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194720) PPC_WEAK_FUNC(sub_82194720);
PPC_FUNC_IMPL(__imp__sub_82194720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,20,9,11
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 20) & 0x700000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11844, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194740) PPC_WEAK_FUNC(sub_82194740);
PPC_FUNC_IMPL(__imp__sub_82194740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,12,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82194750) PPC_WEAK_FUNC(sub_82194750);
PPC_FUNC_IMPL(__imp__sub_82194750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lbz ctx_arrow(ctx)->r10,10943(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,17,12,14
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 17) & 0xE0000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11844, ctx_arrow(ctx)->r4.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,26,26
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x82194788
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82194788;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,14
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xE0000;
	// lis ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = 262144;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82194788
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82194788;
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r12,-257
	ctx_arrow(ctx)->r12.s64 = -257;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// b 0x82194790
	goto loc_82194790;
loc_82194788:
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 256;
loc_82194790:
	// std ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 40);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 256;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821947A8) PPC_WEAK_FUNC(sub_821947A8);
PPC_FUNC_IMPL(__imp__sub_821947A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,15,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_821947B8) PPC_WEAK_FUNC(sub_821947B8);
PPC_FUNC_IMPL(__imp__sub_821947B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,3,28,28
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 3) & 0x8) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10560, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 256;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_821947D8) PPC_WEAK_FUNC(sub_821947D8);
PPC_FUNC_IMPL(__imp__sub_821947D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_821947E8) PPC_WEAK_FUNC(sub_821947E8);
PPC_FUNC_IMPL(__imp__sub_821947E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,29,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 2) & 0x4) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10560, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 256;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194808) PPC_WEAK_FUNC(sub_82194808);
PPC_FUNC_IMPL(__imp__sub_82194808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,30,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82194818) PPC_WEAK_FUNC(sub_82194818);
PPC_FUNC_IMPL(__imp__sub_82194818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,5,26,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 5) & 0x20) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10560, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 256;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194838) PPC_WEAK_FUNC(sub_82194838);
PPC_FUNC_IMPL(__imp__sub_82194838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82194848) PPC_WEAK_FUNC(sub_82194848);
PPC_FUNC_IMPL(__imp__sub_82194848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10562(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r3.u32 + 10562, ctx_arrow(ctx)->r4.u8);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 256;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// blr 
	return;
}

alias(__imp__sub_82194860) PPC_WEAK_FUNC(sub_82194860);
PPC_FUNC_IMPL(__imp__sub_82194860) {
	PPC_FUNC_PROLOGUE();
	// lbz ctx_arrow(ctx)->r3,10562(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194868) PPC_WEAK_FUNC(sub_82194868);
PPC_FUNC_IMPL(__imp__sub_82194868) {
	PPC_FUNC_PROLOGUE();
	// stw ctx_arrow(ctx)->r4,13580(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 13580, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82194870) PPC_WEAK_FUNC(sub_82194870);
PPC_FUNC_IMPL(__imp__sub_82194870) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,13580(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194878) PPC_WEAK_FUNC(sub_82194878);
PPC_FUNC_IMPL(__imp__sub_82194878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,23,2,8
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 23) & 0x3F800000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 11844, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_82194888) PPC_WEAK_FUNC(sub_82194888);
PPC_FUNC_IMPL(__imp__sub_82194888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,9,25,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

alias(__imp__sub_82194898) PPC_WEAK_FUNC(sub_82194898);
PPC_FUNC_IMPL(__imp__sub_82194898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lis ctx_arrow(ctx)->r9,-32254
	ctx_arrow(ctx)->r9.s64 = -2113798144;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,-18936
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r9.s64 + -18936;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// rldicr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,63,63
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,30,2,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// lbz ctx_arrow(ctx)->r4,11916(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 2);
	// srd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r6.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,22,31,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 22) & 0x1;
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,11,20,20
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 11) & 0x800) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	// andc ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r4.u64 & ~ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,4,0,27
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 4) & 0xFFFFFFF0;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r10.u64;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r5.u64;
	// rlwimi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,21,9,10
	ctx_arrow(ctx)->r31.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 21) & 0x600000) | (ctx_arrow(ctx)->r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,21,4,6
	ctx_arrow(ctx)->r31.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 21) & 0xE000000) | (ctx_arrow(ctx)->r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 0);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,31,13,31
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 31) & 0x7FFFF) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz ctx_arrow(ctx)->r8,11994(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,31,1,11
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 31) & 0x7FF00000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF800FFFFF);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,13,20,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 13) & 0xFFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,30,2,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// and ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 & ctx_arrow(ctx)->r10.u64;
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 & ~ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,0,29
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF00000003);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82194958) PPC_WEAK_FUNC(sub_82194958);
PPC_FUNC_IMPL(__imp__sub_82194958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,21,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 21) & 0x1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,11,21,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 11) & 0x7FF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r11.u64;
	// not ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0x4) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u32 & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82194990) PPC_WEAK_FUNC(sub_82194990);
PPC_FUNC_IMPL(__imp__sub_82194990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,63,63
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r7.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// lbz ctx_arrow(ctx)->r9,11994(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,31,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,30,2,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31,13,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 31) & 0x7FFFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFF80000);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31,1,11
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 31) & 0x7FF00000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF800FFFFF);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0xFFF;
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r7.u64;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r7.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,0,0,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 0) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000003);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r4,11994(ctx_arrow(ctx)->r8)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r8.u32 + 11994, ctx_arrow(ctx)->r4.u8);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82194A18) PPC_WEAK_FUNC(sub_82194A18);
PPC_FUNC_IMPL(__imp__sub_82194A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// lbz ctx_arrow(ctx)->r11,11994(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82194A28) PPC_WEAK_FUNC(sub_82194A28);
PPC_FUNC_IMPL(__imp__sub_82194A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lis ctx_arrow(ctx)->r9,-32254
	ctx_arrow(ctx)->r9.s64 = -2113798144;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,-18936
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r9.s64 + -18936;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// rldicr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,63,63
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,30,2,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 30) & 0x3FFFFFFF;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// lbz ctx_arrow(ctx)->r4,11916(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 2);
	// srd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r6.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,21,31,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 21) & 0x1;
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,10,21,21
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 10) & 0x400) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	// andc ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r4.u64 & ~ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,6,0,25
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r10.u64;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r5.u64;
	// rlwimi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,19,11,12
	ctx_arrow(ctx)->r31.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 19) & 0x180000) | (ctx_arrow(ctx)->r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,19,4,6
	ctx_arrow(ctx)->r31.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 19) & 0xE000000) | (ctx_arrow(ctx)->r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 0);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,31,13,31
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 31) & 0x7FFFF) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz ctx_arrow(ctx)->r8,11994(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,31,1,11
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 31) & 0x7FF00000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF800FFFFF);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,13,20,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 13) & 0xFFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,30,2,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -1;
	// and ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 & ctx_arrow(ctx)->r10.u64;
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 & ~ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,0,0,29
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 0) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF00000003);
	// stw ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82194AE8) PPC_WEAK_FUNC(sub_82194AE8);
PPC_FUNC_IMPL(__imp__sub_82194AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,22,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 22) & 0x1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,13,19,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 13) & 0x1FFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r11.u64;
	// not ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0x4) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u32 & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82194B20) PPC_WEAK_FUNC(sub_82194B20);
PPC_FUNC_IMPL(__imp__sub_82194B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// srd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x7F)), 0));
	// lbz ctx_arrow(ctx)->r11,11994(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,30,2,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31,13,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 31) & 0x7FFFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFF80000);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31,1,11
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 31) & 0x7FF00000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF800FFFFF);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0xFFF;
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r7.u64;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r7.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,0,0,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 0) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000003);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r4,11994(ctx_arrow(ctx)->r8)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r8.u32 + 11994, ctx_arrow(ctx)->r4.u8);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82194BA8) PPC_WEAK_FUNC(sub_82194BA8);
PPC_FUNC_IMPL(__imp__sub_82194BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// lbz ctx_arrow(ctx)->r11,11994(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82194BB8) PPC_WEAK_FUNC(sub_82194BB8);
PPC_FUNC_IMPL(__imp__sub_82194BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,23,7,8
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 23) & 0x1800000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82194BF8) PPC_WEAK_FUNC(sub_82194BF8);
PPC_FUNC_IMPL(__imp__sub_82194BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1164(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,9,30,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

alias(__imp__sub_82194C10) PPC_WEAK_FUNC(sub_82194C10);
PPC_FUNC_IMPL(__imp__sub_82194C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,63,63
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r7.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// lbz ctx_arrow(ctx)->r9,11994(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,30,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,30,2,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31,13,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 31) & 0x7FFFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFF80000);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,31,1,11
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r31.u32, 31) & 0x7FF00000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF800FFFFF);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,13,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 13) & 0xFFF;
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r7.u64;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r7.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r9.u64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,0,0,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 0) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000003);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r4,11994(ctx_arrow(ctx)->r8)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r8.u32 + 11994, ctx_arrow(ctx)->r4.u8);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82194C98) PPC_WEAK_FUNC(sub_82194C98);
PPC_FUNC_IMPL(__imp__sub_82194C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// lbz ctx_arrow(ctx)->r11,11994(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,30,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82194CA8) PPC_WEAK_FUNC(sub_82194CA8);
PPC_FUNC_IMPL(__imp__sub_82194CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,20,20
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x800;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x82194cc8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82194CC8;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,21,21
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x400;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x82194d04
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82194D04;
loc_82194CC8:
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5,2,0,29
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-18936
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -18936;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// clrldi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,32
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,63,63
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,25,4,6
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 25) & 0xE000000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r6.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x7F)), 0));
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
loc_82194D04:
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// stb ctx_arrow(ctx)->r5,11916(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r10.u32 + 11916, ctx_arrow(ctx)->r4.u8);
	// blr 
	return;
}

alias(__imp__sub_82194D10) PPC_WEAK_FUNC(sub_82194D10);
PPC_FUNC_IMPL(__imp__sub_82194D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// lbz ctx_arrow(ctx)->r3,11916(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194D20) PPC_WEAK_FUNC(sub_82194D20);
PPC_FUNC_IMPL(__imp__sub_82194D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r5,36(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// lfs f0,-18864(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lfs f13,36(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,5,23,26
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 5) & 0x1E0) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82194D80) PPC_WEAK_FUNC(sub_82194D80);
PPC_FUNC_IMPL(__imp__sub_82194D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1172(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,23,0,8
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 23) & 0xFF800000;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0xFFFFFFF) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 28;
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,17872(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194DC8) PPC_WEAK_FUNC(sub_82194DC8);
PPC_FUNC_IMPL(__imp__sub_82194DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw ctx_arrow(ctx)->r5,36(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// lfs f0,16024(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lfs f13,36(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r8,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,12,10,19
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 12) & 0x3FF000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFC00FFF);
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82194E28) PPC_WEAK_FUNC(sub_82194E28);
PPC_FUNC_IMPL(__imp__sub_82194E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1168(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,10,0,21
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,22
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3FFFFF) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 22;
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f0,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,28824(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194E68) PPC_WEAK_FUNC(sub_82194E68);
PPC_FUNC_IMPL(__imp__sub_82194E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,3134
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 3134;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x82194ec8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82194EC8;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30,28,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0xF;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 24;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r3.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r5.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82194e9c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82194E9C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
loc_82194E9C:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,63,63
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,2,26,29
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 2) & 0x3C) | (ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFFFFFFFFC3);
	// stw ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r7.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
loc_82194EC8:
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// stb ctx_arrow(ctx)->r5,11942(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r10.u32 + 11942, ctx_arrow(ctx)->r4.u8);
	// blr 
	return;
}

alias(__imp__sub_82194ED8) PPC_WEAK_FUNC(sub_82194ED8);
PPC_FUNC_IMPL(__imp__sub_82194ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// lbz ctx_arrow(ctx)->r3,11942(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194EE8) PPC_WEAK_FUNC(sub_82194EE8);
PPC_FUNC_IMPL(__imp__sub_82194EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,3134
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 3134;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x82194f48
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82194F48;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,26,28,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 26) & 0xF;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 24;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r3.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r5.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82194f1c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82194F1C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
loc_82194F1C:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// lwz ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,63,63
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,6,22,25
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 6) & 0x3C0) | (ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFFFFFFFC3F);
	// stw ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r7.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
loc_82194F48:
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// stb ctx_arrow(ctx)->r5,11968(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r10.u32 + 11968, ctx_arrow(ctx)->r4.u8);
	// blr 
	return;
}

alias(__imp__sub_82194F58) PPC_WEAK_FUNC(sub_82194F58);
PPC_FUNC_IMPL(__imp__sub_82194F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r4.u64;
	// lbz ctx_arrow(ctx)->r3,11968(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_82194F68) PPC_WEAK_FUNC(sub_82194F68);
PPC_FUNC_IMPL(__imp__sub_82194F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// cntlzw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r5.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r5.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,27,31,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 27) & 0x1;
	// xori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 ^ 1;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFC;
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82194FB8) PPC_WEAK_FUNC(sub_82194FB8);
PPC_FUNC_IMPL(__imp__sub_82194FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1172(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x3;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r3.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// blr 
	return;
}

alias(__imp__sub_82194FD8) PPC_WEAK_FUNC(sub_82194FD8);
PPC_FUNC_IMPL(__imp__sub_82194FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,10,19,21
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 10) & 0x1C00) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82195010) PPC_WEAK_FUNC(sub_82195010);
PPC_FUNC_IMPL(__imp__sub_82195010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,22,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 22) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82195028) PPC_WEAK_FUNC(sub_82195028);
PPC_FUNC_IMPL(__imp__sub_82195028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,13,16,18
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 13) & 0xE000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82195060) PPC_WEAK_FUNC(sub_82195060);
PPC_FUNC_IMPL(__imp__sub_82195060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,19,29,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
}

alias(__imp__sub_82195078) PPC_WEAK_FUNC(sub_82195078);
PPC_FUNC_IMPL(__imp__sub_82195078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,16,13,15
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 16) & 0x70000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r3.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_821950B0) PPC_WEAK_FUNC(sub_821950B0);
PPC_FUNC_IMPL(__imp__sub_821950B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r3.u32);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x7;
	// blr 
	return;
}

alias(__imp__sub_821950C8) PPC_WEAK_FUNC(sub_821950C8);
PPC_FUNC_IMPL(__imp__sub_821950C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,3,27,28
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 3) & 0x18) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82195108) PPC_WEAK_FUNC(sub_82195108);
PPC_FUNC_IMPL(__imp__sub_82195108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1172(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,29,30,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

alias(__imp__sub_82195120) PPC_WEAK_FUNC(sub_82195120);
PPC_FUNC_IMPL(__imp__sub_82195120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,22,5,9
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 22) & 0x7C00000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFF83FFFFF);
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82195160) PPC_WEAK_FUNC(sub_82195160);
PPC_FUNC_IMPL(__imp__sub_82195160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1168(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5,0,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x7FFFFFF) != 0);
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s32 >> 27;
	// blr 
	return;
}

alias(__imp__sub_82195178) PPC_WEAK_FUNC(sub_82195178);
PPC_FUNC_IMPL(__imp__sub_82195178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,27,0,4
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 27) & 0xF8000000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF07FFFFFF);
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_821951B8) PPC_WEAK_FUNC(sub_821951B8);
PPC_FUNC_IMPL(__imp__sub_821951B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1168(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,27
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x7FFFFFF) != 0);
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s32 >> 27;
	// blr 
	return;
}

alias(__imp__sub_821951D0) PPC_WEAK_FUNC(sub_821951D0);
PPC_FUNC_IMPL(__imp__sub_821951D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,2,29,29
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 2) & 0x4) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82195210) PPC_WEAK_FUNC(sub_82195210);
PPC_FUNC_IMPL(__imp__sub_82195210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1172(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,30,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82195228) PPC_WEAK_FUNC(sub_82195228);
PPC_FUNC_IMPL(__imp__sub_82195228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// cntlzw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r5.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r5.u32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,27,31,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 27) & 0x1;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,11,20,20
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 11) & 0x800) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// blr 
	return;
}

alias(__imp__sub_82195270) PPC_WEAK_FUNC(sub_82195270);
PPC_FUNC_IMPL(__imp__sub_82195270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1156(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// not ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,21,31,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

alias(__imp__sub_82195288) PPC_WEAK_FUNC(sub_82195288);
PPC_FUNC_IMPL(__imp__sub_82195288) {
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// lfs f0,12640(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lfs f13,12644(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lfs f12,12648(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfiwx f0,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfiwx f13,0,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r7,11848(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,12652(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// lwz ctx_arrow(ctx)->r4,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r5,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfiwx f12,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,12668(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12668, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,12672(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12672, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r8,12676(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12676, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,12680(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12680, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r4.u64;
	// stfiwx f0,0,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r7.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r5.u64;
	// beq ctx_arrow(ctx)->r6,0x8219534c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219534C;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82195328
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82195328;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
loc_82195328:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82195334
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82195334;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r10.u64;
loc_82195334:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, ctx_arrow(ctx)->r8.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x82195340
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82195340;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r8.u64;
loc_82195340:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, ctx_arrow(ctx)->r31.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x8219534c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8219534C;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
loc_8219534C:
	// lwz ctx_arrow(ctx)->r11,10436(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,10440(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,16,1,15
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 16) & 0x7FFF0000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,16,1,15
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 16) & 0x7FFF0000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0,17,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 0) & 0x7FFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,0,17,31
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r6.u32, 0) & 0x7FFF) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw ctx_arrow(ctx)->r11,10436(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10436, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,10440(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 10440, ctx_arrow(ctx)->r4.u32);
	// bl 0x82192c70
	sub_82192C70(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82195388) PPC_WEAK_FUNC(sub_82195388);
PPC_FUNC_IMPL(__imp__sub_82195388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,12640(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 4;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r4
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12644(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 8;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,12
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 12;
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12648(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12652(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12656(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12660(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_821953D8) PPC_WEAK_FUNC(sub_821953D8);
PPC_FUNC_IMPL(__imp__sub_821953D8) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r7.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82195448
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195448;
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,17
	xer.ca = ctx_arrow(ctx)->r29.u32 <= 17;
	ctx_arrow(ctx)->r11.s64 = 17 - ctx_arrow(ctx)->r29.s64;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r6.u64;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r6.s64;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r6.s64 + 512;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,222
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 222;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,3,0,28
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r5.u32 | (ctx_arrow(ctx)->r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r9,1780(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1780, ctx_arrow(ctx)->r4.u32);
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r8.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
loc_82195448:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,3113
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 3113;
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq 0x821954c0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821954C0;
	// lwz ctx_arrow(ctx)->r11,10908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x82195470
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195470;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// b 0x821954c0
	goto loc_821954C0;
loc_82195470:
	// lwz ctx_arrow(ctx)->r11,10912(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821954c0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821954C0;
	// lwz ctx_arrow(ctx)->r3,13508(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,13512(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82195498
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82195498;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219bac8
	sub_8219BAC8(ctx, base);
loc_82195498:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,30,2,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r28.u32, 30) & 0x3FFFFFFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,2,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 8;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// ld ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r10,13508(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 13508, ctx_arrow(ctx)->r4.u32);
loc_821954C0:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r26.u32 | (ctx_arrow(ctx)->r26.u64 << 32), 30) & 0x3FFFFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r29.u64;
	// stb ctx_arrow(ctx)->r11,12520(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r10.u32 + 12520, ctx_arrow(ctx.u8)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// b 0x823ed150
	return;
}

