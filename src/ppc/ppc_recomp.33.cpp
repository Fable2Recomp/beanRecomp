#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_8238B7B8) PPC_WEAK_FUNC(sub_8238B7B8);
PPC_FUNC_IMPL(__imp__sub_8238B7B8) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lfs f0,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// stfs f0,0(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,16(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// stfs f0,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,32(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// stfs f0,8(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,0(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,20(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f12,4(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,36(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f11,8(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f11
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f11.f64));
	// stfs f0,8(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,0(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,24(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f12,4(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f11,8(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,40(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f11
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f11.f64));
	// lfs f1,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,8(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bl 0x8238ca50
	sub_8238CA50(&ctx);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lfs f1,4(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// bl 0x8238ca50
	sub_8238CA50(&ctx);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lfs f1,8(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// bl 0x8238ca50
	sub_8238CA50(&ctx);
	// stfs f1,8(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
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

alias(__imp__sub_8238B890) PPC_WEAK_FUNC(sub_8238B890);
PPC_FUNC_IMPL(__imp__sub_8238B890) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// bl 0x823ed538
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,92
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 92;
	// fmr f25,f2
	f25.f64 = ctx.f2.f64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f24,f3
	f24.f64 = ctx.f3.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmr f30,f5
	f30.f64 = ctx.f5.f64;
	// fmr f29,f6
	f29.f64 = ctx.f6.f64;
	// fmr f28,f7
	f28.f64 = ctx.f7.f64;
	// fmr f27,f8
	f27.f64 = ctx.f8.f64;
	// fmr f26,f9
	f26.f64 = ctx.f9.f64;
	// bl 0x8238d110
	sub_8238D110(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,100
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 100;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// bl 0x8238d110
	sub_8238D110(ctx, base);
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x8238d110
	sub_8238D110(ctx, base);
	// lfs f13,96(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f11,88(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,84(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f11,f13
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f0,92(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f10,100(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f5,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f28,48(ctx_arrow(ctx)->r31)
	temp.f32 = float(f28.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f27,52(ctx_arrow(ctx)->r31)
	temp.f32 = float(f27.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f26,56(ctx_arrow(ctx)->r31)
	temp.f32 = float(f26.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f6,24(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f12,0(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f11,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f9,8(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// fcmpu ctx_arrow(ctx)->r6,f31,f5
	ctx_arrow(ctx)->r6.compare(f31.f64, ctx.f5.f64);
	// fmsubs f10,f8,f0,f3
	ctx.f10.f64 = double(float(ctx.f8.f64 * f0.f64 - ctx.f3.f64));
	// stfs f4,40(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
	// fmadds f8,f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f1.f64));
	// stfs f10,16(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// fmadds f0,f7,f0,f2
	f0.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f2.f64));
	// stfs f8,32(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// fmsubs f13,f7,f13,f30
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - f30.f64));
	// stfs f0,20(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// stfs f13,36(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x8238b9a8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238B9A8;
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f12,0(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f11,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// fmuls f12,f9,f31
	ctx.f12.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfs f12,8(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_8238B9A8:
	// fcmpu ctx_arrow(ctx)->r6,f25,f5
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f25.f64, ctx.f5.f64);
	// beq ctx_arrow(ctx)->r6,0x8238b9c8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238B9C8;
	// fmuls f12,f10,f25
	ctx.f12.f64 = double(float(ctx.f10.f64 * f25.f64));
	// stfs f12,16(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// fmuls f0,f0,f25
	f0.f64 = double(float(f0.f64 * f25.f64));
	// stfs f0,20(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// fmuls f12,f6,f25
	ctx.f12.f64 = double(float(ctx.f6.f64 * f25.f64));
	// stfs f12,24(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 24, ctx_arrow(ctx)->r4.u32);
loc_8238B9C8:
	// fcmpu ctx_arrow(ctx)->r6,f24,f5
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f24.f64, ctx.f5.f64);
	// beq ctx_arrow(ctx)->r6,0x8238b9e8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238B9E8;
	// fmuls f0,f8,f24
	f0.f64 = double(float(ctx.f8.f64 * f24.f64));
	// stfs f0,32(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 32, ctx_arrow(ctx)->r4.u32);
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * f24.f64));
	// stfs f13,36(ctx_arrow(ctx)->r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 36, ctx_arrow(ctx)->r4.u32);
	// fmuls f0,f4,f24
	f0.f64 = double(float(ctx.f4.f64 * f24.f64));
	// stfs f0,40(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 40, ctx_arrow(ctx)->r4.u32);
loc_8238B9E8:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stfs f5,60(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 60, ctx_arrow(ctx)->r4.u32);
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// stfs f0,28(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 28, ctx_arrow(ctx)->r4.u32);
	// stfs f0,44(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 44, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// bl 0x823ed584
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_8238BA20) PPC_WEAK_FUNC(sub_8238BA20);
PPC_FUNC_IMPL(__imp__sub_8238BA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// std ctx_arrow(ctx)->r9,64(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 64);
	// std ctx_arrow(ctx)->r10,72(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 72);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,64
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 64;
	// std ctx_arrow(ctx)->r5,32(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 32);
	// std ctx_arrow(ctx)->r6,40(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 40);
	// std ctx_arrow(ctx)->r7,48(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 48);
	// std ctx_arrow(ctx)->r8,56(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 56);
	// lvx128 v13,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,32
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 32;
	// lvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// vmrglw v7,v12,v13
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v0,v12,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// lvx128 v11,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,48
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 48;
	// vor v5,v7,v7
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v5), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v7)));
	// lvx128 v10,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v10), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v5,v0,3,2
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// vmrglw v13,v10,v11
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v8,v10,v11
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v10,v7,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrglw v9,v7,v13
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vor v6,v8,v8
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v6), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v8)));
	// vmrglw v11,v0,v8
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v12,v0,v8
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vrlimi128 v0,v7,12,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 12));
	// vpermwi128 v28,v10,5
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFA));
	// vpermwi128 v3,v9,187
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x44));
	// vrlimi128 v6,v13,12,2
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 12));
	// vpermwi128 v1,v11,5
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFA));
	// vrlimi128 v13,v8,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 3));
	// vpermwi128 v29,v12,5
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFA));
	// vpermwi128 v8,v12,187
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x44));
	// vmulfp128 v31,v28,v3
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v3.f32)));
	// vpermwi128 v4,v10,187
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x44));
	// vmulfp128 v5,v5,v6
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v6.f32)));
	// vpermwi128 v6,v11,187
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x44));
	// vpermwi128 v30,v9,5
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFA));
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v2), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v1)));
	// vspltisw v3,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_set1_epi32(int(0x0)));
	// vpermwi128 v28,v10,132
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x7B));
	// vmulfp128 v1,v29,v6
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v6.f32)));
	// vor v29,v8,v8
	_mm_store_si128((__m128i*)PPCRegister_u8(v29), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v8)));
	// vspltisw v6,-1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vnmsubfp v8,v4,v30,v31
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(v30.f32)), _mm_load_ps(v31.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v31,v11,97
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9E));
	// vnmsubfp v0,v13,v0,v5
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v30,v12,132
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x7B));
	// vnmsubfp v7,v29,v2,v1
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vslw v2,v6,v6
	ctx.v2.u32[0] = ctx.v6.u32[0] << (ctx.PPCRegister_u8(v6)[0] & 0x1F);
	ctx.v2.u32[1] = ctx.v6.u32[1] << (ctx.PPCRegister_u8(v6)[4] & 0x1F);
	ctx.v2.u32[2] = ctx.v6.u32[2] << (ctx.PPCRegister_u8(v6)[8] & 0x1F);
	ctx.v2.u32[3] = ctx.v6.u32[3] << (ctx.PPCRegister_u8(v6)[12] & 0x1F);
	// vpermwi128 v29,v9,97
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9E));
	// vmrghw v1,v3,v2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v2,v2,v3
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vpermwi128 v13,v8,156
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x63));
	// vpermwi128 v6,v8,198
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// vsldoi v23,v8,v0,8
	_mm_store_si128((__m128i*)PPCRegister_u8(v23), _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v8)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), 8));
	// vor v27,v13,v13
	_mm_store_si128((__m128i*)PPCRegister_u8(v27), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)));
	// vpermwi128 v5,v7,156
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0x63));
	// vor v26,v6,v6
	_mm_store_si128((__m128i*)PPCRegister_u8(v26), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v6)));
	// vpermwi128 v4,v7,198
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0x39));
	// vrlimi128 v6,v0,1,1
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 147), 1));
	// vrlimi128 v13,v0,2,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 2));
	// vrlimi128 v27,v0,8,1
	_mm_store_ps(v27.f32, _mm_blend_ps(_mm_load_ps(v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 147), 8));
	// vor v25,v5,v5
	_mm_store_si128((__m128i*)PPCRegister_u8(v25), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v5)));
	// vor v24,v4,v4
	_mm_store_si128((__m128i*)PPCRegister_u8(v24), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v4)));
	// vrlimi128 v26,v0,4,0
	_mm_store_ps(v26.f32, _mm_blend_ps(_mm_load_ps(v26.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 4));
	// vmulfp128 v31,v31,v27
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(v27.f32)));
	// vrlimi128 v5,v0,2,0
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 2));
	// vrlimi128 v25,v0,8,3
	_mm_store_ps(v25.f32, _mm_blend_ps(_mm_load_ps(v25.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 8));
	// vpermwi128 v27,v11,182
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x49));
	// vrlimi128 v24,v0,4,2
	_mm_store_ps(v24.f32, _mm_blend_ps(_mm_load_ps(v24.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 4));
	// vrlimi128 v4,v0,1,3
	_mm_store_ps(ctx.v4.f32, _mm_blend_ps(_mm_load_ps(ctx.v4.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 1));
	// vmulfp128 v30,v30,v26
	_mm_store_ps(v30.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v26.f32)));
	// vor v21,v5,v5
	_mm_store_si128((__m128i*)PPCRegister_u8(v21), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v5)));
	// vpermwi128 v26,v12,237
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x12));
	// vmulfp128 v29,v29,v25
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v25.f32)));
	// vpermwi128 v25,v9,182
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x49));
	// vmulfp128 v28,v28,v24
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v24.f32)));
	// vpermwi128 v24,v10,237
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x12));
	// vor v22,v4,v4
	_mm_store_si128((__m128i*)PPCRegister_u8(v22), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v4)));
	// vnmsubfp v5,v27,v6,v31
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(v31.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v4,v26,v13,v30
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(v30.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v13,v8,78
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xB1));
	// vpermwi128 v8,v11,204
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x33));
	// vnmsubfp v31,v25,v22,v29
	_mm_store_ps(v31.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(v22.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v11,v7,78
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xB1));
	// vnmsubfp v30,v24,v21,v28
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(v21.f32)), _mm_load_ps(v28.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v29,v12,114
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x8D));
	// li ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r11.s64 = 16;
	// vpermwi128 v10,v10,114
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x8D));
	// vrlimi128 v13,v0,9,1
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 147), 9));
	// vpermwi128 v6,v23,56
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v23.u32), 0xC7));
	// vxor v8,v8,v1
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v8), _mm_xor_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v8)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v1))));
	// vmrglw v7,v7,v0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vrlimi128 v11,v0,9,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 9));
	// vxor v0,v29,v2
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_xor_si128(_mm_load_si128((__m128i*)PPCRegister_u8(v29)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v2))));
	// vpermwi128 v9,v9,204
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x33));
	// vxor v2,v10,v2
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v2), _mm_xor_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v10)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v2))));
	// li ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = 32;
	// vmaddfp v10,v8,v6,v5
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v5.f32)));
	// li ctx_arrow(ctx)->r9,48
	ctx_arrow(ctx)->r9.s64 = 48;
	// vpermwi128 v7,v7,52
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xCB));
	// vxor v9,v9,v1
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v9), _mm_xor_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v9)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v1))));
	// vmaddfp v8,v0,v13,v4
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v2,v11,v30
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(v30.f32)));
	// vmaddfp v9,v9,v7,v31
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(v31.f32)));
	// vmsum4fp128 v0,v10,v12
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r4
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrefp v13,v0
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v0.f32)));
	// vor v6,v0,v0
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v6), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)));
	// vor v7,v0,v0
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v7), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)));
	// vupkd3d128 v0,v3,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.PPCRegister_s16(v3)[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.PPCRegister_s16(v3)[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vnmsubfp v0,v7,v13,v12
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v4,v13,v13
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v4), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v13,v6,v0,v12
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v0,v4,v0,v12
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v4))), _mm_and_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)))));
	// vmulfp128 v13,v10,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v8,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v9,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r3
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v10)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

alias(__imp__sub_8238BC28) PPC_WEAK_FUNC(sub_8238BC28);
PPC_FUNC_IMPL(__imp__sub_8238BC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r9.s64 = 16;
	// lvx128 v10,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r3
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v10), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r11.s64 = 48;
	// lvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r4
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = 32;
	// lvx128 v9,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v9), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v7), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v8), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v5,v9,v7
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrglw v4,v10,v8
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lvx128 v13,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v6,v10,v8
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lvx128 v12,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw v7,v9,v7
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lvx128 v11,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v10,v6,v5
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrglw v8,v6,v5
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v9,v4,v7
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrglw v7,v4,v7
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmsum4fp128 v6,v0,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v4,v0,v8
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v5,v0,v9
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v0,v0,v7
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v3,v13,v8
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v2,v13,v7
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v1,v13,v9
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v13,v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw v6,v6,v5
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v0,v4,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmsum4fp128 v4,v12,v8
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v8,v11,v8
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmrghw v5,v3,v2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmsum4fp128 v3,v12,v9
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v9,v11,v9
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmrghw v0,v6,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmsum4fp128 v6,v12,v7
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v12,v12,v10
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw v13,v13,v1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmsum4fp128 v7,v11,v7
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v11,v11,v10
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r5
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v0,v13,v5
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v0,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v10,v4,v6
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrghw v13,v12,v3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v12,v8,v7
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v11,v11,v9
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v13,v13,v10
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v12,v11,v12
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// stvx128 v13,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

alias(__imp__sub_8238BCF8) PPC_WEAK_FUNC(sub_8238BCF8);
PPC_FUNC_IMPL(__imp__sub_8238BCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r9.s64 = 16;
	// lvx128 v10,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r3
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v10), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = 32;
	// lvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r4
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r11.s64 = 48;
	// lvx128 v9,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v9), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v8), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v7), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v6,v10,v8
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v5,v9,v7
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lvx128 v13,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw v4,v10,v8
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// lvx128 v12,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrglw v7,v9,v7
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// lvx128 v11,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v10,v6,v5
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrglw v9,v6,v5
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v8,v4,v7
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrglw v7,v4,v7
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmsum4fp128 v5,v13,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v4,v12,v10
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v6,v11,v10
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v10,v0,v10
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v3,v11,v9
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v2,v13,v9
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v1,v12,v9
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v9,v0,v9
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmrghw v6,v5,v6
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmsum4fp128 v4,v13,v8
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v13,v13,v7
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmrghw v5,v2,v3
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmsum4fp128 v3,v12,v8
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v12,v12,v7
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmrghw v10,v10,v6
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmsum4fp128 v6,v11,v8
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v11,v11,v7
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v8,v0,v8
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v7,v0,v7
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmrghw v0,v9,v1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// stvx128 v10,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r5
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v10)), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stvx128 v0,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v10,v4,v6
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrghw v11,v13,v11
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v9,v8,v3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v12,v7,v12
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v13,v9,v10
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v11
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// stvx128 v13,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r5.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

alias(__imp__sub_8238BDC8) PPC_WEAK_FUNC(sub_8238BDC8);
PPC_FUNC_IMPL(__imp__sub_8238BDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r9.s64 = 16;
	// lvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r3
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = 32;
	// li ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r11.s64 = 48;
	// lvx128 v13,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v10,v0,v12
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v9,v13,v11
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrglw v0,v0,v12
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v13,v13,v11
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v12,v10,v9
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrglw v11,v10,v9
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v10,v0,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r4
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v11)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v10)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r4.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

alias(__imp__sub_8238BE18) PPC_WEAK_FUNC(sub_8238BE18);
PPC_FUNC_IMPL(__imp__sub_8238BE18) {
	PPC_FUNC_PROLOGUE();
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
	// stwu ctx_arrow(ctx)->r1,-224(ctx_arrow(ctx)->r1)
	ea = -224 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r28,16
	ctx_arrow(ctx)->r28.s64 = 16;
	// li ctx_arrow(ctx)->r29,32
	ctx_arrow(ctx)->r29.s64 = 32;
	// li ctx_arrow(ctx)->r30,48
	ctx_arrow(ctx)->r30.s64 = 48;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lvx128 v13,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r28
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lvx128 v12,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li ctx_arrow(ctx)->r5,16
	ctx_arrow(ctx)->r5.s64 = 16;
	// lvx128 v11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// stvx128 v13,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// stvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// stvx128 v11,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v11)), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823ee010
	sub_823EE010(ctx, base);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// ld ctx_arrow(ctx)->r5,112(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r5.u64 = PPC_Read_U64(ctx,  ctx);
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// ld ctx_arrow(ctx)->r6,120(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r6.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r7,128(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r7.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r8,136(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r9,144(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r10,152(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U64(ctx,  ctx);
	// bl 0x8238ba20
	sub_8238BA20(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,96(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r3
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r28
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r30
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v11)), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne ctx_arrow(ctx)->r6,0x8238bed8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8238BED8;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
loc_8238BED8:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,224
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 224;
	// b 0x823ed188
	return;
}

alias(__imp__sub_8238BEE0) PPC_WEAK_FUNC(sub_8238BEE0);
PPC_FUNC_IMPL(__imp__sub_8238BEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,8(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 48, ctx_arrow(ctx)->r4.u32);
	// stfs f0,56(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 56, ctx_arrow(ctx)->r4.u32);
	// stfs f13,52(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 52, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238BF00) PPC_WEAK_FUNC(sub_8238BF00);
PPC_FUNC_IMPL(__imp__sub_8238BF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
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
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x821889d8
	sub_821889D8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r7,48
	ctx_arrow(ctx)->r7.s64 = 48;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,92
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 92;
	// stfs f0,88(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.PPCRegister_s16(v0)[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.PPCRegister_s16(v0)[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// lfs f0,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lvlx v13,0,ctx_arrow(ctx)->r10
	temp.u32 = ctx_arrow(ctx)->r10.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lvlx v12,0,ctx_arrow(ctx)->r9
	temp.u32 = ctx_arrow(ctx)->r9.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li ctx_arrow(ctx)->r10,16
	ctx_arrow(ctx)->r10.s64 = 16;
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stfs f0,92(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// lvlx v11,0,ctx_arrow(ctx)->r11
	temp.u32 = ctx_arrow(ctx)->r11.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.s64 = 32;
	// lvlx v13,0,ctx_arrow(ctx)->r8
	temp.u32 = ctx_arrow(ctx)->r8.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v11,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v13,v12,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// vpermwi128 v12,v0,234
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x15));
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v0,v13,227
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x1C));
	// vpermwi128 v13,v13,219
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x24));
	// stvx128 v0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)VectorMaskL)));
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

alias(__imp__sub_8238BFB0) PPC_WEAK_FUNC(sub_8238BFB0);
PPC_FUNC_IMPL(__imp__sub_8238BFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
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
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x821889d8
	sub_821889D8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r7,16
	ctx_arrow(ctx)->r7.s64 = 16;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,92
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 92;
	// stfs f0,88(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.PPCRegister_s16(v0)[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.PPCRegister_s16(v0)[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// lfs f0,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lvlx v13,0,ctx_arrow(ctx)->r10
	temp.u32 = ctx_arrow(ctx)->r10.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lvlx v12,0,ctx_arrow(ctx)->r9
	temp.u32 = ctx_arrow(ctx)->r9.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li ctx_arrow(ctx)->r10,48
	ctx_arrow(ctx)->r10.s64 = 48;
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stfs f0,92(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// lvlx v11,0,ctx_arrow(ctx)->r11
	temp.u32 = ctx_arrow(ctx)->r11.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li ctx_arrow(ctx)->r9,32
	ctx_arrow(ctx)->r9.s64 = 32;
	// lvlx v13,0,ctx_arrow(ctx)->r8
	temp.u32 = ctx_arrow(ctx)->r8.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v11,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v13,v12,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// vpermwi128 v12,v0,186
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x45));
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v12,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v0,v13,183
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x48));
	// vpermwi128 v13,v13,59
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xC4));
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)VectorMaskL)));
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

alias(__imp__sub_8238C060) PPC_WEAK_FUNC(sub_8238C060);
PPC_FUNC_IMPL(__imp__sub_8238C060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
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
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x821889d8
	sub_821889D8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,88
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + 88;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// li ctx_arrow(ctx)->r7,32
	ctx_arrow(ctx)->r7.s64 = 32;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,92
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 92;
	// stfs f0,88(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.PPCRegister_s16(v0)[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.PPCRegister_s16(v0)[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// lfs f0,80(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// lvlx v13,0,ctx_arrow(ctx)->r10
	temp.u32 = ctx_arrow(ctx)->r10.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lvlx v12,0,ctx_arrow(ctx)->r9
	temp.u32 = ctx_arrow(ctx)->r9.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li ctx_arrow(ctx)->r10,48
	ctx_arrow(ctx)->r10.s64 = 48;
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stfs f0,92(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 92, ctx_arrow(ctx)->r4.u32);
	// lvlx v11,0,ctx_arrow(ctx)->r11
	temp.u32 = ctx_arrow(ctx)->r11.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r9.s64 = 16;
	// lvlx v13,0,ctx_arrow(ctx)->r8
	temp.u32 = ctx_arrow(ctx)->r8.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v11,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v13,v12,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// vpermwi128 v12,v0,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x51));
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v12,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r7
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v0,v13,143
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x70));
	// vpermwi128 v13,v13,111
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x90));
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)VectorMaskL)));
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

alias(__imp__sub_8238C110) PPC_WEAK_FUNC(sub_8238C110);
PPC_FUNC_IMPL(__imp__sub_8238C110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r24{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// bl 0x823ed138
	// stwu ctx_arrow(ctx)->r1,-192(ctx_arrow(ctx)->r1)
	ea = -192 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// extsb ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s8;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-88
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -88;
	// li ctx_arrow(ctx)->r29,16
	ctx_arrow(ctx)->r29.s64 = 16;
	// li ctx_arrow(ctx)->r30,32
	ctx_arrow(ctx)->r30.s64 = 32;
	// li ctx_arrow(ctx)->r31,48
	ctx_arrow(ctx)->r31.s64 = 48;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,34
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 34, xer);
	// bgt ctx_arrow(ctx)->r6,0x8238c234
	if (ctx_arrow(ctx)->r6.gt()) goto loc_8238C234;
	// lis ctx_arrow(ctx)->r12,-32199
	ctx_arrow(ctx)->r12.s64 = -2110193664;
	// addi ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r12,-16044
	ctx_arrow(ctx)->r12.s64 = ctx_arrow(ctx)->r12.s64 + -16044;
	// rlwinm ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r0.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r12,ctx_arrow(ctx)->r0
	ctx_arrow(ctx)->r0.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r0
	ctr.u64 = ctx_arrow(ctx)->r0.u64;
	// bctr 
	switch (ctx_arrow(ctx)->r11.u64) {
	case 0:
		goto loc_8238C1E0;
	case 1:
		goto loc_8238C1FC;
	case 2:
		goto loc_8238C218;
	case 3:
		goto loc_8238C234;
	case 4:
		goto loc_8238C234;
	case 5:
		goto loc_8238C234;
	case 6:
		goto loc_8238C234;
	case 7:
		goto loc_8238C234;
	case 8:
		goto loc_8238C234;
	case 9:
		goto loc_8238C234;
	case 10:
		goto loc_8238C234;
	case 11:
		goto loc_8238C234;
	case 12:
		goto loc_8238C234;
	case 13:
		goto loc_8238C234;
	case 14:
		goto loc_8238C234;
	case 15:
		goto loc_8238C234;
	case 16:
		goto loc_8238C234;
	case 17:
		goto loc_8238C234;
	case 18:
		goto loc_8238C234;
	case 19:
		goto loc_8238C234;
	case 20:
		goto loc_8238C234;
	case 21:
		goto loc_8238C234;
	case 22:
		goto loc_8238C234;
	case 23:
		goto loc_8238C234;
	case 24:
		goto loc_8238C234;
	case 25:
		goto loc_8238C234;
	case 26:
		goto loc_8238C234;
	case 27:
		goto loc_8238C234;
	case 28:
		goto loc_8238C234;
	case 29:
		goto loc_8238C234;
	case 30:
		goto loc_8238C234;
	case 31:
		goto loc_8238C234;
	case 32:
		goto loc_8238C1E0;
	case 33:
		goto loc_8238C1FC;
	case 34:
		goto loc_8238C218;
	default:
		__builtin_unreachable();
	}
	// lwz ctx_arrow(ctx)->r17,-15904(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15876(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15848(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15820(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15904(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15876(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r17,-15848(ctx_arrow(ctx)->r24)
	ctx_arrow(ctx)->r17.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
loc_8238C1E0:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8238bf00
	sub_8238BF00(ctx, base);
	// lvx128 v11,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r3
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8238c254
	goto loc_8238C254;
loc_8238C1FC:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8238bfb0
	sub_8238BFB0(ctx, base);
	// lvx128 v11,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r3
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8238c254
	goto loc_8238C254;
loc_8238C218:
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x8238c060
	sub_8238C060(ctx, base);
	// lvx128 v11,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r3
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8238c254
	goto loc_8238C254;
loc_8238C234:
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lvx128 v13,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lvx128 v11,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8238C254:
	// stvx128 v11,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r28
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v11)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r29
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r28.u32 + ctx_arrow(ctx)->r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r30
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r28.u32 + ctx_arrow(ctx)->r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r28.u32 + ctx_arrow(ctx)->r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,192
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 192;
	// b 0x823ed188
	return;
}

alias(__imp__sub_8238C270) PPC_WEAK_FUNC(sub_8238C270);
PPC_FUNC_IMPL(__imp__sub_8238C270) {
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// bl 0x8238be18
	sub_8238BE18(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 16;
	// lvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r31,48
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r31.s64 + 48;
	// lvx128 v13,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v10,v0,v12
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v9,v13,v11
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrglw v0,v0,v12
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v13,v13,v11
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v12,v10,v9
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrglw v11,v10,v9
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v10,v0,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// stvx128 v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v11)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v10)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
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

alias(__imp__sub_8238C2E8) PPC_WEAK_FUNC(sub_8238C2E8);
PPC_FUNC_IMPL(__imp__sub_8238C2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// li ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = 12;
	// lvlx v11,0,ctx_arrow(ctx)->r4
	temp.u32 = ctx_arrow(ctx)->r4.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,0,ctx_arrow(ctx)->r6
	temp.u32 = ctx_arrow(ctx)->r6.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v10), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lvlx v9,0,ctx_arrow(ctx)->r5
	temp.u32 = ctx_arrow(ctx)->r5.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v9), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lvrx v0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	temp.u32 = ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r4.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), 12));
	// lvrx v13,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r6
	temp.u32 = ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r6.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx v12,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r5
	temp.u32 = ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r5.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi v13,v13,v13,4
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), 12));
	// vor v1,v11,v0
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v1), _mm_or_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v11)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0))));
	// vsldoi v0,v12,v12,4
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), 12));
	// vor v13,v10,v13
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_or_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v10)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13))));
	// vor v3,v9,v0
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v3), _mm_or_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v9)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0))));
	// vsubfp v2,v1,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)));
	// bl 0x821888f8
	sub_821888F8(ctx, base);
	// li ctx_arrow(ctx)->r9,16
	ctx_arrow(ctx)->r9.s64 = 16;
	// li ctx_arrow(ctx)->r10,32
	ctx_arrow(ctx)->r10.s64 = 32;
	// lvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r3
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li ctx_arrow(ctx)->r11,48
	ctx_arrow(ctx)->r11.s64 = 48;
	// lvx128 v13,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v11), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx_arrow(ctx)->r3.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r31
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r9
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r10
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v12)), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	_mm_store_si128((__m128i*)(base + ((ctx_arrow(ctx)->r31.u32 + ctx_arrow(ctx)->r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v11)), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_8238C380) PPC_WEAK_FUNC(sub_8238C380);
PPC_FUNC_IMPL(__imp__sub_8238C380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f2,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f3,8(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stfs f4,12(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C398) PPC_WEAK_FUNC(sub_8238C398);
PPC_FUNC_IMPL(__imp__sub_8238C398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,0(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,4(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,8(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,12(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C3D0) PPC_WEAK_FUNC(sub_8238C3D0);
PPC_FUNC_IMPL(__imp__sub_8238C3D0) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lfs f13,4(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f12,8(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fmadds f1,f11,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + f0.f64));
	// bl 0x8238d050
	sub_8238D050(ctx, base);
	// lfs f0,0(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,0(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,4(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,8(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lfs f0,12(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,12(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 12, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_8238C458) PPC_WEAK_FUNC(sub_8238C458);
PPC_FUNC_IMPL(__imp__sub_8238C458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f2,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C468) PPC_WEAK_FUNC(sub_8238C468);
PPC_FUNC_IMPL(__imp__sub_8238C468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C480) PPC_WEAK_FUNC(sub_8238C480);
PPC_FUNC_IMPL(__imp__sub_8238C480) {
	PPC_FUNC_PROLOGUE();
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
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r4.u64;
	// lfs f13,4(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmadds f1,f0,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// bl 0x8238d050
	sub_8238D050(ctx, base);
	// lfs f0,0(ctx_arrow(ctx)->r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,0(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r31)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,4(ctx_arrow(ctx)->r30)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 4, ctx_arrow(ctx)->r4.u32);
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

alias(__imp__sub_8238C4E0) PPC_WEAK_FUNC(sub_8238C4E0);
PPC_FUNC_IMPL(__imp__sub_8238C4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,0(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,0(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f13,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,4(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,8(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C518) PPC_WEAK_FUNC(sub_8238C518);
PPC_FUNC_IMPL(__imp__sub_8238C518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f12,8(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f10,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f0,f13,f0,f8
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f8.f64));
	// stfs f0,4(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// fmsubs f12,f9,f12,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,0(ctx_arrow(ctx)->r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fmsubs f13,f10,f11,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f7.f64));
	// stfs f13,8(ctx_arrow(ctx)->r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C558) PPC_WEAK_FUNC(sub_8238C558);
PPC_FUNC_IMPL(__imp__sub_8238C558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,4(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f12,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// fmadds f1,f11,f10,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + f0.f64));
	// blr 
	return;
}

alias(__imp__sub_8238C580) PPC_WEAK_FUNC(sub_8238C580);
PPC_FUNC_IMPL(__imp__sub_8238C580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,0(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,4(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,8(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C5A8) PPC_WEAK_FUNC(sub_8238C5A8);
PPC_FUNC_IMPL(__imp__sub_8238C5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,4(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,0(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f1,f12,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// blr 
	return;
}

alias(__imp__sub_8238C5E0) PPC_WEAK_FUNC(sub_8238C5E0);
PPC_FUNC_IMPL(__imp__sub_8238C5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f12,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f1,f12,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// blr 
	return;
}

alias(__imp__sub_8238C600) PPC_WEAK_FUNC(sub_8238C600);
PPC_FUNC_IMPL(__imp__sub_8238C600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C620) PPC_WEAK_FUNC(sub_8238C620);
PPC_FUNC_IMPL(__imp__sub_8238C620) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f12,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// lfs f0,11772(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// bltlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.lt()) return;
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
	// blr 
	return;
}

alias(__imp__sub_8238C658) PPC_WEAK_FUNC(sub_8238C658);
PPC_FUNC_IMPL(__imp__sub_8238C658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,4(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,8(ctx_arrow(ctx)->r4)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C680) PPC_WEAK_FUNC(sub_8238C680);
PPC_FUNC_IMPL(__imp__sub_8238C680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,0(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,0(ctx_arrow(ctx)->r6)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f13,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,4(ctx_arrow(ctx)->r6)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,8(ctx_arrow(ctx)->r6)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C6B8) PPC_WEAK_FUNC(sub_8238C6B8);
PPC_FUNC_IMPL(__imp__sub_8238C6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,0(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmsubs f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 - ctx.f13.f64));
	// stfs f0,0(ctx_arrow(ctx)->r6)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f13,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmsubs f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 - ctx.f13.f64));
	// stfs f0,4(ctx_arrow(ctx)->r6)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f0,f1,f13
	f0.f64 = double(float(f0.f64 * ctx.f1.f64 - ctx.f13.f64));
	// stfs f0,8(ctx_arrow(ctx)->r6)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r6.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C6F0) PPC_WEAK_FUNC(sub_8238C6F0);
PPC_FUNC_IMPL(__imp__sub_8238C6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f2,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f3,8(ctx_arrow(ctx)->r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C700) PPC_WEAK_FUNC(sub_8238C700);
PPC_FUNC_IMPL(__imp__sub_8238C700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// stfs f0,4(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// stfs f0,8(ctx_arrow(ctx)->r3)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_8238C718) PPC_WEAK_FUNC(sub_8238C718);
PPC_FUNC_IMPL(__imp__sub_8238C718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,4(ctx_arrow(ctx)->r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,0(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f1,f12,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// b 0x8238ca50
	sub_8238CA50(ctx, base);
	return;
}

alias(__imp__sub_8238C750) PPC_WEAK_FUNC(sub_8238C750);
PPC_FUNC_IMPL(__imp__sub_8238C750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	uint32_t ea{};
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// li ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r11.s64 = 12;
	// lvlx v13,0,ctx_arrow(ctx)->r3
	temp.u32 = ctx_arrow(ctx)->r3.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v13), _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw v10,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_set1_epi32(int(0x0)));
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r4,8
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r4.s64 + 8;
	// vcfsx v11,v0,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvrx v0,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	temp.u32 = ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx)->r3.u32;
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r4.s64 + 4;
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), 12));
	// vor v12,v13,v0
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v12), _mm_or_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0))));
	// vmsum3fp128 v0,v12,v12
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vrsqrtefp v13,v0
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v0.f32))));
	// vor v9,v0,v0
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v9), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)));
	// vmulfp128 v8,v0,v11
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// vcmpeqfp v0,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v11,v8,v10,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v0,v13,v9,v0
	_mm_store_si128((__m128i*)ctx.PPCRegister_u8(v0), _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v13))), _mm_and_si128(_mm_load_si128((__m128i*)ctx.PPCRegister_u8(v0)), _mm_load_si128((__m128i*)ctx.PPCRegister_u8(v9)))));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// stvewx v13,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r4
	ea = (ctx_arrow(ctx)->r4.u32) & ~0x3;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32) >> 2)]);
	// stvewx v12,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r11
	ea = (ctx_arrow(ctx)->r11.u32) & ~0x3;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32) >> 2)]);
	// stvewx v0,ctx_arrow(ctx)->r0,ctx_arrow(ctx)->r10
	ea = (ctx_arrow(ctx)->r10.u32) & ~0x3;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32) >> 2)]);
	// blr 
	return;
}

alias(__imp__sub_8238C7C0) PPC_WEAK_FUNC(sub_8238C7C0);
PPC_FUNC_IMPL(__imp__sub_8238C7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,4(ctx_arrow(ctx)->r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f12,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f1,f12,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// b 0x8238ca50
	sub_8238CA50(ctx, base);
	return;
}

alias(__imp__sub_8238C7E0) PPC_WEAK_FUNC(sub_8238C7E0);
PPC_FUNC_IMPL(__imp__sub_8238C7E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// srawi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,31
	xer.ca = (ctx_arrow(ctx)->r3.s32 < 0) & ((ctx_arrow(ctx)->r3.u32 & 0x7FFFFFFF) != 0);
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r3.s32 >> 31;
	// xor ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64 ^ ctx_arrow(ctx)->r11.u64;
	// subf ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r10.s64 - ctx_arrow(ctx)->r11.s64;
	// blr 
	return;
}

alias(__imp__sub_8238C7F0) PPC_WEAK_FUNC(sub_8238C7F0);
PPC_FUNC_IMPL(__imp__sub_8238C7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-96(ctx_arrow(ctx)->r1)
	ea = -96 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// bl 0x823f1500
	sub_823F1500(&ctx);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8238C818) PPC_WEAK_FUNC(sub_8238C818);
PPC_FUNC_IMPL(__imp__sub_8238C818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stfs f0,20(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// lfs f1,2688(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f1
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f1.f64);
	// bge ctx_arrow(ctx)->r6,0x8238c85c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8238C85C;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// fctiwz f13,f2
	ctx.f13.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfiwx f13,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s32;
	// std ctx_arrow(ctx)->r11,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lfd f13,-8(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f2,f13
	ctx_arrow(ctx)->r6.compare(ctx.f2.f64, ctx.f13.f64);
	// bne ctx_arrow(ctx)->r6,0x8238c864
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8238C864;
loc_8238C85C:
	// fcmpu ctx_arrow(ctx)->r6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f1.f64);
	// bne ctx_arrow(ctx)->r6,0x8238c878
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8238C878;
loc_8238C864:
	// fcmpu ctx_arrow(ctx)->r6,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f2.f64, ctx.f1.f64);
	// bge ctx_arrow(ctx)->r6,0x8238ca38
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8238CA38;
loc_8238C86C:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f1,25732(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8238C878:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10,9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r10.u32 & 0x7FFFFF;
	// oris ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,16256
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 1065353216;
	// lfs f13,12132(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,9,24,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 9) & 0xFF;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-127
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -127;
	// extsh ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// stw ctx_arrow(ctx)->r9,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// std ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f11,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,-8(ctx_arrow(ctx)->r1)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// lfd f12,-16(ctx_arrow(ctx)->r1)
	ctx.f12.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f12,12128(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f12,f0,f13,f12
	ctx.f12.f64 = double(float(-(f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f13,12124(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmsubs f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
	// lfs f13,12120(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,12116(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmsubs f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
	// lfs f13,12112(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,12108(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmsubs f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
	// lfs f13,12104(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,12100(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,12096(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// fmuls f0,f0,f2
	f0.f64 = double(float(f0.f64 * ctx.f2.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// blelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) return;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f13,16020(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f13
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f13.f64);
	// bge ctx_arrow(ctx)->r6,0x8238c86c
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8238C86C;
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lhz ctx_arrow(ctx)->r11,-2(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_LOAD_U16(ctx_arrow(ctx)->r1.u32 + -2);
	// extsh ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r9.s64 = PPCRegister_s16(ctx_arrow(ctx)->r11);
	// extsw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r9.s32;
	// std ctx_arrow(ctx)->r11,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lfd f13,-8(ctx_arrow(ctx)->r1)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fcmpu ctx_arrow(ctx)->r6,f0,f1
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f1.f64);
	// beq ctx_arrow(ctx)->r6,0x8238c9ec
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238C9EC;
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f13,12092(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f12,12088(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,12084(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,12080(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,12076(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,12072(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f0,2692(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f11,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// fcmpu ctx_arrow(ctx)->r6,f11,f0
	ctx_arrow(ctx)->r6.compare(ctx.f11.f64, f0.f64);
	// bge ctx_arrow(ctx)->r6,0x8238c9d4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8238C9D4;
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// b 0x8238c9ec
	goto loc_8238C9EC;
loc_8238C9D4:
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,3060(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f11,f0
	ctx_arrow(ctx)->r6.compare(ctx.f11.f64, f0.f64);
	// blt ctx_arrow(ctx)->r6,0x8238c9f0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_8238C9F0;
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f11,12068(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
loc_8238C9EC:
	// stfs f11,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
loc_8238C9F0:
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,0,0,0
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 0) & 0x80000000;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8238ca20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238CA20;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r1,-8
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r1.s64 + -8;
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfiwx f0,0,ctx_arrow(ctx)->r11
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0x1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8238ca20
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238CA20;
	// fneg f0,f11
	f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,-16(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
loc_8238CA20:
	// lwz ctx_arrow(ctx)->r10,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r9,23,0,8
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 23) & 0xFF800000;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -16, ctx_arrow(ctx)->r4.u32);
	// lfs f1,-16(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8238CA38:
	// fcmpu ctx_arrow(ctx)->r6,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f2.f64, ctx.f1.f64);
	// bnelr ctx_arrow(ctx)->r6
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) return;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f1,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

alias(__imp__sub_8238CA50) PPC_WEAK_FUNC(sub_8238CA50);
PPC_FUNC_IMPL(__imp__sub_8238CA50) {
	PPC_FUNC_PROLOGUE();
	// fsqrts f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// blr 
	return;
}

alias(__imp__sub_8238CA58) PPC_WEAK_FUNC(sub_8238CA58);
PPC_FUNC_IMPL(__imp__sub_8238CA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// blr 
	return;
}

alias(__imp__sub_8238CA68) PPC_WEAK_FUNC(sub_8238CA68);
PPC_FUNC_IMPL(__imp__sub_8238CA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fabs f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r1,-16
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r1.s64 + -16;
	// lfs f13,12180(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfd f11,12184(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfd f10,12192(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfd f9,12256(ctx_arrow(ctx)->r11)
	ctx.f9.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f8,12172(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f8.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfd f0,12144(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f0,f0,f12
	f0.f64 = f0.f64 * ctx.f12.f64;
	// fctid f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&f0.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fctidz f7,f0
	ctx.f7.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f7,0(ctx_arrow(ctx)->r10)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r10.u32 + 0);
	// fsub f0,f0,f13
	f0.f64 = f0.f64 - ctx.f13.f64;
	// ld ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,63
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0x1;
	// cmpdi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r11.s64, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fnmsub f13,f11,f0,f12
	ctx.f13.f64 = -(ctx.f11.f64 * f0.f64 - ctx.f12.f64);
	// lfd f11,12248(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fnmsub f13,f10,f0,f13
	ctx.f13.f64 = -(ctx.f10.f64 * f0.f64 - ctx.f13.f64);
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f10,f9,f0,f11
	ctx.f10.f64 = ctx.f9.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,12240(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,12232(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,12224(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,12216(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,12208(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f10,f10,f0,f11
	ctx.f10.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// lfd f11,12200(ctx_arrow(ctx)->r11)
	ctx.f11.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f11,f10,f0,f11
	ctx.f11.f64 = ctx.f10.f64 * f0.f64 + ctx.f11.f64;
	// fmadd f0,f11,f0,f8
	f0.f64 = ctx.f11.f64 * f0.f64 + ctx.f8.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// beq ctx_arrow(ctx)->r6,0x8238cb34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238CB34;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_8238CB34:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfd f13,12152(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfd f13,12160(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// fsel f0,f12,f13,f0
	f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// blr 
	return;
}

alias(__imp__sub_8238CB58) PPC_WEAK_FUNC(sub_8238CB58);
PPC_FUNC_IMPL(__imp__sub_8238CB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fabs f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// stfd f11,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lfd f13,12184(ctx_arrow(ctx)->r11)
	ctx.f13.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfd f10,12192(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfd f9,12256(ctx_arrow(ctx)->r11)
	ctx.f9.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f12,12172(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f0,12176(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fsel f8,f1,f12,f0
	ctx.f8.f64 = ctx.f1.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// lfd f0,12144(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f0,f0,f11
	f0.f64 = f0.f64 * ctx.f11.f64;
	// fctid f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&f0.f64));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fctidz f7,f0
	ctx.f7.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f7,-16(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -16);
	// fnmsub f13,f13,f0,f11
	ctx.f13.f64 = -(ctx.f13.f64 * f0.f64 - ctx.f11.f64);
	// fnmsub f13,f10,f0,f13
	ctx.f13.f64 = -(ctx.f10.f64 * f0.f64 - ctx.f13.f64);
	// fmul f0,f13,f13
	f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// ld ctx_arrow(ctx)->r11,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// clrldi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,63
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 & 0x1;
	// cmpdi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r11.s64, 0, xer);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfd f10,12248(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,12240(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,12232(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,12224(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,12216(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,12208(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadd f9,f9,f0,f10
	ctx.f9.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// lfd f10,12200(ctx_arrow(ctx)->r11)
	ctx.f10.u64 = PPC_Read_U64(ctx,  ctx);
	// fmadd f10,f9,f0,f10
	ctx.f10.f64 = ctx.f9.f64 * f0.f64 + ctx.f10.f64;
	// fmadd f0,f10,f0,f12
	f0.f64 = ctx.f10.f64 * f0.f64 + ctx.f12.f64;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// beq ctx_arrow(ctx)->r6,0x8238cc24
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238CC24;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_8238CC24:
	// ld ctx_arrow(ctx)->r11,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U64(ctx,  ctx);
	// fmul f13,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64 * ctx.f8.f64;
	// cmpdi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int64_t>(ctx_arrow(ctx)->r11.s64, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfd f0,12152(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fsub f12,f11,f0
	ctx.f12.f64 = ctx.f11.f64 - f0.f64;
	// lfd f0,12160(ctx_arrow(ctx)->r11)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fsel f0,f12,f0,f13
	f0.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// blr 
	return;
}

alias(__imp__sub_8238CC58) PPC_WEAK_FUNC(sub_8238CC58);
PPC_FUNC_IMPL(__imp__sub_8238CC58) {
	PPC_FUNC_PROLOGUE();
	// fabs f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// blr 
	return;
}

alias(__imp__sub_8238CC60) PPC_WEAK_FUNC(sub_8238CC60);
PPC_FUNC_IMPL(__imp__sub_8238CC60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f10,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu ctx_arrow(ctx)->r6,f1,f10
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, ctx.f10.f64);
	// bne ctx_arrow(ctx)->r6,0x8238cc80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8238CC80;
	// fcmpu ctx_arrow(ctx)->r6,f2,f10
	ctx_arrow(ctx)->r6.compare(ctx.f2.f64, ctx.f10.f64);
	// bne ctx_arrow(ctx)->r6,0x8238cc80
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8238CC80;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// blr 
	return;
loc_8238CC80:
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f13,f2
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lfs f12,12064(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// lfs f11,12060(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fcmpu ctx_arrow(ctx)->r6,f13,f0
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, f0.f64);
	// ble ctx_arrow(ctx)->r6,0x8238ccf0
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_8238CCF0;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmuls f0,f13,f13
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmsubs f11,f0,f12,f11
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 - ctx.f11.f64));
	// lfs f12,12056(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f11,f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f12.f64));
	// lfs f12,12052(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmsubs f11,f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 - ctx.f12.f64));
	// lfs f12,12048(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f11,f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f12.f64));
	// lfs f12,12044(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmsubs f11,f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 - ctx.f12.f64));
	// lfs f12,12040(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f12
	f0.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f12.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x8238cd40
	goto loc_8238CD40;
loc_8238CCF0:
	// fdivs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fmuls f0,f13,f13
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmsubs f11,f0,f12,f11
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 - ctx.f11.f64));
	// lfs f12,12056(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f11,f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f12.f64));
	// lfs f12,12052(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmsubs f11,f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 - ctx.f12.f64));
	// lfs f12,12048(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmadds f11,f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f12.f64));
	// lfs f12,12044(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32250
	ctx_arrow(ctx)->r11.s64 = -2113536000;
	// fmsubs f11,f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 - ctx.f12.f64));
	// lfs f12,12040(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f12.f64));
	// lfs f0,11980(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fnmsubs f0,f12,f13,f0
	f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - f0.f64)));
loc_8238CD40:
	// fcmpu ctx_arrow(ctx)->r6,f2,f10
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f2.f64, ctx.f10.f64);
	// bge ctx_arrow(ctx)->r6,0x8238cd68
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8238CD68;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// fcmpu ctx_arrow(ctx)->r6,f1,f10
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, ctx.f10.f64);
	// lfs f13,14032(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// bge ctx_arrow(ctx)->r6,0x8238cd60
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8238CD60;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 - ctx.f13.f64));
	// blr 
	return;
loc_8238CD60:
	// fsubs f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 - f0.f64));
	// blr 
	return;
loc_8238CD68:
	// fcmpu ctx_arrow(ctx)->r6,f1,f10
	ctx.fpscr.disableFlushMode();
	ctx_arrow(ctx)->r6.compare(ctx.f1.f64, ctx.f10.f64);
	// bge ctx_arrow(ctx)->r6,0x8238cd78
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8238CD78;
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_8238CD78:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// blr 
	return;
}

alias(__imp__sub_8238CD80) PPC_WEAK_FUNC(sub_8238CD80);
PPC_FUNC_IMPL(__imp__sub_8238CD80) {
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lbz ctx_arrow(ctx)->r11,1016(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,12200
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + 12200;
	// beq ctx_arrow(ctx)->r6,0x8238cdac
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238CDAC;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8238CDAC:
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 4;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r10.u32 | (ctx_arrow(ctx)->r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// xor ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 ^ ctx_arrow(ctx)->r9.u64;
	// stwx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,2,0,29
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8238c7e0
	sub_8238C7E0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r10.s64 = 0;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,249
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 249, xer);
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x8238ce08
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8238CE08;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_8238CE08:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 1;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,249
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 249, xer);
	// stw ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// bne ctx_arrow(ctx)->r6,0x8238ce20
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8238CE20;
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r31)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 12, ctx_arrow(ctx)->r4.u32);
loc_8238CE20:
	// lbz ctx_arrow(ctx)->r11,1016(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8238ce34
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238CE34;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8238CE34:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// b 0x823ed18c
	return;
}

alias(__imp__sub_8238CE40) PPC_WEAK_FUNC(sub_8238CE40);
PPC_FUNC_IMPL(__imp__sub_8238CE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis ctx_arrow(ctx)->r11,-32016
	ctx_arrow(ctx)->r11.s64 = -2098200576;
	// lwz ctx_arrow(ctx)->r3,17232(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x8240fbfc
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x8238ce68
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8238CE68;
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,12232
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 12232;
loc_8238CE68:
	// bl 0x8238cd80
	sub_8238CD80(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_8238CE80) PPC_WEAK_FUNC(sub_8238CE80);
PPC_FUNC_IMPL(__imp__sub_8238CE80) {
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
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r4.u64;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// lbz ctx_arrow(ctx)->r11,1016(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// addi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r11,12200
	ctx_arrow(ctx)->r25.s64 = ctx_arrow(ctx)->r11.s64 + 12200;
	// beq ctx_arrow(ctx)->r6,0x8238ceb0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238CEB0;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8238CEB0:
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// stw ctx_arrow(ctx)->r31,4(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,103
	ctx_arrow(ctx)->r10.s64 = 103;
	// li ctx_arrow(ctx)->r29,249
	ctx_arrow(ctx)->r29.s64 = 249;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r27,1012
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r27.s64 + 1012;
	// stw ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,16838
	ctx_arrow(ctx)->r11.s64 = 1103495168;
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// ori ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,20077
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r11.u64 | 20077;
loc_8238CED4:
	// lbz ctx_arrow(ctx)->r11,1016(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8238cee8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238CEE8;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8240f8bc
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8238CEE8:
	// lbz ctx_arrow(ctx)->r10,1016(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r11.s32) * int64_t(ctx_arrow(ctx)->r31.s32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,12345
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 12345;
	// clrlwi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,16
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r11.u32 & 0xFFFF;
	// srawi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r11,16
	xer.ca = (ctx_arrow(ctx)->r11.s32 < 0) & ((ctx_arrow(ctx)->r11.u32 & 0xFFFF) != 0);
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r11.s32 >> 16;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r27)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r27.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x8238cf14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238CF14;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8238CF14:
	// mulli ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,20077
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 * 20077;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,12345
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 12345;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,16838
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 * 16838;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,16,16,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 16) & 0xFFFF;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r29,-1
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r29.s64 + -1;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// mullw ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.s64 = int64_t(ctx_arrow(ctx)->r26.s32) * int64_t(ctx_arrow(ctx)->r31.s32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 + ctx_arrow(ctx)->r10.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r28.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,-4
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + -4;
	// bge ctx_arrow(ctx)->r6,0x8238ced4
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_8238CED4;
	// li ctx_arrow(ctx)->r9,-1
	ctx_arrow(ctx)->r9.s64 = -1;
	// lis ctx_arrow(ctx)->r11,-32768
	ctx_arrow(ctx)->r11.s64 = -2147483648;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r27,28
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r27.s64 + 28;
loc_8238CF50:
	// lwz ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// and ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & ctx_arrow(ctx)->r9.u64;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,31,1,31
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 | ctx_arrow(ctx)->r11.u64;
	// rlwinm ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,31,1,31
	ctx_arrow(ctx)->r11.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// stw ctx_arrow(ctx)->r8,0(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,28
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r10.s64 + 28;
	// bne ctx_arrow(ctx)->r6,0x8238cf50
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8238CF50;
	// lbz ctx_arrow(ctx)->r11,1016(ctx_arrow(ctx)->r27)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x8238cf88
	if (ctx_arrow(ctx)->r6.eq()) goto loc_8238CF88;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r25
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r25.u64;
	// bl 0x8240f8ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8238CF88:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed17c
	return;
}

alias(__imp__sub_8238CF90) PPC_WEAK_FUNC(sub_8238CF90);
PPC_FUNC_IMPL(__imp__sub_8238CF90) {
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
	// lis ctx_arrow(ctx)->r30,-32016
	ctx_arrow(ctx)->r30.s64 = -2098200576;
	// lwz ctx_arrow(ctx)->r11,17232(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,-1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, -1, xer);
	// bne ctx_arrow(ctx)->r6,0x8238cfe8
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_8238CFE8;
	// bl 0x8240fc1c
	__imp__KeTlsAlloc(ctx, base);
	// lis ctx_arrow(ctx)->r11,-31991
	ctx_arrow(ctx)->r11.s64 = -2096562176;
	// stw ctx_arrow(ctx)->r3,17232(ctx_arrow(ctx)->r30)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + 17232, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,12200
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + 12200;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x8240f94c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r31,32
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r31.s64 + 32;
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// stb ctx_arrow(ctx)->r11,1048(ctx_arrow(ctx)->r31)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r31.u32 + 1048, ctx_arrow(ctx)->r4.u32.u8);
	// blr 
	return;
}

