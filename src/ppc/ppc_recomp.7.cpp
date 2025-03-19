#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_82125280) PPC_WEAK_FUNC(sub_82125280);
PPC_FUNC_IMPL(__imp__sub_82125280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed11c
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-96
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -96;
	// bl 0x823ed528
	// stwu ctx_arrow(ctx)->r1,-384(ctx_arrow(ctx)->r1)
	ea = -384 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f1.f64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f22,f2
	f22.f64 = ctx.f2.f64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r5.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r6.u64;
	// lfs f31,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,100
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 100;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,104
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 104;
	// lwz ctx_arrow(ctx)->r3,24(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,108
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 108;
	// fmr f20,f31
	f20.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r7.u64;
	// fmr f21,f31
	f21.f64 = f31.f64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r8.u64;
	// li ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r22.s64 = 0;
	// li ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r23.s64 = 0;
	// li ctx_arrow(ctx)->r21,0
	ctx_arrow(ctx)->r21.s64 = 0;
	// bl 0x821203d0
	sub_821203D0(ctx, base);
	// lfs f13,0(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,8(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,180(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 180, ctx_arrow(ctx)->r4.u32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f31
	ctx_arrow(ctx)->r6.compare(f0.f64, f31.f64);
	// bne ctx_arrow(ctx)->r6,0x82125324
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82125324;
	// fcmpu ctx_arrow(ctx)->r6,f13,f31
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f31.f64);
	// bne ctx_arrow(ctx)->r6,0x82125324
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82125324;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,384
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 384;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-96
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -96;
	// bl 0x823ed574
	// b 0x823ed16c
	return;
loc_82125324:
	// fmuls f12,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// lfs f26,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f26.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f26,f12
	ctx.f12.f64 = double(float(f26.f64 / ctx.f12.f64));
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f30,176(ctx_arrow(ctx)->r1)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 176, ctx_arrow(ctx)->r4.u32);
	// fmuls f29,f12,f13
	f29.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,14280(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stfs f29,184(ctx_arrow(ctx)->r1)
	temp.f32 = float(f29.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 184, ctx_arrow(ctx)->r4.u32);
	// fmuls f0,f30,f22
	f0.f64 = double(float(f30.f64 * f22.f64));
	// fmuls f13,f29,f22
	ctx.f13.f64 = double(float(f29.f64 * f22.f64));
	// fmuls f28,f0,f12
	f28.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmuls f27,f13,f12
	f27.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,15468(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f25,f0,f12
	f25.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmuls f24,f13,f12
	f24.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// bl 0x8211dd98
	sub_8211DD98(ctx, base);
	// bl 0x8210f8f0
	sub_8210F8F0(ctx, base);
	// lwz ctx_arrow(ctx)->r29,468(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f2,8(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfs f1,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// lfs f6,100(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmr f8,f26
	ctx.f8.f64 = f26.f64;
	// lfs f5,104(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f5.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r28,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// fsubs f4,f2,f28
	ctx.f4.f64 = double(float(ctx.f2.f64 - f28.f64));
	// fadds f3,f1,f27
	ctx.f3.f64 = double(float(ctx.f1.f64 + f27.f64));
	// bl 0x82112020
	sub_82112020(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// lis ctx_arrow(ctx)->r25,-32010
	ctx_arrow(ctx)->r25.s64 = -2097807360;
	// beq ctx_arrow(ctx)->r6,0x82125410
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82125410;
	// lfs f0,8(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// lfs f13,0(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f25
	f0.f64 = double(float(f0.f64 - f25.f64));
	// fmadds f13,f30,f23,f13
	ctx.f13.f64 = double(float(f30.f64 * f23.f64 + ctx.f13.f64));
	// lfs f12,8(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfs f6,100(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmr f8,f26
	ctx.f8.f64 = f26.f64;
	// lfs f5,104(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// fsubs f2,f12,f28
	ctx.f2.f64 = double(float(ctx.f12.f64 - f28.f64));
	// fadds f1,f27,f11
	ctx.f1.f64 = double(float(f27.f64 + ctx.f11.f64));
	// fmadds f4,f29,f23,f0
	ctx.f4.f64 = double(float(f29.f64 * f23.f64 + f0.f64));
	// fadds f3,f13,f24
	ctx.f3.f64 = double(float(ctx.f13.f64 + f24.f64));
	// bl 0x82112020
	sub_82112020(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82125470
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82125470;
loc_82125410:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// li ctx_arrow(ctx)->r22,1
	ctx_arrow(ctx)->r22.s64 = 1;
	// bl 0x82110500
	sub_82110500(ctx, base);
	// lfs f9,136(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// fneg f12,f29
	ctx.f12.u64 = f29.u64 ^ 0x8000000000000000;
	// fsubs f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f11,128(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f11,f10
	f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f31
	ctx_arrow(ctx)->r6.compare(f0.f64, f31.f64);
	// bgt ctx_arrow(ctx)->r6,0x8212546c
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8212546C;
	// lfs f0,116(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,132(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,112(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 112, ctx_arrow(ctx)->r4.u32);
	// stfs f13,116(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 116, ctx_arrow(ctx)->r4.u32);
	// stfs f9,120(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 120, ctx_arrow(ctx)->r4.u32);
	// stfs f10,128(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 128, ctx_arrow(ctx)->r4.u32);
	// stfs f0,132(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// stfs f8,136(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 136, ctx_arrow(ctx)->r4.u32);
loc_8212546C:
	// lfs f20,21272(ctx_arrow(ctx)->r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f20.f64 = double(temp.f32);
loc_82125470:
	// lfs f2,8(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// lfs f1,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfs f6,100(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f6.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r28,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// lfs f5,104(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmr f8,f26
	ctx.f8.f64 = f26.f64;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// fadds f4,f2,f28
	ctx.f4.f64 = double(float(ctx.f2.f64 + f28.f64));
	// fsubs f3,f1,f27
	ctx.f3.f64 = double(float(ctx.f1.f64 - f27.f64));
	// bl 0x82112020
	sub_82112020(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821254f4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821254F4;
	// lfs f12,8(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// lfs f0,0(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f2,f12,f28
	ctx.f2.f64 = double(float(ctx.f12.f64 + f28.f64));
	// fsubs f0,f0,f24
	f0.f64 = double(float(f0.f64 - f24.f64));
	// lfs f13,8(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f29,f23,f25
	ctx.f12.f64 = double(float(f29.f64 * f23.f64 + f25.f64));
	// lfs f11,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfs f6,100(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,104(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmr f8,f26
	ctx.f8.f64 = f26.f64;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// fsubs f1,f11,f27
	ctx.f1.f64 = double(float(ctx.f11.f64 - f27.f64));
	// fmadds f3,f30,f23,f0
	ctx.f3.f64 = double(float(f30.f64 * f23.f64 + f0.f64));
	// fadds f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// bl 0x82112020
	sub_82112020(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x82125570
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_82125570;
loc_821254F4:
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// li ctx_arrow(ctx)->r23,1
	ctx_arrow(ctx)->r23.s64 = 1;
	// bl 0x82110500
	sub_82110500(ctx, base);
	// lfs f0,168(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f12,152(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f8,f29
	ctx.f8.u64 = f29.u64 ^ 0x8000000000000000;
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lfs f13,160(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,144(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fmadds f10,f8,f10,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fcmpu ctx_arrow(ctx)->r6,f10,f31
	ctx_arrow(ctx)->r6.compare(ctx.f10.f64, f31.f64);
	// bgt ctx_arrow(ctx)->r6,0x82125568
	if (ctx_arrow(ctx)->r6.gt()) goto loc_82125568;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f9,148(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f13,164(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// stfs f13,148(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 148, ctx_arrow(ctx)->r4.u32);
	// stfs f11,144(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 144, ctx_arrow(ctx)->r4.u32);
	// stfs f12,152(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 152, ctx_arrow(ctx)->r4.u32);
	// stfs f9,164(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 164, ctx_arrow(ctx)->r4.u32);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// stfs f13,160(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 160, ctx_arrow(ctx)->r4.u32);
	// fmr f0,f8
	f0.f64 = ctx.f8.f64;
	// stfs f0,168(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 168, ctx_arrow(ctx)->r4.u32);
loc_82125568:
	// lfs f21,21272(ctx_arrow(ctx)->r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f21.f64 = double(temp.f32);
	// b 0x82125580
	goto loc_82125580;
loc_82125570:
	// lfs f0,168(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,160(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,144(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
loc_82125580:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82125600
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82125600;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821255cc
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821255CC;
	// fcmpu ctx_arrow(ctx)->r6,f20,f21
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f20.f64, f21.f64);
	// bge ctx_arrow(ctx)->r6,0x82125608
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82125608;
	// lfs f0,112(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r27)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,120(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,116(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r27)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,128(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f13,4(ctx_arrow(ctx)->r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f0,0(ctx_arrow(ctx)->r26)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f13,132(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,136(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f13,4(ctx_arrow(ctx)->r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r26)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// b 0x821256b0
	goto loc_821256B0;
loc_821255CC:
	// lfs f0,112(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r27)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,116(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r27)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,120(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r27)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,128(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r26)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,132(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r26)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,136(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r26)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// b 0x821256b0
	goto loc_821256B0;
loc_82125600:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r23,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r23.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8212562c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8212562C;
loc_82125608:
	// stfs f11,0(ctx_arrow(ctx)->r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f11,148(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(ctx_arrow(ctx)->r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f12,8(ctx_arrow(ctx)->r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f13,0(ctx_arrow(ctx)->r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f13,164(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(ctx_arrow(ctx)->r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r26)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// b 0x821256b0
	goto loc_821256B0;
loc_8212562C:
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r29.u64;
	// lfs f4,8(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfs f3,0(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// stw ctx_arrow(ctx)->r28,96(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// lfs f1,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmr f8,f26
	ctx.f8.f64 = f26.f64;
	// lfs f6,100(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// lfs f5,104(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f5.f64 = double(temp.f32);
	// bl 0x82112020
	sub_82112020(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82125694
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82125694;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r29.u64;
	// lfs f2,8(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfs f1,0(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,100(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f22
	ctx.f3.f64 = f22.f64;
	// lfs f4,104(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x821126c0
	sub_821126C0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// bge ctx_arrow(ctx)->r6,0x82125694
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_82125694;
	// li ctx_arrow(ctx)->r21,1
	ctx_arrow(ctx)->r21.s64 = 1;
	// b 0x821256b0
	goto loc_821256B0;
loc_82125694:
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82110500
	sub_82110500(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r26.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r27.u64;
	// bl 0x82124dc0
	sub_82124DC0(ctx, base);
loc_821256B0:
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r24.u64;
	// bl 0x8211dd98
	sub_8211DD98(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r21
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r21.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,384
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 384;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-96
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -96;
	// bl 0x823ed574
	// b 0x823ed16c
	return;
}

alias(__imp__sub_821256D0) PPC_WEAK_FUNC(sub_821256D0);
PPC_FUNC_IMPL(__imp__sub_821256D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed120
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-88
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -88;
	// bl 0x823ed540
	// stwu ctx_arrow(ctx)->r1,-256(ctx_arrow(ctx)->r1)
	ea = -256 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// mr ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r5
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r5.u64;
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r22,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r22.u64 = ctx_arrow(ctx)->r8.u64;
	// mr ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r24.u64 = ctx_arrow(ctx)->r9.u64;
	// lwz ctx_arrow(ctx)->r30,24(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r30.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r23,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r23.u64 = ctx_arrow(ctx)->r10.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8212571c
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8212571C;
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r31.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r6.u64;
	// b 0x82125724
	goto loc_82125724;
loc_8212571C:
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r6.u64;
	// mr ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r31.u64;
loc_82125724:
	// lfs f13,12(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30,12
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r30.s64 + 12;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,8(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f1,f10
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, ctx.f10.f64);
	// fmuls f30,f0,f11
	f30.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f29,f13,f11
	f29.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// ble ctx_arrow(ctx)->r6,0x82125780
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_82125780;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f1,14156(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82125784
	goto loc_82125784;
loc_82125780:
	// bl 0x8210acb8
	sub_8210ACB8(ctx, base);
loc_82125784:
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r25,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r25.s32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x821257a8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_821257A8;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f0
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, f0.f64);
	// beq ctx_arrow(ctx)->r6,0x821257a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821257A8;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,6588(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 - ctx.f1.f64));
loc_821257A8:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x823edcb0
	sub_823EDCB0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f28,f0
	f28.f64 = double(float(f0.f64));
	// bl 0x823edbe0
	sub_823EDBE0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmuls f13,f28,f30
	ctx.f13.f64 = double(float(f28.f64 * f30.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmsubs f28,f0,f29,f13
	f28.f64 = double(float(f0.f64 * f29.f64 - ctx.f13.f64));
	// bl 0x823edbe0
	sub_823EDBE0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fneg f26,f0
	f26.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x823edcb0
	sub_823EDCB0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lfs f13,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r26
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r26.u64;
	// lfs f31,4(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f31.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r31,348(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r27
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r27.u64;
	// fadds f30,f13,f28
	f30.f64 = double(float(ctx.f13.f64 + f28.f64));
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lfs f2,36(ctx_arrow(ctx)->r29)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r5,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// stfs f31,100(ctx_arrow(ctx)->r1)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 100, ctx_arrow(ctx)->r4.u32);
	// stfs f30,96(ctx_arrow(ctx)->r1)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 96, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r31,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fnmsubs f0,f0,f29,f26
	f0.f64 = double(float(-(f0.f64 * f29.f64 - f26.f64)));
	// fadds f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 + f0.f64));
	// stfs f29,104(ctx_arrow(ctx)->r1)
	temp.f32 = float(f29.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 104, ctx_arrow(ctx)->r4.u32);
	// bl 0x82124e28
	sub_82124E28(&ctx);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821258d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821258D8;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r22,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r22.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x82125880
	if (ctx_arrow(ctx)->r6.eq()) goto loc_82125880;
	// mr ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r31.u64;
	// lwz ctx_arrow(ctx)->r5,24(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// mr ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r7.u64 = ctx_arrow(ctx)->r24.u64;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r28.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x82124cb0
	sub_82124CB0(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x821258d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821258D8;
loc_82125880:
	// lwz ctx_arrow(ctx)->r11,356(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// beq ctx_arrow(ctx)->r6,0x821258b4
	if (ctx_arrow(ctx)->r6.eq()) goto loc_821258B4;
	// stfs f30,44(ctx_arrow(ctx)->r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r23.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// stb ctx_arrow(ctx)->r11,3(ctx_arrow(ctx)->r23)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r23.u32 + 3, ctx.u8);
	// blr 
	return;
}

