#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_820CA5A0) PPC_WEAK_FUNC(sub_820CA5A0);
PPC_FUNC_IMPL(__imp__sub_820CA5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
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
	// bl 0x823ed138
	// stfd f29,-64(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -64);
	// stfd f30,-56(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -56);
	// stfd f31,-48(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -48);
	// stwu ctx_arrow(ctx)->r1,-144(ctx_arrow(ctx)->r1)
	ea = -144 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r6.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x82110d08
	sub_82110D08(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lfs f0,14020(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 - f31.f64));
	// lwz ctx_arrow(ctx)->r3,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,13980(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x820ce1f0
	sub_820CE1F0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,428
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 428;
	// lwz ctx_arrow(ctx)->r10,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,1460(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,1328(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1328, ctx_arrow(ctx)->r4.u32);
	// lfs f0,1464(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,1332(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1332, ctx_arrow(ctx)->r4.u32);
	// lfs f0,1468(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,1336(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1336, ctx_arrow(ctx)->r4.u32);
	// lfs f0,0(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x820ca650
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA650;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
loc_820CA650:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// bl 0x82119178
	sub_82119178(&ctx);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// bl 0x82119118
	sub_82119118(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8211e6f8
	sub_8211E6F8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,0(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stfs f0,1460(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1460, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,1456(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1456, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,1464(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1464, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,1468(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1468, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f31,596(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 596, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f30,612(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 612, ctx_arrow(ctx)->r4.u32);
	// bl 0x820ce1f0
	sub_820CE1F0(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// lfd f29,-64(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-56(ctx_arrow(ctx)->r1)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-48(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed188
	return;
}

alias(__imp__sub_820CA6D0) PPC_WEAK_FUNC(sub_820CA6D0);
PPC_FUNC_IMPL(__imp__sub_820CA6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
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
	// bl 0x823ed138
	// stfd f29,-64(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -64);
	// stfd f30,-56(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -56);
	// stfd f31,-48(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -48);
	// stwu ctx_arrow(ctx)->r1,-160(ctx_arrow(ctx)->r1)
	ea = -160 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r6.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r7.u64;
	// bl 0x82110d08
	sub_82110D08(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lis ctx_arrow(ctx)->r31,-32014
	ctx_arrow(ctx)->r31.s64 = -2098069504;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,0
	ctx_arrow(ctx)->r4.s64 = 0;
	// lfs f0,14020(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 - f31.f64));
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,0(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,80(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,84(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,88(ctx_arrow(ctx)->r1)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 88, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,13980(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x820ce1f0
	sub_820CE1F0(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r28.u32, 0, xer);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,428
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + 428;
	// lwz ctx_arrow(ctx)->r10,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,1460(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r29,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r29.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,1328(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1328, ctx_arrow(ctx)->r4.u32);
	// lfs f0,1464(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,1332(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1332, ctx_arrow(ctx)->r4.u32);
	// lfs f0,1468(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,1336(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1336, ctx_arrow(ctx)->r4.u32);
	// lfs f0,0(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,12(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,16(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,20(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x820ca7d8
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA7D8;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// stw ctx_arrow(ctx)->r28,24(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 24, ctx_arrow(ctx)->r4.u32);
	// lfs f2,8(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820b2588
	sub_820B2588(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stfs f1,372(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 372, ctx_arrow(ctx)->r4.u32);
	// stfs f1,376(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 376, ctx_arrow(ctx)->r4.u32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// lfs f0,15416(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,1456
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + 1456;
	// stfs f0,368(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 368, ctx_arrow(ctx)->r4.u32);
	// bl 0x820b0998
	sub_820B0998(&ctx);
loc_820CA7D8:
	// lwz ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// ori ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u64 | 1;
	// stw ctx_arrow(ctx)->r11,20(ctx_arrow(ctx)->r29)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r29.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// bl 0x82119178
	sub_82119178(&ctx);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r3,28(ctx_arrow(ctx)->r29)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,12
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 12;
	// bl 0x82119118
	sub_82119118(ctx, base);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r29.u64;
	// bl 0x8211e6f8
	sub_8211E6F8(ctx, base);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,0(ctx_arrow(ctx)->r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r10,-32256
	ctx_arrow(ctx)->r10.s64 = -2113929216;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// stfs f0,1460(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1460, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r28,1456(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1456, ctx_arrow(ctx)->r4.u32);
	// lfs f0,4(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,1464(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1464, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r30)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,1468(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1468, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,-1364(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lfs f0,15612(ctx_arrow(ctx)->r10)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// stfs f31,596(ctx_arrow(ctx)->r11)
	temp.f32 = float(f31.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 596, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r3,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f30,612(ctx_arrow(ctx)->r11)
	temp.f32 = float(f30.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 612, ctx_arrow(ctx)->r4.u32);
	// lfs f13,1500(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,1248(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1248, ctx_arrow(ctx)->r4.u32);
	// lfs f13,1504(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,1252(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1252, ctx_arrow(ctx)->r4.u32);
	// lfs f13,1508(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,1256(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 1256, ctx_arrow(ctx)->r4.u32);
	// bl 0x820ce1f0
	sub_820CE1F0(&ctx);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,160
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 160;
	// lfd f29,-64(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-56(ctx_arrow(ctx)->r1)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-48(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// b 0x823ed188
	return;
}

alias(__imp__sub_820CA888) PPC_WEAK_FUNC(sub_820CA888);
PPC_FUNC_IMPL(__imp__sub_820CA888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11,-1384
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r11.s64 + -1384;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820ca8c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA8C0;
	// lwz ctx_arrow(ctx)->r11,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820ca8c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA8C0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820ca8c0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA8C0;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// oris ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,8192
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 536870912;
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
loc_820CA8C0:
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820ca8f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA8F0;
	// lwz ctx_arrow(ctx)->r11,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820ca8f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA8F0;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820ca8f0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA8F0;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// oris ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,8192
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 536870912;
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
loc_820CA8F0:
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820ca920
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA920;
	// lwz ctx_arrow(ctx)->r11,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820ca920
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA920;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820ca920
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA920;
	// lwz ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// oris ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,8192
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 | 536870912;
	// stw ctx_arrow(ctx)->r9,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
loc_820CA920:
	// lwz ctx_arrow(ctx)->r11,12(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,428(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// oris ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,8192
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 536870912;
	// stw ctx_arrow(ctx)->r10,20(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 20, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_820CA958) PPC_WEAK_FUNC(sub_820CA958);
PPC_FUNC_IMPL(__imp__sub_820CA958) {
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
	// stwu ctx_arrow(ctx)->r1,-176(ctx_arrow(ctx)->r1)
	ea = -176 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r6,2
	ctx_arrow(ctx)->r6.s64 = 2;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,14756
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 14756;
	// li ctx_arrow(ctx)->r5,0
	ctx_arrow(ctx)->r5.s64 = 0;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// stw ctx_arrow(ctx)->r11,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// bl 0x8216c178
	sub_8216C178(&ctx);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r24,ctx_arrow(ctx)->r11,-1384
	ctx_arrow(ctx)->r24.s64 = ctx_arrow(ctx)->r11.s64 + -1384;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r11,-1360
	ctx_arrow(ctx)->r29.s64 = ctx_arrow(ctx)->r11.s64 + -1360;
loc_820CA994:
	// lwz ctx_arrow(ctx)->r3,92(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,96(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, ctx_arrow(ctx)->r11.u32, xer);
	// beq ctx_arrow(ctx)->r6,0x820ca9b0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CA9B0;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// li ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r11.s64 = 0;
	// bne ctx_arrow(ctx)->r6,0x820ca9b4
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820CA9B4;
loc_820CA9B0:
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
loc_820CA9B4:
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r11.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820caaa0
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820CAAA0;
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x82159128
	sub_82159128(ctx, base);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1544
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1544;
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r3.u64;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// clrlwi ctx_arrow(ctx)->r25,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r25.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r25,112
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r25.s64 * 112;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,28
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 + 28;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1596
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1596;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,32
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 + 32;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r29,36
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r29.s64 + 36;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r31,1648
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r31.s64 + 1648;
	// li ctx_arrow(ctx)->r27,4
	ctx_arrow(ctx)->r27.s64 = 4;
	// add ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r26.u64 = ctx_arrow(ctx)->r30.u64 + ctx_arrow(ctx)->r11.u64;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
loc_820CAA24:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r28)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r28.u64;
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r27,-1
	ctx_arrow(ctx)->r27.s64 = ctx_arrow(ctx)->r27.s64 + -1;
	// stw ctx_arrow(ctx)->r3,0(ctx_arrow(ctx)->r26)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r26.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,52
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 52;
	// addi ctx_arrow(ctx)->r26,ctx_arrow(ctx)->r26,4
	ctx_arrow(ctx)->r26.s64 = ctx_arrow(ctx)->r26.s64 + 4;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r27.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820caa24
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820CAA24;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31,1856
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r31.s64 + 1856;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r29,104
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r29.s64 + 104;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1908
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1908;
	// stbx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r10
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx->r10.u32, ctx_arrow(ctx)->r4.u8));
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r11,24(ctx_arrow(ctx)->r10)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r25,2,0,29
	ctx_arrow(ctx)->r10.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r25.u32 | (ctx_arrow(ctx)->r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u64;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r24
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,8280(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 8280, ctx_arrow(ctx)->r4.u32);
	// bl 0x8216c2a8
	sub_8216C2A8(&ctx);
	// b 0x820ca994
	goto loc_820CA994;
loc_820CAAA0:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,176
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 176;
	// b 0x823ed178
	return;
}

alias(__imp__sub_820CAAA8) PPC_WEAK_FUNC(sub_820CAAA8);
PPC_FUNC_IMPL(__imp__sub_820CAAA8) {
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
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// rlwinm ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3,2,0,29
	ctx_arrow(ctx)->r31.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r3.u32 | (ctx_arrow(ctx)->r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1384
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1384;
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820cab54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CAB54;
	// lwz ctx_arrow(ctx)->r11,480(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820cab54
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CAB54;
	// bl 0x820ebb98
	sub_820EBB98(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820cab04
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820CAB04;
loc_820CAAEC:
	// li ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r3.s64 = 1;
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,96
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 96;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
loc_820CAB04:
	// bl 0x820ec268
	sub_820EC268(ctx, base);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,1
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 1, xer);
	// bne ctx_arrow(ctx)->r6,0x820cab54
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820CAB54;
	// bl 0x820c9af0
	sub_820C9AF0(ctx, base);
	// li ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r8.s64 = 0;
	// li ctx_arrow(ctx)->r9,0
	ctx_arrow(ctx)->r9.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820cab54
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820CAB54;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-1360
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -1360;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,36
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 36;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r31.u64 + ctx_arrow(ctx)->r11.u64;
loc_820CAB34:
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r8.u64;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,2
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 2, xer);
	// bge ctx_arrow(ctx)->r6,0x820caaec
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820CAAEC;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,1
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 1;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,112
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 112;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r9.s32, ctx_arrow(ctx)->r3.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820cab34
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820CAB34;
loc_820CAB54:
	// li ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r3.s64 = 0;
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

alias(__imp__sub_820CAB70) PPC_WEAK_FUNC(sub_820CAB70);
PPC_FUNC_IMPL(__imp__sub_820CAB70) {
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
	// li ctx_arrow(ctx)->r28,0
	ctx_arrow(ctx)->r28.s64 = 0;
	// bl 0x820eb810
	sub_820EB810(ctx, base);
	// mr ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r27.u64 = ctx_arrow(ctx)->r3.u64;
	// bl 0x820f6290
	sub_820F6290(ctx, base);
	// mr ctx_arrow(ctx)->r29,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r29.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r31,0
	ctx_arrow(ctx)->r31.s64 = 0;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r29.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x820cabfc
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_820CABFC;
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// li ctx_arrow(ctx)->r26,-1
	ctx_arrow(ctx)->r26.s64 = -1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-1384
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -1384;
loc_820CABA8:
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// bl 0x820ca3e8
	sub_820CA3E8(ctx, base);
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r27,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r27.s32, ctx_arrow(ctx)->r29.s32, xer);
	// bge ctx_arrow(ctx)->r6,0x820cabdc
	if ((((((((((((((!ctx)))))))))))))->r6.lt()) goto loc_820CABDC;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r3,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r3.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x820cabd0
	if (ctx_arrow(ctx)->r6.eq()) goto loc_820CABD0;
	// bl 0x8216c140
	sub_8216C140(ctx, base);
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r3,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r3.u32 & 0xFF;
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// bne ctx_arrow(ctx)->r6,0x820cabdc
	if ((((((((((((((!ctx)))))))))))))->r6.eq()) goto loc_820CABDC;
loc_820CABD0:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r26,8528(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8528, ctx_arrow(ctx)->r4.u32);
	// b 0x820cabec
	goto loc_820CABEC;
loc_820CABDC:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r28
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r28.u64;
	// addi ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r28,1
	ctx_arrow(ctx)->r28.s64 = ctx_arrow(ctx)->r28.s64 + 1;
	// stw ctx_arrow(ctx)->r10,8528(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8528, ctx_arrow(ctx)->r4.u32);
loc_820CABEC:
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,1
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r31.s64 + 1;
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r30,4
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r30.s64 + 4;
	// cmpw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r29
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r31.s32, ctx_arrow(ctx)->r29.s32, xer);
	// blt ctx_arrow(ctx)->r6,0x820caba8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_820CABA8;
loc_820CABFC:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,144
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 144;
	// b 0x823ed180
	return;
}

alias(__imp__sub_820CAC08) PPC_WEAK_FUNC(sub_820CAC08);
PPC_FUNC_IMPL(__imp__sub_820CAC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// mr ctx_arrow(ctx)->r28,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r28.u64 = ctx_arrow(ctx)->r3.u64;
	// li ctx_arrow(ctx)->r4,1
	ctx_arrow(ctx)->r4.s64 = 1;
	// li ctx_arrow(ctx)->r3,8576
	ctx_arrow(ctx)->r3.s64 = 8576;
	// bl 0x8209cbc8
	sub_8209CBC8(ctx, base);
	// lis ctx_arrow(ctx)->r11,-32014
	ctx_arrow(ctx)->r11.s64 = -2098069504;
	// rlwinm ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r28,2,0,29
	ctx_arrow(ctx)->r30.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r28.u32 | (ctx_arrow(ctx)->r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-1384
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -1384;
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// li ctx_arrow(ctx)->r29,0
	ctx_arrow(ctx)->r29.s64 = 0;
	// li ctx_arrow(ctx)->r8,2
	ctx_arrow(ctx)->r8.s64 = 2;
	// stwx ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r30.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r31.u32);
	// lfs f0,2688(ctx_arrow(ctx)->r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lis ctx_arrow(ctx)->r11,-32256
	ctx_arrow(ctx)->r11.s64 = -2113929216;
	// stw ctx_arrow(ctx)->r29,128(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 128, ctx_arrow(ctx)->r4.u32);
	// lfs f13,2776(ctx_arrow(ctx)->r11)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,132(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 132, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,136(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 136, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,140(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 140, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,144(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 144, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,148(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 148, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f13,152(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 152, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,156(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 156, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f13,160(ctx_arrow(ctx)->r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 160, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,164(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 164, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,168(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 168, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,172(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 172, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,176(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 176, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,180(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 180, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,184(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 184, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,188(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 188, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,192(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 192, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,196(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 196, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,200(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 200, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,204(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 204, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,208(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 208, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,212(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 212, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,216(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 216, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,368(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 368, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,372(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 372, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// li ctx_arrow(ctx)->r11,1
	ctx_arrow(ctx)->r11.s64 = 1;
	// stfs f0,376(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 376, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,380(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 380, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,384(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 384, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,388(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 388, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,392(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 392, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,396(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 396, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,400(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 400, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,404(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 404, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r29,408(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 408, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,412(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 412, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,4892(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4892, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,4896(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4896, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stfs f0,4900(ctx_arrow(ctx)->r10)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 4900, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r8,416(ctx_arrow(ctx)->r10)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r10.u32 + 416, ctx_arrow(ctx)->r4.u32);
	// lwzx ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r29,8520(ctx_arrow(ctx)->r10)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r10.u32 + 8520, 27.u8) & 0x1;
	// blr 
	return;
}

