#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_820DF8F0) PPC_WEAK_FUNC(sub_820DF8F0);
PPC_FUNC_IMPL(__imp__sub_820DF8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// stfs f1,17280(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 17280, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820DF900) PPC_WEAK_FUNC(sub_820DF900);
PPC_FUNC_IMPL(__imp__sub_820DF900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// lfs f1,17280(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

alias(__imp__sub_820DF910) PPC_WEAK_FUNC(sub_820DF910);
PPC_FUNC_IMPL(__imp__sub_820DF910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// stw ctx_arrow(ctx)->r3,17276(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 17276, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820DF920) PPC_WEAK_FUNC(sub_820DF920);
PPC_FUNC_IMPL(__imp__sub_820DF920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// lwz ctx_arrow(ctx)->r3,17276(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_820DF930) PPC_WEAK_FUNC(sub_820DF930);
PPC_FUNC_IMPL(__imp__sub_820DF930) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed130
	// stfd f31,-64(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -64);
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// lwz ctx_arrow(ctx)->r11,19400(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820dfc58
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820DFC58;
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// lfs f31,17280(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f31,f0
	ctx_arrow(ctx)->r6.compare(f31.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x820df96c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820DF96C;
	// fneg f31,f31
	f31.u64 = f31.u64 ^ 0x8000000000000000;
loc_820DF96C:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,14212(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x823ed4c8
	sub_823ED4C8(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lfs f0,6576(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r29,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29,60
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r29.s64 * 60;
	// bl 0x823ed4c8
	sub_823ED4C8(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,14160(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r31.s64;
	// bl 0x823ed4c8
	sub_823ED4C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r30.u64;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,100
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 * 100;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// lis ctx_arrow(ctx)->r11,20971
	ctx_arrow(ctx)->r11.s64 = 1374355456;
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// ori ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r11,34079
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r11.u64 | 34079;
	// lis ctx_arrow(ctx)->r11,26214
	ctx_arrow(ctx)->r11.s64 = 1717960704;
	// li ctx_arrow(ctx)->r4,130
	ctx_arrow(ctx)->r4.s64 = 130;
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,26215
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 | 26215;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-23
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -23;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r29.s32) * int64_t(ctx_arrow(ctx)->r27.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1F) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 5;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,100
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 100;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 - ctx_arrow(ctx)->r11.s64;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r31.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x820a59b8
	sub_820A59B8(ctx, base);
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// li ctx_arrow(ctx)->r4,138
	ctx_arrow(ctx)->r4.s64 = 138;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-23
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -23;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r29.s32) * int64_t(ctx_arrow(ctx)->r31.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r29.s64 - ctx_arrow(ctx)->r11.s64;
	// bl 0x820a59b8
	sub_820A59B8(ctx, base);
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,17880
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 17880;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// li ctx_arrow(ctx)->r4,147
	ctx_arrow(ctx)->r4.s64 = 147;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-23
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -23;
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// bl 0x820a5828
	sub_820A5828(ctx, base);
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// lis ctx_arrow(ctx)->r11,-30584
	ctx_arrow(ctx)->r11.s64 = -2004353024;
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,34953
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r11.u64 | 34953;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// li ctx_arrow(ctx)->r4,156
	ctx_arrow(ctx)->r4.s64 = 156;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-23
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -23;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r30.s32) * int64_t(ctx_arrow(ctx)->r10.s32)) >> 32;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1F) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 5;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,60
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 60;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r11.s64;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r31.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x820a59b8
	sub_820A59B8(ctx, base);
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r26.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r26.u64;
	// li ctx_arrow(ctx)->r4,164
	ctx_arrow(ctx)->r4.s64 = 164;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-23
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -23;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r30.s32) * int64_t(ctx_arrow(ctx)->r31.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r30.s64 - ctx_arrow(ctx)->r11.s64;
	// bl 0x820a59b8
	sub_820A59B8(ctx, base);
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,173
	ctx_arrow(ctx)->r4.s64 = 173;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-23
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -23;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// bl 0x820a5828
	sub_820A5828(ctx, base);
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,182
	ctx_arrow(ctx)->r4.s64 = 182;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-23
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -23;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r28.s32) * int64_t(ctx_arrow(ctx)->r27.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,5
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x1F) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 5;
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,100
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 * 100;
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r31.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// bl 0x820a59b8
	sub_820A59B8(ctx, base);
	// bl 0x8210e2f0
	sub_8210E2F0(ctx, base);
	// extsh ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// bl 0x8210e218
	sub_8210E218(ctx, base);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.s64 = ctx.PPCRegister_s16(ctx_arrow(ctx)->r3);
	// li ctx_arrow(ctx)->r5,2
	ctx_arrow(ctx)->r5.s64 = 2;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r4,190
	ctx_arrow(ctx)->r4.s64 = 190;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-23
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r11.s64 + -23;
	// mulhw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.s64 = (int64_t(ctx_arrow(ctx)->r28.s32) * int64_t(ctx_arrow(ctx)->r31.s32)) >> 32;
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// li ctx_arrow(ctx)->r7,2
	ctx_arrow(ctx)->r7.s64 = 2;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,1,31,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0x1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r28.s64 - ctx_arrow(ctx)->r11.s64;
	// bl 0x820a59b8
	sub_820A59B8(ctx, base);
loc_820DFC58:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lfd f31,-64(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed180
	return;
}

alias(__imp__sub_820DFC68) PPC_WEAK_FUNC(sub_820DFC68);
PPC_FUNC_IMPL(__imp__sub_820DFC68) {
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
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r30,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r30,-32013
	ctx_arrow(ctx)->r30.s64 = -2098003968;
	// lwz ctx_arrow(ctx)->r11,17236(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820dfcf4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820DFCF4;
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,17240
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 17240;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820dfcd4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820DFCD4;
	// bl 0x8209f588
	sub_8209F588(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820dfcd4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820DFCD4;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r8,13420
	ctx_arrow(ctx)->r8.s64 = 13420;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11,17776
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r11.s64 + 17776;
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r4,163
	ctx_arrow(ctx)->r4.s64 = 163;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82144920
	sub_82144920(ctx, base);
loc_820DFCD4:
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r10,17236(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,-6384(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1800
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1800, xer);
	// stw ctx_arrow(ctx)->r11,17236(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 17236, ctx_arrow(ctx)->r4.u32);
	// ble ctx_arrow(ctx)->r6,0x820dfcf4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820DFCF4;
	// bl 0x820df548
	sub_820DF548(ctx, base);
loc_820DFCF4:
	// bl 0x820df6d8
	sub_820DF6D8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// lwz ctx_arrow(ctx)->r11,17276(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dfd20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFD20;
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// lis ctx_arrow(ctx)->r10,-32014
	ctx_arrow(ctx)->r10.s64 = -2098069504;
	// lfs f0,17280(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,-6368(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,17280(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 17280, ctx_arrow(ctx)->r4.u32);
loc_820DFD20:
	// bl 0x820dcb78
	sub_820DCB78(&ctx);
	// lis ctx_arrow(ctx)->r10,-32013
	ctx_arrow(ctx)->r10.s64 = -2098003968;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r11,17284(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 17284, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_820DFD48) PPC_WEAK_FUNC(sub_820DFD48);
PPC_FUNC_IMPL(__imp__sub_820DFD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,18,18
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x2000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dfdcc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFDCC;
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// lwz ctx_arrow(ctx)->r10,17300(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dfdcc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFDCC;
loc_820DFD68:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r3.u32, xer);
	// bne ctx_arrow(ctx)->r6,0x820dfdc0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820DFDC0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dfdc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFDC0;
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dfdc0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFDC0;
	// lbz ctx_arrow(ctx)->r9,2(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,0,24
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dfdd4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFDD4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f0,112(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r9
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0x3) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32 >> 2;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dfdd4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFDD4;
loc_820DFDC0:
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820dfd68
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820DFD68;
loc_820DFDCC:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// blr 
	return;
loc_820DFDD4:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_820DFDE0) PPC_WEAK_FUNC(sub_820DFDE0);
PPC_FUNC_IMPL(__imp__sub_820DFDE0) {
	PPC_FUNC_PROLOGUE();
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// li ctx_arrow(ctx)->r27,-1
	ctx_arrow(ctx)->r27.s64 = -1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,12512
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 12512;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r27.u64;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
loc_820DFE08:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,0,0,0
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 0) & 0x80000000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e001c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E001C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,236
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 236;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,4720
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r30.s64 + 4720;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820dfe08
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820DFE08;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,232
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 232;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,232
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 + 232;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,232
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r30.s64 + 232;
	// subfic ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,236
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 236;
	ctx_arrow(ctx)->r6.s64 = 236 - ctx_arrow(ctx)->r11.s64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,232
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 232;
	// subfic ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10,472
	xer.ca = ctx_arrow(ctx)->r10.u32 <= 472;
	ctx_arrow(ctx)->r5.s64 = 472 - ctx_arrow(ctx)->r10.s64;
	// subfic ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,708
	xer.ca = ctx_arrow(ctx)->r9.u32 <= 708;
	ctx_arrow(ctx)->r4.s64 = 708 - ctx_arrow(ctx)->r9.s64;
	// li ctx_arrow(ctx)->r10,-236
	ctx_arrow(ctx)->r10.s64 = -236;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r31.u64;
	// li ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r9.s64 = 2;
	// subfic ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,944
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 944;
	ctx_arrow(ctx)->r3.s64 = 944 - ctx_arrow(ctx)->r11.s64;
loc_820DFE58:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,232
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + 232;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r7.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r29,-4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dfe90
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFE90;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820dfe88
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820DFE88;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,232
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 232;
	// lwz ctx_arrow(ctx)->r29,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r28.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820dfe90
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820DFE90;
loc_820DFE88:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,-2
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 + -2;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r7.u64;
loc_820DFE90:
	// lwz ctx_arrow(ctx)->r29,232(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dfec0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFEC0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820dfeb8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820DFEB8;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,232
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 232;
	// lwz ctx_arrow(ctx)->r29,236(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r28.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820dfec0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820DFEC0;
loc_820DFEB8:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 + -1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r11.u64;
loc_820DFEC0:
	// lwz ctx_arrow(ctx)->r29,468(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dfef0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFEF0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820dfee8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820DFEE8;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,232
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 232;
	// lwz ctx_arrow(ctx)->r29,472(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r28.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820dfef0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820DFEF0;
loc_820DFEE8:
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r9.u64;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r5.u64 + ctx_arrow(ctx)->r11.u64;
loc_820DFEF0:
	// lwz ctx_arrow(ctx)->r29,704(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dff20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFF20;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820dff18
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820DFF18;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,232
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 232;
	// lwz ctx_arrow(ctx)->r29,708(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r28.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820dff20
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820DFF20;
loc_820DFF18:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r4.u64 + ctx_arrow(ctx)->r11.u64;
loc_820DFF20:
	// lwz ctx_arrow(ctx)->r29,940(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r29.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820dff50
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820DFF50;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820dff48
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820DFF48;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,232
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 232;
	// lwz ctx_arrow(ctx)->r29,944(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r28.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, ctx_arrow(ctx)->r28.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820dff50
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820DFF50;
loc_820DFF48:
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9,2
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r9.s64 + 2;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64 + ctx_arrow(ctx)->r11.u64;
loc_820DFF50:
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,5
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 5;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,1180
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 1180;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,-2
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 + -2;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,20
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 20, xer);
	// blt ctx_arrow(ctx)->r6,0x820dfe58
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820DFE58;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820e00ac
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820E00AC;
	// mulli ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r8,236
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r8.s64 * 236;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,228
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 228;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820d5430
	sub_820D5430(ctx, base);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64 + ctx_arrow(ctx)->r30.u64;
	// lfs f0,2688(ctx_arrow(ctx)->r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// lwz ctx_arrow(ctx)->r9,100(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 4;
	// lfs f13,2776(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// stw ctx_arrow(ctx)->r9,100(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f12,14116(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stfs f0,12(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,136(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 136, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,144(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 144, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,160(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 160, ctx_arrow(ctx)->r4.u32);
	// stfs f0,24(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,164(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 164, ctx_arrow(ctx)->r4.u32);
	// stfs f0,28(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,168(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 168, ctx_arrow(ctx)->r4.u32);
	// stfs f13,96(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,172(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 172, ctx_arrow(ctx)->r4.u32);
	// stfs f12,140(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 140, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r10,184(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 184, ctx_arrow(ctx)->r4.u32);
	// stfs f0,148(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 148, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,188(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 188, ctx_arrow(ctx)->r4.u32);
	// stfs f13,192(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 192, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,224(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 224, ctx_arrow(ctx)->r4.u32);
	// stfs f13,196(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 196, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,228(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 228, ctx_arrow(ctx)->r4.u32);
	// stfs f13,200(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 200, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,232(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 232, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820E001C:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,236
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 * 236;
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// add ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// lfs f13,2776(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,136(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 136, ctx_arrow(ctx)->r4.u32);
	// stfs f0,12(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,144(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 144, ctx_arrow(ctx)->r4.u32);
	// stfs f0,16(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,160(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 160, ctx_arrow(ctx)->r4.u32);
	// lfs f12,14116(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r31,164(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 164, ctx_arrow(ctx)->r4.u32);
	// stfs f0,20(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,168(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 168, ctx_arrow(ctx)->r4.u32);
	// stfs f0,24(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r27,172(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 172, ctx_arrow(ctx)->r4.u32);
	// stfs f0,28(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,184(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 184, ctx_arrow(ctx)->r4.u32);
	// stfs f13,96(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,188(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 188, ctx_arrow(ctx)->r4.u32);
	// stfs f12,140(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 140, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,224(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 224, ctx_arrow(ctx)->r4.u32);
	// stfs f0,148(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 148, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,228(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 228, ctx_arrow(ctx)->r4.u32);
	// stfs f13,192(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 192, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,232(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 232, ctx_arrow(ctx)->r4.u32);
	// stfs f13,196(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 196, ctx_arrow(ctx)->r4.u32);
	// stfs f13,200(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 200, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820E00AC:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_820E00B8) PPC_WEAK_FUNC(sub_820E00B8);
PPC_FUNC_IMPL(__imp__sub_820E00B8) {
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
	// lwz ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,0,25,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x40;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e00fc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E00FC;
	// bl 0x820dfde0
	sub_820DFDE0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r3,68(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 68, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_820E00FC:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,24,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0124
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0124;
	// bl 0x820dfde0
	sub_820DFDE0(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// stw ctx_arrow(ctx)->r3,108(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 108, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x820e0124
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0124;
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,128
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 128;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 100, ctx_arrow(ctx)->r4.u32);
loc_820E0124:
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

alias(__imp__sub_820E0138) PPC_WEAK_FUNC(sub_820E0138);
PPC_FUNC_IMPL(__imp__sub_820E0138) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r5.u64;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// lbz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 13, xer);
	// bne ctx_arrow(ctx)->r6,0x820e01a0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E01A0;
	// lwz ctx_arrow(ctx)->r3,196(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0180
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0180;
	// bl 0x82144970
	sub_82144970(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0180
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0180;
	// lwz ctx_arrow(ctx)->r3,196(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82144a08
	sub_82144A08(ctx, base);
loc_820E0180:
	// lwz ctx_arrow(ctx)->r3,200(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0278
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0278;
	// bl 0x82144970
	sub_82144970(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0278
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0278;
	// lwz ctx_arrow(ctx)->r3,200(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x820e0274
	goto loc_820E0274;
loc_820E01A0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x820e01c0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E01C0;
	// lwz ctx_arrow(ctx)->r11,132(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0278
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0278;
	// stw ctx_arrow(ctx)->r29,132(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r29,132(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// b 0x820e0278
	goto loc_820E0278;
loc_820E01C0:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0208
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0208;
	// lwz ctx_arrow(ctx)->r3,240(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e01e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E01E8;
	// bl 0x82144970
	sub_82144970(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e01e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E01E8;
	// lwz ctx_arrow(ctx)->r3,240(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82144a08
	sub_82144A08(ctx, base);
loc_820E01E8:
	// lwz ctx_arrow(ctx)->r3,244(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0278
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0278;
	// bl 0x82144970
	sub_82144970(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0278
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0278;
	// lwz ctx_arrow(ctx)->r3,244(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x820e0274
	goto loc_820E0274;
loc_820E0208:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,47
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 47, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0228
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0228;
	// lwz ctx_arrow(ctx)->r3,140(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820e0278
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820E0278;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// bl 0x821143f8
	sub_821143F8(ctx, base);
	// b 0x820e0278
	goto loc_820E0278;
loc_820E0228:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,40
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 40, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0250
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0250;
	// lwz ctx_arrow(ctx)->r3,176(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0278
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0278;
	// bl 0x82144970
	sub_82144970(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0278
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0278;
	// lwz ctx_arrow(ctx)->r3,176(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// b 0x820e0274
	goto loc_820E0274;
loc_820E0250:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,39
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 39, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0278
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0278;
	// lwz ctx_arrow(ctx)->r3,184(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0278
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0278;
	// bl 0x82144970
	sub_82144970(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0278
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0278;
	// lwz ctx_arrow(ctx)->r3,184(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_820E0274:
	// bl 0x82144a08
	sub_82144A08(ctx, base);
loc_820E0278:
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e034c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E034C;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// bl 0x821414d8
	sub_821414D8(ctx, base);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821414d8
	sub_821414D8(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r30.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e034c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E034C;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820d5430
	sub_820D5430(ctx, base);
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,32(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e02bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E02BC;
	// bl 0x820da578
	sub_820DA578(ctx, base);
loc_820E02BC:
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820ced38
	sub_820CED38(ctx, base);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,36(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e02f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E02F4;
loc_820E02D4:
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// lwz ctx_arrow(ctx)->r30,40(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820e0138
	sub_820E0138(ctx, base);
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e02d4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E02D4;
loc_820E02F4:
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,2
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 2, xer);
	// beq ctx_arrow(ctx)->r6,0x820e030c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E030C;
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820dc5f0
	sub_820DC5F0(ctx, base);
loc_820E030C:
	// lbz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,20(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,40
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 40, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0324
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0324;
	// bl 0x821188f8
	sub_821188F8(ctx, base);
	// b 0x820e0328
	goto loc_820E0328;
loc_820E0324:
	// bl 0x821188f8
	sub_821188F8(ctx, base);
loc_820E0328:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r28.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0348
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0348;
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820ccbb0
	sub_820CCBB0(ctx, base);
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820cca28
	sub_820CCA28(ctx, base);
	// lwz ctx_arrow(ctx)->r3,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820ccb00
	sub_820CCB00(ctx, base);
loc_820E0348:
	// stw ctx_arrow(ctx)->r29,16(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
loc_820E034C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed188
	return;
}

alias(__imp__sub_820E0358) PPC_WEAK_FUNC(sub_820E0358);
PPC_FUNC_IMPL(__imp__sub_820E0358) {
	PPC_FUNC_PROLOGUE();
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// b 0x820e0138
	sub_820E0138(ctx, base);
	return;
}

alias(__imp__sub_820E0360) PPC_WEAK_FUNC(sub_820E0360);
PPC_FUNC_IMPL(__imp__sub_820E0360) {
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
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,24,24
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x80;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e052c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E052C;
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u32 & 0x1;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e04d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E04D0;
	// lwz ctx_arrow(ctx)->r9,144(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 1, xer);
	// bge ctx_arrow(ctx)->r6,0x820e04d0
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820E04D0;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,0,26,26
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x20;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e04d0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E04D0;
	// lwz ctx_arrow(ctx)->r29,164(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r11,95
	ctx_arrow(ctx)->r11.s64 = 95;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r11,96
	ctx_arrow(ctx)->r11.s64 = 96;
	// stw ctx_arrow(ctx)->r11,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r11,97
	ctx_arrow(ctx)->r11.s64 = 97;
	// stw ctx_arrow(ctx)->r11,88(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// bl 0x8238ce40
	sub_8238CE40(&ctx);
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3,31
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u32 & 0x1;
	// bl 0x8238ce40
	sub_8238CE40(ctx, base);
	// lis ctx_arrow(ctx)->r28,-32014
	ctx_arrow(ctx)->r28.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r9,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-21846
	ctx_arrow(ctx)->r10.s64 = -1431699456;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,1,0,30
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 1) & 0xFFFFFFFE;
	// ori ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,43691
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u64 | 43691;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r30.u64;
	// lwz ctx_arrow(ctx)->r10,-6376(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r6,160(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,-6
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + -6;
	// mulhwu ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = (uint64_t(ctx_arrow(ctx)->r11.u32) * uint64_t(ctx_arrow(ctx)->r8.u32)) >> 32;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,31,1,31
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r6.s32, ctx_arrow(ctx)->r7.s32, xer);
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// subf ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r11.s64 - ctx_arrow(ctx)->r10.s64;
	// bge ctx_arrow(ctx)->r6,0x820e0444
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820E0444;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,38
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 38;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0444
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0444;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r11.u32, 0);
	// bl 0x82144970
	sub_82144970(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0444
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0444;
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82144a08
	sub_82144A08(ctx, base);
loc_820E0444:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,38
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 38;
	// lwz ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e052c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E052C;
	// bl 0x8209f588
	sub_8209F588(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e052c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E052C;
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r27,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r27.u32 | (ctx_arrow(ctx)->r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r10,17776
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r10.s64 + 17776;
	// add ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// lis ctx_arrow(ctx)->r10,-31994
	ctx_arrow(ctx)->r10.s64 = -2096758784;
	// lis ctx_arrow(ctx)->r11,-31994
	ctx_arrow(ctx)->r11.s64 = -2096758784;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r8,2982
	ctx_arrow(ctx)->r8.s64 = 2982;
	// lwz ctx_arrow(ctx)->r6,19944(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,19936(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82144920
	sub_82144920(ctx, base);
	// lwz ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,16(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x821448f8
	sub_821448F8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-6376(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subfic ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r29,1
	xer.ca = ctx_arrow(ctx)->r29.u32 <= 1;
	ctx_arrow(ctx)->r9.s64 = 1 - ctx_arrow(ctx)->r29.s64;
	// lwz ctx_arrow(ctx)->r10,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,160(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 160, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r9,164(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 164, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed184
	return;
loc_820E04D0:
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,0,27,25
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw ctx_arrow(ctx)->r10,100(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,152(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0500
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0500;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82144970
	sub_82144970(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0500
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0500;
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,152(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82144a08
	sub_82144A08(ctx, base);
loc_820E0500:
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r10,156(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e052c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E052C;
	// rotlwi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r3.u64 = __builtin_rotateleft32(ctx_arrow(ctx)->r10.u32, 0);
	// bl 0x82144970
	sub_82144970(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e052c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E052C;
	// lwz ctx_arrow(ctx)->r11,108(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,156(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x82144a08
	sub_82144A08(ctx, base);
loc_820E052C:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed184
	return;
}

alias(__imp__sub_820E0538) PPC_WEAK_FUNC(sub_820E0538);
PPC_FUNC_IMPL(__imp__sub_820E0538) {
	PPC_FUNC_PROLOGUE();
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820c9b80
	sub_820C9B80(ctx, base);
	// bl 0x820ca060
	sub_820CA060(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09A4;
	// lbz ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,7
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 7, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0598
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0598;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,3,3
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x10000000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e09a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E09A4;
	// li ctx_arrow(ctx)->r4,12
	ctx_arrow(ctx)->r4.s64 = 12;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x820d7748
	sub_820D7748(ctx, base);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820E0598:
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,8
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 8, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09A4;
	// lwz ctx_arrow(ctx)->r31,8(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lbz ctx_arrow(ctx)->r11,128(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,26
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 26, xer);
	// beq ctx_arrow(ctx)->r6,0x820e05bc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E05BC;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,87
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 87, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0628
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0628;
loc_820E05BC:
	// lhz ctx_arrow(ctx)->r10,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// extsh ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.s64 = ARRAY_S16_TO_S64(ctx_arrow(ctx)->r10, 0);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x820e0628
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820E0628;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lwz ctx_arrow(ctx)->r11,-6384(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// sth ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r11, 0);
	// bge ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820E09A4;
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0668
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0668;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 13;
	// bl 0x820d7748
	sub_820D7748(ctx, base);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820E0628:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,86
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 86, xer);
	// bne ctx_arrow(ctx)->r6,0x820e067c
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E067C;
	// lhz ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09A4;
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0668
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0668;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 13;
	// bl 0x820d7748
	sub_820D7748(ctx, base);
loc_820E0668:
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820E067C:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,34
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 34, xer);
	// bne ctx_arrow(ctx)->r6,0x820e06c8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E06C8;
	// lhz ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09A4;
	// li ctx_arrow(ctx)->r4,17
	ctx_arrow(ctx)->r4.s64 = 17;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x820d7748
	sub_820D7748(ctx, base);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r3,120
	ctx_arrow(ctx)->r3.s64 = 120;
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// bl 0x820b5808
	sub_820B5808(&ctx);
	// lis ctx_arrow(ctx)->r11,-32190
	ctx_arrow(ctx)->r11.s64 = -2109603840;
	// lwz ctx_arrow(ctx)->r10,19400(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,2
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 2;
	// stw ctx_arrow(ctx)->r10,19400(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 19400, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820E06C8:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,27
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 27, xer);
	// beq ctx_arrow(ctx)->r6,0x820e06d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E06D8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,33
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 33, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0754
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0754;
loc_820E06D8:
	// lhz ctx_arrow(ctx)->r10,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,32768
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 32768, xer);
	// bge ctx_arrow(ctx)->r6,0x820e0754
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820E0754;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u32 & 0xFFFF;
	// lwz ctx_arrow(ctx)->r11,-6384(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// sth ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r11, 0);
	// bge ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820E09A4;
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09A4;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 13;
	// bl 0x820d7748
	sub_820D7748(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e09a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E09A4;
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// sth ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r11, 0);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820E0754:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 29, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0840
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0840;
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// lwz ctx_arrow(ctx)->r11,17284(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0790
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0790;
	// lwz ctx_arrow(ctx)->r9,100(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,15,30,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 15) & 0x3;
	// slw ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ASSIGN_ARRAY_U8(ctx_arrow(ctx)->r9, 0, BINARY_OP_U8(ctx_arrow(ctx)->r9, 0, &, 0x20 ? 0 : (ctx_arrow(ctx)->r10.u32 << (ctx.PPCRegister_u8(ctx_arrow(ctx)->r9) & 0x3F)), 0));
	// and ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r9.u64 & ctx_arrow(ctx)->r11.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0790
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0790;
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// sth ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r11, 0);
loc_820E0790:
	// lhz ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// ble ctx_arrow(ctx)->r6,0x820e07cc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820E07CC;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lhz ctx_arrow(ctx)->r9,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r9.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// lwz ctx_arrow(ctx)->r11,-6384(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s64 - ctx_arrow(ctx)->r11.s64;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// sth ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r11, 0);
	// bgt ctx_arrow(ctx)->r6,0x820e09a4
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820E09A4;
	// sth ctx_arrow(ctx)->r10,130(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r10.u16);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820E07CC:
	// lhz ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09A4;
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09A4;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r30,13
	ctx_arrow(ctx)->r30.s64 = 13;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0800
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0800;
	// li ctx_arrow(ctx)->r30,17
	ctx_arrow(ctx)->r30.s64 = 17;
	// b 0x820e0810
	goto loc_820E0810;
loc_820E0800:
	// bl 0x820ae360
	sub_820AE360(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,34
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 34, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0810
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0810;
	// li ctx_arrow(ctx)->r30,19
	ctx_arrow(ctx)->r30.s64 = 19;
loc_820E0810:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r30.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x820d7748
	sub_820D7748(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e09a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E09A4;
	// li ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r11.s64 = -1;
	// sth ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r11, 0);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 4;
	// stw ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820E0840:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,28
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 28, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09A4;
	// lhz ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// lis ctx_arrow(ctx)->r11,-32013
	ctx_arrow(ctx)->r11.s64 = -2098003968;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,2288
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + 2288;
	// ble ctx_arrow(ctx)->r6,0x820e08c4
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820E08C4;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// lhz ctx_arrow(ctx)->r10,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// lwz ctx_arrow(ctx)->r11,-6384(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// subf ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 1, xer);
	// sth ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r11, 0);
	// bgt ctx_arrow(ctx)->r6,0x820e0918
	if (ctx_arrow(ctx)->r6.gt()) goto loc_820E0918;
	// li ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = 1;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// sth ctx_arrow(ctx)->r9,130(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r9.u16);
loc_820E0894:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e08b8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E08B8;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,120
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r30.s64 + 120;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820e0894
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820E0894;
	// b 0x820e0918
	goto loc_820E0918;
loc_820E08B8:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r30.u32);
	// b 0x820e0918
	goto loc_820E0918;
loc_820E08C4:
	// lhz ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820e0918
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E0918;
	// bl 0x820b3c98
	sub_820B3C98(ctx, base);
	// lfs f11,16(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16(ctx_arrow(ctx)->r27)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f13,20(ctx_arrow(ctx)->r27)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,20(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,12(ctx_arrow(ctx)->r27)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// lfs f0,17808(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x820e0918
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820E0918;
	// sth ctx_arrow(ctx)->r28,130(ctx_arrow(ctx)->r31)
	PPC_STORE_ARRAY_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r28, 0);
loc_820E0918:
	// lhz ctx_arrow(ctx)->r11,130(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r31.u32 + 130);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09A4;
	// lwz ctx_arrow(ctx)->r11,136(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09a4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09A4;
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x80000000;
	// subfic ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0
	xer.ca = ctx_arrow(ctx)->r11.u32 <= 0;
	ctx_arrow(ctx)->r11.s64 = 0 - ctx_arrow(ctx)->r11.s64;
	// subfe ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ASSIGN_TEMP_U8((~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 < ~ctx_arrow(ctx)->r11.u32) | (~ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r11.u32 + xer.ca < xer.ca));
	ctx_arrow(ctx)->r11.u64 = ~ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r11.u64 + xer.ca;
	xer.ca = ARRAY_TO_SCALAR_U8(temp, 0);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,13
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 13;
	// bl 0x820d7748
	sub_820D7748(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e09a4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E09A4;
	// li ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = -1;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r30.u64;
	// sth ctx_arrow(ctx)->r9,130(ctx_arrow(ctx)->r31)
	PPC_STORE_U16(ctx_arrow(ctx)->r31.u32 + 130, ctx_arrow(ctx)->r9.u16);
	// lwz ctx_arrow(ctx)->r9,100(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,4
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 4;
	// stw ctx_arrow(ctx)->r9,100(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 100, ctx_arrow(ctx)->r4.u32);
loc_820E0974:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r9.u32, ctx_arrow(ctx)->r31.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x820e099c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E099C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r30,120
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r30.s64 + 120;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 1;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, ctx_arrow(ctx)->r9.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820e0974
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820E0974;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
loc_820E099C:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r30.u32);
loc_820E09A4:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// b 0x823ed184
	return;
}

alias(__imp__sub_820E09B0) PPC_WEAK_FUNC(sub_820E09B0);
PPC_FUNC_IMPL(__imp__sub_820E09B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz ctx_arrow(ctx)->r31,36(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r31.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e09f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E09F0;
loc_820E09D0:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r30,40(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x820e09b0
	sub_820E09B0(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x820da640
	sub_820DA640(ctx, base);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r30.u64;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r30,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r30.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820e09d0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820E09D0;
loc_820E09F0:
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

alias(__imp__sub_820E0A08) PPC_WEAK_FUNC(sub_820E0A08);
PPC_FUNC_IMPL(__imp__sub_820E0A08) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lwz ctx_arrow(ctx)->r3,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,100(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820e0a54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820E0A54;
	// lbz ctx_arrow(ctx)->r11,2(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// rlwinm ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,0,29,29
	ctx_arrow(ctx)->r5.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 0) & 0x4;
	// bl 0x820e0138
	sub_820E0138(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_820E0A54:
	// lbz ctx_arrow(ctx)->r11,1(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// andi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,253
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 253;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// stb ctx_arrow(ctx)->r11,1(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 1, ctx.u8);
	// blr 
	return;
loc_820FAE80:
	// li ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = 1;
	// b 0x820fade0
	goto loc_820FADE0;
}

