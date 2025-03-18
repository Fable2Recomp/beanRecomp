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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,30,1,1
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 30) & 0x40000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// stw ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11844);
	// lwz ctx_arrow(ctx)->r11,11840(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10552);
	// stw ctx_arrow(ctx)->r11,10584(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10584);
	// stw ctx_arrow(ctx)->r11,10588(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10588);
	// stw ctx_arrow(ctx)->r11,10592(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10592);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,10500(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10500);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f0,6596(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82193478) PPC_WEAK_FUNC(sub_82193478);
PPC_FUNC_IMPL(__imp__sub_82193478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,28
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFF8) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF00000007);
	// stw ctx_arrow(ctx)->r4,10556(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10556);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,10468(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10468);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f10,10464(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10464);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,10472(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10472);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,10476(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10476);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f11,10476(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10468(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10472(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,6596(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// fctidz f12,f10
	ctx.f12.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// stfiwx f13,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,8,0,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32);
	// lwz ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,8,0,23
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f0,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,10,21,21
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 10) & 0x400) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10680(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10680);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,52,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,12272(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f13,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 22280);
	// blr 
	return;
}

alias(__imp__sub_82193690) PPC_WEAK_FUNC(sub_82193690);
PPC_FUNC_IMPL(__imp__sub_82193690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,22280(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,11868(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11868);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821936b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821936B4;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_821936B4:
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,1,30,30
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 1) & 0x2) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_821936E0) PPC_WEAK_FUNC(sub_821936E0);
PPC_FUNC_IMPL(__imp__sub_821936E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,29,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 2) & 0x4) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4,25,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 4) & 0x70) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,11872(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11872);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219375c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219375C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_8219375C:
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0,31,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 0) & 0x1) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82193788) PPC_WEAK_FUNC(sub_82193788);
PPC_FUNC_IMPL(__imp__sub_82193788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,7,24,24
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 7) & 0x80) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,8,21,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 8) & 0x700) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,11,18,20
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 11) & 0x3800) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,17,12,14
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 17) & 0xE0000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,14,15,17
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 14) & 0x1C000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,20,9,11
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 20) & 0x700000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,23,6,8
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 23) & 0x3800000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,29,0,2
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 29) & 0xE0000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,26,3,5
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 26) & 0x1C000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10548);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10499));
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82193980) PPC_WEAK_FUNC(sub_82193980);
PPC_FUNC_IMPL(__imp__sub_82193980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10498(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10498));
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_821939A0) PPC_WEAK_FUNC(sub_821939A0);
PPC_FUNC_IMPL(__imp__sub_821939A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10497(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10497));
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_821939C0) PPC_WEAK_FUNC(sub_821939C0);
PPC_FUNC_IMPL(__imp__sub_821939C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10495(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10495));
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_821939E0) PPC_WEAK_FUNC(sub_821939E0);
PPC_FUNC_IMPL(__imp__sub_821939E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10494(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10494));
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82193A00) PPC_WEAK_FUNC(sub_82193A00);
PPC_FUNC_IMPL(__imp__sub_82193A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb ctx_arrow(ctx)->r4,10493(ctx_arrow(ctx)->r3)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10493));
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10564);
	// stw ctx_arrow(ctx)->r10,10420(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10420);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u32 & 0x3F;
	// blr 
	return;
}

alias(__imp__sub_82193A70) PPC_WEAK_FUNC(sub_82193A70);
PPC_FUNC_IMPL(__imp__sub_82193A70) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,11848(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,14220(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,10832(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10832);
	// stfs f0,10840(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10840);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bne ctx_arrow(ctx)->r6,0x82193ab4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193AB4;
	// lfs f12,10836(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,11,20,20
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 11) & 0x800) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10568);
	// bne ctx_arrow(ctx)->r6,0x82193adc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193ADC;
	// lfs f0,10844(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10568);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18868(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f12,10832(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f12,f0
	ctx_arrow(ctx)->r6.compare(ctx.f12.f64, f0.f64);
	// lfs f13,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,10836(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10836);
	// stfs f13,10844(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10844);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f12,10840(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f12,f0
	ctx_arrow(ctx)->r6.compare(ctx.f12.f64, f0.f64);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,11,20,20
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 11) & 0x800) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10568);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10568);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82193BE8) PPC_WEAK_FUNC(sub_82193BE8);
PPC_FUNC_IMPL(__imp__sub_82193BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,15,16,16
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 15) & 0x8000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10568);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10752);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,11852(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11852);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82193c4c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193C4C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_82193C4C:
	// lwz ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,27
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF0000000F);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r4,10460(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10460);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,11856(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11856);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82193c8c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193C8C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_82193C8C:
	// lwz ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4,24,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 4) & 0xF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10460);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,11860(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11860);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82193ccc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193CCC;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_82193CCC:
	// lwz ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,8,20,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 8) & 0xF00) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10460);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,11864(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11864);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82193d0c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82193D0C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
loc_82193D0C:
	// lwz ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,12,16,19
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 12) & 0xF000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10460);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82193D38) PPC_WEAK_FUNC(sub_82193D38);
PPC_FUNC_IMPL(__imp__sub_82193D38) {
	PPC_FUNC_PROLOGUE();
	// stw ctx_arrow(ctx)->r4,11876(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11876);
	// blr 
	return;
}

alias(__imp__sub_82193D40) PPC_WEAK_FUNC(sub_82193D40);
PPC_FUNC_IMPL(__imp__sub_82193D40) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,11876(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,54,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,12272(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,11884(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11884);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,53,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,14220(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,11888(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11888);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,53,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,14220(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,11892(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11892);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82193E58) PPC_WEAK_FUNC(sub_82193E58);
PPC_FUNC_IMPL(__imp__sub_82193E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10540);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,28,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10540);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,8,0,23
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,24,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10540);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,12,0,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,20,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10540);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,16,0,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,16,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10540);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,20,0,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10540);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,24,0,7
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,8,3
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10540);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,28,0,3
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 28) & 0xF0000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw ctx_arrow(ctx)->r11,10540(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10540);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10544);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,4,0,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,28,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10544);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,8,0,23
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,24,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10544);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,12,0,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,20,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10544);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,16,0,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,16,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10544);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,20,0,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,12,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10544);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,24,0,7
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,8,3
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10544);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,28,0,3
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 28) & 0xF0000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw ctx_arrow(ctx)->r11,10544(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10544);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10572);
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,10564(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,16,15,15
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 16) & 0x10000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw ctx_arrow(ctx)->r10,10564(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10564);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,12020(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12020);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,10372(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,16,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,10372(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10372);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,12024(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12024);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,10380(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,16,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,10380(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10380);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,12028(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12028);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,10384(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,16,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,10384(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10384);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r4,12032(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12032);
	// cmplwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 0, xer);
	// beqlr 
	if (ctx_arrow(ctx)->r0.eq()) return;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 28);
	// lwz ctx_arrow(ctx)->r10,10388(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,16,11
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,10388(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10388);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,47,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,10624(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10624);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,48,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,10620(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10620);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82194538) PPC_WEAK_FUNC(sub_82194538);
PPC_FUNC_IMPL(__imp__sub_82194538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r11,10616(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,29
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFFC) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF00000003);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,49,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r4,10616(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10616);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r4.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFFE) | (ctx_arrow(ctx)->r4.u64 & 0xFFFFFFFF00000001);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,35,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw ctx_arrow(ctx)->r4,10688(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10688);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,21,10,10
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 21) & 0x200000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw ctx_arrow(ctx)->r11,10568(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10568);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10456);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82194600) PPC_WEAK_FUNC(sub_82194600);
PPC_FUNC_IMPL(__imp__sub_82194600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4,27,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 4) & 0x10) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10556);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24,0,7
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 24) & 0xFF000000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw ctx_arrow(ctx)->r11,10556(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10556);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,32,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,10700(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10700);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,34,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,10692(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10692);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,10704(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10704);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 28);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,33,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,10696(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10696);
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82194720) PPC_WEAK_FUNC(sub_82194720);
PPC_FUNC_IMPL(__imp__sub_82194720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,20,9,11
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 20) & 0x700000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11844);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,17,12,14
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 17) & 0xE0000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11844);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,3,28,28
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 3) & 0x8) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10560);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,2,29,29
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 2) & 0x4) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10560);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,5,26,26
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 5) & 0x20) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10560);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10562));
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82194868) PPC_WEAK_FUNC(sub_82194868);
PPC_FUNC_IMPL(__imp__sub_82194868) {
	PPC_FUNC_PROLOGUE();
	// stw ctx_arrow(ctx)->r4,13580(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 13580);
	// blr 
	return;
}

alias(__imp__sub_82194870) PPC_WEAK_FUNC(sub_82194870);
PPC_FUNC_IMPL(__imp__sub_82194870) {
	PPC_FUNC_PROLOGUE();
	// lwz ctx_arrow(ctx)->r3,13580(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82194878) PPC_WEAK_FUNC(sub_82194878);
PPC_FUNC_IMPL(__imp__sub_82194878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,23,2,8
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 23) & 0x3F800000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11844);
	// blr 
	return;
}

alias(__imp__sub_82194888) PPC_WEAK_FUNC(sub_82194888);
PPC_FUNC_IMPL(__imp__sub_82194888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,11844(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 2);
	// srd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r6.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,22,31,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 22) & 0x1;
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,11,20,20
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 11) & 0x800) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	// andc ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r4.u64 & ~ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,31,13,31
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 31) & 0x7FFFF) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz ctx_arrow(ctx)->r8,11994(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,31,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16);
	// stb ctx_arrow(ctx)->r4,11994(ctx_arrow(ctx)->r8)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 11994));
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
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
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// rotlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 2);
	// srd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r6.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,21,31,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 21) & 0x1;
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,10,21,21
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 10) & 0x400) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + -1;
	// andc ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r4.u64 & ~ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,31,13,31
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 31) & 0x7FFFF) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz ctx_arrow(ctx)->r8,11994(ctx_arrow(ctx)->r8)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFE;
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16);
	// stb ctx_arrow(ctx)->r4,11994(ctx_arrow(ctx)->r8)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 11994));
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,23,7,8
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 23) & 0x1800000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,16(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,30,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16);
	// stb ctx_arrow(ctx)->r4,11994(ctx_arrow(ctx)->r8)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r8.u32 + 11994));
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,25,4,6
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 25) & 0xE000000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
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
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 11916));
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 36);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// lfs f0,-18864(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lfs f13,36(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,5,23,26
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 5) & 0x1E0) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 36);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,32
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 32;
	// lfs f0,16024(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 48;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 24;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r3.u64;
	// lfs f13,36(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// rldicr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,63,63
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r9.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x7F)), 0));
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,12,10,19
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 12) & 0x3FF000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFC00FFF);
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lwz ctx_arrow(ctx)->r3,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x82194ec8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82194EC8;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,63,63
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,2,26,29
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 2) & 0x3C) | (ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFFFFFFFFC3);
	// stw ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16);
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
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 11942));
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x82194f48
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82194F48;
	// lwz ctx_arrow(ctx)->r11,44(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF;
	// rldicr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,63,63
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,6,22,25
	ctx_arrow(ctx)->r8.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 6) & 0x3C0) | (ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFFFFFFFC3F);
	// stw ctx_arrow(ctx)->r8,16(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16);
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
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 11968));
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
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFFC;
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 | ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,10,19,21
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 10) & 0x1C00) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r3.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,13,16,18
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 13) & 0xE000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r3.u32);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,16,13,15
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 16) & 0x70000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r3.u32);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,3,27,28
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 3) & 0x18) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,22,5,9
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 22) & 0x7C00000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFF83FFFFF);
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,27,0,4
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 27) & 0xF8000000) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFF07FFFFFF);
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 16);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,2,29,29
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 2) & 0x4) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 20);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,11,20,20
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 11) & 0x800) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// lfs f0,12640(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// lfs f13,12644(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lfs f12,12648(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stfiwx f0,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32);
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stfiwx f13,0,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r7,11848(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f0,12652(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lwz ctx_arrow(ctx)->r31,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// lwz ctx_arrow(ctx)->r4,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// stfiwx f12,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32);
	// stw ctx_arrow(ctx)->r11,12668(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12668);
	// stw ctx_arrow(ctx)->r10,12672(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12672);
	// stw ctx_arrow(ctx)->r8,12676(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12676);
	// stw ctx_arrow(ctx)->r31,12680(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12680);
	// lwz ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// add ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r4.u64;
	// stfiwx f0,0,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32);
	// lwz ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,10440(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,16,1,15
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 16) & 0x7FFF0000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,16,1,15
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r7.u32, 16) & 0x7FFF0000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,0,17,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r4.u32, 0) & 0x7FFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,0,17,31
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r6.u32, 0) & 0x7FFF) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw ctx_arrow(ctx)->r11,10436(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10436);
	// stw ctx_arrow(ctx)->r10,10440(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10440);
	// bl 0x82192c70
	sub_82192C70(&ctx);
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

alias(__imp__sub_82195388) PPC_WEAK_FUNC(sub_82195388);
PPC_FUNC_IMPL(__imp__sub_82195388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,12640(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 4;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r4
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12644(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 8;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,12
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 12;
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lfs f0,12648(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// lfs f0,12652(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32);
	// lfs f0,12656(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 16);
	// lfs f0,12660(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r4.u32 + 20);
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
	PPC_Write_U32(ctx,  ctx, ea);
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
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,17
	xer.ca = ctx_arrow(ctx)->r29.u32 <= 17;
	ctx_arrow(ctx)->r11.s64 = 17 - ctx_arrow(ctx)->r29.s64;
	// lwz ctx_arrow(ctx)->r9,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 1780);
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r31.u32);
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
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq 0x821954c0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821954C0;
	// lwz ctx_arrow(ctx)->r11,10908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x82195470
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195470;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 8);
	// b 0x821954c0
	goto loc_821954C0;
loc_82195470:
	// lwz ctx_arrow(ctx)->r11,10912(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821954c0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821954C0;
	// lwz ctx_arrow(ctx)->r3,13508(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,13512(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
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
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,30,2,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r28.u32, 30) & 0x3FFFFFFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,2,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 8;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// ld ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r10,13508(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 13508);
loc_821954C0:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r26.u32 | (ctx_arrow(ctx)->r26.u64 << 32), 30) & 0x3FFFFFFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + ctx_arrow(ctx)->r31.u32);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r29.u64;
	// stb ctx_arrow(ctx)->r11,12520(ctx_arrow(ctx)->r10)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r10.u32 + 12520, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// beq 0x821954ec
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821954EC;
	// lbz ctx_arrow(ctx)->r10,11824(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821954ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821954EC;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 524288;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_821954EC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_821954F8) PPC_WEAK_FUNC(sub_821954F8);
PPC_FUNC_IMPL(__imp__sub_821954F8) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r30,12428(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// beq 0x8219557c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219557C;
	// lwz ctx_arrow(ctx)->r11,10908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x8219552c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219552C;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 8);
	// b 0x8219557c
	goto loc_8219557C;
loc_8219552C:
	// lwz ctx_arrow(ctx)->r11,10912(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219557c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219557C;
	// lwz ctx_arrow(ctx)->r3,13508(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,13512(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82195554
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82195554;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219bac8
	sub_8219BAC8(ctx, base);
loc_82195554:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,30,2,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r30.u32, 30) & 0x3FFFFFFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,2,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 8;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// ld ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r10,13508(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 13508);
loc_8219557C:
	// stw ctx_arrow(ctx)->r29,12428(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12428);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_82195588) PPC_WEAK_FUNC(sub_82195588);
PPC_FUNC_IMPL(__imp__sub_82195588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz ctx_arrow(ctx)->r31,12448(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq 0x821955ac
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821955AC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219b690
	sub_8219B690(ctx, base);
loc_821955AC:
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

alias(__imp__sub_821955C8) PPC_WEAK_FUNC(sub_821955C8);
PPC_FUNC_IMPL(__imp__sub_821955C8) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-1648(ctx_arrow(ctx)->r1)
	ea = -1648 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8219e190
	sub_8219E190(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,14988
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 14988;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1536
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 1536;
loc_82195600:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x82195620
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82195620;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x82195600
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195600;
loc_82195620:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x82195674
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195674;
	// lwz ctx_arrow(ctx)->r3,22252(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x8219564c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219564C;
	// lwz ctx_arrow(ctx)->r11,22256(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8219564c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219564C;
	// li ctx_arrow(ctx)->r5,1536
	ctx_arrow(ctx)->r5.s64 = 1536;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8235e790
	sub_8235E790(ctx, base);
loc_8219564C:
	// lwz ctx_arrow(ctx)->r11,22256(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r5,1536
	ctx_arrow(ctx)->r5.s64 = 1536;
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32768
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2147483648;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,22256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 22256);
	// bl 0x823ee010
	sub_823EE010(&ctx);
	// lwz ctx_arrow(ctx)->r11,16692(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2;
	// stw ctx_arrow(ctx)->r11,16692(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16692);
loc_82195674:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,1648
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 1648;
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

alias(__imp__sub_82195690) PPC_WEAK_FUNC(sub_82195690);
PPC_FUNC_IMPL(__imp__sub_82195690) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-1648(ctx_arrow(ctx)->r1)
	ea = -1648 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8219e228
	sub_8219E228(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,14988
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 14988;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1536
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 1536;
loc_821956C8:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x821956e8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821956E8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x821956c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821956C8;
loc_821956E8:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x8219573c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219573C;
	// lwz ctx_arrow(ctx)->r3,22252(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x82195714
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195714;
	// lwz ctx_arrow(ctx)->r11,22256(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82195714
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82195714;
	// li ctx_arrow(ctx)->r5,1536
	ctx_arrow(ctx)->r5.s64 = 1536;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8235e790
	sub_8235E790(ctx, base);
loc_82195714:
	// lwz ctx_arrow(ctx)->r11,22256(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r5,1536
	ctx_arrow(ctx)->r5.s64 = 1536;
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32768
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2147483648;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stw ctx_arrow(ctx)->r11,22256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 22256);
	// bl 0x823ee010
	sub_823EE010(&ctx);
	// lwz ctx_arrow(ctx)->r11,16692(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2;
	// stw ctx_arrow(ctx)->r11,16692(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16692);
loc_8219573C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,1648
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 1648;
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

alias(__imp__sub_82195758) PPC_WEAK_FUNC(sub_82195758);
PPC_FUNC_IMPL(__imp__sub_82195758) {
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
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r4.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821957e0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821957E0;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219578c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219578C;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219578C:
	// lis ctx_arrow(ctx)->r10,-16384
	ctx_arrow(ctx)->r10.s64 = -1073741824;
	// lis ctx_arrow(ctx)->r9,-16384
	ctx_arrow(ctx)->r9.s64 = -1073741824;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24576
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 24576;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,25088
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 25088;
	// li ctx_arrow(ctx)->r8,-1
	ctx_arrow(ctx)->r8.s64 = -1;
	// lis ctx_arrow(ctx)->r7,-16384
	ctx_arrow(ctx)->r7.s64 = -1073741824;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lis ctx_arrow(ctx)->r10,-16384
	ctx_arrow(ctx)->r10.s64 = -1073741824;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,24832
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | 24832;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,25344
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u64 | 25344;
	// lwz ctx_arrow(ctx)->r10,12700(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,12704(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
loc_821957E0:
	// lwz ctx_arrow(ctx)->r11,10440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r10,10436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,17,0,14
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,17
	xer.ca = (ctx_arrow(ctx)->r9.s32 < 0) & ((ctx_arrow(ctx)->r9.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r9.s32 >> 17;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,17,0,14
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,17
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s32 >> 17;
	// srawi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8,17
	xer.ca = (ctx_arrow(ctx)->r8.s32 < 0) & ((ctx_arrow(ctx)->r8.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r8.s32 >> 17;
	// srawi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,17
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s32 >> 17;
	// bl 0x82192c70
	sub_82192C70(ctx, base);
	// lwz ctx_arrow(ctx)->r11,10916(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,20,30,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 20) & 0x3;
	// bl 0x8219e7d0
	sub_8219E7D0(ctx, base);
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
	// std ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
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

alias(__imp__sub_82195850) PPC_WEAK_FUNC(sub_82195850);
PPC_FUNC_IMPL(__imp__sub_82195850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// bl 0x823ed540
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// fmr f31,f5
	f31.f64 = ctx.f5.f64;
	// fmr f26,f6
	f26.f64 = ctx.f6.f64;
	// lwz ctx_arrow(ctx)->r10,12432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x82195894
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82195894;
	// lwz ctx_arrow(ctx)->r9,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x82195a98
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195A98;
loc_82195894:
	// lbz ctx_arrow(ctx)->r11,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// beq 0x821958a8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821958A8;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x82195934
	goto loc_82195934;
loc_821958A8:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219592c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219592C;
	// lwz ctx_arrow(ctx)->r11,12720(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821958c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821958C4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219592c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219592C;
loc_821958C4:
	// lwz ctx_arrow(ctx)->r11,12436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12724(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821958dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821958DC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219592c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219592C;
loc_821958DC:
	// lwz ctx_arrow(ctx)->r11,12440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12728(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821958f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821958F4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219592c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219592C;
loc_821958F4:
	// lwz ctx_arrow(ctx)->r11,12444(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12732(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8219590c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219590C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219592c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219592C;
loc_8219590C:
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12736(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82195924
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195924;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219592c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219592C;
loc_82195924:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x82195930
	goto loc_82195930;
loc_8219592C:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_82195930:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
loc_82195934:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82195948
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195948;
	// lwz ctx_arrow(ctx)->r11,13172(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,13176(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x8219595c
	goto loc_8219595C;
loc_82195948:
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,29,17,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x7FFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,14,18,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 14) & 0x3FFF;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 1;
loc_8219595C:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fctiwz f0,f28
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f28.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f28.f64));
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// fctiwz f13,f27
	ctx.f13.s64 = (f27.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f27.f64));
	// fctiwz f12,f3
	ctx.f12.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r7,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// stfiwx f13,0,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stfiwx f12,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r7.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x82195998
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82195998;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
loc_82195998:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// lwz ctx_arrow(ctx)->r8,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x821959bc
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821959BC;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
loc_821959BC:
	// subf. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r8.s64;
	// blt 0x821959d0
	if (ctx_arrow(ctx)->r0.lt()) goto loc_821959D0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x821959d8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821959D8;
loc_821959D0:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_821959D8:
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// stfs f28,12640(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12640);
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32;
	// stfs f27,12644(ctx_arrow(ctx)->r31)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12644);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,12668
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 12668;
	// stfs f31,12656(ctx_arrow(ctx)->r31)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12656);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stfs f26,12660(ctx_arrow(ctx)->r31)
	temp.f32 = float(f26.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12660);
	// std ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// lfd f0,96(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw ctx_arrow(ctx)->r11,12664(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12664);
	// frsp f30,f0
	f30.f64 = double(float(f0.f64));
	// stfs f30,12648(ctx_arrow(ctx)->r31)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12648);
	// frsp f29,f13
	f29.f64 = double(float(ctx.f13.f64));
	// stfs f29,12652(ctx_arrow(ctx)->r31)
	temp.f32 = float(f29.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12652);
	// bl 0x82195288
	sub_82195288(&ctx);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fsubs f12,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f26.f64 - f31.f64));
	// stfs f31,10524(ctx_arrow(ctx)->r31)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10524);
	// stfs f12,10520(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10520);
	// lfs f0,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 * f0.f64));
	// stfs f13,10504(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10504);
	// fmuls f0,f29,f0
	f0.f64 = double(float(f29.f64 * f0.f64));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f13,10508(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10508);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,10512(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10512);
	// fadds f0,f0,f27
	f0.f64 = double(float(f0.f64 + f27.f64));
	// stfs f0,10516(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10516);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1024
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 67108864;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 33554432;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 16777216;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8388608;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4194304;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2097152;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82195A98:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// bl 0x823ed58c
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82195AB8) PPC_WEAK_FUNC(sub_82195AB8);
PPC_FUNC_IMPL(__imp__sub_82195AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r3,12668
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r3.s64 + 12668;
	// stw ctx_arrow(ctx)->r11,11848(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 11848);
	// b 0x82195288
	sub_82195288(&ctx);
	return;
}

alias(__imp__sub_82195AC8) PPC_WEAK_FUNC(sub_82195AC8);
PPC_FUNC_IMPL(__imp__sub_82195AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f6,20(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f6.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f5,16(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f5.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// std ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// std ctx_arrow(ctx)->r8,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// std ctx_arrow(ctx)->r7,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// lfd f0,80(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f12,96(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f11,104(ctx_arrow(ctx)->r1)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f4,f0
	ctx.f4.f64 = double(float(f0.f64));
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x82195850
	sub_82195850(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_82195B48) PPC_WEAK_FUNC(sub_82195B48);
PPC_FUNC_IMPL(__imp__sub_82195B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f6,20(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82195850
	sub_82195850(ctx, base);
	return;
}

alias(__imp__sub_82195B68) PPC_WEAK_FUNC(sub_82195B68);
PPC_FUNC_IMPL(__imp__sub_82195B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz ctx_arrow(ctx)->r8,24(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,16,30,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 16) & 0x3;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82195b7c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82195B7C;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// b 0x82195b94
	goto loc_82195B94;
loc_82195B7C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// lis ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x82195b90
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195B90;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,32769
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | 32769;
	// b 0x82195b94
	goto loc_82195B94;
loc_82195B90:
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,49155
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | 49155;
loc_82195B94:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r7,10684(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10684);
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// stw ctx_arrow(ctx)->r8,10368(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 10368);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-18956
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -18956;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,57,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64;
	// lis ctx_arrow(ctx)->r9,-32254
	ctx_arrow(ctx)->r9.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12668
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s64 + 12668;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,-18980
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r9.s64 + -18980;
	// ld ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,36,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// ld ctx_arrow(ctx)->r9,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r9,32(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// lwz ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// b 0x82195ac8
	sub_82195AC8(&ctx);
	return;
}

alias(__imp__sub_82195C00) PPC_WEAK_FUNC(sub_82195C00);
PPC_FUNC_IMPL(__imp__sub_82195C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,3108
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 3108;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// stwx ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r31.u32);
	// beq ctx_arrow(ctx)->r6,0x82195d48
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195D48;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// beq ctx_arrow(ctx)->r6,0x82195c34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195C34;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r4.s64 + 1;
loc_82195C34:
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,263
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64 | 263;
	// rldicr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,63,63
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2593
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 2593;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,3005
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 3005;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r31.u32);
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,56
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 & 0xFF;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0xFFFF) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 16;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U64(ctx,  ctx);
	// srd ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r7.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r3.u64;
	// stdx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r31.u32);
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stwx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r31.u32);
	// beq 0x82195d48
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195D48;
	// lwz ctx_arrow(ctx)->r6,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,16,28,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 16) & 0xF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x82195cb8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195CB8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 3, xer);
	// beq ctx_arrow(ctx)->r6,0x82195cb8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195CB8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 10, xer);
	// beq ctx_arrow(ctx)->r6,0x82195cb8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195CB8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 12, xer);
	// bne ctx_arrow(ctx)->r6,0x82195d48
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195D48;
loc_82195CB8:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,13,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 13) & 0x1;
	// xor. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 ^ ctx_arrow(ctx)->r9.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x82195d48
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195D48;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// beq ctx_arrow(ctx)->r6,0x82195cd4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195CD4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r4.s64 + 1;
loc_82195CD4:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6,2593
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r6.s64 + 2593;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r8.u64;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r8,56
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r8.u64 & 0xFF;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r7.u64;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,16,28,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 16) & 0xF;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,0,16,11
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,16
	xer.ca = (ctx_arrow(ctx)->r8.s32 < 0) & ((ctx_arrow(ctx)->r8.u32 & 0xFFFF) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s32 >> 16;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,31,1,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,-3
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 + -3;
	// and ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & ctx_arrow(ctx)->r9.u64;
	// srd ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r29, 0, BINARY_OP_U8(ctx_arrow(ctx)->r29, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r3.u64 >> (PPCRegister_u8(ctx_arrow(ctx)->r29) & 0x7F)), 0));
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7,3
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r7.s64 + 3;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29,1,0,30
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 1) & 0xFFFFFFFE;
	// andc ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 & ~ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r8.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16,12,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 16) & 0xF0000;
	// or ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r30.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r8,28(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 28);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,16,11
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r6.u32 + ctx_arrow(ctx)->r31.u32);
	// ldx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64 | ctx_arrow(ctx)->r11.u64;
	// stdx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx)->r31.u32);
loc_82195D48:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82195ec4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195EC4;
	// lbz ctx_arrow(ctx)->r11,10943(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// andi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,251
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & 251;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stb ctx_arrow(ctx)->r10,10943(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10943));
	// beq ctx_arrow(ctx)->r6,0x82195da0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195DA0;
	// lhz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r5.u32 + 28);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 5, xer);
	// beq ctx_arrow(ctx)->r6,0x82195d84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195D84;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 7, xer);
	// beq ctx_arrow(ctx)->r6,0x82195d84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195D84;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 15, xer);
	// bne ctx_arrow(ctx)->r6,0x82195d98
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195D98;
loc_82195D84:
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | 4;
	// stb ctx_arrow(ctx)->r11,10943(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 10943, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1048576;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82195D98:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// b 0x82195dac
	goto loc_82195DAC;
loc_82195DA0:
	// lwz ctx_arrow(ctx)->r4,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq 0x82195db4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195DB4;
loc_82195DAC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82195b68
	sub_82195B68(ctx, base);
loc_82195DB4:
	// lwz ctx_arrow(ctx)->r11,12708(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82195e8c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195E8C;
	// lbz ctx_arrow(ctx)->r11,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,28,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x82195e8c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82195E8C;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x82195e8c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82195E8C;
	// lbz ctx_arrow(ctx)->r10,12179(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne 0x82195e8c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82195E8C;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x82195df0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195DF0;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x82195e80
	goto loc_82195E80;
loc_82195DF0:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82195e78
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195E78;
	// lwz ctx_arrow(ctx)->r11,12432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12720(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82195e10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195E10;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82195e78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195E78;
loc_82195E10:
	// lwz ctx_arrow(ctx)->r11,12436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12724(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82195e28
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195E28;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82195e78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195E78;
loc_82195E28:
	// lwz ctx_arrow(ctx)->r11,12440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12728(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82195e40
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195E40;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82195e78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195E78;
loc_82195E40:
	// lwz ctx_arrow(ctx)->r11,12444(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12732(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82195e58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195E58;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82195e78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195E78;
loc_82195E58:
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12736(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82195e70
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82195E70;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82195e78
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195E78;
loc_82195E70:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x82195e7c
	goto loc_82195E7C;
loc_82195E78:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_82195E7C:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
loc_82195E80:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// bne 0x82195e90
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82195E90;
loc_82195E8C:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_82195E90:
	// lbz ctx_arrow(ctx)->r9,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,11852(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,31,31
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x1) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb ctx_arrow(ctx)->r9,10940(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10940));
	// lwz ctx_arrow(ctx)->r10,12432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,11852(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 11852);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82195eb4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195EB4;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_82195EB4:
	// lwz ctx_arrow(ctx)->r10,10460(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,0,27
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0xFFFFFFF0) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0000000F);
	// stw ctx_arrow(ctx)->r11,10460(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10460);
	// b 0x82195f48
	goto loc_82195F48;
loc_82195EC4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x82195ef0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195EF0;
	// lwz ctx_arrow(ctx)->r11,11856(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,11856(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 11856);
	// bne ctx_arrow(ctx)->r6,0x82195ee4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195EE4;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_82195EE4:
	// lwz ctx_arrow(ctx)->r10,10460(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,4,24,27
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 4) & 0xF0) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x82195f44
	goto loc_82195F44;
loc_82195EF0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x82195f1c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195F1C;
	// lwz ctx_arrow(ctx)->r11,11860(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,11860(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 11860);
	// bne ctx_arrow(ctx)->r6,0x82195f10
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195F10;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_82195F10:
	// lwz ctx_arrow(ctx)->r10,10460(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,8,20,23
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0xF00) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x82195f44
	goto loc_82195F44;
loc_82195F1C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 3, xer);
	// bne ctx_arrow(ctx)->r6,0x82195f5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195F5C;
	// lwz ctx_arrow(ctx)->r11,11864(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12444(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,11864(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 11864);
	// bne ctx_arrow(ctx)->r6,0x82195f3c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195F3C;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_82195F3C:
	// lwz ctx_arrow(ctx)->r10,10460(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,12,16,19
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 12) & 0xF000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFF0FFF);
loc_82195F44:
	// stw ctx_arrow(ctx)->r10,10460(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10460);
loc_82195F48:
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82195F5C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_82195F68) PPC_WEAK_FUNC(sub_82195F68);
PPC_FUNC_IMPL(__imp__sub_82195F68) {
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
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// stw ctx_arrow(ctx)->r30,12448(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12448);
	// beq ctx_arrow(ctx)->r6,0x821960ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821960AC;
	// lwz ctx_arrow(ctx)->r11,12432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82195fa0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82195FA0;
	// bl 0x82195b68
	sub_82195B68(ctx, base);
loc_82195FA0:
	// lwz ctx_arrow(ctx)->r11,28(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r9,10943(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,10942(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,10376(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10376);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10560);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,5,26,26
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 5) & 0x20) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// rlwinm. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,26,26
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// stb ctx_arrow(ctx)->r10,10942(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10942));
	// beq 0x82196088
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196088;
	// lbz ctx_arrow(ctx)->r11,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x82195fe0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82195FE0;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x82196070
	goto loc_82196070;
loc_82195FE0:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82196068
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196068;
	// lwz ctx_arrow(ctx)->r11,12432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12720(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196000
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196068
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196068;
loc_82196000:
	// lwz ctx_arrow(ctx)->r11,12436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12724(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196018
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196018;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196068
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196068;
loc_82196018:
	// lwz ctx_arrow(ctx)->r11,12440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12728(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196030
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196030;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196068
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196068;
loc_82196030:
	// lwz ctx_arrow(ctx)->r11,12444(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12732(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196048
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196048;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196068
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196068;
loc_82196048:
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12736(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196060
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196060;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196068
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196068;
loc_82196060:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x8219606c
	goto loc_8219606C;
loc_82196068:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_8219606C:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
loc_82196070:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82196088
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196088;
	// lwz ctx_arrow(ctx)->r11,10368(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,13164(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,18,0,13
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 18) & 0xFFFC0000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw ctx_arrow(ctx)->r11,10368(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10368);
loc_82196088:
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,55,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 256;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// b 0x821960cc
	goto loc_821960CC;
loc_821960AC:
	// lbz ctx_arrow(ctx)->r10,10942(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10560);
	// andi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,223
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 223;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stb ctx_arrow(ctx)->r10,10942(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10942));
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 256;
loc_821960CC:
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// lwz ctx_arrow(ctx)->r11,12708(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821961a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821961A8;
	// lbz ctx_arrow(ctx)->r11,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,28,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x821961a8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821961A8;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x821961a8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821961A8;
	// lbz ctx_arrow(ctx)->r10,12179(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne 0x821961a8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821961A8;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x8219610c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219610C;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x8219619c
	goto loc_8219619C;
loc_8219610C:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82196194
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196194;
	// lwz ctx_arrow(ctx)->r11,12432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12720(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8219612c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219612C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196194
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196194;
loc_8219612C:
	// lwz ctx_arrow(ctx)->r11,12436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12724(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196144
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196144;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196194
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196194;
loc_82196144:
	// lwz ctx_arrow(ctx)->r11,12440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12728(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8219615c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219615C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196194
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196194;
loc_8219615C:
	// lwz ctx_arrow(ctx)->r11,12444(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12732(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196174
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196174;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196194
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196194;
loc_82196174:
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12736(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x8219618c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219618C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196194
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196194;
loc_8219618C:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x82196198
	goto loc_82196198;
loc_82196194:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_82196198:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
loc_8219619C:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// bne 0x821961ac
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821961AC;
loc_821961A8:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_821961AC:
	// lbz ctx_arrow(ctx)->r9,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,11868(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,31,31
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x1) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb ctx_arrow(ctx)->r9,10940(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10940));
	// lwz ctx_arrow(ctx)->r10,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,11868(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 11868);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821961d0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821961D0;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_821961D0:
	// lwz ctx_arrow(ctx)->r10,10548(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,30,30
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 1) & 0x2) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw ctx_arrow(ctx)->r10,10548(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10548);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// lwz ctx_arrow(ctx)->r11,11872(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,11872(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 11872);
	// bne ctx_arrow(ctx)->r6,0x82196208
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196208;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_82196208:
	// lwz ctx_arrow(ctx)->r10,10548(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0xFFFFFFFE) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00000001);
	// stw ctx_arrow(ctx)->r11,10548(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10548);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
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

alias(__imp__sub_82196240) PPC_WEAK_FUNC(sub_82196240);
PPC_FUNC_IMPL(__imp__sub_82196240) {
	PPC_FUNC_PROLOGUE();
	// b 0x82195c00
	sub_82195C00(ctx, base);
	return;
}

alias(__imp__sub_82196248) PPC_WEAK_FUNC(sub_82196248);
PPC_FUNC_IMPL(__imp__sub_82196248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed120
	// stfd f30,-104(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -104);
	// stfd f31,-96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -96);
	// stwu ctx_arrow(ctx)->r1,-224(ctx_arrow(ctx)->r1)
	ea = -224 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r11,10688(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r10.u64;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82196294
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82196294;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f31,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// b 0x8219629c
	goto loc_8219629C;
loc_82196294:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f31,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
loc_8219629C:
	// lwz ctx_arrow(ctx)->r30,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x821962b8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821962B8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_821962B8:
	// mulli ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r25,21
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r25.s64 * 21;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r27.u64;
	// li ctx_arrow(ctx)->r5,4
	ctx_arrow(ctx)->r5.s64 = 4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219ca10
	sub_8219CA10(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x821962dc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821962DC;
	// stw ctx_arrow(ctx)->r30,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// b 0x82196524
	goto loc_82196524;
loc_821962DC:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 12) & 0xFFF;
	// lfs f0,0(ctx_arrow(ctx)->r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u32 & 0x1FFFFFFF;
	// lfs f13,4(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 512;
	// lfs f12,8(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(ctx_arrow(ctx)->r28)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// beq ctx_arrow(ctx)->r6,0x821963d4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821963D4;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24,8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r24.s64 + 8;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r25.u64;
loc_82196310:
	// lwa ctx_arrow(ctx)->r5,-8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r5.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
	// addic. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	xer.ca = ctx_arrow(ctx)->r9.u32 > 0;
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// lwa ctx_arrow(ctx)->r8,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
	// lwa ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r7.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
	// lwa ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.s64 = int32_t(PPC_Read_U32(ctx,  ctx));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// std ctx_arrow(ctx)->r5,104(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// std ctx_arrow(ctx)->r8,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// std ctx_arrow(ctx)->r7,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// std ctx_arrow(ctx)->r6,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// lfd f7,104(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f10,80(ctx_arrow(ctx)->r1)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f9,88(ctx_arrow(ctx)->r1)
	ctx.f9.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,96(ctx_arrow(ctx)->r1)
	ctx.f8.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fsubs f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 - f31.f64));
	// stfs f7,0(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// fsubs f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 - f31.f64));
	// stfs f10,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// stfs f30,8(ctx_arrow(ctx)->r3)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// fsubs f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 - f31.f64));
	// stfs f0,12(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// fsubs f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 - f31.f64));
	// stfs f13,16(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// stfs f12,20(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// stfs f11,24(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 24);
	// stfs f9,28(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 28);
	// stfs f10,32(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 32);
	// stfs f30,36(ctx_arrow(ctx)->r3)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 36);
	// stfs f0,40(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 40);
	// stfs f13,44(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 44);
	// stfs f12,48(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 48);
	// stfs f11,52(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 52);
	// stfs f9,56(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 56);
	// stfs f8,60(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 60);
	// stfs f30,64(ctx_arrow(ctx)->r3)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 64);
	// stfs f0,68(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 68);
	// stfs f13,72(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 72);
	// stfs f12,76(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 76);
	// stfs f11,80(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 80);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,84
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + 84;
	// bne 0x82196310
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82196310;
loc_821963D4:
	// lis ctx_arrow(ctx)->r11,5
	ctx_arrow(ctx)->r11.s64 = 327680;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 | 3;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,18432
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 18432;
	// lis ctx_arrow(ctx)->r10,4096
	ctx_arrow(ctx)->r10.s64 = 268435456;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 2;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ea = 4 + ctx_arrow(ctx)->r30.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r30.u32 = ea;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,2,6,29
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r27.u32, 2) & 0x3FFFFFC) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFC000003);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lis ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 131072;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,20480
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64 | 20480;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// li ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r27.s64 = 0;
	// lis ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 65536;
	// li ctx_arrow(ctx)->r22,8961
	ctx_arrow(ctx)->r22.s64 = 8961;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// ori ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r10,8192
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r10.u64 | 8192;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,16,30,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 16) & 0x3;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r24,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r22,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// bne 0x82196470
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82196470;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// b 0x82196488
	goto loc_82196488;
loc_82196470:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// lis ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x82196484
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196484;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32769
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 32769;
	// b 0x82196488
	goto loc_82196488;
loc_82196484:
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,49155
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 49155;
loc_82196488:
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r9,8704
	ctx_arrow(ctx)->r9.s64 = 8704;
	// li ctx_arrow(ctx)->r8,8712
	ctx_arrow(ctx)->r8.s64 = 8712;
	// lwz ctx_arrow(ctx)->r7,308(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-16384
	ctx_arrow(ctx)->r10.s64 = -1073741824;
	// lis ctx_arrow(ctx)->r6,3
	ctx_arrow(ctx)->r6.s64 = 196608;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,13825
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 13825;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// mullw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r6.s64 = int64_t(ctx_arrow(ctx)->r25.s32) * int64_t(ctx_arrow(ctx)->r6.s32);
	// stwu ctx_arrow(ctx)->r23,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r5,17
	ctx_arrow(ctx)->r5.s64 = 17;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,3,16,31
	ctx_arrow(ctx)->r6.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r5.u32, 3) & 0xFFFF) | (ctx_arrow(ctx)->r6.u64 & 0xFFFFFFFFFFFF0000);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,57,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32768
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2147483648;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,56,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,36,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82196524:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// lfd f30,-104(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-96(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed170
	return;
}

alias(__imp__sub_82196538) PPC_WEAK_FUNC(sub_82196538);
PPC_FUNC_IMPL(__imp__sub_82196538) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed118
	// stfd f31,-112(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -112);
	// stwu ctx_arrow(ctx)->r1,-288(ctx_arrow(ctx)->r1)
	ea = -288 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r10.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,16,30,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 16) & 0x3;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82196578
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82196578;
	// li ctx_arrow(ctx)->r24,1
	ctx_arrow(ctx)->r24.s64 = 1;
	// b 0x82196588
	goto loc_82196588;
loc_82196578:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// beq ctx_arrow(ctx)->r6,0x82196588
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196588;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
loc_82196588:
	// li ctx_arrow(ctx)->r11,40
	ctx_arrow(ctx)->r11.s64 = 40;
	// li ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = 8;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r29, 0, BINARY_OP_U8(ctx_arrow(ctx)->r29, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r29) & 0x3F)), 0));
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r24, 0, BINARY_OP_U8(ctx_arrow(ctx)->r24, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r24) & 0x3F)), 0));
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r27.u64;
	// divwu ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u32 = ctx_arrow(ctx)->r26.u32 / ctx_arrow(ctx)->r11.u32;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// mullw ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.s64 = int64_t(ctx_arrow(ctx)->r8.s32) * int64_t(ctx_arrow(ctx)->r11.s32);
	// divwu ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u32 = ctx_arrow(ctx)->r9.u32 / ctx_arrow(ctx)->r11.u32;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r28.u64;
	// mullw ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r31.s64 = int64_t(ctx_arrow(ctx)->r8.s32) * int64_t(ctx_arrow(ctx)->r11.s32);
	// twllei ctx_arrow(ctx)->r11,0
	// twllei ctx_arrow(ctx)->r11,0
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// divwu ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u32 = ctx_arrow(ctx)->r7.u32 / ctx_arrow(ctx)->r10.u32;
	// divwu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u32 = ctx_arrow(ctx)->r11.u32 / ctx_arrow(ctx)->r10.u32;
	// twllei ctx_arrow(ctx)->r10,0
	// twllei ctx_arrow(ctx)->r10,0
	// mullw ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r23.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// mullw ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r22.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r10.s32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r30.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x82196750
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82196750;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, ctx_arrow(ctx)->r23.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x82196750
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82196750;
	// lis ctx_arrow(ctx)->r11,-32019
	ctx_arrow(ctx)->r11.s64 = -2098397184;
	// lwz ctx_arrow(ctx)->r11,28904(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196750
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196750;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r27.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x82196618
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82196618;
	// stw ctx_arrow(ctx)->r27,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stw ctx_arrow(ctx)->r28,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// stw ctx_arrow(ctx)->r31,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// stw ctx_arrow(ctx)->r7,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
loc_82196618:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, ctx_arrow(ctx)->r26.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x82196648
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82196648;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 1;
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32);
	// stwx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r9.u32);
	// stwx ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r8.u32);
	// stwx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r6.u32);
loc_82196648:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, ctx_arrow(ctx)->r28.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x82196678
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82196678;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 1;
	// stwx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32);
	// stwx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r9.u32);
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r8.u32);
	// stwx ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r6.u32);
loc_82196678:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, ctx_arrow(ctx)->r7.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x821966a8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_821966A8;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4,0,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 1;
	// stwx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32);
	// stwx ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r9.u32);
	// stwx ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r8.u32);
	// stwx ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r6.u32);
loc_821966A8:
	// lwz ctx_arrow(ctx)->r28,372(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821966dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821966DC;
	// lwz ctx_arrow(ctx)->r11,396(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r25.u64;
	// lwz ctx_arrow(ctx)->r10,380(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r20.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// bl 0x82196248
	sub_82196248(&ctx);
loc_821966DC:
	// lwz ctx_arrow(ctx)->r11,404(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// sraw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	temp.u32 = ctx_arrow(ctx)->r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx_arrow(ctx)->r31.s32 < 0) & (((ctx_arrow(ctx)->r31.s32 >> temp.u32) << temp.u32) != ctx_arrow(ctx)->r31.s32);
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r31.s32 >> temp.u32;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r10,388(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r20.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r7,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// rlwimi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,17,14,15
	ctx_arrow(ctx)->r25.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 17) & 0x30000) | (ctx_arrow(ctx)->r25.u64 & 0xFFFFFFFFFFFCFFFF);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r25.u64;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,18
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u32 & 0x3FFF;
	// sraw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r24
	temp.u32 = ctx_arrow(ctx)->r24.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx_arrow(ctx)->r22.s32 < 0) & (((ctx_arrow(ctx)->r22.s32 >> temp.u32) << temp.u32) != ctx_arrow(ctx)->r22.s32);
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r22.s32 >> temp.u32;
	// stw ctx_arrow(ctx)->r7,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r29, 0, BINARY_OP_U8(ctx_arrow(ctx)->r29, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r29) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,0,0,17
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 0) & 0xFFFFC000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF00003FFF);
	// sraw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	temp.u32 = ctx_arrow(ctx)->r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx_arrow(ctx)->r30.s32 < 0) & (((ctx_arrow(ctx)->r30.s32 >> temp.u32) << temp.u32) != ctx_arrow(ctx)->r30.s32);
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r30.s32 >> temp.u32;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,14,18,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 14) & 0x3FFF;
	// stw ctx_arrow(ctx)->r7,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// srw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r29, 0, BINARY_OP_U8(ctx_arrow(ctx)->r29, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r29) & 0x3F)), 0));
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,18,0,13
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 18) & 0xFFFC0000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0003FFFF);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// sraw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r24
	temp.u32 = ctx_arrow(ctx)->r24.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx_arrow(ctx)->r23.s32 < 0) & (((ctx_arrow(ctx)->r23.s32 >> temp.u32) << temp.u32) != ctx_arrow(ctx)->r23.s32);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r23.s32 >> temp.u32;
	// stw ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// bl 0x82196248
	sub_82196248(&ctx);
	// b 0x8219678c
	goto loc_8219678C;
loc_82196750:
	// lwz ctx_arrow(ctx)->r11,396(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r20.u64;
	// lwz ctx_arrow(ctx)->r10,380(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r9,372(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// stw ctx_arrow(ctx)->r27,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// stw ctx_arrow(ctx)->r28,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// stw ctx_arrow(ctx)->r26,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// stw ctx_arrow(ctx)->r7,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// bl 0x82196248
	sub_82196248(&ctx);
loc_8219678C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,288
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 288;
	// lfd f31,-112(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed168
	return;
}

alias(__imp__sub_82196798) PPC_WEAK_FUNC(sub_82196798);
PPC_FUNC_IMPL(__imp__sub_82196798) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// stfd f31,-160(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -160);
	// stwu ctx_arrow(ctx)->r1,-320(ctx_arrow(ctx)->r1)
	ea = -320 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r25,5
	ctx_arrow(ctx)->r25.s64 = 5;
	// lwz ctx_arrow(ctx)->r14,10368(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r14.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// stw ctx_arrow(ctx)->r24,364(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 364);
	// stw ctx_arrow(ctx)->r23,372(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 372);
	// mr ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r21,380(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 380);
	// li ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r22.s64 = 0;
	// stw ctx_arrow(ctx)->r20,388(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 388);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r5.s32, -1, xer);
	// stw ctx_arrow(ctx)->r25,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
	// beq ctx_arrow(ctx)->r6,0x82196838
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196838;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,3108
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r5.s64 + 3108;
	// li ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.s64 = 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis ctx_arrow(ctx)->r10,10
	ctx_arrow(ctx)->r10.s64 = 655360;
	// stw ctx_arrow(ctx)->r9,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r22,28(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r22.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,0,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 0) & 0xF0000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82196820
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196820;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// rlwimi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,17,12,15
	ctx_arrow(ctx)->r22.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 17) & 0xF0000) | (ctx_arrow(ctx)->r22.u64 & 0xFFFFFFFFFFF0FFFF);
loc_82196820:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,0,12,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 0) & 0xF0000;
	// lis ctx_arrow(ctx)->r10,12
	ctx_arrow(ctx)->r10.s64 = 786432;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82196838
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196838;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// rlwimi ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,16,12,15
	ctx_arrow(ctx)->r22.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 16) & 0xF0000) | (ctx_arrow(ctx)->r22.u64 & 0xFFFFFFFFFFF0FFFF);
loc_82196838:
	// lwz ctx_arrow(ctx)->r11,10560(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// li ctx_arrow(ctx)->r19,0
	ctx_arrow(ctx)->r19.s64 = 0;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,0,0,27
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFFFF0;
	// beq 0x82196854
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196854;
	// li ctx_arrow(ctx)->r19,118
	ctx_arrow(ctx)->r19.s64 = 118;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 1;
loc_82196854:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r28,255
	ctx_arrow(ctx)->r28.s64 = 255;
	// beq 0x821968a4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821968A4;
	// lwz ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r19,34561
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r19.u64 | 34561;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 4;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82196880
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82196880;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
loc_82196880:
	// li ctx_arrow(ctx)->r11,8461
	ctx_arrow(ctx)->r11.s64 = 8461;
	// lwz ctx_arrow(ctx)->r10,412(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,16,0,23
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r28.u32, 16) & 0xFFFFFF00) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF000000FF);
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stw ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 268435456;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_821968A4:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,256
	ctx_arrow(ctx)->r4.s64 = 256;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a09a8
	sub_821A09A8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x821968d0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821968D0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_821968D0:
	// lis ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 131072;
	// lwz ctx_arrow(ctx)->r30,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8320
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 8320;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lis ctx_arrow(ctx)->r7,8192
	ctx_arrow(ctx)->r7.s64 = 536870912;
	// rlwinm. ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r29,0,26,27
	ctx_arrow(ctx)->r26.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0x30;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,8192
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | 8192;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// mr ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r19.u64;
	// mr ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r30.u64;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64;
	// bne 0x82196a24
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82196A24;
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r22,16,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 16) & 0xF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 5, xer);
	// beq ctx_arrow(ctx)->r6,0x82196a24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196A24;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 7, xer);
	// beq ctx_arrow(ctx)->r6,0x82196a24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196A24;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 15, xer);
	// beq ctx_arrow(ctx)->r6,0x82196a24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196A24;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r14,16,30,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r14.u32 | (ctx_arrow(ctx)->r14.u64 << 32), 16) & 0x3;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82196940
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82196940;
	// li ctx_arrow(ctx)->r11,80
	ctx_arrow(ctx)->r11.s64 = 80;
	// li ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.s64 = 16;
	// b 0x82196954
	goto loc_82196954;
loc_82196940:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// li ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.s64 = 8;
	// li ctx_arrow(ctx)->r11,80
	ctx_arrow(ctx)->r11.s64 = 80;
	// beq ctx_arrow(ctx)->r6,0x82196954
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196954;
	// li ctx_arrow(ctx)->r11,40
	ctx_arrow(ctx)->r11.s64 = 40;
loc_82196954:
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r21.s64 - ctx_arrow(ctx)->r24.s64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x82196a24
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82196A24;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r20.s64 - ctx_arrow(ctx)->r23.s64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x82196a24
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82196A24;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,136
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 136;
	// lvx128 v1,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r16
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v1), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,132
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 132;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r22,12,26,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 12) & 0x3F;
	// bl 0x821977f0
	sub_821977F0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,8707
	ctx_arrow(ctx)->r10.s64 = 8707;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,24,8,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// clrldi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,32
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & 0xFFFFFFFF;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,16,0,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r28.u32, 16) & 0xFFFFFF00) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF000000FF);
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r29)
	ea = 4 + ctx_arrow(ctx)->r29.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r29.u32 = ea;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r7,8194
	ctx_arrow(ctx)->r7.s64 = 8194;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64;
	// std ctx_arrow(ctx)->r8,144(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 144);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u64;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,20
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r22.u32 & 0xFFF;
	// li ctx_arrow(ctx)->r5,8461
	ctx_arrow(ctx)->r5.s64 = 8461;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r10)
	ea = 4 + ctx_arrow(ctx)->r10.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r10.u32 = ea;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// lis ctx_arrow(ctx)->r17,0
	ctx_arrow(ctx)->r17.s64 = 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,55,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// mr ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r25.u64;
	// ori ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r17,34679
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r17.u64 | 34679;
	// lfd f0,144(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f0,-18664(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// lfd f0,-18672(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r10)
	ea = 4 + ctx_arrow(ctx)->r10.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r10.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r10)
	ea = 4 + ctx_arrow(ctx)->r10.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r10.u32 = ea;
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r10)
	ea = 4 + ctx_arrow(ctx)->r10.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r10.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r10)
	ea = 4 + ctx_arrow(ctx)->r10.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r10.u32 = ea;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r10.u64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 256;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 268435456;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82196A24:
	// lbz ctx_arrow(ctx)->r10,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// stw ctx_arrow(ctx)->r29,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82196a3c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196A3C;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x82196acc
	goto loc_82196ACC;
loc_82196A3C:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82196ac4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196AC4;
	// lwz ctx_arrow(ctx)->r11,12432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12720(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196a5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196A5C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196ac4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196AC4;
loc_82196A5C:
	// lwz ctx_arrow(ctx)->r11,12436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12724(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196a74
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196A74;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196ac4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196AC4;
loc_82196A74:
	// lwz ctx_arrow(ctx)->r11,12440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12728(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196a8c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196A8C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196ac4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196AC4;
loc_82196A8C:
	// lwz ctx_arrow(ctx)->r11,12444(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12732(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196aa4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196AA4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196ac4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196AC4;
loc_82196AA4:
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12736(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82196abc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196ABC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196ac4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196AC4;
loc_82196ABC:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x82196ac8
	goto loc_82196AC8;
loc_82196AC4:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_82196AC8:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
loc_82196ACC:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82196b10
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82196B10;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r14.u64;
	// stw ctx_arrow(ctx)->r18,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r16.u64;
	// stw ctx_arrow(ctx)->r30,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r20.u64;
	// stw ctx_arrow(ctx)->r17,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r21.u64;
	// stw ctx_arrow(ctx)->r19,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r23.u64;
	// stw ctx_arrow(ctx)->r22,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82196538
	sub_82196538(ctx, base);
	// b 0x82196cf0
	goto loc_82196CF0;
loc_82196B10:
	// lbz ctx_arrow(ctx)->r11,10943(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// lis ctx_arrow(ctx)->r9,-16384
	ctx_arrow(ctx)->r9.s64 = -1073741824;
	// lwz ctx_arrow(ctx)->r15,12700(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r15.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r9,24576
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r9.u64 | 24576;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82196bd4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196BD4;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,25,25
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x40;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82196bd4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196BD4;
	// lis ctx_arrow(ctx)->r12,5461
	ctx_arrow(ctx)->r12.s64 = 357892096;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,21845
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 21845;
	// and. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r15.u64 & ctx_arrow(ctx)->r12.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq 0x82196bd4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196BD4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196bc8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196BC8;
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82196b64
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82196B64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_82196B64:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r27.u64;
	// stw ctx_arrow(ctx)->r19,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r14.u64;
	// stw ctx_arrow(ctx)->r19,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r16.u64;
	// stw ctx_arrow(ctx)->r22,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw ctx_arrow(ctx)->r25,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r25,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,13164(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r5,12988(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwimi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,18,0,13
	ctx_arrow(ctx)->r7.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 18) & 0xFFFC0000) | (ctx_arrow(ctx)->r7.u64 & 0xFFFFFFFF0003FFFF);
	// lwz ctx_arrow(ctx)->r6,13168(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,12984(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7,0,0,17
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 0) & 0xFFFFC000;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r20.s64 - ctx_arrow(ctx)->r5.s64;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,0,18,31
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r6.u32, 0) & 0x3FFF) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFC000);
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r21.s64 - ctx_arrow(ctx)->r9.s64;
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r23.s64 - ctx_arrow(ctx)->r5.s64;
	// subf ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r24.s64 - ctx_arrow(ctx)->r9.s64;
	// bl 0x82196538
	sub_82196538(ctx, base);
loc_82196BC8:
	// lis ctx_arrow(ctx)->r12,-5462
	ctx_arrow(ctx)->r12.s64 = -357957632;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,43690
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 43690;
	// and ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r15.u64 = ctx_arrow(ctx)->r15.u64 & ctx_arrow(ctx)->r12.u64;
loc_82196BD4:
	// lwz ctx_arrow(ctx)->r11,12740(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r20,0
	ctx_arrow(ctx)->r20.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x82196cf0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82196CF0;
	// li ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r21.s64 = 0;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,12988
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 12988;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r31,12748
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r31.s64 + 12748;
	// b 0x82196bf8
	goto loc_82196BF8;
loc_82196BF4:
	// lwz ctx_arrow(ctx)->r24,364(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx,  ctx);
loc_82196BF8:
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82196c08
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82196C08;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r11.u64;
loc_82196C08:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r25,372(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82196c1c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82196C1C;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r11.u64;
loc_82196C1C:
	// lwz ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r26.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,380(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r26.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x82196c30
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82196C30;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64;
loc_82196C30:
	// lwz ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r23)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,388(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r29.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x82196c44
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82196C44;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64;
loc_82196C44:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, ctx_arrow(ctx)->r26.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x82196cd4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82196CD4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, ctx_arrow(ctx)->r29.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x82196cd4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82196CD4;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r21, 0, BINARY_OP_U8(ctx_arrow(ctx)->r21, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r21) & 0x3F)), 0));
	// and. ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r15.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// beq 0x82196cd4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82196CD4;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82196c80
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82196C80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_82196C80:
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r10,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r16.u64;
	// stw ctx_arrow(ctx)->r18,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r17,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// stw ctx_arrow(ctx)->r19,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw ctx_arrow(ctx)->r22,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r14
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r14.u64;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// lwz ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r26.s64 - ctx_arrow(ctx)->r11.s64;
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r29.s64 - ctx_arrow(ctx)->r9.s64;
	// subf ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r25.s64 - ctx_arrow(ctx)->r9.s64;
	// subf ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r24.s64 - ctx_arrow(ctx)->r11.s64;
	// bl 0x82196538
	sub_82196538(ctx, base);
loc_82196CD4:
	// lwz ctx_arrow(ctx)->r11,12740(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r20,1
	ctx_arrow(ctx)->r20.s64 = ctx_arrow(ctx)->r20.s64 + 1;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,16
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r23.s64 + 16;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r21,2
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r21.s64 + 2;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,8
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 8;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r20.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82196bf4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82196BF4;
loc_82196CF0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,320
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 320;
	// lfd f31,-160(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed150
	return;
}

alias(__imp__sub_82196D00) PPC_WEAK_FUNC(sub_82196D00);
PPC_FUNC_IMPL(__imp__sub_82196D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed110
	// stfd f31,-128(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -128);
	// stwu ctx_arrow(ctx)->r1,-256(ctx_arrow(ctx)->r1)
	ea = -256 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r6.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r8.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r23.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196d48
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196D48;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// stfs f0,112(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// stfs f0,116(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// stfs f0,120(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// stfs f0,124(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
loc_82196D48:
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82196d5c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82196D5C;
	// rlwinm. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,0,28,25
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// beq 0x82197384
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82197384;
loc_82196D5C:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfs f0,12640(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,100
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 100;
	// lfs f13,12644(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,108
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 108;
	// lfs f12,12648(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lfs f11,12652(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f11.f64 = double(temp.f32);
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32);
	// lwz ctx_arrow(ctx)->r9,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// fctiwz f0,f12
	f0.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r8
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r8.u32);
	// fctiwz f0,f11
	f0.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// stfiwx f0,0,ctx_arrow(ctx)->r7
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r7.u32);
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r11.u64;
	// bgt ctx_arrow(ctx)->r6,0x82196db4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82196DB4;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r9.u64;
loc_82196DB4:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r11.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r8.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82196dcc
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82196DCC;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r8.u64;
loc_82196DCC:
	// lwz ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x82196de8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82196DE8;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r10.u64;
loc_82196DE8:
	// lwz ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r5)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r10.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x82196e04
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82196E04;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r10.u64;
loc_82196E04:
	// lwz ctx_arrow(ctx)->r11,11848(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196e50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196E50;
	// lwz ctx_arrow(ctx)->r11,12668(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82196e20
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82196E20;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r11.u64;
loc_82196E20:
	// lwz ctx_arrow(ctx)->r11,12672(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, ctx_arrow(ctx)->r11.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82196e30
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82196E30;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r11.u64;
loc_82196E30:
	// lwz ctx_arrow(ctx)->r11,12676(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x82196e40
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82196E40;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64;
loc_82196E40:
	// lwz ctx_arrow(ctx)->r11,12680(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x82196e50
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82196E50;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64;
loc_82196E50:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r26.s32, ctx_arrow(ctx)->r24.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x82197384
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82197384;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, ctx_arrow(ctx)->r25.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x82197384
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82197384;
	// ld ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r4.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196f80
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196F80;
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r4.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196e8c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196E8C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r5,10560(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x821a09a8
	sub_821A09A8(ctx, base);
	// std ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82196E8C:
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,52
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196ebc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196EBC;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10548
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10548;
	// li ctx_arrow(ctx)->r5,8704
	ctx_arrow(ctx)->r5.s64 = 8704;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,52,11
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 52) & 0xFFF0000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// rldicr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,51
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82196EBC:
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,15,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1F000;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196ef4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196EF4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10528
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10528;
	// li ctx_arrow(ctx)->r5,8576
	ctx_arrow(ctx)->r5.s64 = 8576;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,47,4
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 47) & 0xF800000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// lis ctx_arrow(ctx)->r12,-2
	ctx_arrow(ctx)->r12.s64 = -131072;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,4095
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 4095;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82196EF4:
	// lis ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.s64 = 0;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,42,21
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 42) & 0xFFFFFC0000000000;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196f3c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196F3C;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10368
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10368;
	// li ctx_arrow(ctx)->r5,8192
	ctx_arrow(ctx)->r5.s64 = 8192;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,6,15
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 6) & 0xFFFF000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// lis ctx_arrow(ctx)->r12,-1
	ctx_arrow(ctx)->r12.s64 = -65536;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,42,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82196F3C:
	// lis ctx_arrow(ctx)->r12,-32
	ctx_arrow(ctx)->r12.s64 = -2097152;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// clrldi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,22
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 & 0x3FFFFFFFFFF;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196f80
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196F80;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10444
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10444;
	// li ctx_arrow(ctx)->r5,8448
	ctx_arrow(ctx)->r5.s64 = 8448;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,22,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 22) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// lis ctx_arrow(ctx)->r12,-32
	ctx_arrow(ctx)->r12.s64 = -2097152;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,21,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82196F80:
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196fd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196FD0;
	// lis ctx_arrow(ctx)->r12,31
	ctx_arrow(ctx)->r12.s64 = 2031616;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,34,29
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 34) & 0xFFFFFFFC00000000;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82196fd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82196FD0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10596
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10596;
	// li ctx_arrow(ctx)->r5,8832
	ctx_arrow(ctx)->r5.s64 = 8832;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,9,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 9) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// lis ctx_arrow(ctx)->r12,-32
	ctx_arrow(ctx)->r12.s64 = -2097152;
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,34,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
loc_82196FD0:
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82197008
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197008;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,26
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & 0x3FFFFFFFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82197008
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197008;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10680
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10680;
	// li ctx_arrow(ctx)->r5,8960
	ctx_arrow(ctx)->r5.s64 = 8960;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,26,37
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// rldicr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,25
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 0) & 0xFFFFFFC000000000;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
loc_82197008:
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82197024
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82197024;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_82197024:
	// lis ctx_arrow(ctx)->r10,-16384
	ctx_arrow(ctx)->r10.s64 = -1073741824;
	// lis ctx_arrow(ctx)->r9,-16384
	ctx_arrow(ctx)->r9.s64 = -1073741824;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,24576
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 24576;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,15104
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r9.u64 | 15104;
	// li ctx_arrow(ctx)->r8,768
	ctx_arrow(ctx)->r8.s64 = 768;
	// lis ctx_arrow(ctx)->r9,-16356
	ctx_arrow(ctx)->r9.s64 = -1071906816;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,11008
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r9.u64 | 11008;
	// lwz ctx_arrow(ctx)->r10,12700(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r30,27
	ctx_arrow(ctx)->r30.s64 = 27;
	// lis ctx_arrow(ctx)->r9,-32254
	ctx_arrow(ctx)->r9.s64 = -2113798144;
	// li ctx_arrow(ctx)->r5,108
	ctx_arrow(ctx)->r5.s64 = 108;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r9,-18856
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r9.s64 + -18856;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29,40
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r29.s64 + 40;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,108
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 108;
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// stw ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// ble ctx_arrow(ctx)->r6,0x821970a0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821970A0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
loc_821970A0:
	// lis ctx_arrow(ctx)->r11,-16374
	ctx_arrow(ctx)->r11.s64 = -1073086464;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,11008
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 11008;
	// li ctx_arrow(ctx)->r9,9
	ctx_arrow(ctx)->r9.s64 = 9;
	// li ctx_arrow(ctx)->r5,36
	ctx_arrow(ctx)->r5.s64 = 36;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lis ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 65536;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,36
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 36;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8576
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 8576;
	// lis ctx_arrow(ctx)->r9,4097
	ctx_arrow(ctx)->r9.s64 = 268500992;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 1;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r10.u32, xer);
	// stw ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// ble ctx_arrow(ctx)->r6,0x82197110
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82197110;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
loc_82197110:
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// lis ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8448
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8448;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// li ctx_arrow(ctx)->r7,8851
	ctx_arrow(ctx)->r7.s64 = 8851;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// li ctx_arrow(ctx)->r29,768
	ctx_arrow(ctx)->r29.s64 = 768;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,8708
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 | 8708;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// lis ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 65536;
	// li ctx_arrow(ctx)->r21,8978
	ctx_arrow(ctx)->r21.s64 = 8978;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r20,8205
	ctx_arrow(ctx)->r20.s64 = 8205;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// li ctx_arrow(ctx)->r18,0
	ctx_arrow(ctx)->r18.s64 = 0;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u32 & 0xF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,41,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r21,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r19,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r20,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r18,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,40,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,39,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,35,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,44,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 128;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 32;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 524288;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 524288;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1048576;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// stw ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// bne 0x82197260
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82197260;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r23.u64;
	// stw ctx_arrow(ctx)->r22,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r24.u64;
	// li ctx_arrow(ctx)->r5,-1
	ctx_arrow(ctx)->r5.s64 = -1;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82196798
	sub_82196798(ctx, base);
	// b 0x8219733c
	goto loc_8219733C;
loc_82197260:
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219727c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219727C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219727C:
	// li ctx_arrow(ctx)->r10,8452
	ctx_arrow(ctx)->r10.s64 = 8452;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r9,8706
	ctx_arrow(ctx)->r9.s64 = 8706;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// lis ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 65536;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r10,8705
	ctx_arrow(ctx)->r10.s64 = 8705;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 1;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,37,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,12432
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 12432;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 512;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1024
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1024;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_821972E0:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r30, 0, BINARY_OP_U8(ctx_arrow(ctx)->r30, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r11.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r30) & 0x3F)), 0));
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r28.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219732c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219732C;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219732c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219732C;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r23.u64;
	// stw ctx_arrow(ctx)->r22,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r25.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82196798
	sub_82196798(ctx, base);
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,0,28,25
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
loc_8219732C:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x821972e0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821972E0;
loc_8219733C:
	// lwz ctx_arrow(ctx)->r11,10440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r10,10436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,17,0,14
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,17
	xer.ca = (ctx_arrow(ctx)->r9.s32 < 0) & ((ctx_arrow(ctx)->r9.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r9.s32 >> 17;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,17,0,14
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,17
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s32 >> 17;
	// srawi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8,17
	xer.ca = (ctx_arrow(ctx)->r8.s32 < 0) & ((ctx_arrow(ctx)->r8.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r8.s32 >> 17;
	// srawi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,17
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s32 >> 17;
	// bl 0x82192c70
	sub_82192C70(ctx, base);
	// lbz ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4;
	// stb ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 10941, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 131072;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82197384:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// lfd f31,-128(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed160
	return;
}

alias(__imp__sub_82197390) PPC_WEAK_FUNC(sub_82197390);
PPC_FUNC_IMPL(__imp__sub_82197390) {
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
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219749c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219749C;
	// lwz ctx_arrow(ctx)->r7,12432(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// mr. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x821973b8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_821973B8;
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_821973B8:
	// lbz ctx_arrow(ctx)->r10,10940(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,14,18,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29,17,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x7FFF;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// stw ctx_arrow(ctx)->r5,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// stw ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// rlwinm. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10,0,27,27
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// beq 0x821973f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821973F4;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x82197480
	goto loc_82197480;
loc_821973F4:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82197478
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82197478;
	// lwz ctx_arrow(ctx)->r11,12720(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r7.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82197410
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197410;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r7.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82197478
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197478;
loc_82197410:
	// lwz ctx_arrow(ctx)->r11,12436(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12724(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82197428
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197428;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82197478
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197478;
loc_82197428:
	// lwz ctx_arrow(ctx)->r11,12440(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12728(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82197440
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197440;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82197478
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197478;
loc_82197440:
	// lwz ctx_arrow(ctx)->r11,12444(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12732(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82197458
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197458;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82197478
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197478;
loc_82197458:
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12736(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82197470
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197470;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82197478
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197478;
loc_82197470:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x8219747c
	goto loc_8219747C;
loc_82197478:
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u64;
loc_8219747C:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
loc_82197480:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82197498
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82197498;
	// lwz ctx_arrow(ctx)->r11,13172(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lwz ctx_arrow(ctx)->r11,13176(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
loc_82197498:
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
loc_8219749C:
	// bl 0x82196d00
	sub_82196D00(ctx, base);
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

alias(__imp__sub_821974B8) PPC_WEAK_FUNC(sub_821974B8);
PPC_FUNC_IMPL(__imp__sub_821974B8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// stfd f31,-56(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -56);
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stw ctx_arrow(ctx)->r7,212(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 212);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,212
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 212;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-18688
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -18688;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r9.u64;
	// lvlx v0,0,ctx_arrow(ctx)->r10
	temp.u32 = ctx_arrow(ctx)->r10.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// lvx128 v13,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), 12));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-18704
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -18704;
	// vupkd3d128 v0,v0,0
	vTemp.u32[0] = ctx.PPCRegister_u8(v0)[3] | 0x3F800000;
	vTemp.u32[1] = ctx.PPCRegister_u8(v0)[0] | 0x3F800000;
	vTemp.u32[2] = ctx.PPCRegister_u8(v0)[1] | 0x3F800000;
	vTemp.u32[3] = ctx.PPCRegister_u8(v0)[2] | 0x3F800000;
	ctx.v0 = vTemp;
	// lvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// vmaddfp v0,v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne ctx_arrow(ctx)->r6,0x82197530
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197530;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r27.u64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x82197390
	sub_82197390(ctx, base);
	// b 0x82197568
	goto loc_82197568;
loc_82197530:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82197568
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197568;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
loc_82197540:
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x82197390
	sub_82197390(ctx, base);
	// addic. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,-1
	xer.ca = ctx_arrow(ctx)->r31.u32 > 0;
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 16;
	// bne 0x82197540
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82197540;
loc_82197568:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lfd f31,-56(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed184
	return;
}

alias(__imp__sub_82197578) PPC_WEAK_FUNC(sub_82197578);
PPC_FUNC_IMPL(__imp__sub_82197578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 30, xer);
	// beq ctx_arrow(ctx)->r6,0x821975bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821975BC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 31, xer);
	// beq ctx_arrow(ctx)->r6,0x821975bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821975BC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,32
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 32, xer);
	// beq ctx_arrow(ctx)->r6,0x821975bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821975BC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,36
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 36, xer);
	// beq ctx_arrow(ctx)->r6,0x821975bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821975BC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,37
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 37, xer);
	// beq ctx_arrow(ctx)->r6,0x821975bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821975BC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,38
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 38, xer);
	// beq ctx_arrow(ctx)->r6,0x821975bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821975BC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,57
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 57, xer);
	// beq ctx_arrow(ctx)->r6,0x821975bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821975BC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,63
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 63, xer);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
loc_821975BC:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
}

alias(__imp__sub_821975C8) PPC_WEAK_FUNC(sub_821975C8);
PPC_FUNC_IMPL(__imp__sub_821975C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// vor v0,v1,v1
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v1)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-18528
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -18528;
	// lvx128 v13,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// vspltw v11,v13,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-18544
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -18544;
	// vspltw v6,v13,2
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vspltw v3,v13,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vcmpgtfp v6,v6,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v6.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// vspltw v10,v12,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// vcmpgtfp v3,v3,v0
	_mm_store_ps(ctx.v3.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)));
	// vspltw v9,v12,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-18560
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -18560;
	// vspltw v8,v12,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vcmpgtfp v13,v13,v0
	_mm_store_ps(ctx.v13.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vspltw v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v10,v0,v10
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v9,v0,v9
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v8,v0,v8
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v7,v0,v7
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// vspltw v5,v12,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// vspltw v4,v12,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// vspltw v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vrfiz v10,v10
	_mm_store_ps(ctx.v10.f32, _mm_round_ps(_mm_load_ps(ctx.v10.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz v9,v9
	_mm_store_ps(ctx.v9.f32, _mm_round_ps(_mm_load_ps(ctx.v9.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz v8,v8
	_mm_store_ps(ctx.v8.f32, _mm_round_ps(_mm_load_ps(ctx.v8.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz v7,v7
	_mm_store_ps(ctx.v7.f32, _mm_round_ps(_mm_load_ps(ctx.v7.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vmaddfp v10,v10,v11,v5
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v9,v9,v11,v4
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v12,v8,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v11,v7,v11
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v11.f32)));
	// vsel v10,v9,v10,v6
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v10), _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v6)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v9))), _mm_and_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v6)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v10)))));
	// vsel v12,v10,v12,v3
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v3)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v10))), _mm_and_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v3)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)))));
	// vsel v1,v12,v11,v13
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v1), _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12))), _mm_and_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v11)))));
	// vrlimi128 v1,v0,1,0
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// blr 
	return;
}

alias(__imp__sub_82197670) PPC_WEAK_FUNC(sub_82197670);
PPC_FUNC_IMPL(__imp__sub_82197670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// stfs f1,20(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 20);
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x80000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82197688
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82197688;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// b 0x821976cc
	goto loc_821976CC;
loc_82197688:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,9,23,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 9) & 0x1FF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,113
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 113, xer);
	// blt ctx_arrow(ctx)->r6,0x821976a8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821976A8;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,5,8
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x7800000;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29,3,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x821976cc
	goto loc_821976CC;
loc_821976A8:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0x7FFFFF;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,113
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 113;
	ctx_arrow(ctx)->r11.s64 = 113 - ctx_arrow(ctx)->r11.s64;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// oris ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,128
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 8388608;
	// srw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
loc_821976CC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// rlwimi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,8,0,23
	ctx_arrow(ctx)->r3.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0xFFFFFF00) | (ctx_arrow(ctx)->r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

alias(__imp__sub_821976D8) PPC_WEAK_FUNC(sub_821976D8);
PPC_FUNC_IMPL(__imp__sub_821976D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r6.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82197730
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197730;
	// lhz ctx_arrow(ctx)->r11,10376(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r30.u32 + 10376);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82197790
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82197790;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfs f0,-18508(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f0,-18512(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x82197770
	goto loc_82197770;
loc_82197730:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-19608
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -19608;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1,25,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0x7E;
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r11.u32);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,20,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xF00;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82197790
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82197790;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfs f0,-18508(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f0,-18512(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_82197770:
	// fmuls f0,f1,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,8,0,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 8) & 0xFFFFFF00;
	// or ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x8219779c
	goto loc_8219779C;
loc_82197790:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82197670
	sub_82197670(ctx, base);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,11,21,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 11) & 0x7FF;
loc_8219779C:
	// lbz ctx_arrow(ctx)->r10,10562(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,10560(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 - ctx_arrow(ctx)->r10.s64;
	// stw ctx_arrow(ctx)->r3,10796(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 10796);
	// not ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ~ctx_arrow(ctx)->r9.u64;
	// cntlzw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r10.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,6,20,20
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 6) & 0x800;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,6,20,20
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 6) & 0x800;
	// xori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2048
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 ^ 2048;
	// xor ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 ^ ctx_arrow(ctx)->r9.u64;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r11,10792(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 10792);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,768
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 768;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r30)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 32);
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

alias(__imp__sub_821977F0) PPC_WEAK_FUNC(sub_821977F0);
PPC_FUNC_IMPL(__imp__sub_821977F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed134
	// stfd f31,-56(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -56);
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r29,32
	ctx_arrow(ctx)->r29.s64 = 32;
	// stvx128 v1,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v1)), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 15, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bgt ctx_arrow(ctx)->r6,0x82197b54
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82197B54;
	// lis ctx_arrow(ctx)->r12,-32254
	ctx_arrow(ctx)->r12.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-18592
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -18592;
	// lbzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r0,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r0.u32 | (ctx_arrow(ctx)->r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis ctx_arrow(ctx)->r12,-32231
	ctx_arrow(ctx)->r12.s64 = -2112290816;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,30796
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + 30796;
	// add ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 + ctx_arrow(ctx)->r0.u64;
	// mtctr ctx_arrow(ctx)->r12
	ctr.u64 = ctx_arrow(ctx)->r12.u64;
	// nop 
	// bctr 
	switch (ctx_arrow(ctx)->r31.u64) {
	case 0:
		goto loc_82197850;
	case 1:
		goto loc_8219784C;
	case 2:
		goto loc_82197850;
	case 3:
		goto loc_821979E8;
	case 4:
		goto loc_82197928;
	case 5:
		goto loc_82197928;
	case 6:
		goto loc_82197AD8;
	case 7:
		goto loc_82197AFC;
	case 8:
		goto loc_82197B54;
	case 9:
		goto loc_82197B54;
	case 10:
		goto loc_82197850;
	case 11:
		goto loc_82197B54;
	case 12:
		goto loc_821979E8;
	case 13:
		goto loc_82197B54;
	case 14:
		goto loc_82197B40;
	case 15:
		goto loc_82197B48;
	default:
		__builtin_unreachable();
	}
loc_8219784C:
	// bl 0x821975c8
	sub_821975C8(ctx, base);
loc_82197850:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 10, xer);
	// bne ctx_arrow(ctx)->r6,0x8219785c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219785C;
	// li ctx_arrow(ctx)->r31,2
	ctx_arrow(ctx)->r31.s64 = 2;
loc_8219785C:
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-18444
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -18444;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-18448
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -18448;
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 1);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r10, 0, BINARY_OP_U8(ctx_arrow(ctx)->r10, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r10) & 0x3F)), 0));
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32;
	// std ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// lfd f0,96(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 * 3;
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32;
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lfs f0,2776(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f13,108(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// lfd f13,88(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f0,100(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// stfs f0,104(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// stfs f0,96(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// vmulfp128 v12,v1,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaxfp v13,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_max_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vminfp v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_min_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vrfin v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vctsxs v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.s32, _mm_vctsxs(_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// slw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// lwz ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r8, 0, BINARY_OP_U8(ctx_arrow(ctx)->r8, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r8) & 0x3F)), 0));
	// lwz ctx_arrow(ctx)->r8,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r9.u64;
	// slw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r8.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x3F)), 0));
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r11.u64;
loc_82197918:
	// lwz ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
loc_82197920:
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64;
	// b 0x82197b58
	goto loc_82197B58;
loc_82197928:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,5
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 5, xer);
	// lfs f0,28824(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stfs f0,80(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lvlx v11,0,ctx_arrow(ctx)->r10
	temp.u32 = ctx_arrow(ctx)->r10.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lfs f0,6580(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stfs f0,88(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// vmulfp128 v11,v1,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v11.f32)));
	// lvlx v10,0,ctx_arrow(ctx)->r9
	temp.u32 = ctx_arrow(ctx)->r9.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v10), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v10,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lfs f0,2776(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// stfs f0,96(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// lvlx v9,0,ctx_arrow(ctx)->r8
	temp.u32 = ctx_arrow(ctx)->r8.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v9), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-18464
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -18464;
	// vspltw v9,v9,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// lvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// vmaxfp v11,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_max_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-18480
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -18480;
	// lvx128 v13,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-18496
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -18496;
	// vminfp v11,v9,v11
	_mm_store_ps(ctx.v11.f32, _mm_min_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// vmaddfp v0,v11,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vrfin v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vctsxs v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.s32, _mm_vctsxs(_mm_load_ps(ctx.v0.f32)));
	// vxor v0,v0,v12
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_xor_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12))));
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16,0,15
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xFFFF0000;
	// bne ctx_arrow(ctx)->r6,0x82197918
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197918;
	// lwz ctx_arrow(ctx)->r9,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r9,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16,0,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 16) & 0xFFFF0000;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r9.u64;
loc_821979E0:
	// li ctx_arrow(ctx)->r29,64
	ctx_arrow(ctx)->r29.s64 = 64;
	// b 0x82197b58
	goto loc_82197B58;
loc_821979E8:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// lfs f31,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
loc_821979F4:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// li ctx_arrow(ctx)->r4,-124
	ctx_arrow(ctx)->r4.s64 = -124;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfsx f1,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823efd28
	sub_823EFD28(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r30.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addis ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 65536;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-32768
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -32768;
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r30.u32);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,1,5
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x7C000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x82197a40
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82197A40;
	// lfsx f0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r11,1023
	ctx_arrow(ctx)->r11.s64 = 1023;
	// fcmpu ctx_arrow(ctx)->r6,f0,f31
	ctx_arrow(ctx)->r6.compare(f0.f64, f31.f64);
	// blt ctx_arrow(ctx)->r6,0x82197a44
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82197A44;
	// li ctx_arrow(ctx)->r11,511
	ctx_arrow(ctx)->r11.s64 = 511;
	// b 0x82197a44
	goto loc_82197A44;
loc_82197A40:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16,22,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0x3FF;
loc_82197A44:
	// stwx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r30.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,12
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 12, xer);
	// blt ctx_arrow(ctx)->r6,0x821979f4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_821979F4;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,220(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lfs f12,3908(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// stfs f0,108(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// fcmpu ctx_arrow(ctx)->r6,f0,f31
	ctx_arrow(ctx)->r6.compare(f0.f64, f31.f64);
	// ble ctx_arrow(ctx)->r6,0x82197a78
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82197A78;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82197a7c
	goto loc_82197A7C;
loc_82197A78:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82197A7C:
	// fcmpu ctx_arrow(ctx)->r6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge ctx_arrow(ctx)->r6,0x82197a94
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82197A94;
	// fcmpu ctx_arrow(ctx)->r6,f0,f31
	ctx_arrow(ctx)->r6.compare(f0.f64, f31.f64);
	// bgt ctx_arrow(ctx)->r6,0x82197a9c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82197A9C;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x82197a98
	goto loc_82197A98;
loc_82197A94:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64;
loc_82197A98:
	// stfs f0,108(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
loc_82197A9C:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,2692(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f13.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,108
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 108;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32);
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,10,0,21
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 10) & 0xFFFFFC00;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,10,0,21
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 10) & 0xFFFFFC00;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,10,0,21
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 10) & 0xFFFFFC00;
	// b 0x82197918
	goto loc_82197918;
loc_82197AD8:
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// vpkd3d128 v0,v1,3,1,3
	ctx.fpscr.enableFlushMode();
	__builtin_debugtrap();
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvewx v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	ea = (ctx_arrow(ctx)->r11.u32) & ~0x3;
	PPC_Write_U32(ctx,  ctx, ea) >> 2)]);
	// lhz ctx_arrow(ctx)->r10,82(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 82);
	// lhz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 80);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,16,0,15
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 16) & 0xFFFF0000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x82197920
	goto loc_82197920;
loc_82197AFC:
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// li ctx_arrow(ctx)->r29,64
	ctx_arrow(ctx)->r29.s64 = 64;
	// vpkd3d128 v0,v1,1,2,2
	ctx.fpscr.enableFlushMode();
	__builtin_debugtrap();
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// stvewx v13,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r10
	ea = (ctx_arrow(ctx)->r10.u32) & ~0x3;
	PPC_Write_U32(ctx,  ctx, ea) >> 2)]);
	// stvewx v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	ea = (ctx_arrow(ctx)->r11.u32) & ~0x3;
	PPC_Write_U32(ctx,  ctx, ea) >> 2)]);
	// lhz ctx_arrow(ctx)->r9,98(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 98);
	// lhz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 96);
	// lhz ctx_arrow(ctx)->r8,102(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 102);
	// lhz ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + 100);
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,16,0,15
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 16) & 0xFFFF0000) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,16,0,15
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r8.u32, 16) & 0xFFFF0000) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x82197b58
	goto loc_82197B58;
loc_82197B40:
	// lwz ctx_arrow(ctx)->r11,208(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x82197920
	goto loc_82197920;
loc_82197B48:
	// lwz ctx_arrow(ctx)->r11,208(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,212(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x821979e0
	goto loc_821979E0;
loc_82197B54:
	// lwz ctx_arrow(ctx)->r10,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_82197B58:
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r28.u32 + 0);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// lfd f31,-56(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed184
	return;
}

alias(__imp__sub_82197B70) PPC_WEAK_FUNC(sub_82197B70);
PPC_FUNC_IMPL(__imp__sub_82197B70) {
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
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82197b90
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197B90;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,10372
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 10372;
	// b 0x82197b9c
	goto loc_82197B9C;
loc_82197B90:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,2594
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r5.s64 + 2594;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r29.u64;
loc_82197B9C:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,16,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xF;
	// bne ctx_arrow(ctx)->r6,0x82197bc0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197BC0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,12,26,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0x3F;
	// bl 0x821977f0
	sub_821977F0(ctx, base);
	// b 0x82197c24
	goto loc_82197C24;
loc_82197BC0:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-18576
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -18576;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-19608
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -19608;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u32 & 0x3F;
	// lbzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,54
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 54, xer);
	// rotlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r9.u32, 1);
	// lbzx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U8(ctx,  ctx);
	// bne ctx_arrow(ctx)->r6,0x82197bf4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197BF4;
	// li ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r11.s64 = 7;
loc_82197BF4:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32);
	// rlwinm ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,24,28,31
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 24) & 0xF;
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// bl 0x821977f0
	sub_821977F0(ctx, base);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, ctx_arrow(ctx)->r30.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82197c24
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82197C24;
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
loc_82197C24:
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,10800(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 10800);
	// lwz ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,10804(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 10804);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,192
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 192;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r29)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r29.u32 + 32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_82197C48) PPC_WEAK_FUNC(sub_82197C48);
PPC_FUNC_IMPL(__imp__sub_82197C48) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// stfd f30,-168(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -168);
	// stfd f31,-160(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -160);
	// stwu ctx_arrow(ctx)->r1,-384(ctx_arrow(ctx)->r1)
	ea = -384 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r4.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r5.u64;
	// clrlwi ctx_arrow(ctx)->r14,ctx_arrow(ctx)->r23,29
	ctx_arrow(ctx)->r14.u64 = ctx_arrow(ctx)->r23.u32 & 0x7;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r14,144(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 144);
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r10.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,0,25,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r23.u32 | (ctx_arrow(ctx)->r23.u64 << 32), 0) & 0x70;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82197cd8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82197CD8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r14,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r14.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x82197ca0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197CA0;
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// b 0x82197cac
	goto loc_82197CAC;
loc_82197CA0:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r14,3108
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r14.s64 + 3108;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_82197CAC:
	// lhz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r11.u32 + 24);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82197cc4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197CC4;
	// ori ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,16
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r23.u64 | 16;
	// b 0x82197cd8
	goto loc_82197CD8;
loc_82197CC4:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x82197cd4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197CD4;
	// ori ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,80
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r23.u64 | 80;
	// b 0x82197cd8
	goto loc_82197CD8;
loc_82197CD4:
	// ori ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r23,112
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r23.u64 | 112;
loc_82197CD8:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r21.u32, 0, xer);
	// lfs f31,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f31.f64 = double(temp.f32);
	// bne ctx_arrow(ctx)->r6,0x82197cfc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197CFC;
	// stfs f31,192(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 192);
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// stfs f31,196(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 196);
	// stfs f31,200(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 200);
	// stfs f31,204(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 204);
loc_82197CFC:
	// lwz ctx_arrow(ctx)->r10,48(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,21,22
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x600;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0x2;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1024
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1024, xer);
	// lwz ctx_arrow(ctx)->r10,36(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// beq ctx_arrow(ctx)->r6,0x82197d2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197D2C;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,19
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0x1FFF;
	// li ctx_arrow(ctx)->r17,1
	ctx_arrow(ctx)->r17.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,19,19,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 19) & 0x1FFF;
	// b 0x82197d38
	goto loc_82197D38;
loc_82197D2C:
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,21
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0x7FF;
	// li ctx_arrow(ctx)->r17,8
	ctx_arrow(ctx)->r17.s64 = 8;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,21,21,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 21) & 0x7FF;
loc_82197D38:
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r17,136(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 136);
	// add ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,1,25,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x7E;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r5.u32, 0, xer);
	// stw ctx_arrow(ctx)->r9,116(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,-19608
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + -19608;
	// lwz ctx_arrow(ctx)->r10,28(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r25,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// rlwinm ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r10,15,18,26
	ctx_arrow(ctx)->r16.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 15) & 0x3FE0;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,0,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0xFFFFF000;
	// lhzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r8.u32 + ctx_arrow(ctx)->r9.u32);
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,29,27,31
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 29) & 0x1F;
	// stw ctx_arrow(ctx)->r16,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
	// stw ctx_arrow(ctx)->r10,120(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// stw ctx_arrow(ctx)->r28,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
	// bne ctx_arrow(ctx)->r6,0x82197d8c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197D8C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82197de0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197DE0;
loc_82197D8C:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,156
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 156;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r17,-1
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r17.s64 + -1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// stw ctx_arrow(ctx)->r7,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,152
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 152;
	// stw ctx_arrow(ctx)->r6,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// andc ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r22.u64 & ~ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r19.u64;
	// bl 0x8218af18
	sub_8218AF18(ctx, base);
	// lwz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r25,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U32(ctx,  ctx);
	// twllei ctx_arrow(ctx)->r28,0
	// divwu ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r16.u32 = ctx_arrow(ctx)->r11.u32 / ctx_arrow(ctx)->r28.u32;
	// lwz ctx_arrow(ctx)->r10,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r16,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
loc_82197DE0:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r24.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82197e04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197E04;
	// stw ctx_arrow(ctx)->r11,176(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 176);
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// stw ctx_arrow(ctx)->r11,180(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 180);
	// lwz ctx_arrow(ctx)->r11,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r25,188(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 188);
	// stw ctx_arrow(ctx)->r11,184(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 184);
loc_82197E04:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82197e14
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197E14;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-18440
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -18440;
loc_82197E14:
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// lwz ctx_arrow(ctx)->r6,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,512
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 512;
	// lwz ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,40(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r25.s64 - ctx_arrow(ctx)->r11.s64;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,0,19,19
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x1000;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r29,32(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r23,6,26,31
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r23.u32 | (ctx_arrow(ctx)->r23.u64 << 32), 6) & 0x3F;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r6.s64 - ctx_arrow(ctx)->r9.s64;
	// lwz ctx_arrow(ctx)->r4,28(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29,26
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r29.u32 & 0x3F;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,5,0,26
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw ctx_arrow(ctx)->r18,152(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 152);
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r5.s64;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,0,28,30
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xE;
	// mullw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r9.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r16.s32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r6.u64;
	// cntlzw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r5.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r5.u32);
	// mullw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.s64 = int64_t(ctx_arrow(ctx)->r9.s32) * int64_t(ctx_arrow(ctx)->r28.s32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r7.u64;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6,27,31,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 27) & 0x1;
	// add ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r15.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// rlwinm ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r4,30,30,31
	ctx_arrow(ctx)->r20.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r4.u32 | (ctx_arrow(ctx)->r4.u64 << 32), 30) & 0x3;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	// xori ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r7.u64 ^ 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,54
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 54, xer);
	// stw ctx_arrow(ctx)->r15,156(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 156);
	// bne ctx_arrow(ctx)->r6,0x82197e9c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197E9C;
	// li ctx_arrow(ctx)->r30,7
	ctx_arrow(ctx)->r30.s64 = 7;
	// b 0x82197f00
	goto loc_82197F00;
loc_82197E9C:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,55
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 55, xer);
	// bne ctx_arrow(ctx)->r6,0x82197eac
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197EAC;
	// li ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r30.s64 = 16;
	// b 0x82197f00
	goto loc_82197F00;
loc_82197EAC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,56
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 56, xer);
	// bne ctx_arrow(ctx)->r6,0x82197ebc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197EBC;
	// li ctx_arrow(ctx)->r30,17
	ctx_arrow(ctx)->r30.s64 = 17;
	// b 0x82197f00
	goto loc_82197F00;
loc_82197EBC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,27
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 27, xer);
	// bne ctx_arrow(ctx)->r6,0x82197ecc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197ECC;
	// li ctx_arrow(ctx)->r30,30
	ctx_arrow(ctx)->r30.s64 = 30;
	// b 0x82197f00
	goto loc_82197F00;
loc_82197ECC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,28
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 28, xer);
	// bne ctx_arrow(ctx)->r6,0x82197edc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197EDC;
	// li ctx_arrow(ctx)->r30,31
	ctx_arrow(ctx)->r30.s64 = 31;
	// b 0x82197f00
	goto loc_82197F00;
loc_82197EDC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,29
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 29, xer);
	// bne ctx_arrow(ctx)->r6,0x82197eec
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197EEC;
	// li ctx_arrow(ctx)->r30,32
	ctx_arrow(ctx)->r30.s64 = 32;
	// b 0x82197f00
	goto loc_82197F00;
loc_82197EEC:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,22
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 22, xer);
	// beq ctx_arrow(ctx)->r6,0x82197efc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82197EFC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,23
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 23, xer);
	// bne ctx_arrow(ctx)->r6,0x82197f00
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197F00;
loc_82197EFC:
	// li ctx_arrow(ctx)->r30,6
	ctx_arrow(ctx)->r30.s64 = 6;
loc_82197F00:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r20.s64 + -1;
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r11.u32);
	// bne ctx_arrow(ctx)->r6,0x82197f1c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197F1C;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// b 0x82197f20
	goto loc_82197F20;
loc_82197F1C:
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
loc_82197F20:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x82197578
	sub_82197578(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x82197f34
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82197F34;
	// li ctx_arrow(ctx)->r28,7
	ctx_arrow(ctx)->r28.s64 = 7;
loc_82197F34:
	// rlwimi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r26,8,23,23
	ctx_arrow(ctx)->r27.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r26.u32, 8) & 0x100) | (ctx_arrow(ctx)->r27.u64 & 0xFFFFFFFFFFFFFEFF);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r18,16,2,15
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r18.u32 | (ctx_arrow(ctx)->r18.u64 << 32), 16) & 0x3FFF0000;
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0,21,22
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x600;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29,26,30,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 26) & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,1024
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r6.u32, 1024, xer);
	// andi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,319
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r27.u64 & 319;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// rlwimi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r28.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 3) & 0xFFFFFFF8) | (ctx_arrow(ctx)->r28.u64 & 0xFFFFFFFF00000007);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16,18
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r16.u32 & 0x3FFF;
	// rlwimi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28,6,0,25
	ctx_arrow(ctx)->r30.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r28.u32, 6) & 0xFFFFFFC0) | (ctx_arrow(ctx)->r30.u64 & 0xFFFFFFFF0000003F);
	// or ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,7,0,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 7) & 0xFFFFFF80;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r7.u64;
	// bne ctx_arrow(ctx)->r6,0x82197f94
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197F94;
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r16.s32) * int64_t(ctx_arrow(ctx)->r25.s32);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r17,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r17.s64 + -1;
	// stw ctx_arrow(ctx)->r10,10820(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10820);
	// ld ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 4;
	// and ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ctx_arrow(ctx)->r22.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4,25,27
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 4) & 0x70;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8;
loc_82197F94:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23,0,18,18
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r23.u32 | (ctx_arrow(ctx)->r23.u64 << 32), 0) & 0x2000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// beq 0x82197fa8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82197FA8;
	// li ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.s64 = 3;
	// b 0x82197fb4
	goto loc_82197FB4;
loc_82197FA8:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r14,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r14.u32, 4, xer);
	// bne ctx_arrow(ctx)->r6,0x82197fb4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82197FB4;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
loc_82197FB4:
	// andi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23,887
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r23.u64 & 887;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,10788(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10788);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,20,10,11
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 20) & 0x300000;
	// stw ctx_arrow(ctx)->r15,10780(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10780);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -16;
	// stw ctx_arrow(ctx)->r8,10784(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10784);
	// lwz ctx_arrow(ctx)->r29,484(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// or ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r30,10776(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10776);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,15360
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 15360;
	// rlwinm. ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r23,0,22,22
	ctx_arrow(ctx)->r25.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r23.u32 | (ctx_arrow(ctx)->r23.u64 << 32), 0) & 0x200;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 0, xer);
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// beq 0x82198000
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82198000;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r6,476(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x821976d8
	sub_821976D8(ctx, base);
loc_82198000:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,0,23,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r23.u32 | (ctx_arrow(ctx)->r23.u64 << 32), 0) & 0x100;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219801c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219801C;
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30,29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u32 & 0x7;
	// lvx128 v1,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r21
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v1), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82197b70
	sub_82197B70(ctx, base);
loc_8219801C:
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// lwz ctx_arrow(ctx)->r11,10436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r23,0(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r23.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,7
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 7;
	// stw ctx_arrow(ctx)->r10,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
	// rlwinm ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r9,0,0,28
	ctx_arrow(ctx)->r22.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r24,4(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r24.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,7
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 7;
	// rlwinm ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r10,0,0,28
	ctx_arrow(ctx)->r21.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,17,0,14
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,17
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 17;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, ctx_arrow(ctx)->r10.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x8219808c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8219808C;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,17
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 17;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r24.s32, ctx_arrow(ctx)->r11.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x8219808c
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8219808C;
	// lwz ctx_arrow(ctx)->r11,10440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,17,0,14
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,17
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 17;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, ctx_arrow(ctx)->r10.s32, xer);
	// bgt ctx_arrow(ctx)->r6,0x8219808c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8219808C;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,17
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 17;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r21.s32, ctx_arrow(ctx)->r11.s32, xer);
	// ble ctx_arrow(ctx)->r6,0x821980ac
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821980AC;
loc_8219808C:
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r21.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82192c70
	sub_82192C70(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stw ctx_arrow(ctx)->r11,124(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
loc_821980AC:
	// ld ctx_arrow(ctx)->r4,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r4.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821981cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821981CC;
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r4.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821980d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821980D8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r5,10560(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x821a09a8
	sub_821A09A8(ctx, base);
	// std ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_821980D8:
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,52
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82198108
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198108;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10548
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10548;
	// li ctx_arrow(ctx)->r5,8704
	ctx_arrow(ctx)->r5.s64 = 8704;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,52,11
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 52) & 0xFFF0000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// rldicr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,51
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82198108:
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,15,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1F000;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82198140
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198140;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10528
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10528;
	// li ctx_arrow(ctx)->r5,8576
	ctx_arrow(ctx)->r5.s64 = 8576;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,47,4
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 47) & 0xF800000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// lis ctx_arrow(ctx)->r12,-2
	ctx_arrow(ctx)->r12.s64 = -131072;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,4095
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 4095;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82198140:
	// lis ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.s64 = 0;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,42,21
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 42) & 0xFFFFFC0000000000;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82198188
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198188;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10368
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10368;
	// li ctx_arrow(ctx)->r5,8192
	ctx_arrow(ctx)->r5.s64 = 8192;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,6,15
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 6) & 0xFFFF000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// lis ctx_arrow(ctx)->r12,-1
	ctx_arrow(ctx)->r12.s64 = -65536;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,42,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82198188:
	// lis ctx_arrow(ctx)->r12,-32
	ctx_arrow(ctx)->r12.s64 = -2097152;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// clrldi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,22
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 & 0x3FFFFFFFFFF;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821981cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821981CC;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10444
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10444;
	// li ctx_arrow(ctx)->r5,8448
	ctx_arrow(ctx)->r5.s64 = 8448;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,22,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 22) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// lis ctx_arrow(ctx)->r12,-32
	ctx_arrow(ctx)->r12.s64 = -2097152;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,21,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_821981CC:
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219821c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219821C;
	// lis ctx_arrow(ctx)->r12,31
	ctx_arrow(ctx)->r12.s64 = 2031616;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,34,29
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 34) & 0xFFFFFFFC00000000;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219821c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219821C;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10596
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10596;
	// li ctx_arrow(ctx)->r5,8832
	ctx_arrow(ctx)->r5.s64 = 8832;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,9,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 9) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// lis ctx_arrow(ctx)->r12,-32
	ctx_arrow(ctx)->r12.s64 = -2097152;
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,34,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
loc_8219821C:
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82198254
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198254;
	// clrldi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,26
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 & 0x3FFFFFFFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r10.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82198254
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198254;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10680
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10680;
	// li ctx_arrow(ctx)->r5,8960
	ctx_arrow(ctx)->r5.s64 = 8960;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,26,37
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
	// ld ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// rldicr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,25
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 0) & 0xFFFFFFC000000000;
	// std ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
loc_82198254:
	// lbz ctx_arrow(ctx)->r11,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x82198268
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82198268;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x821982f8
	goto loc_821982F8;
loc_82198268:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,26,26
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x20;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821982f0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821982F0;
	// lwz ctx_arrow(ctx)->r11,12432(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12720(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82198288
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198288;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821982f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821982F0;
loc_82198288:
	// lwz ctx_arrow(ctx)->r11,12436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12724(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821982a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821982A0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821982f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821982F0;
loc_821982A0:
	// lwz ctx_arrow(ctx)->r11,12440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12728(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821982b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821982B8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821982f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821982F0;
loc_821982B8:
	// lwz ctx_arrow(ctx)->r11,12444(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12732(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821982d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821982D0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821982f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821982F0;
loc_821982D0:
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12736(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821982e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821982E8;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821982f0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821982F0;
loc_821982E8:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// b 0x821982f4
	goto loc_821982F4;
loc_821982F0:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
loc_821982F4:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
loc_821982F8:
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821983f4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821983F4;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219831c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219831C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219831C:
	// lis ctx_arrow(ctx)->r10,-16384
	ctx_arrow(ctx)->r10.s64 = -1073741824;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10,24832
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r10.u64 | 24832;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r27.u64;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lis ctx_arrow(ctx)->r9,-16384
	ctx_arrow(ctx)->r9.s64 = -1073741824;
	// lwz ctx_arrow(ctx)->r10,12740(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r9,24576
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r9.u64 | 24576;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x821983d8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821983D8;
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,12984
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 12984;
loc_82198354:
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r7,-16383
	ctx_arrow(ctx)->r7.s64 = -1073676288;
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r16.s32);
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r8,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,5,0,26
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 5) & 0xFFFFFFE0;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,11521
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | 11521;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.s64 = 3;
	// lis ctx_arrow(ctx)->r6,4
	ctx_arrow(ctx)->r6.s64 = 262144;
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r8.s32);
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,793
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 793;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r15
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r15.u64;
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r28, 0, BINARY_OP_U8(ctx_arrow(ctx)->r28, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r9.u32 << (PPCRegister_u8(ctx_arrow(ctx)->r28) & 0x3F)), 0));
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// ble ctx_arrow(ctx)->r6,0x821983c0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821983C0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_821983C0:
	// lwz ctx_arrow(ctx)->r10,12740(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,1
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,8
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 8;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,2
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 2;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, ctx_arrow(ctx)->r10.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82198354
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82198354;
loc_821983D8:
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,12700(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,12704(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
loc_821983F4:
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82198410
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82198410;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_82198410:
	// lbz ctx_arrow(ctx)->r10,10942(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lis ctx_arrow(ctx)->r9,-16384
	ctx_arrow(ctx)->r9.s64 = -1073741824;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r9,17920
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r9.u64 | 17920;
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,28,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x82198460
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82198460;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r9,6
	ctx_arrow(ctx)->r9.s64 = 6;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r28.u64;
	// li ctx_arrow(ctx)->r8,6
	ctx_arrow(ctx)->r8.s64 = 6;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r10,6
	ctx_arrow(ctx)->r10.s64 = 6;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lbz ctx_arrow(ctx)->r10,10942(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// andi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,247
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & 247;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stb ctx_arrow(ctx)->r10,10942(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10942));
loc_82198460:
	// lis ctx_arrow(ctx)->r10,-16384
	ctx_arrow(ctx)->r10.s64 = -1073741824;
	// li ctx_arrow(ctx)->r9,256
	ctx_arrow(ctx)->r9.s64 = 256;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,15104
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 15104;
	// lis ctx_arrow(ctx)->r8,-16368
	ctx_arrow(ctx)->r8.s64 = -1072693248;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,11008
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 | 11008;
	// li ctx_arrow(ctx)->r6,15
	ctx_arrow(ctx)->r6.s64 = 15;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// li ctx_arrow(ctx)->r5,60
	ctx_arrow(ctx)->r5.s64 = 60;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,-18656
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + -18656;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lis ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 65536;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,60
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 60;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8576
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 8576;
	// lis ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 65536;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 2;
	// li ctx_arrow(ctx)->r7,8712
	ctx_arrow(ctx)->r7.s64 = 8712;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r6,6
	ctx_arrow(ctx)->r6.s64 = 6;
	// li ctx_arrow(ctx)->r4,8704
	ctx_arrow(ctx)->r4.s64 = 8704;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r25.u32, 0, xer);
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// beq ctx_arrow(ctx)->r6,0x82198530
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198530;
	// lbz ctx_arrow(ctx)->r9,10941(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,10942(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 4;
	// lwz ctx_arrow(ctx)->r8,10560(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0,0,27
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stb ctx_arrow(ctx)->r9,10941(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10941));
	// ld ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 131072;
	// std ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,30,28,28
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 30) & 0x8) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,29,29,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 29) & 0x7;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,31,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r8.u64;
loc_82198530:
	// li ctx_arrow(ctx)->r10,1480
	ctx_arrow(ctx)->r10.s64 = 1480;
	// lis ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 131072;
	// li ctx_arrow(ctx)->r4,256
	ctx_arrow(ctx)->r4.s64 = 256;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// bl 0x821a09a8
	sub_821A09A8(&ctx);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219856c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219856C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219856C:
	// lis ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 131072;
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,8448
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 | 8448;
	// lis ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// li ctx_arrow(ctx)->r5,8851
	ctx_arrow(ctx)->r5.s64 = 8851;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lis ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 131072;
	// li ctx_arrow(ctx)->r29,768
	ctx_arrow(ctx)->r29.s64 = 768;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,8708
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r9.u64 | 8708;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lis ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 65536;
	// li ctx_arrow(ctx)->r26,8978
	ctx_arrow(ctx)->r26.s64 = 8978;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r9.u64;
	// li ctx_arrow(ctx)->r25,8205
	ctx_arrow(ctx)->r25.s64 = 8205;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r18,0
	ctx_arrow(ctx)->r18.s64 = 0;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r20,3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r20.u32, 3, xer);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,41,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r18,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,40,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,39,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,35,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r12.u64;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,44,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,128
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 128;
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,64
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 64;
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 32;
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ld ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 524288;
	// std ctx_arrow(ctx)->r10,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
	// ld ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// bne ctx_arrow(ctx)->r6,0x8219870c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219870C;
	// lwz ctx_arrow(ctx)->r10,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x8219870c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219870C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// beq ctx_arrow(ctx)->r6,0x82198698
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198698;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r10.s64 + 1;
loc_82198698:
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,2593
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 2593;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,0,12,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0xF0000;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x8219870c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219870C;
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x821986c8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821986C8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_821986C8:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,8193
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r30.s64 + 8193;
	// addis ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,2
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 131072;
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,263
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 263;
	// rldicr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,63,63
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,56
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 & 0xFF;
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29,6
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u32 & 0x3FFFFFF;
	// srawi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0xFFFF) != 0);
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s32 >> 16;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0,20,11
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// ldx ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U64(ctx,  ctx);
	// srd ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r7.u64 >> (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x7F)), 0));
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r8.u64;
	// stdx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r31.u32);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
loc_8219870C:
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82198728
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82198728;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_82198728:
	// li ctx_arrow(ctx)->r5,4
	ctx_arrow(ctx)->r5.s64 = 4;
	// li ctx_arrow(ctx)->r4,6
	ctx_arrow(ctx)->r4.s64 = 6;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219ca10
	sub_8219CA10(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne 0x82198748
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82198748;
	// stw ctx_arrow(ctx)->r30,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// b 0x82198a7c
	goto loc_82198A7C;
loc_82198748:
	// lwz ctx_arrow(ctx)->r9,10688(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,12,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// clrlwi. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x82198774
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82198774;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lfs f0,2692(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// b 0x82198778
	goto loc_82198778;
loc_82198774:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_82198778:
	// extsw ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r24.s32;
	// extsw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r23.s32;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r22.s64 - ctx_arrow(ctx)->r23.s64;
	// subf ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r21.s64 - ctx_arrow(ctx)->r24.s64;
	// extsw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s32;
	// std ctx_arrow(ctx)->r8,144(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 144);
	// extsw ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s32;
	// std ctx_arrow(ctx)->r10,160(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 160);
	// lfd f13,160(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r10.s64 = 327680;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// std ctx_arrow(ctx)->r9,176(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 176);
	// lfd f11,176(ctx_arrow(ctx)->r1)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r7,192(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 192);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,192(ctx_arrow(ctx)->r1)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 | 3;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lis ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.s64 = 268435456;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,18432
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 18432;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 26;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = 131072;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// ori ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,20480
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64 | 20480;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r29.u64;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f13,0(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// lfd f12,144(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// fsubs f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 - f0.f64));
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,8(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// stfs f0,12(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// stfs f12,16(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfs f13,20(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r30)
	ea = 4 + ctx_arrow(ctx)->r30.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r30.u32 = ea;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lis ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.s64 = 196608;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,136
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 136;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,12708(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// oris ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,49152
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 3221225472;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,13824
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 13824;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r10.u32, xer);
	// stw ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// ble ctx_arrow(ctx)->r6,0x821988a0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821988A0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
loc_821988A0:
	// stwu ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// li ctx_arrow(ctx)->r11,6
	ctx_arrow(ctx)->r11.s64 = 6;
	// li ctx_arrow(ctx)->r10,8199
	ctx_arrow(ctx)->r10.s64 = 8199;
	// lwz ctx_arrow(ctx)->r9,124(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,10396(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// stw ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// beq ctx_arrow(ctx)->r6,0x821988fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821988FC;
	// lwz ctx_arrow(ctx)->r11,10440(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r10,10436(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,17,0,14
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9,17
	xer.ca = (ctx_arrow(ctx)->r9.s32 < 0) & ((ctx_arrow(ctx)->r9.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r9.s32 >> 17;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,17,0,14
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,17
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s32 >> 17;
	// srawi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r8,17
	xer.ca = (ctx_arrow(ctx)->r8.s32 < 0) & ((ctx_arrow(ctx)->r8.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r8.s32 >> 17;
	// srawi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,17
	xer.ca = (ctx_arrow(ctx)->r10.s32 < 0) & ((ctx_arrow(ctx)->r10.u32 & 0x1FFFF) != 0);
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s32 >> 17;
	// bl 0x82192c70
	sub_82192C70(ctx, base);
loc_821988FC:
	// lwz ctx_arrow(ctx)->r11,10908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,152(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r9.s32);
	// lwz ctx_arrow(ctx)->r9,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r19)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r19.u32 + 8);
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r9.s32);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 524288;
	// mullw ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r30.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r9.s32);
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32768
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2147483648;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 65536;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32768
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 32768;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2048
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 2048;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,256
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 256;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219897c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219897C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219897C:
	// li ctx_arrow(ctx)->r10,2609
	ctx_arrow(ctx)->r10.s64 = 2609;
	// lwz ctx_arrow(ctx)->r7,156(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// lis ctx_arrow(ctx)->r9,768
	ctx_arrow(ctx)->r9.s64 = 50331648;
	// lis ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 65536;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,256
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 256;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,2607
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 | 2607;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,8191
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 8191;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,0,0,19
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFF000;
	// lis ctx_arrow(ctx)->r6,-16380
	ctx_arrow(ctx)->r6.s64 = -1073479680;
	// li ctx_arrow(ctx)->r5,3
	ctx_arrow(ctx)->r5.s64 = 3;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,15360
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r6.u64 | 15360;
	// li ctx_arrow(ctx)->r4,2609
	ctx_arrow(ctx)->r4.s64 = 2609;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// lis ctx_arrow(ctx)->r30,-32768
	ctx_arrow(ctx)->r30.s64 = -2147483648;
	// li ctx_arrow(ctx)->r28,8
	ctx_arrow(ctx)->r28.s64 = 8;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r27,8984
	ctx_arrow(ctx)->r27.s64 = 8984;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r25,8987
	ctx_arrow(ctx)->r25.s64 = 8987;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r29.u64;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r29,10776(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10776);
	// stw ctx_arrow(ctx)->r29,10788(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10788);
	// stwu ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r24,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,10908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// beq 0x82198a2c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82198A2C;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r19)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r19.u32 + 8);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r19)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r19.u32 + 12);
	// b 0x82198a7c
	goto loc_82198A7C;
loc_82198A2C:
	// lwz ctx_arrow(ctx)->r11,10912(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r19)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// and. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r10.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82198a7c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82198A7C;
	// lwz ctx_arrow(ctx)->r3,13508(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,13512(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// blt ctx_arrow(ctx)->r6,0x82198a54
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82198A54;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219bac8
	sub_8219BAC8(ctx, base);
loc_82198A54:
	// lwz ctx_arrow(ctx)->r11,160(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,-1
	ctx_arrow(ctx)->r10.s64 = -1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19,30,2,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r19.u32, 30) & 0x3FFFFFFF) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFC0000000);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16384
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1073741824;
	// stw ctx_arrow(ctx)->r10,164(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 164);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 + 8;
	// stw ctx_arrow(ctx)->r11,160(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 160);
	// ld ctx_arrow(ctx)->r11,160(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// std ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r10,13508(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 13508);
loc_82198A7C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,384
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 384;
	// lfd f30,-168(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-160(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed150
	return;
}

alias(__imp__sub_82198A90) PPC_WEAK_FUNC(sub_82198A90);
PPC_FUNC_IMPL(__imp__sub_82198A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 0);
	// stw ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 4);
	// lwz ctx_arrow(ctx)->r11,256(ctx_arrow(ctx)->r13)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,10896(ctx_arrow(ctx)->r4)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 12);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 8);
	// stw ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 16);
	// mftb ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = __rdtsc();
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 20);
	// blr 
	return;
}

alias(__imp__sub_82198AC0) PPC_WEAK_FUNC(sub_82198AC0);
PPC_FUNC_IMPL(__imp__sub_82198AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82198b70
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198B70;
	// mftb ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = __rdtsc();
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// lwz ctx_arrow(ctx)->r10,256(ctx_arrow(ctx)->r13)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 3, xer);
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r9.s64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrldi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// bne ctx_arrow(ctx)->r6,0x82198b1c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82198B1C;
	// ld ctx_arrow(ctx)->r8,21584(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U64(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// std ctx_arrow(ctx)->r9,21584(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 21584);
	// b 0x82198b28
	goto loc_82198B28;
loc_82198B1C:
	// ld ctx_arrow(ctx)->r8,21576(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U64(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// std ctx_arrow(ctx)->r9,21576(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 21576);
loc_82198B28:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,13420(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x82198b70
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82198B70;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// lfs f0,21572(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// std ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfd f13,80(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f0,14108(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82198B70:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_82198B80) PPC_WEAK_FUNC(sub_82198B80);
PPC_FUNC_IMPL(__imp__sub_82198B80) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lis ctx_arrow(ctx)->r4,9344
	ctx_arrow(ctx)->r4.s64 = 612368384;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r31.u64;
	// bl 0x8209d000
	sub_8209D000(ctx, base);
	// mr. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82198bb0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82198BB0;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x82198bc4
	goto loc_82198BC4;
loc_82198BB0:
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,-1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + -1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 3;
	// andc ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r11,-4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + -4);
loc_82198BC4:
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

alias(__imp__sub_82198BD8) PPC_WEAK_FUNC(sub_82198BD8);
PPC_FUNC_IMPL(__imp__sub_82198BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82198b80
	sub_82198B80(ctx, base);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// beq 0x82198c0c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82198C0C;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
loc_82198C0C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
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

alias(__imp__sub_82198C28) PPC_WEAK_FUNC(sub_82198C28);
PPC_FUNC_IMPL(__imp__sub_82198C28) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = 4;
	// lwz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
loc_82198C44:
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82198c44
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82198C44;
	// lbz ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82198cf0
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82198CF0;
	// lwz ctx_arrow(ctx)->r9,256(ctx_arrow(ctx)->r13)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,10896(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r30,88(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82198cb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198CB0;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r30,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_82198CB0:
	// bl 0x8235eaa8
	sub_8235EAA8(&ctx);
	// lwz ctx_arrow(ctx)->r11,10888(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82198cd0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82198CD0;
	// lwz ctx_arrow(ctx)->r11,10996(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82198cd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198CD0;
	// stw ctx_arrow(ctx)->r30,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 12);
loc_82198CD0:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r11.s64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,5000
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 5000, xer);
	// bge ctx_arrow(ctx)->r6,0x82198ce8
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82198CE8;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// b 0x82198cf4
	goto loc_82198CF4;
loc_82198CE8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x821a2d50
	sub_821A2D50(ctx, base);
loc_82198CF0:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_82198CF4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_82198D00) PPC_WEAK_FUNC(sub_82198D00);
PPC_FUNC_IMPL(__imp__sub_82198D00) {
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
	// lwz ctx_arrow(ctx)->r11,60(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x82198d38
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82198D38;
	// bl 0x821a37d0
	sub_821A37D0(ctx, base);
	// lis ctx_arrow(ctx)->r4,9344
	ctx_arrow(ctx)->r4.s64 = 612368384;
	// lwz ctx_arrow(ctx)->r3,-4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// b 0x82198d40
	goto loc_82198D40;
loc_82198D38:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -1;
	// stw ctx_arrow(ctx)->r3,60(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 60);
loc_82198D40:
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

alias(__imp__sub_82198D58) PPC_WEAK_FUNC(sub_82198D58);
PPC_FUNC_IMPL(__imp__sub_82198D58) {
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
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31,12432
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r31.s64 + 12432;
loc_82198D70:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,14816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82198d90
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198D90;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82195c00
	sub_82195C00(ctx, base);
loc_82198D90:
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 4, xer);
	// blt ctx_arrow(ctx)->r6,0x82198d70
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82198D70;
	// lwz ctx_arrow(ctx)->r11,12448(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,14808(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x82198dbc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82198DBC;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82195f68
	sub_82195F68(ctx, base);
loc_82198DBC:
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8218e0f0
	sub_8218E0F0(ctx, base);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8218de38
	sub_8218DE38(ctx, base);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8218e2c0
	sub_8218E2C0(ctx, base);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821954f8
	sub_821954F8(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
	// rldicr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,63,63
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_82198DF8:
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,95
	xer.ca = ctx_arrow(ctx)->r30.u32 <= 95;
	ctx_arrow(ctx)->r11.s64 = 95 - ctx_arrow(ctx)->r30.s64;
	// li ctx_arrow(ctx)->r7,4
	ctx_arrow(ctx)->r7.s64 = 4;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,21846
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 21846;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16,16,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xFFFF;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 32;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// srd ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r29.u64 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x7F)), 0));
	// bl 0x821953d8
	sub_821953D8(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,16
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 16, xer);
	// blt ctx_arrow(ctx)->r6,0x82198df8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82198DF8;
	// li ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r30.s64 = 0;
loc_82198E38:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 32;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFF;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// srd ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r11, 0, BINARY_OP_U8(ctx_arrow(ctx)->r11, 0, &, 0x40 ? 0 : (ctx_arrow(ctx)->r29.u64 >> (PPCRegister_u8(ctx_arrow(ctx)->r11) & 0x7F)), 0));
	// bl 0x8218be00
	sub_8218BE00(ctx, base);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,1
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 26, xer);
	// blt ctx_arrow(ctx)->r6,0x82198e38
	if (ctx_arrow(ctx)->r6.lt()) goto loc_82198E38;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_82198E68) PPC_WEAK_FUNC(sub_82198E68);
PPC_FUNC_IMPL(__imp__sub_82198E68) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,128
	ctx_arrow(ctx)->r4.s64 = 128;
	// li ctx_arrow(ctx)->r3,22400
	ctx_arrow(ctx)->r3.s64 = 22400;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r7.u64;
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 0);
	// bl 0x82198bd8
	sub_82198BD8(&ctx);
	// mr. ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r31.s32, 0, xer);
	// bne 0x82198eac
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82198EAC;
loc_82198EA0:
	// lis ctx_arrow(ctx)->r3,-32761
	ctx_arrow(ctx)->r3.s64 = -2147024896;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,14
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r3.u64 | 14;
	// b 0x82198f34
	goto loc_82198F34;
loc_82198EAC:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a3500
	sub_821A3500(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne 0x82198ecc
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82198ECC;
	// lis ctx_arrow(ctx)->r4,9344
	ctx_arrow(ctx)->r4.s64 = 612368384;
	// lwz ctx_arrow(ctx)->r3,-4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8209d060
	sub_8209D060(ctx, base);
	// b 0x82198ea0
	goto loc_82198EA0;
loc_82198ECC:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x82198f04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82198F04;
	// lbz ctx_arrow(ctx)->r11,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 128;
	// stb ctx_arrow(ctx)->r11,10940(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 10940, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bl 0x8219c7e0
	sub_8219C7E0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a3780
	sub_821A3780(ctx, base);
loc_82198EF0:
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne 0x82198f2c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82198F2C;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82198d00
	sub_82198D00(ctx, base);
	// b 0x82198ea0
	goto loc_82198EA0;
loc_82198F04:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,23,23
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x100;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82198f18
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82198F18;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,2,7
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x3F000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x82198f18
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82198F18;
	// oris ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,3072
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 201326592;
loc_82198F18:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r30,22280(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 22280);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a3570
	sub_821A3570(ctx, base);
	// b 0x82198ef0
	goto loc_82198EF0;
loc_82198F2C:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r27.u32 + 0);
loc_82198F34:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_82198F40) PPC_WEAK_FUNC(sub_82198F40);
PPC_FUNC_IMPL(__imp__sub_82198F40) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// blr 
	return;
}

alias(__imp__sub_82198F48) PPC_WEAK_FUNC(sub_82198F48);
PPC_FUNC_IMPL(__imp__sub_82198F48) {
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
	// stwu ctx_arrow(ctx)->r1,-1648(ctx_arrow(ctx)->r1)
	ea = -1648 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r5.u64;
	// lis ctx_arrow(ctx)->r11,10280
	ctx_arrow(ctx)->r11.s64 = 673710080;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,310
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64 | 310;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r4.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82198f94
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82198F94;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r30.s32, xer);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bne ctx_arrow(ctx)->r6,0x82198f8c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82198F8C;
	// bl 0x8219e4d8
	sub_8219E4D8(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// b 0x82198f9c
	goto loc_82198F9C;
loc_82198F8C:
	// bl 0x8219e480
	sub_8219E480(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
loc_82198F94:
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r30.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x82198fa8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82198FA8;
loc_82198F9C:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8219e390
	sub_8219E390(ctx, base);
	// b 0x82198fb0
	goto loc_82198FB0;
loc_82198FA8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8219e2b0
	sub_8219E2B0(ctx, base);
loc_82198FB0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,1648
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 1648;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_82198FB8) PPC_WEAK_FUNC(sub_82198FB8);
PPC_FUNC_IMPL(__imp__sub_82198FB8) {
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,16696
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 16696;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8dc
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16532(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,16532(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16532);
	// mftb ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = __rdtsc();
	// lwz ctx_arrow(ctx)->r9,16688(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,16684(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,16536(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16536);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// beq ctx_arrow(ctx)->r6,0x82199074
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199074;
loc_82199000:
	// lwz ctx_arrow(ctx)->r11,16684(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,16532(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,3,25,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 3) & 0x78;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r8,16560(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,16556(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82199074
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82199074;
	// lwz ctx_arrow(ctx)->r10,16552(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// stw ctx_arrow(ctx)->r10,16552(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16552);
	// bne ctx_arrow(ctx)->r6,0x82199040
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82199040;
	// lwz ctx_arrow(ctx)->r11,10900(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// b 0x82199050
	goto loc_82199050;
loc_82199040:
	// lis ctx_arrow(ctx)->r10,32712
	ctx_arrow(ctx)->r10.s64 = 2143813632;
	// stw ctx_arrow(ctx)->r11,24848(ctx_arrow(ctx)->r10)
	PPC_MM_STORE_U32(ctx_arrow(ctx)->r10.u32 + 24848, ctx_arrow(ctx)->r11.u32);
	// eieio 
	// sync 
loc_82199050:
	// mftb ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = __rdtsc();
	// lwz ctx_arrow(ctx)->r11,16684(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,21676(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 21676);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,16684(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16684);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// lwz ctx_arrow(ctx)->r10,16688(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82199000
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82199000;
loc_82199074:
	// lwz ctx_arrow(ctx)->r11,16528(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq 0x821990a0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821990A0;
	// lwz ctx_arrow(ctx)->r10,16552(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r9,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// stw ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// lwz ctx_arrow(ctx)->r10,16532(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821990A0:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8240f8cc
	__imp__KfReleaseSpinLock(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_821990B8) PPC_WEAK_FUNC(sub_821990B8);
PPC_FUNC_IMPL(__imp__sub_821990B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r11,1768(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r31,16696
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r31.s64 + 16696;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8240f8dc
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz ctx_arrow(ctx)->r10,16548(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,21536(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,24,28,31
	ctx_arrow(ctx)->r28.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 24) & 0xF;
	// clrlwi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r30,24
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r30.u32 & 0xFF;
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r30,0,0,19
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stw ctx_arrow(ctx)->r10,16548(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16548);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64;
	// bne 0x82199110
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82199110;
	// li ctx_arrow(ctx)->r29,60
	ctx_arrow(ctx)->r29.s64 = 60;
loc_82199110:
	// mftb ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = __rdtsc();
	// lwz ctx_arrow(ctx)->r10,16536(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rotlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// bl 0x8240f8ec
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rotlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r3.u32, 0);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,100
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 * 100;
	// divwu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r10.u32 = ctx_arrow(ctx)->r10.u32 / ctx_arrow(ctx)->r29.u32;
	// twllei ctx_arrow(ctx)->r29,0
	// divwu ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u32 = ctx_arrow(ctx)->r11.u32 / ctx_arrow(ctx)->r10.u32;
	// twllei ctx_arrow(ctx)->r10,0
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,100
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, 100, xer);
	// ble ctx_arrow(ctx)->r6,0x8219914c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219914C;
	// li ctx_arrow(ctx)->r8,100
	ctx_arrow(ctx)->r8.s64 = 100;
loc_8219914C:
	// lwz ctx_arrow(ctx)->r7,16540(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,16532(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r28.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// bgt ctx_arrow(ctx)->r6,0x82199178
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82199178;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199178
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199178;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r8.u32, ctx_arrow(ctx)->r26.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82199178
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82199178;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
loc_82199178:
	// lwz ctx_arrow(ctx)->r9,16524(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq 0x821991bc
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821991BC;
	// cntlzw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r27.u32);
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// lwz ctx_arrow(ctx)->r5,16548(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,27,31,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 27) & 0x1;
	// stw ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// stw ctx_arrow(ctx)->r7,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// xori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 ^ 1;
	// stw ctx_arrow(ctx)->r8,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// mtctr ctx_arrow(ctx)->r9
	ctr.u64 = ctx_arrow(ctx)->r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
loc_821991BC:
	// lwz ctx_arrow(ctx)->r10,16532(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,16540(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16540);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x821991fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821991FC;
	// lwz ctx_arrow(ctx)->r10,16548(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x821991fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821991FC;
	// lwz ctx_arrow(ctx)->r10,16688(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3,25,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 3) & 0x78;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r11,16560(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16560);
	// stw ctx_arrow(ctx)->r27,16556(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 16556);
	// lwz ctx_arrow(ctx)->r11,16688(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,16688(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16688);
	// b 0x82199238
	goto loc_82199238;
loc_821991FC:
	// lwz ctx_arrow(ctx)->r11,16552(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,16552(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16552);
	// beq ctx_arrow(ctx)->r6,0x82199224
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199224;
	// lis ctx_arrow(ctx)->r11,32712
	ctx_arrow(ctx)->r11.s64 = 2143813632;
	// stw ctx_arrow(ctx)->r27,24848(ctx_arrow(ctx)->r11)
	PPC_MM_STORE_U32(ctx_arrow(ctx)->r11.u32 + 24848, ctx_arrow(ctx)->r27.u32);
	// eieio 
	// sync 
	// b 0x82199230
	goto loc_82199230;
loc_82199224:
	// lwz ctx_arrow(ctx)->r11,10900(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
loc_82199230:
	// mftb ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = __rdtsc();
	// stw ctx_arrow(ctx)->r11,21676(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 21676);
loc_82199238:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r24.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8240f8cc
	__imp__KfReleaseSpinLock(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed178
	return;
}

alias(__imp__sub_82199250) PPC_WEAK_FUNC(sub_82199250);
PPC_FUNC_IMPL(__imp__sub_82199250) {
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
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x821a6ed0
	sub_821A6ED0(ctx, base);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a5278
	sub_821A5278(ctx, base);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82199294
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82199294;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_82199294:
	// lis ctx_arrow(ctx)->r10,-16380
	ctx_arrow(ctx)->r10.s64 = -1073479680;
	// li ctx_arrow(ctx)->r29,-1
	ctx_arrow(ctx)->r29.s64 = -1;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,15360
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r10.u64 | 15360;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82199304
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82199304;
	// li ctx_arrow(ctx)->r10,1401
	ctx_arrow(ctx)->r10.s64 = 1401;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r8,19
	ctx_arrow(ctx)->r8.s64 = 19;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r4,256
	ctx_arrow(ctx)->r4.s64 = 256;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,10900(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 2;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
loc_82199304:
	// lwz ctx_arrow(ctx)->r10,13580(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq 0x8219934c
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219934C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 1, xer);
	// beq ctx_arrow(ctx)->r6,0x8219934c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219934C;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x82199344
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199344;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 4, xer);
	// beq ctx_arrow(ctx)->r6,0x8219933c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219933C;
	// lis ctx_arrow(ctx)->r9,-32768
	ctx_arrow(ctx)->r9.s64 = -2147483648;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r9.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82199354
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82199354;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// b 0x82199358
	goto loc_82199358;
loc_8219933C:
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// b 0x82199358
	goto loc_82199358;
loc_82199344:
	// li ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.s64 = 2;
	// b 0x82199358
	goto loc_82199358;
loc_8219934C:
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// b 0x82199358
	goto loc_82199358;
loc_82199354:
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
loc_82199358:
	// lwz ctx_arrow(ctx)->r9,11844(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,8,0,23
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis ctx_arrow(ctx)->r10,-32230
	ctx_arrow(ctx)->r10.s64 = -2112225280;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,9,25,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 9) & 0x7F;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,-28488
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 + -28488;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d128
	sub_8219D128(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821993d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821993D4;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r10,19
	ctx_arrow(ctx)->r10.s64 = 19;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,256
	ctx_arrow(ctx)->r6.s64 = 256;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,10900(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 2;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
loc_821993D4:
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a6ed0
	sub_821A6ED0(ctx, base);
	// lbz ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 16;
	// stb ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 10941, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_821993F8) PPC_WEAK_FUNC(sub_821993F8);
PPC_FUNC_IMPL(__imp__sub_821993F8) {
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
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219942c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219942C;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219942C:
	// lis ctx_arrow(ctx)->r10,-16382
	ctx_arrow(ctx)->r10.s64 = -1073610752;
	// li ctx_arrow(ctx)->r8,6209
	ctx_arrow(ctx)->r8.s64 = 6209;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,8448
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 | 8448;
	// lis ctx_arrow(ctx)->r10,10280
	ctx_arrow(ctx)->r10.s64 = 673710080;
	// li ctx_arrow(ctx)->r7,-1793
	ctx_arrow(ctx)->r7.s64 = -1793;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,310
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 310;
	// li ctx_arrow(ctx)->r6,6448
	ctx_arrow(ctx)->r6.s64 = 6448;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r31.s64;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r10.s32, xer);
	// cntlzw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r9.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,3,23,23
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0x100;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.s64 = 3;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// beq ctx_arrow(ctx)->r6,0x82199478
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199478;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
loc_82199478:
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 48);
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

alias(__imp__sub_82199498) PPC_WEAK_FUNC(sub_82199498);
PPC_FUNC_IMPL(__imp__sub_82199498) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64;
	// lwz ctx_arrow(ctx)->r11,22280(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821994c4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821994C4;
	// bl 0x82199250
	sub_82199250(ctx, base);
	// b 0x82199510
	goto loc_82199510;
loc_821994C4:
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x821994e0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821994E0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_821994E0:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,12,20,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 12) & 0xFFF;
	// li ctx_arrow(ctx)->r8,6212
	ctx_arrow(ctx)->r8.s64 = 6212;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 512;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u32 & 0x1FFFFFFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// bl 0x821993f8
	sub_821993F8(&ctx);
loc_82199510:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_82199518) PPC_WEAK_FUNC(sub_82199518);
PPC_FUNC_IMPL(__imp__sub_82199518) {
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
	// stwu ctx_arrow(ctx)->r1,-256(ctx_arrow(ctx)->r1)
	ea = -256 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r7.u64;
	// lwz ctx_arrow(ctx)->r11,22280(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r9.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r10.u64;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82199558
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82199558;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x82199250
	sub_82199250(ctx, base);
loc_82199558:
	// lis ctx_arrow(ctx)->r11,-16380
	ctx_arrow(ctx)->r11.s64 = -1073479680;
	// rlwinm. ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r24,0,29,29
	ctx_arrow(ctx)->r26.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r26.s32, 0, xer);
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,15360
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 | 15360;
	// beq 0x82199630
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82199630;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82199584
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82199584;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_82199584:
	// li ctx_arrow(ctx)->r10,6515
	ctx_arrow(ctx)->r10.s64 = 6515;
	// lis ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 65536;
	// li ctx_arrow(ctx)->r8,6500
	ctx_arrow(ctx)->r8.s64 = 6500;
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r5,6200
	ctx_arrow(ctx)->r5.s64 = 6200;
	// li ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r21.s64 = 0;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r31.u64;
	// stw ctx_arrow(ctx)->r6,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// li ctx_arrow(ctx)->r20,3
	ctx_arrow(ctx)->r20.s64 = 3;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r18,6515
	ctx_arrow(ctx)->r18.s64 = 6515;
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// li ctx_arrow(ctx)->r17,0
	ctx_arrow(ctx)->r17.s64 = 0;
	// stw ctx_arrow(ctx)->r4,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// li ctx_arrow(ctx)->r16,1
	ctx_arrow(ctx)->r16.s64 = 1;
	// li ctx_arrow(ctx)->r15,256
	ctx_arrow(ctx)->r15.s64 = 256;
	// li ctx_arrow(ctx)->r14,6226
	ctx_arrow(ctx)->r14.s64 = 6226;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r21,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r19,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r20,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r18,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r17,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r16,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r15,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r14,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 48);
	// bl 0x821a8e08
	sub_821A8E08(&ctx);
loc_82199630:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x821993f8
	sub_821993F8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82199658
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82199658;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_82199658:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25,12,20,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 12) & 0xFFF;
	// li ctx_arrow(ctx)->r8,6212
	ctx_arrow(ctx)->r8.s64 = 6212;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 512;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r25,3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r25.u32 & 0x1FFFFFFF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// beq ctx_arrow(ctx)->r6,0x821996cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821996CC;
	// li ctx_arrow(ctx)->r10,6200
	ctx_arrow(ctx)->r10.s64 = 6200;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// li ctx_arrow(ctx)->r8,3
	ctx_arrow(ctx)->r8.s64 = 3;
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r6,1
	ctx_arrow(ctx)->r6.s64 = 1;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r10,6515
	ctx_arrow(ctx)->r10.s64 = 6515;
	// li ctx_arrow(ctx)->r5,256
	ctx_arrow(ctx)->r5.s64 = 256;
	// li ctx_arrow(ctx)->r4,6226
	ctx_arrow(ctx)->r4.s64 = 6226;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
loc_821996CC:
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24,0,30,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 0) & 0x2;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r30.u32 + 48);
	// beq 0x821996e8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821996E8;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r23.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// bl 0x82198f48
	sub_82198F48(ctx, base);
loc_821996E8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,256
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 256;
	// b 0x823ed150
	return;
}

alias(__imp__sub_821996F0) PPC_WEAK_FUNC(sub_821996F0);
PPC_FUNC_IMPL(__imp__sub_821996F0) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// b 0x82199250
	sub_82199250(ctx, base);
	return;
}

alias(__imp__sub_821996F8) PPC_WEAK_FUNC(sub_821996F8);
PPC_FUNC_IMPL(__imp__sub_821996F8) {
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
	// stwu ctx_arrow(ctx)->r1,-432(ctx_arrow(ctx)->r1)
	ea = -432 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r5.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28,28
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r28.s64 + 28;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r11,16544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r5.s64 = 24;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// stw ctx_arrow(ctx)->r11,16544(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16544);
	// bl 0x823ee010
	sub_823EE010(&ctx);
	// lwz ctx_arrow(ctx)->r29,132(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,13592(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r29.u32 & 0x3F;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,50
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 50, xer);
	// bne ctx_arrow(ctx)->r6,0x82199748
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82199748;
	// li ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r11.s64 = 3;
	// b 0x82199754
	goto loc_82199754;
loc_82199748:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 7, xer);
	// bne ctx_arrow(ctx)->r6,0x8219975c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219975C;
	// li ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r11.s64 = 27;
loc_82199754:
	// rlwimi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,1,26,31
	ctx_arrow(ctx)->r29.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 1) & 0x3F) | (ctx_arrow(ctx)->r29.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw ctx_arrow(ctx)->r29,132(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 132);
loc_8219975C:
	// lwz ctx_arrow(ctx)->r11,140(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10,15,17,31
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 15) & 0x7FFF;
	// lwz ctx_arrow(ctx)->r9,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,14828
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 14828;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,19,30
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r30.u32, 0) & 0x1FFE) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFE001);
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,25,22,29
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 25) & 0x3FC) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,0,0,30
	ctx_arrow(ctx)->r30.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0) & 0xFFFFFFFE) | (ctx_arrow(ctx)->r30.u64 & 0xFFFFFFFF00000001);
	// li ctx_arrow(ctx)->r5,52
	ctx_arrow(ctx)->r5.s64 = 52;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r9,128(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 128);
	// stw ctx_arrow(ctx)->r30,140(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 140);
	// bl 0x823ee010
	sub_823EE010(&ctx);
	// lwz ctx_arrow(ctx)->r9,13596(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0,0,19
	ctx_arrow(ctx)->r6.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0xFFFFF000;
	// lwz ctx_arrow(ctx)->r10,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,2,30,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 2) & 0x2;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r7,21608(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,19
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u32 & 0x1FFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,19,19,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 19) & 0x1FFF;
	// stw ctx_arrow(ctx)->r9,108(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 108);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 + ctx_arrow(ctx)->r11.u64;
	// stw ctx_arrow(ctx)->r6,112(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,26
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u32 & 0x3F;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// li ctx_arrow(ctx)->r24,0
	ctx_arrow(ctx)->r24.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 0, xer);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r24.u64;
	// stw ctx_arrow(ctx)->r9,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 96);
	// stw ctx_arrow(ctx)->r6,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// stw ctx_arrow(ctx)->r11,104(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 104);
	// beq ctx_arrow(ctx)->r6,0x82199848
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199848;
	// lwz ctx_arrow(ctx)->r11,21604(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,21600(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,6
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 6, xer);
	// bge ctx_arrow(ctx)->r6,0x82199848
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82199848;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7;
	// lwz ctx_arrow(ctx)->r10,10896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r11,21604(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,10896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r10.u32);
	// lwz ctx_arrow(ctx)->r11,21604(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,10896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x821a6e00
	sub_821A6E00(ctx, base);
	// li ctx_arrow(ctx)->r29,1
	ctx_arrow(ctx)->r29.s64 = 1;
loc_82199848:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r26.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199888
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199888;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,13624
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 13624;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 28;
loc_8219985C:
	// lbz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// subf. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r8.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// bne 0x8219987c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219987C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x8219985c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219985C;
loc_8219987C:
	// cmpwi ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// li ctx_arrow(ctx)->r27,1
	ctx_arrow(ctx)->r27.s64 = 1;
	// bne 0x8219988c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219988C;
loc_82199888:
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r24.u64;
loc_8219988C:
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// lwz ctx_arrow(ctx)->r11,-31428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821998b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821998B8;
	// lwz ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x821998b4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_821998B4;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
loc_821998B4:
	// stw ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
loc_821998B8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821998cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821998CC;
	// lwz ctx_arrow(ctx)->r11,22256(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16384
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1073741824;
	// stw ctx_arrow(ctx)->r11,22256(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 22256);
loc_821998CC:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821ab600
	sub_821AB600(ctx, base);
	// lwz ctx_arrow(ctx)->r11,21516(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821998f8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821998F8;
	// li ctx_arrow(ctx)->r5,148
	ctx_arrow(ctx)->r5.s64 = 148;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// b 0x82199950
	goto loc_82199950;
loc_821998F8:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// bl 0x8240f92c
	__imp__VdGetSystemCommandBuffer(ctx, base);
	// li ctx_arrow(ctx)->r4,64
	ctx_arrow(ctx)->r4.s64 = 64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d8f0
	sub_8219D8F0(ctx, base);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r11,10896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r7,116(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,108
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 108;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,100
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 100;
	// stw ctx_arrow(ctx)->r6,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 84);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 8;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// bl 0x8240f91c
	__imp__VdSwap(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,256
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 256;
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
loc_82199950:
	// lwz ctx_arrow(ctx)->r11,212(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,21648(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 21648);
	// beq ctx_arrow(ctx)->r6,0x82199990
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199990;
	// lwz ctx_arrow(ctx)->r11,21604(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r10,10896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x7;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 16;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x821a6e00
	sub_821A6E00(ctx, base);
	// lwz ctx_arrow(ctx)->r11,21604(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 2;
	// stw ctx_arrow(ctx)->r11,21604(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 21604);
loc_82199990:
	// lwz ctx_arrow(ctx)->r11,216(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821999a0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821999A0;
	// stw ctx_arrow(ctx)->r11,22276(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 22276);
loc_821999A0:
	// lwz ctx_arrow(ctx)->r29,16692(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r24,16692(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16692);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x821999c0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_821999C0;
	// li ctx_arrow(ctx)->r5,1
	ctx_arrow(ctx)->r5.s64 = 1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,13528
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 13528;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a33e0
	sub_821A33E0(ctx, base);
loc_821999C0:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821999e4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821999E4;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,13624
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 13624;
	// li ctx_arrow(ctx)->r5,28
	ctx_arrow(ctx)->r5.s64 = 28;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a9058
	sub_821A9058(ctx, base);
loc_821999E4:
	// lwz ctx_arrow(ctx)->r11,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,12,20,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + 512;
	// lwz ctx_arrow(ctx)->r9,216(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// add ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// beq ctx_arrow(ctx)->r6,0x82199ad0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199AD0;
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r25.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x82199ad0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82199AD0;
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,13652
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 13652;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r24.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 7, xer);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// lis ctx_arrow(ctx)->r28,10280
	ctx_arrow(ctx)->r28.s64 = 673710080;
	// bne ctx_arrow(ctx)->r6,0x82199a38
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82199A38;
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,310
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 310;
	// b 0x82199a3c
	goto loc_82199A3C;
loc_82199A38:
	// ori ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,262
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r28.u64 | 262;
loc_82199A3C:
	// lwz ctx_arrow(ctx)->r11,236(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199a98
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199A98;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,56
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + 56;
loc_82199A54:
	// lbz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r7,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U8(ctx,  ctx);
	// subf. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r7.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// bne 0x82199a74
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82199A74;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r8.s32, xer);
	// bne ctx_arrow(ctx)->r6,0x82199a54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82199A54;
loc_82199A74:
	// cmpwi ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x82199a98
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82199A98;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// li ctx_arrow(ctx)->r5,56
	ctx_arrow(ctx)->r5.s64 = 56;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lbz ctx_arrow(ctx)->r11,10942(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 16;
	// stb ctx_arrow(ctx)->r11,10942(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 10942, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// b 0x82199ab4
	goto loc_82199AB4;
loc_82199A98:
	// lbz ctx_arrow(ctx)->r11,10942(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82199ab8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82199AB8;
	// lwz ctx_arrow(ctx)->r11,352(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82199ab8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82199AB8;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,13708
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 13708;
loc_82199AB4:
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 4;
loc_82199AB8:
	// lbz ctx_arrow(ctx)->r11,10943(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,25,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// bne 0x82199ac8
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_82199AC8;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 3;
loc_82199AC8:
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,64
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 64;
	// b 0x82199b1c
	goto loc_82199B1C;
loc_82199AD0:
	// lbz ctx_arrow(ctx)->r11,10942(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,13708
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r31.s64 + 13708;
	// lwz ctx_arrow(ctx)->r28,13592(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31,14988
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r31.s64 + 14988;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,27,27
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82199b08
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82199B08;
	// li ctx_arrow(ctx)->r5,56
	ctx_arrow(ctx)->r5.s64 = 56;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,13652
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 13652;
	// bl 0x823edf70
	sub_823EDF70(ctx, base);
	// lbz ctx_arrow(ctx)->r11,10942(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,4
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 4;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,239
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 239;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stb ctx_arrow(ctx)->r11,10942(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 10942, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
loc_82199B08:
	// lbz ctx_arrow(ctx)->r11,10943(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,25,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// beq 0x82199b18
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82199B18;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r29.u64 | 3;
loc_82199B18:
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,191
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 191;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
loc_82199B1C:
	// stb ctx_arrow(ctx)->r11,10943(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 10943, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// beq ctx_arrow(ctx)->r6,0x82199b50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199B50;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r27.u64;
	// lwz ctx_arrow(ctx)->r8,104(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r7,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x82199518
	sub_82199518(ctx, base);
	// b 0x82199b5c
	goto loc_82199B5C;
loc_82199B50:
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// bl 0x82199498
	sub_82199498(ctx, base);
loc_82199B5C:
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,0,28,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0x8;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82199bd4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82199BD4;
	// lwz ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x82199b80
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82199B80;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
loc_82199B80:
	// lis ctx_arrow(ctx)->r10,-16382
	ctx_arrow(ctx)->r10.s64 = -1073610752;
	// li ctx_arrow(ctx)->r8,7758
	ctx_arrow(ctx)->r8.s64 = 7758;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,8448
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u64 | 8448;
	// li ctx_arrow(ctx)->r7,-2
	ctx_arrow(ctx)->r7.s64 = -2;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r24.u64;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,184
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 184;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,184
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 184;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// std ctx_arrow(ctx)->r24,0(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// stw ctx_arrow(ctx)->r24,8(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 8);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// bl 0x8240f90c
	__imp__VdPersistDisplay(ctx);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x82199bd4
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82199BD4;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// lwz ctx_arrow(ctx)->r4,160(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8240f8fc
	__imp__MmFreePhysicalMemory(ctx, base);
loc_82199BD4:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r30,10908(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a9088
	sub_821A9088(ctx, base);
	// lwz ctx_arrow(ctx)->r11,14896(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,30,2,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x8219d3d8
	sub_8219D3D8(ctx, base);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// li ctx_arrow(ctx)->r5,3
	ctx_arrow(ctx)->r5.s64 = 3;
	// lwz ctx_arrow(ctx)->r4,14924(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d060
	sub_8219D060(ctx, base);
	// lwz ctx_arrow(ctx)->r11,22280(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x82199c60
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82199C60;
	// li ctx_arrow(ctx)->r5,3
	ctx_arrow(ctx)->r5.s64 = 3;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r31.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x82198a90
	sub_82198A90(ctx, base);
loc_82199C30:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x82198c28
	sub_82198C28(ctx, base);
	// cmpwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq 0x82199c54
	if (ctx_arrow(ctx)->r0.eq()) goto loc_82199C54;
	// lwz ctx_arrow(ctx)->r11,16552(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,16544(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,15
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 15, xer);
	// bge ctx_arrow(ctx)->r6,0x82199c30
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82199C30;
loc_82199C54:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// bl 0x82198ac0
	sub_82198AC0(ctx, base);
	// b 0x82199c64
	goto loc_82199C64;
loc_82199C60:
	// stw ctx_arrow(ctx)->r30,14924(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 14924);
loc_82199C64:
	// lbz ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,239
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 239;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stb ctx_arrow(ctx)->r11,10941(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 10941, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// bl 0x821a6fb0
	sub_821A6FB0(ctx, base);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82195758
	sub_82195758(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,432
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 432;
	// b 0x823ed178
	return;
}

alias(__imp__sub_82199C90) PPC_WEAK_FUNC(sub_82199C90);
PPC_FUNC_IMPL(__imp__sub_82199C90) {
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
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,12640
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 12640;
	// li ctx_arrow(ctx)->r5,28
	ctx_arrow(ctx)->r5.s64 = 28;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,12668
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 12668;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lwz ctx_arrow(ctx)->r5,14816(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 0);
	// stw ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 4);
	// stw ctx_arrow(ctx)->r7,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 8);
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r11.u32 + 12);
	// bl 0x82195c00
	sub_82195C00(&ctx);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82199250
	sub_82199250(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r6,14812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,116
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 116;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,120
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 120;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r1,124
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r1.s64 + 124;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stfs f0,112(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 112);
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// stfs f0,116(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 116);
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lvlx v0,0,ctx_arrow(ctx)->r10
	temp.u32 = ctx_arrow(ctx)->r10.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lvlx v13,0,ctx_arrow(ctx)->r9
	temp.u32 = ctx_arrow(ctx)->r9.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lfs f1,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx,  ctx);
	ctx.f1.f64 = double(temp.f32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stfs f1,120(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 120);
	// stfs f1,124(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 124);
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// lvlx v12,0,ctx_arrow(ctx)->r8
	temp.u32 = ctx_arrow(ctx)->r8.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// lvlx v0,0,ctx_arrow(ctx)->r7
	temp.u32 = ctx_arrow(ctx)->r7.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// vrlimi128 v0,v12,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 100);
	// stw ctx_arrow(ctx)->r11,92(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 92);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82197c48
	sub_82197C48(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82195b48
	sub_82195B48(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x82195288
	sub_82195288(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31,13624
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r31.s64 + 13624;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r4,14812(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx,  ctx);
	// bl 0x821996f8
	sub_821996F8(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx,  ctx);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_82199DC0) PPC_WEAK_FUNC(sub_82199DC0);
PPC_FUNC_IMPL(__imp__sub_82199DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x823ed120
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6,30,2,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r6.u32 | (ctx_arrow(ctx)->r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.s64 = int64_t(ctx_arrow(ctx)->r24.s32) * int64_t(ctx_arrow(ctx)->r6.s32);
	// lbz ctx_arrow(ctx)->r10,11824(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r25,12520(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r25.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// rlwinm ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r9,30,2,31
	ctx_arrow(ctx)->r22.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 30) & 0x3FFFFFFF;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r11.u64;
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r4.u64;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r10.u32, xer);
	// stb ctx_arrow(ctx)->r11,12520(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 12520, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r11), 0);
	// beq ctx_arrow(ctx)->r6,0x82199e18
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199E18;
	// lwz ctx_arrow(ctx)->r11,12688(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199e18
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199E18;
	// ld ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// oris ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 524288;
	// std ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82199E18:
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// rldicr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,62
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u64, 0) & 0xFFFFFFFFFFFFFFFE;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// ld ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r27,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r4.u64, 0, xer);
	// ld ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U64(ctx,  ctx);
	// beq ctx_arrow(ctx)->r6,0x82199e58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199E58;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,1920
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 1920;
	// li ctx_arrow(ctx)->r5,16384
	ctx_arrow(ctx)->r5.s64 = 16384;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a10e0
	sub_821A10E0(ctx, base);
	// std ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_82199E58:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r29.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199e78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199E78;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,6016
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 6016;
	// li ctx_arrow(ctx)->r5,17408
	ctx_arrow(ctx)->r5.s64 = 17408;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a10e0
	sub_821A10E0(ctx, base);
	// std ctx_arrow(ctx)->r26,8(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_82199E78:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r30.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199f58
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199F58;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,11,14
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199e9c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199E9C;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a1e78
	sub_821A1E78(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_82199E9C:
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r30.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199ec0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199EC0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r5,10560(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a09a8
	sub_821A09A8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_82199EC0:
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,52
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & 0xFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199ee0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199EE0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10548
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10548;
	// li ctx_arrow(ctx)->r5,8704
	ctx_arrow(ctx)->r5.s64 = 8704;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,52,11
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 52) & 0xFFF0000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_82199EE0:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,15,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x1F000;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199f00
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199F00;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10528
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10528;
	// li ctx_arrow(ctx)->r5,8576
	ctx_arrow(ctx)->r5.s64 = 8576;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,47,4
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 47) & 0xF800000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_82199F00:
	// lis ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.s64 = 0;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,42,21
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 42) & 0xFFFFFC0000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199f2c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199F2C;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10368
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10368;
	// li ctx_arrow(ctx)->r5,8192
	ctx_arrow(ctx)->r5.s64 = 8192;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,6,15
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 6) & 0xFFFF000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_82199F2C:
	// lis ctx_arrow(ctx)->r12,-32
	ctx_arrow(ctx)->r12.s64 = -2097152;
	// clrldi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,22
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 & 0x3FFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199f54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199F54;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10444
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10444;
	// li ctx_arrow(ctx)->r5,8448
	ctx_arrow(ctx)->r5.s64 = 8448;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,22,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 22) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_82199F54:
	// std ctx_arrow(ctx)->r26,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_82199F58:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r28.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199fa8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199FA8;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 & 0xFFFFFFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199f78
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199F78;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28,32,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0f80
	sub_821A0F80(ctx, base);
loc_82199F78:
	// lis ctx_arrow(ctx)->r12,31
	ctx_arrow(ctx)->r12.s64 = 2031616;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,34,29
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 34) & 0xFFFFFFFC00000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199fa4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199FA4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10596
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10596;
	// li ctx_arrow(ctx)->r5,8832
	ctx_arrow(ctx)->r5.s64 = 8832;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28,9,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u64, 9) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_82199FA4:
	// std ctx_arrow(ctx)->r26,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
loc_82199FA8:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r27.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a044
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A044;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & 0x3FFFFFFFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199fd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199FD0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10680
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10680;
	// li ctx_arrow(ctx)->r5,8960
	ctx_arrow(ctx)->r5.s64 = 8960;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,26,37
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_82199FD0:
	// li ctx_arrow(ctx)->r12,255
	ctx_arrow(ctx)->r12.s64 = 255;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,38,25
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 38) & 0xFFFFFFC000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82199ff8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82199FF8;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10832
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10832;
	// li ctx_arrow(ctx)->r5,9088
	ctx_arrow(ctx)->r5.s64 = 9088;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,18,7
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 18) & 0xFF00000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_82199FF8:
	// li ctx_arrow(ctx)->r12,63
	ctx_arrow(ctx)->r12.s64 = 63;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,49,14
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 49) & 0xFFFE000000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a018
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A018;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,9,5
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 9) & 0xFC00000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0e00
	sub_821A0E00(ctx, base);
loc_8219A018:
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,56,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a040
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A040;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10112
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10112;
	// li ctx_arrow(ctx)->r5,18688
	ctx_arrow(ctx)->r5.s64 = 18688;
	// lis ctx_arrow(ctx)->r4,-256
	ctx_arrow(ctx)->r4.s64 = -16777216;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A040:
	// std ctx_arrow(ctx)->r26,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
loc_8219A044:
	// lwz ctx_arrow(ctx)->r30,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stb ctx_arrow(ctx)->r25,12520(ctx_arrow(ctx)->r31)
	PPC_STORE_U8_FUNC(&ctx, ctx_arrow(ctx)->r31.u32 + 12520, 0, 0, 0, 0, 0, 0, 0, 0 + (ctx_arrow(ctx)->r25), 0);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219a064
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219A064;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219A064:
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r22.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219ca10
	sub_8219CA10(ctx, base);
	// mr. ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// bne 0x8219a088
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219A088;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// stw ctx_arrow(ctx)->r30,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// b 0x8219a258
	goto loc_8219A258;
loc_8219A088:
	// li ctx_arrow(ctx)->r11,8450
	ctx_arrow(ctx)->r11.s64 = 8450;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r26.u64;
	// lis ctx_arrow(ctx)->r10,5
	ctx_arrow(ctx)->r10.s64 = 327680;
	// li ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = 1;
	// ori ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,18618
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r10.u64 | 18618;
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ea = 4 + ctx_arrow(ctx)->r30.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r30.u32 = ea;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r26.u64;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,12,20,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r28,3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r28.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 512;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r26.u64;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// lis ctx_arrow(ctx)->r30,2
	ctx_arrow(ctx)->r30.s64 = 131072;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// lis ctx_arrow(ctx)->r9,4096
	ctx_arrow(ctx)->r9.s64 = 268435456;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 3;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 2;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,20480
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 20480;
	// rlwimi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22,2,6,29
	ctx_arrow(ctx)->r9.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r22.u32, 2) & 0x3FFFFFC) | (ctx_arrow(ctx)->r9.u64 & 0xFFFFFFFFFC000003);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r26.u64;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lbz ctx_arrow(ctx)->r9,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r10,12179(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u64;
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r31.u64;
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// lbz ctx_arrow(ctx)->r11,12114(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,8,23,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0x100) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,23
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u32 & 0x1FF;
	// rlwinm ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,0,26,23
	ctx_arrow(ctx)->r29.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r29.u32 | (ctx_arrow(ctx)->r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x8219a174
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219A174;
	// lis ctx_arrow(ctx)->r11,-16383
	ctx_arrow(ctx)->r11.s64 = -1073676288;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r23,26
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r23.u32 & 0x3F;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8705
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8705;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r24,16,0,15
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 16) & 0xFFFF0000;
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ea = 4 + ctx_arrow(ctx)->r30.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r30.u32 = ea;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r9.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 128;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r30)
	ea = 4 + ctx_arrow(ctx)->r30.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r30.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// b 0x8219a23c
	goto loc_8219A23C;
loc_8219A174:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,13232
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 13232;
	// lwz ctx_arrow(ctx)->r9,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 + 16;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219a194
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219A194;
	// bl 0x8219d2d8
	sub_8219D2D8(ctx, base);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219A194:
	// lis ctx_arrow(ctx)->r11,-16384
	ctx_arrow(ctx)->r11.s64 = -1073741824;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r9.u32 + 0);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r30.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,24576
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 24576;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + 16;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r10.u64;
	// li ctx_arrow(ctx)->r6,-1
	ctx_arrow(ctx)->r6.s64 = -1;
	// lis ctx_arrow(ctx)->r5,-16383
	ctx_arrow(ctx)->r5.s64 = -1073676288;
	// rlwinm ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r24,16,0,15
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 16) & 0xFFFF0000;
	// stw ctx_arrow(ctx)->r11,13240(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 13240);
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,8705
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r5.u64 | 8705;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r8)
	ea = 4 + ctx_arrow(ctx)->r8.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r8.u32 = ea;
	// clrlwi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r23,26
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r23.u32 & 0x3F;
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r8.u64;
	// or ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u64;
	// ori ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8,128
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r8.u64 | 128;
	// lis ctx_arrow(ctx)->r8,-16383
	ctx_arrow(ctx)->r8.s64 = -1073676288;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// lis ctx_arrow(ctx)->r9,-16384
	ctx_arrow(ctx)->r9.s64 = -1073741824;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8,23041
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r8.u64 | 23041;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// ori ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r9,17921
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r9.u64 | 17921;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,3,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1FFFFFFE;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + 512;
	// li ctx_arrow(ctx)->r27,26
	ctx_arrow(ctx)->r27.s64 = 26;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// li ctx_arrow(ctx)->r26,25
	ctx_arrow(ctx)->r26.s64 = 25;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 1;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r25,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
loc_8219A23C:
	// ld ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 1;
	// std ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// stw ctx_arrow(ctx)->r11,13428(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 13428);
	// stw ctx_arrow(ctx)->r28,13432(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 13432);
	// stw ctx_arrow(ctx)->r22,13440(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 13440);
loc_8219A258:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed170
	return;
}

alias(__imp__sub_8219A260) PPC_WEAK_FUNC(sub_8219A260);
PPC_FUNC_IMPL(__imp__sub_8219A260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,13428(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r3.u32 + 48);
	// blr 
	return;
}

alias(__imp__sub_8219A270) PPC_WEAK_FUNC(sub_8219A270);
PPC_FUNC_IMPL(__imp__sub_8219A270) {
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
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// bl 0x82199dc0
	sub_82199DC0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r0.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq 0x8219a2b0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219A2B0;
	// mullw ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r5.s64 = int64_t(ctx_arrow(ctx)->r30.s32) * int64_t(ctx_arrow(ctx)->r29.s32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// lwz ctx_arrow(ctx)->r11,13428(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
loc_8219A2B0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_8219A2B8) PPC_WEAK_FUNC(sub_8219A2B8);
PPC_FUNC_IMPL(__imp__sub_8219A2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed110
	// stwu ctx_arrow(ctx)->r1,-208(ctx_arrow(ctx)->r1)
	ea = -208 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r6.u64;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// ld ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r27,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r4.u64, 0, xer);
	// ld ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U64(ctx,  ctx);
	// beq ctx_arrow(ctx)->r6,0x8219a304
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A304;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,1920
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 1920;
	// li ctx_arrow(ctx)->r5,16384
	ctx_arrow(ctx)->r5.s64 = 16384;
	// bl 0x821a10e0
	sub_821A10E0(ctx, base);
	// std ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_8219A304:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r29.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a324
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A324;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,6016
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 6016;
	// li ctx_arrow(ctx)->r5,17408
	ctx_arrow(ctx)->r5.s64 = 17408;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a10e0
	sub_821A10E0(ctx, base);
	// std ctx_arrow(ctx)->r26,8(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_8219A324:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r30.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a404
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A404;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,11,14
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a348
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A348;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a1e78
	sub_821A1E78(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219A348:
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r30.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a36c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A36C;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r5,10560(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a09a8
	sub_821A09A8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219A36C:
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,52
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & 0xFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a38c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A38C;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10548
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10548;
	// li ctx_arrow(ctx)->r5,8704
	ctx_arrow(ctx)->r5.s64 = 8704;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,52,11
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 52) & 0xFFF0000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A38C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,15,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x1F000;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a3ac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A3AC;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10528
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10528;
	// li ctx_arrow(ctx)->r5,8576
	ctx_arrow(ctx)->r5.s64 = 8576;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,47,4
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 47) & 0xF800000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A3AC:
	// lis ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.s64 = 0;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,42,21
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 42) & 0xFFFFFC0000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a3d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A3D8;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10368
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10368;
	// li ctx_arrow(ctx)->r5,8192
	ctx_arrow(ctx)->r5.s64 = 8192;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,6,15
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 6) & 0xFFFF000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A3D8:
	// lis ctx_arrow(ctx)->r12,-32
	ctx_arrow(ctx)->r12.s64 = -2097152;
	// clrldi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,22
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 & 0x3FFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a400
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A400;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10444
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10444;
	// li ctx_arrow(ctx)->r5,8448
	ctx_arrow(ctx)->r5.s64 = 8448;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,22,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 22) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A400:
	// std ctx_arrow(ctx)->r26,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_8219A404:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r28.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a454
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A454;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 & 0xFFFFFFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a424
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A424;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28,32,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0f80
	sub_821A0F80(ctx, base);
loc_8219A424:
	// lis ctx_arrow(ctx)->r12,31
	ctx_arrow(ctx)->r12.s64 = 2031616;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,34,29
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 34) & 0xFFFFFFFC00000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a450
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A450;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10596
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10596;
	// li ctx_arrow(ctx)->r5,8832
	ctx_arrow(ctx)->r5.s64 = 8832;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28,9,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u64, 9) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A450:
	// std ctx_arrow(ctx)->r26,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
loc_8219A454:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r27.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a4f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A4F0;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & 0x3FFFFFFFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a47c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A47C;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10680
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10680;
	// li ctx_arrow(ctx)->r5,8960
	ctx_arrow(ctx)->r5.s64 = 8960;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,26,37
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A47C:
	// li ctx_arrow(ctx)->r12,255
	ctx_arrow(ctx)->r12.s64 = 255;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,38,25
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 38) & 0xFFFFFFC000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a4a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A4A4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10832
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10832;
	// li ctx_arrow(ctx)->r5,9088
	ctx_arrow(ctx)->r5.s64 = 9088;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,18,7
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 18) & 0xFF00000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A4A4:
	// li ctx_arrow(ctx)->r12,63
	ctx_arrow(ctx)->r12.s64 = 63;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,49,14
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 49) & 0xFFFE000000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a4c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A4C4;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,9,5
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 9) & 0xFC00000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0e00
	sub_821A0E00(ctx, base);
loc_8219A4C4:
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,56,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a4ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A4EC;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10112
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10112;
	// li ctx_arrow(ctx)->r5,18688
	ctx_arrow(ctx)->r5.s64 = 18688;
	// lis ctx_arrow(ctx)->r4,-256
	ctx_arrow(ctx)->r4.s64 = -16777216;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A4EC:
	// std ctx_arrow(ctx)->r26,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
loc_8219A4F0:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r31,12114
	ctx_arrow(ctx)->r23.s64 = ctx_arrow(ctx)->r31.s64 + 12114;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,1872
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + 1872;
	// lis ctx_arrow(ctx)->r11,-16383
	ctx_arrow(ctx)->r11.s64 = -1073676288;
	// ori ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,8705
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r11.u64 | 8705;
	// lis ctx_arrow(ctx)->r11,-16384
	ctx_arrow(ctx)->r11.s64 = -1073741824;
	// ori ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,24576
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 | 24576;
loc_8219A50C:
	// lwz ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219a524
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219A524;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
loc_8219A524:
	// li ctx_arrow(ctx)->r11,8450
	ctx_arrow(ctx)->r11.s64 = 8450;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r22.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r22.u32, 65535, xer);
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stwu ctx_arrow(ctx)->r21,4(ctx_arrow(ctx)->r30)
	ea = 4 + ctx_arrow(ctx)->r30.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r30.u32 = ea;
	// ble ctx_arrow(ctx)->r6,0x8219a560
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219A560;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lis ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// divwu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u32 = ctx_arrow(ctx)->r10.u32 / ctx_arrow(ctx)->r11.u32;
	// twllei ctx_arrow(ctx)->r11,0
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r11.s32);
loc_8219A560:
	// lbz ctx_arrow(ctx)->r10,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,12179(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,8,23,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0x100) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,23
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u32 & 0x1FF;
	// rlwinm ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,0,26,23
	ctx_arrow(ctx)->r27.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x8219a5b4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219A5B4;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,16,0,15
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r25,26
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r25.u32 & 0x3F;
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r30)
	ea = 4 + ctx_arrow(ctx)->r30.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r30.u32 = ea;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r9.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 128;
	// stwu ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r30)
	ea = 4 + ctx_arrow(ctx)->r30.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r30.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// b 0x8219a670
	goto loc_8219A670;
loc_8219A5B4:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,13232
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 13232;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219a5d4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219A5D4;
	// bl 0x8219d2d8
	sub_8219D2D8(ctx, base);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219A5D4:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// stw ctx_arrow(ctx)->r30,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = -1;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r11,13240(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 13240);
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25,26
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u32 & 0x3F;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r9)
	ea = 4 + ctx_arrow(ctx)->r9.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r9.u32 = ea;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r28,16,0,15
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 16) & 0xFFFF0000;
	// lis ctx_arrow(ctx)->r3,-32768
	ctx_arrow(ctx)->r3.s64 = -2147483648;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// or ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 | ctx_arrow(ctx)->r5.u64;
	// lis ctx_arrow(ctx)->r8,-16383
	ctx_arrow(ctx)->r8.s64 = -1073676288;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9,128
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r9.u64 | 128;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lis ctx_arrow(ctx)->r9,-16384
	ctx_arrow(ctx)->r9.s64 = -1073741824;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8,23041
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r8.u64 | 23041;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// ori ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r9,17921
	ctx_arrow(ctx)->r18.u64 = ctx_arrow(ctx)->r9.u64 | 17921;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,3,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + 512;
	// li ctx_arrow(ctx)->r20,26
	ctx_arrow(ctx)->r20.s64 = 26;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// li ctx_arrow(ctx)->r19,25
	ctx_arrow(ctx)->r19.s64 = 25;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// stwu ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 1;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r20,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r18,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r19,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
loc_8219A670:
	// subf. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r22
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r22.s64 - ctx_arrow(ctx)->r28.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// beq 0x8219a698
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219A698;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r24,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r24.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r25,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// add ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r21.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r21.u64;
	// b 0x8219a50c
	goto loc_8219A50C;
loc_8219A698:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,208
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 208;
	// b 0x823ed160
	return;
}

alias(__imp__sub_8219A6A0) PPC_WEAK_FUNC(sub_8219A6A0);
PPC_FUNC_IMPL(__imp__sub_8219A6A0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// stwu ctx_arrow(ctx)->r1,-240(ctx_arrow(ctx)->r1)
	ea = -240 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r15.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r7.u64;
	// ld ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// ld ctx_arrow(ctx)->r27,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r4.u64, 0, xer);
	// ld ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U64(ctx,  ctx);
	// beq ctx_arrow(ctx)->r6,0x8219a6f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A6F0;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,1920
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 1920;
	// li ctx_arrow(ctx)->r5,16384
	ctx_arrow(ctx)->r5.s64 = 16384;
	// bl 0x821a10e0
	sub_821A10E0(ctx, base);
	// std ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_8219A6F0:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r29.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a710
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A710;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,6016
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 6016;
	// li ctx_arrow(ctx)->r5,17408
	ctx_arrow(ctx)->r5.s64 = 17408;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a10e0
	sub_821A10E0(ctx, base);
	// std ctx_arrow(ctx)->r26,8(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_8219A710:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r30.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a7f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A7F0;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,11,14
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a734
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A734;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a1e78
	sub_821A1E78(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219A734:
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r30.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a758
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A758;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r5,10560(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a09a8
	sub_821A09A8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219A758:
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,52
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & 0xFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a778
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A778;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10548
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10548;
	// li ctx_arrow(ctx)->r5,8704
	ctx_arrow(ctx)->r5.s64 = 8704;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,52,11
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 52) & 0xFFF0000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A778:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,15,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x1F000;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a798
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A798;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10528
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10528;
	// li ctx_arrow(ctx)->r5,8576
	ctx_arrow(ctx)->r5.s64 = 8576;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,47,4
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 47) & 0xF800000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A798:
	// lis ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.s64 = 0;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,42,21
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 42) & 0xFFFFFC0000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a7c4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A7C4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10368
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10368;
	// li ctx_arrow(ctx)->r5,8192
	ctx_arrow(ctx)->r5.s64 = 8192;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,6,15
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 6) & 0xFFFF000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A7C4:
	// lis ctx_arrow(ctx)->r12,-32
	ctx_arrow(ctx)->r12.s64 = -2097152;
	// clrldi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,22
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 & 0x3FFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a7ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A7EC;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10444
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10444;
	// li ctx_arrow(ctx)->r5,8448
	ctx_arrow(ctx)->r5.s64 = 8448;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,22,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 22) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A7EC:
	// std ctx_arrow(ctx)->r26,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_8219A7F0:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r28.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a840
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A840;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 & 0xFFFFFFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a810
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A810;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28,32,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0f80
	sub_821A0F80(ctx, base);
loc_8219A810:
	// lis ctx_arrow(ctx)->r12,31
	ctx_arrow(ctx)->r12.s64 = 2031616;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,34,29
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 34) & 0xFFFFFFFC00000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a83c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A83C;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10596
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10596;
	// li ctx_arrow(ctx)->r5,8832
	ctx_arrow(ctx)->r5.s64 = 8832;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28,9,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u64, 9) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A83C:
	// std ctx_arrow(ctx)->r26,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
loc_8219A840:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r27.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a8dc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A8DC;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & 0x3FFFFFFFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a868
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A868;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10680
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10680;
	// li ctx_arrow(ctx)->r5,8960
	ctx_arrow(ctx)->r5.s64 = 8960;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,26,37
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A868:
	// li ctx_arrow(ctx)->r12,255
	ctx_arrow(ctx)->r12.s64 = 255;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,38,25
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 38) & 0xFFFFFFC000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a890
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A890;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10832
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10832;
	// li ctx_arrow(ctx)->r5,9088
	ctx_arrow(ctx)->r5.s64 = 9088;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,18,7
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 18) & 0xFF00000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A890:
	// li ctx_arrow(ctx)->r12,63
	ctx_arrow(ctx)->r12.s64 = 63;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,49,14
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 49) & 0xFFFE000000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a8b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A8B0;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,9,5
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 9) & 0xFC00000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0e00
	sub_821A0E00(ctx, base);
loc_8219A8B0:
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,56,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219a8d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219A8D8;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10112
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10112;
	// li ctx_arrow(ctx)->r5,18688
	ctx_arrow(ctx)->r5.s64 = 18688;
	// lis ctx_arrow(ctx)->r4,-256
	ctx_arrow(ctx)->r4.s64 = -16777216;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219A8D8:
	// std ctx_arrow(ctx)->r26,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
loc_8219A8DC:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lwz ctx_arrow(ctx)->r22,12428(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r22.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r31,12114
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r31.s64 + 12114;
	// addi ctx_arrow(ctx)->r18,ctx_arrow(ctx)->r11,1872
	ctx_arrow(ctx)->r18.s64 = ctx_arrow(ctx)->r11.s64 + 1872;
	// lis ctx_arrow(ctx)->r11,-16381
	ctx_arrow(ctx)->r11.s64 = -1073545216;
	// clrlwi ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r16,26
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r16.u32 & 0x3F;
	// ori ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,8705
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r11.u64 | 8705;
	// lis ctx_arrow(ctx)->r11,-16384
	ctx_arrow(ctx)->r11.s64 = -1073741824;
	// ori ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,24576
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r11.u64 | 24576;
loc_8219A900:
	// lwz ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219a918
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219A918;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
loc_8219A918:
	// li ctx_arrow(ctx)->r11,8450
	ctx_arrow(ctx)->r11.s64 = 8450;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r17.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r17,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r17.u32, 65535, xer);
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// stwu ctx_arrow(ctx)->r15,4(ctx_arrow(ctx)->r27)
	ea = 4 + ctx_arrow(ctx)->r27.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r27.u32 = ea;
	// ble ctx_arrow(ctx)->r6,0x8219a954
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219A954;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r16.u32 | (ctx_arrow(ctx)->r16.u64 << 32), 3) & 0xFFFFFFF8;
	// lis ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r18
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// divwu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u32 = ctx_arrow(ctx)->r10.u32 / ctx_arrow(ctx)->r11.u32;
	// twllei ctx_arrow(ctx)->r11,0
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r24.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r11.s32);
loc_8219A954:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r24,16,0,15
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 16) & 0xFFFF0000;
	// lbz ctx_arrow(ctx)->r10,12179(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r19,1,0,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r19.u32 | (ctx_arrow(ctx)->r19.u64 << 32), 1) & 0xFFFFFFFE;
	// or ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r20.u64;
	// lwz ctx_arrow(ctx)->r8,24(ctx_arrow(ctx)->r22)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// subfic ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,0
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 0;
	ctx_arrow(ctx)->r5.s64 = 0 - ctx_arrow(ctx)->r10.s64;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r11.u64;
	// subfe ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r5.u32 < ~ctx_arrow(ctx)->r5.u32) | (~ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r5.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r5.u64 = ~ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r5.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// lbzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx,  ctx);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r8.u64;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r24,8
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r24.u32 & 0xFFFFFF;
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r5.u32 & 0x1;
	// rlwimi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,8,23,23
	ctx_arrow(ctx)->r10.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 8) & 0x100) | (ctx_arrow(ctx)->r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,1,0,1
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r7.u32 | (ctx_arrow(ctx)->r7.u64 << 32), 1) & 0xC0000000;
	// clrlwi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r10,23
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r10.u32 & 0x1FF;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,12,20,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,0,26,23
	ctx_arrow(ctx)->r26.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r26.u32 | (ctx_arrow(ctx)->r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// or ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r11.u64;
	// add ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// beq 0x8219a9e0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219A9E0;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r19,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r19.u32 | (ctx_arrow(ctx)->r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r24,1,8,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r24.u32 | (ctx_arrow(ctx)->r24.u64 << 32), 1) & 0xFFFFFE;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// or ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r9.u64 | ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 512;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,2048
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 2048;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
loc_8219A9E0:
	// lbz ctx_arrow(ctx)->r11,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8219aa0c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219AA0C;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r27)
	ea = 4 + ctx_arrow(ctx)->r27.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r27.u32 = ea;
	// stwu ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r27)
	ea = 4 + ctx_arrow(ctx)->r27.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r27.u32 = ea;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r27)
	ea = 4 + ctx_arrow(ctx)->r27.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r27.u32 = ea;
	// stwu ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r27)
	ea = 4 + ctx_arrow(ctx)->r27.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r27.u32 = ea;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r27)
	ea = 4 + ctx_arrow(ctx)->r27.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r27.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64;
	// b 0x8219aac8
	goto loc_8219AAC8;
loc_8219AA0C:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,13232
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 13232;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219aa2c
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219AA2C;
	// bl 0x8219d2d8
	sub_8219D2D8(ctx, base);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219AA2C:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// stw ctx_arrow(ctx)->r27,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r25.u64;
	// li ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = -1;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r23.u64;
	// stw ctx_arrow(ctx)->r11,13240(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 13240);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// lis ctx_arrow(ctx)->r4,-32768
	ctx_arrow(ctx)->r4.s64 = -2147483648;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r9)
	ea = 4 + ctx_arrow(ctx)->r9.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r9.u32 = ea;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// li ctx_arrow(ctx)->r27,26
	ctx_arrow(ctx)->r27.s64 = 26;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// lis ctx_arrow(ctx)->r9,-16383
	ctx_arrow(ctx)->r9.s64 = -1073676288;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,23041
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r9.u64 | 23041;
	// lis ctx_arrow(ctx)->r9,-16384
	ctx_arrow(ctx)->r9.s64 = -1073741824;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r14,25
	ctx_arrow(ctx)->r14.s64 = 25;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,17921
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 17921;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,3,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1FFFFFFE;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// stwu ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 1;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r27,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r7,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r14,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
loc_8219AAC8:
	// subf. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r17.s64 - ctx_arrow(ctx)->r24.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// beq 0x8219aaf0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219AAF0;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r18,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r18.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r16,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r16.u32 | (ctx_arrow(ctx)->r16.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r24.s64 - ctx_arrow(ctx)->r11.s64;
	// add ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r19
	ctx_arrow(ctx)->r19.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r19.u64;
	// b 0x8219a900
	goto loc_8219A900;
loc_8219AAF0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// b 0x823ed150
	return;
}

alias(__imp__sub_8219AAF8) PPC_WEAK_FUNC(sub_8219AAF8);
PPC_FUNC_IMPL(__imp__sub_8219AAF8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed100
	// stwu ctx_arrow(ctx)->r1,-240(ctx_arrow(ctx)->r1)
	ea = -240 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// li ctx_arrow(ctx)->r26,0
	ctx_arrow(ctx)->r26.s64 = 0;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,50,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// lwz ctx_arrow(ctx)->r11,10612(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r4.u64;
	// lwz ctx_arrow(ctx)->r18,12428(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r18.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r15,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r15.u64 = ctx_arrow(ctx)->r5.u64;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,30,31
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0) & 0x3) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// mr ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r7.u64;
	// mr ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r17.u64 = ctx_arrow(ctx)->r26.u64;
	// stw ctx_arrow(ctx)->r11,10612(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10612);
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// lwz ctx_arrow(ctx)->r11,10616(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x3;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// bne ctx_arrow(ctx)->r6,0x8219abc8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219ABC8;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r22,-16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r22.s64 + -16;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-18196
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -18196;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,-17856
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r11.s64 + -17856;
	// lis ctx_arrow(ctx)->r11,24897
	ctx_arrow(ctx)->r11.s64 = 1631649792;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// ori ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,8455
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r11.u64 | 8455;
	// lis ctx_arrow(ctx)->r11,26182
	ctx_arrow(ctx)->r11.s64 = 1715863552;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8,4
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r8.s64 + 4;
	// ori ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,9734
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r11.u64 | 9734;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 * 12;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwzx ctx_arrow(ctx)->r17,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,3,0,28
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw ctx_arrow(ctx)->r10,10632(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10632);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,10636(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10636);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,10640(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10640);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,10644(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10644);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r5,10652(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10652);
	// stw ctx_arrow(ctx)->r4,10656(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10656);
	// stw ctx_arrow(ctx)->r11,10648(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10648);
	// b 0x8219ac44
	goto loc_8219AC44;
loc_8219ABC8:
	// lis ctx_arrow(ctx)->r10,-32254
	ctx_arrow(ctx)->r10.s64 = -2113798144;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,12
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r22.s64 * 12;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,-18424
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + -18424;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,8
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r10.s64 + 8;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,10632(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10632);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r10,10636(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10636);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r22,3,0,28
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,10640(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10640);
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// rlwinm. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq 0x8219ac18
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219AC18;
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-18008
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -18008;
	// lis ctx_arrow(ctx)->r11,24897
	ctx_arrow(ctx)->r11.s64 = 1631649792;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,8449
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 8449;
	// b 0x8219ac28
	goto loc_8219AC28;
loc_8219AC18:
	// lis ctx_arrow(ctx)->r11,-32254
	ctx_arrow(ctx)->r11.s64 = -2113798144;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-18160
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -18160;
	// lis ctx_arrow(ctx)->r11,12320
	ctx_arrow(ctx)->r11.s64 = 807403520;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4096
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4096;
loc_8219AC28:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 + 4;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r9,10644(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10644);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// stw ctx_arrow(ctx)->r11,10656(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10656);
	// stw ctx_arrow(ctx)->r11,10652(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10652);
	// stw ctx_arrow(ctx)->r10,10648(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 10648);
loc_8219AC44:
	// li ctx_arrow(ctx)->r12,127
	ctx_arrow(ctx)->r12.s64 = 127;
	// ld ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,39,24
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 39) & 0xFFFFFF8000000000;
	// or ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r12.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64;
	// std ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
	// ld ctx_arrow(ctx)->r4,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r27,32(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r27.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r30,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U64(ctx,  ctx);
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r4.u64, 0, xer);
	// ld ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U64(ctx,  ctx);
	// beq ctx_arrow(ctx)->r6,0x8219ac88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AC88;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,1920
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 1920;
	// li ctx_arrow(ctx)->r5,16384
	ctx_arrow(ctx)->r5.s64 = 16384;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a10e0
	sub_821A10E0(ctx, base);
	// std ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 0);
loc_8219AC88:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r29.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219aca8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219ACA8;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,6016
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 6016;
	// li ctx_arrow(ctx)->r5,17408
	ctx_arrow(ctx)->r5.s64 = 17408;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r29.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a10e0
	sub_821A10E0(ctx, base);
	// std ctx_arrow(ctx)->r26,8(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 8);
loc_8219ACA8:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r30.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ad88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AD88;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,11,14
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219accc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219ACCC;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a1e78
	sub_821A1E78(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219ACCC:
	// ld ctx_arrow(ctx)->r11,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & ctx_arrow(ctx)->r30.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219acf0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219ACF0;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r5,10560(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx,  ctx);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a09a8
	sub_821A09A8(ctx, base);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219ACF0:
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,52
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & 0xFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ad10
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AD10;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10548
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10548;
	// li ctx_arrow(ctx)->r5,8704
	ctx_arrow(ctx)->r5.s64 = 8704;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,52,11
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 52) & 0xFFF0000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219AD10:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,0,15,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u32 | (ctx_arrow(ctx)->r30.u64 << 32), 0) & 0x1F000;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ad30
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AD30;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10528
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10528;
	// li ctx_arrow(ctx)->r5,8576
	ctx_arrow(ctx)->r5.s64 = 8576;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,47,4
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 47) & 0xF800000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219AD30:
	// lis ctx_arrow(ctx)->r12,0
	ctx_arrow(ctx)->r12.s64 = 0;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,42,21
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 42) & 0xFFFFFC0000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ad5c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AD5C;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10368
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10368;
	// li ctx_arrow(ctx)->r5,8192
	ctx_arrow(ctx)->r5.s64 = 8192;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,6,15
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 6) & 0xFFFF000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219AD5C:
	// lis ctx_arrow(ctx)->r12,-32
	ctx_arrow(ctx)->r12.s64 = -2097152;
	// clrldi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,22
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 & 0x3FFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ad84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AD84;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10444
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10444;
	// li ctx_arrow(ctx)->r5,8448
	ctx_arrow(ctx)->r5.s64 = 8448;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30,22,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r30.u64, 22) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219AD84:
	// std ctx_arrow(ctx)->r26,16(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 16);
loc_8219AD88:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r28.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219add8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219ADD8;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,32
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 & 0xFFFFFFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ada8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219ADA8;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28,32,31
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0f80
	sub_821A0F80(ctx, base);
loc_8219ADA8:
	// lis ctx_arrow(ctx)->r12,31
	ctx_arrow(ctx)->r12.s64 = 2031616;
	// ori ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,65535
	ctx_arrow(ctx)->r12.u64 = ctx_arrow(ctx)->r12.u64 | 65535;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,34,29
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 34) & 0xFFFFFFFC00000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r28.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219add4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219ADD4;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10596
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10596;
	// li ctx_arrow(ctx)->r5,8832
	ctx_arrow(ctx)->r5.s64 = 8832;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28,9,20
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u64, 9) & 0xFFFFF80000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219ADD4:
	// std ctx_arrow(ctx)->r26,24(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 24);
loc_8219ADD8:
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r27.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ae74
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AE74;
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & 0x3FFFFFFFFF;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ae00
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AE00;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10680
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10680;
	// li ctx_arrow(ctx)->r5,8960
	ctx_arrow(ctx)->r5.s64 = 8960;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,26,37
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219AE00:
	// li ctx_arrow(ctx)->r12,255
	ctx_arrow(ctx)->r12.s64 = 255;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,38,25
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 38) & 0xFFFFFFC000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ae28
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AE28;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10832
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10832;
	// li ctx_arrow(ctx)->r5,9088
	ctx_arrow(ctx)->r5.s64 = 9088;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,18,7
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 18) & 0xFF00000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219AE28:
	// li ctx_arrow(ctx)->r12,63
	ctx_arrow(ctx)->r12.s64 = 63;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,49,14
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 49) & 0xFFFE000000000000;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ae48
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AE48;
	// rldicr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r27,9,5
	ctx_arrow(ctx)->r4.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u64, 9) & 0xFC00000000000000;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0e00
	sub_821A0E00(ctx, base);
loc_8219AE48:
	// li ctx_arrow(ctx)->r12,1
	ctx_arrow(ctx)->r12.s64 = 1;
	// rldicr ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,56,63
	ctx_arrow(ctx)->r12.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r12
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r27.u64 & ctx_arrow(ctx)->r12.u64;
	// cmpldi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint64_t>(ctx_arrow(ctx)->r11.u64, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8219ae70
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8219AE70;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,10112
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r31.s64 + 10112;
	// li ctx_arrow(ctx)->r5,18688
	ctx_arrow(ctx)->r5.s64 = 18688;
	// lis ctx_arrow(ctx)->r4,-256
	ctx_arrow(ctx)->r4.s64 = -16777216;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x821a0d40
	sub_821A0D40(ctx, base);
loc_8219AE70:
	// std ctx_arrow(ctx)->r26,32(ctx_arrow(ctx)->r31)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 32);
loc_8219AE74:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r31,12114
	ctx_arrow(ctx)->r19.s64 = ctx_arrow(ctx)->r31.s64 + 12114;
	// addi ctx_arrow(ctx)->r21,ctx_arrow(ctx)->r11,1984
	ctx_arrow(ctx)->r21.s64 = ctx_arrow(ctx)->r11.s64 + 1984;
	// lis ctx_arrow(ctx)->r11,-16381
	ctx_arrow(ctx)->r11.s64 = -1073545216;
	// ori ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r11,8705
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r11.u64 | 8705;
	// lis ctx_arrow(ctx)->r11,-16384
	ctx_arrow(ctx)->r11.s64 = -1073741824;
	// ori ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,24576
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r11.u64 | 24576;
loc_8219AE90:
	// lwz ctx_arrow(ctx)->r3,48(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,56(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219aea8
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219AEA8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8219d6d8
	sub_8219D6D8(ctx, base);
loc_8219AEA8:
	// li ctx_arrow(ctx)->r11,8450
	ctx_arrow(ctx)->r11.s64 = 8450;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r16.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r16,65535
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r16.u32, 65535, xer);
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ea = 4 + ctx_arrow(ctx)->r3.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r3.u32 = ea;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r3.u64;
	// stwu ctx_arrow(ctx)->r15,4(ctx_arrow(ctx)->r26)
	ea = 4 + ctx_arrow(ctx)->r26.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r26.u32 = ea;
	// ble ctx_arrow(ctx)->r6,0x8219aee4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219AEE4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 3) & 0xFFFFFFF8;
	// lis ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,65535
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 65535;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// divwu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u32 = ctx_arrow(ctx)->r10.u32 / ctx_arrow(ctx)->r11.u32;
	// twllei ctx_arrow(ctx)->r11,0
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,0,30
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.s64 = int64_t(ctx_arrow(ctx)->r10.s32) * int64_t(ctx_arrow(ctx)->r11.s32);
loc_8219AEE4:
	// lwz ctx_arrow(ctx)->r10,10616(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lbz ctx_arrow(ctx)->r11,12179(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x3;
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx,  ctx);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 2, xer);
	// subfic ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r10.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// lbzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r19,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,3,30,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 3) & 0x3;
	// subfe ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 < ~ctx_arrow(ctx)->r10.u32) | (~ctx_arrow(ctx)->r10.u32 + ctx_arrow(ctx)->r10.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r10.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,30,0,1
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 30) & 0xC0000000;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	// rlwimi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,8,23,23
	ctx_arrow(ctx)->r11.u64 = (__builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 8) & 0x100) | (ctx_arrow(ctx)->r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// lwz ctx_arrow(ctx)->r10,24(ctx_arrow(ctx)->r18)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// andi. ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,319
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r11.u64 & 319;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r24.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8219af54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8219AF54;
	// mullw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r17
	ctx_arrow(ctx)->r11.s64 = int64_t(ctx_arrow(ctx)->r27.s32) * int64_t(ctx_arrow(ctx)->r17.s32);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r20,2,0,29
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r20.u32 | (ctx_arrow(ctx)->r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,16,0,15
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xFFFF0000;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,8,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFE;
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r22,26
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r22.u32 & 0x3F;
	// or ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r11.u64 | ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// or ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r8.u64;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 512;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r8,2304
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r8.u64 | 2304;
	// b 0x8219afb0
	goto loc_8219AFB0;
loc_8219AF54:
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r27,16,0,15
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,26
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r22.u32 & 0x3F;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r20.u32 | (ctx_arrow(ctx)->r20.u64 << 32), 1) & 0xFFFFFFFE;
	// or ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r7.u64 | ctx_arrow(ctx)->r6.u64;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r7,256
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r7.u64 | 256;
	// rlwinm ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,12,20,31
	ctx_arrow(ctx)->r7.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0xFFF;
	// rlwinm. ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,0,0,0
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 0) & 0x80000000;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// clrlwi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r11.u32 & 0x1FFFFFFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r7.s64 + 512;
	// clrlwi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r27,8
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r27.u32 & 0xFFFFFF;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// or ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r5.u64 | ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r8.u64;
	// beq 0x8219afb8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219AFB8;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r20,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r20.u32 | (ctx_arrow(ctx)->r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27,1,8,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 1) & 0xFFFFFE;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// or ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r8.u64 | ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,12,20,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 12) & 0xFFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u32 & 0x1FFFFFFF;
	// ori ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,2048
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r30.u64 | 2048;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,512
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + 512;
loc_8219AFB0:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,19,19
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x1000;
	// add ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
loc_8219AFB8:
	// lbz ctx_arrow(ctx)->r11,10940(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx,  ctx);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne 0x8219afe4
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_8219AFE4;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r23.u64;
	// stwu ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r26)
	ea = 4 + ctx_arrow(ctx)->r26.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r26.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r26.u64;
	// stwu ctx_arrow(ctx)->r24,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// b 0x8219b0a0
	goto loc_8219B0A0;
loc_8219AFE4:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,13232
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 13232;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx,  ctx);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r11.u32, xer);
	// ble ctx_arrow(ctx)->r6,0x8219b004
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8219B004;
	// bl 0x8219d2d8
	sub_8219D2D8(ctx, base);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
loc_8219B004:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 + 16;
	// stw ctx_arrow(ctx)->r26,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r25.u64;
	// li ctx_arrow(ctx)->r7,-1
	ctx_arrow(ctx)->r7.s64 = -1;
	// mr ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23
	ctx_arrow(ctx)->r6.u64 = ctx_arrow(ctx)->r23.u64;
	// stw ctx_arrow(ctx)->r11,13240(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 13240);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r25.u64;
	// lis ctx_arrow(ctx)->r4,-32768
	ctx_arrow(ctx)->r4.s64 = -2147483648;
	// stwu ctx_arrow(ctx)->r8,4(ctx_arrow(ctx)->r9)
	ea = 4 + ctx_arrow(ctx)->r9.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r9.u32 = ea;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// li ctx_arrow(ctx)->r26,26
	ctx_arrow(ctx)->r26.s64 = 26;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64;
	// lis ctx_arrow(ctx)->r9,-16383
	ctx_arrow(ctx)->r9.s64 = -1073676288;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,12,20,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 12) & 0xFFF;
	// ori ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9,23041
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r9.u64 | 23041;
	// lis ctx_arrow(ctx)->r9,-16384
	ctx_arrow(ctx)->r9.s64 = -1073741824;
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// li ctx_arrow(ctx)->r14,25
	ctx_arrow(ctx)->r14.s64 = 25;
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,17921
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 17921;
	// stwu ctx_arrow(ctx)->r6,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stw ctx_arrow(ctx)->r9,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 80);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,3,30
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1FFFFFFE;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,512
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r8.s64 + 512;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,19,19
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x1000;
	// stwu ctx_arrow(ctx)->r24,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r9.u64;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 1;
	// stwu ctx_arrow(ctx)->r30,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r28,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r29,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r5,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r4,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r3,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r26,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// lwz ctx_arrow(ctx)->r7,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U32(ctx,  ctx);
	// stwu ctx_arrow(ctx)->r7,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
	// stwu ctx_arrow(ctx)->r14,4(ctx_arrow(ctx)->r11)
	ea = 4 + ctx_arrow(ctx)->r11.u32;
	PPC_Write_U32(ctx,  ctx, ea);
	ctx_arrow(ctx)->r11.u32 = ea;
loc_8219B0A0:
	// subf. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r16.s64 - ctx_arrow(ctx)->r27.s64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,48(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx,  ctx, ctx_arrow(ctx)->r31.u32 + 48);
	// beq 0x8219b0c8
	if (ctx_arrow(ctx)->r0.eq()) goto loc_8219B0C8;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r21,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r21.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r22,3,0,28
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r22.u32 | (ctx_arrow(ctx)->r22.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx,  ctx);
	// subf ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r27.s64 - ctx_arrow(ctx)->r11.s64;
	// add ctx_arrow(ctx)->r16,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r16.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// add ctx_arrow(ctx)->r20,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r20
	ctx_arrow(ctx)->r20.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r20.u64;
	// b 0x8219ae90
	goto loc_8219AE90;
loc_8219B0C8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,240
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 240;
	// b 0x823ed150
	return;
}

