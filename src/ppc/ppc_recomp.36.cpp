#include "ppc_recomp_patch.h"
#include "../include/ppc/ppc_recomp_fix.h"
#include "../include/ppc/ppc_recomp_wrappers.h"
#include "ppc_recomp_shared.h"
#include "../include/ppc/ppc_register.h"




#include "../include/ppc/ppc_recomp_macros.h"



alias(__imp__sub_823B1668) PPC_WEAK_FUNC(sub_823B1668);
PPC_FUNC_IMPL(__imp__sub_823B1668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr ctx_arrow(ctx)->r12
	// stw ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + -8, ctx_arrow(ctx)->r4.u32);
	// stwu ctx_arrow(ctx)->r1,-112(ctx_arrow(ctx)->r1)
	ea = -112 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// addi ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r8.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// bl 0x823b1300
	sub_823B1300(ctx, base);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,112
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 112;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// blr 
	return;
}

alias(__imp__sub_823B1690) PPC_WEAK_FUNC(sub_823B1690);
PPC_FUNC_IMPL(__imp__sub_823B1690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f29,-40(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -40);
	// stfd f30,-32(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -32);
	// stfd f31,-24(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -24);
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lfs f13,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r4.u64;
	// lfs f12,0(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f12,f13
	f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	f30.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f29,f0,f12
	f29.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x8238d080
	sub_8238D080(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f30.f64));
	// stfs f0,0(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fmuls f0,f1,f29
	f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// stfs f0,4(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// fmuls f0,f1,f31
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,8(ctx_arrow(ctx)->r31)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r31.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
	// lwz ctx_arrow(ctx)->r12,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r12.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtlr ctx_arrow(ctx)->r12
	// lfd f29,-40(ctx_arrow(ctx)->r1)
	f29.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f30,-32(ctx_arrow(ctx)->r1)
	f30.u64 = PPC_Read_U64(ctx,  ctx);
	// lfd f31,-24(ctx_arrow(ctx)->r1)
	f31.u64 = PPC_Read_U64(ctx,  ctx);
	// ld ctx_arrow(ctx)->r31,-16(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B1708) PPC_WEAK_FUNC(sub_823B1708);
PPC_FUNC_IMPL(__imp__sub_823B1708) {
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
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,0(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lfs f13,4(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,4(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// lfs f0,8(ctx_arrow(ctx)->r3)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,8(ctx_arrow(ctx)->r4)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,8(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823B1740) PPC_WEAK_FUNC(sub_823B1740);
PPC_FUNC_IMPL(__imp__sub_823B1740) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// b 0x823ed2b0
	sub_823ED2B0(ctx, base);
	return;
}

alias(__imp__sub_823B1748) PPC_WEAK_FUNC(sub_823B1748);
PPC_FUNC_IMPL(__imp__sub_823B1748) {
	PPC_FUNC_PROLOGUE();
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r4.u64;
	// b 0x823ed250
	sub_823ED250(ctx, base);
	return;
}

alias(__imp__sub_823B1750) PPC_WEAK_FUNC(sub_823B1750);
PPC_FUNC_IMPL(__imp__sub_823B1750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r9,-31987
	ctx_arrow(ctx)->r9.s64 = -2096300032;
	// lwz ctx_arrow(ctx)->r10,-31164(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi. ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,31
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u32 & 0x1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r11.s32, 0, xer);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r11,-31176
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r11.s64 + -31176;
	// bnelr 
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) return;
	// ori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | 1;
	// lis ctx_arrow(ctx)->r11,-32249
	ctx_arrow(ctx)->r11.s64 = -2113470464;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-22224
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -22224;
	// stw ctx_arrow(ctx)->r10,-31164(ctx_arrow(ctx)->r9)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + -31164, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,4
	ctx_arrow(ctx)->r10.s64 = 4;
	// stw ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// li ctx_arrow(ctx)->r10,1
	ctx_arrow(ctx)->r10.s64 = 1;
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r3)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r3.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823B1790) PPC_WEAK_FUNC(sub_823B1790);
PPC_FUNC_IMPL(__imp__sub_823B1790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4,24
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 & 0xFF;
	// clrlwi ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r5,24
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r5.u32 & 0xFF;
	// cmplw ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, ctx_arrow(ctx)->r10.u32, xer);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// lwz ctx_arrow(ctx)->r11,-29844(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,4(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// and. ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r6.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r10.s32, 0, xer);
	// blt ctx_arrow(ctx)->r6,0x823b17e8
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B17E8;
	// lwz ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// beq 0x823b17c8
	if (ctx_arrow(ctx)->r0.eq() goto loc_823B17C8;
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r6.u64;
	// b 0x823b17cc
	goto loc_823B17CC;
loc_823B17C8:
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r6.u64;
loc_823B17CC:
	// lwz ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r6.u64 | ctx_arrow(ctx)->r10.u64;
	// stw ctx_arrow(ctx)->r9,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// b 0x823b1818
	goto loc_823B1818;
loc_823B17E8:
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// beq 0x823b17f8
	if (ctx_arrow(ctx)->r0.eq() goto loc_823B17F8;
	// or ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 | ctx_arrow(ctx)->r6.u64;
	// b 0x823b17fc
	goto loc_823B17FC;
loc_823B17F8:
	// andc ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ~ctx_arrow(ctx)->r6.u64;
loc_823B17FC:
	// stw ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 12, ctx_arrow(ctx)->r4.u32);
	// not ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r6
	ctx_arrow(ctx)->r10.u64 = ~ctx_arrow(ctx)->r6.u64;
	// lwz ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// and ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r8.u64 = ctx_arrow(ctx)->r8.u64 & ctx_arrow(ctx)->r10.u64;
	// and ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r10.u64 & ctx_arrow(ctx)->r9.u64;
	// stw ctx_arrow(ctx)->r8,8(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 8, ctx_arrow(ctx)->r4.u32);
loc_823B1818:
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823B1820) PPC_WEAK_FUNC(sub_823B1820);
PPC_FUNC_IMPL(__imp__sub_823B1820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + -8);
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r11,-29860
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r11.s64 + -29860;
	// lwz ctx_arrow(ctx)->r8,12(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r8.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r8,0
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r8.s32, 0, xer);
	// ble ctx_arrow(ctx)->r6,0x823b1920
	if ((((((((((((((!ctx)))))))))))))->r6.gt()) goto loc_823B1920;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r8.u64;
	// lwz ctx_arrow(ctx)->r10,16(ctx_arrow(ctx)->r9)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r8,-32256
	ctx_arrow(ctx)->r8.s64 = -2113929216;
	// lfs f12,-1296(ctx_arrow(ctx)->r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(ctx_arrow(ctx)->r9)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f11.f64 = double(temp.f32);
	// li ctx_arrow(ctx)->r6,0
	ctx_arrow(ctx)->r6.s64 = 0;
	// mr ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,20
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r10.s64 + 20;
	// lfs f10,2688(ctx_arrow(ctx)->r8)
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f10.f64 = double(temp.f32);
loc_823B185C:
	// li ctx_arrow(ctx)->r7,0
	ctx_arrow(ctx)->r7.s64 = 0;
	// li ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r8.s64 = 1;
	// mr ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r5.u64 = ctx_arrow(ctx)->r4.u64;
loc_823B1868:
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// and. ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r9
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r8.u64 & ctx_arrow(ctx)->r9.u64;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r9.s32, 0, xer);
	// beq 0x823b18e0
	if (ctx_arrow(ctx)->r0.eq()) goto loc_823B18E0;
	// lfs f13,0(ctx_arrow(ctx)->r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f1
	f0.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f0,0(ctx_arrow(ctx)->r5)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f12
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f12.f64);
	// blt ctx_arrow(ctx)->r6,0x823b18f0
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B18F0;
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r6.u64 + ctx_arrow(ctx)->r7.u64;
	// fcmpu ctx_arrow(ctx)->r6,f13,f12
	ctx_arrow(ctx)->r6.compare(ctx.f13.f64, ctx.f12.f64);
	// addi ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,37
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r9.s64 + 37;
	// rlwinm ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,2,0,29
	ctx_arrow(ctx)->r9.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r9.u32 | (ctx_arrow(ctx)->r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bgt ctx_arrow(ctx)->r6,0x823b18b0
	if (ctx_arrow(ctx)->r6.gt()) goto loc_823B18B0;
	// lwz ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// or ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// stfsx f10,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// b 0x823b18f0
	goto loc_823B18F0;
loc_823B18B0:
	// lfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// fcmpu ctx_arrow(ctx)->r6,f0,f11
	ctx_arrow(ctx)->r6.compare(f0.f64, ctx.f11.f64);
	// blt ctx_arrow(ctx)->r6,0x823b18e4
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B18E4;
	// lwz ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// or ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r31.u64 | ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r31,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
	// lfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	temp.u32 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// stfsx f0,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r9.u32 + ctx_arrow(ctx, ctx_arrow(ctx)->r4.u32)->r10.u32);
	// b 0x823b18f0
	goto loc_823B18F0;
loc_823B18E0:
	// stfs f10,0(ctx_arrow(ctx)->r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
loc_823B18E4:
	// lwz ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// andc ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r8
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 & ~ctx_arrow(ctx)->r8.u64;
	// stw ctx_arrow(ctx)->r9,16(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 16, ctx_arrow(ctx)->r4.u32);
loc_823B18F0:
	// addi ctx_arrow(ctx)->r7,ctx_arrow(ctx)->r7,1
	ctx_arrow(ctx)->r7.s64 = ctx_arrow(ctx)->r7.s64 + 1;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r5,4
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r5.s64 + 4;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r8,1,0,30
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r8.u32 | (ctx_arrow(ctx)->r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r7,32
	ctx_arrow(ctx)->r6.compare<int32_t>(ctx_arrow(ctx)->r7.s32, 32, xer);
	// blt ctx_arrow(ctx)->r6,0x823b1868
	if (ctx_arrow(ctx)->r6.lt()) goto loc_823B1868;
	// lwz ctx_arrow(ctx)->r9,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r9.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addic. ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r3,-1
	xer.ca = ctx_arrow(ctx)->r3.u32 > 0;
	ctx_arrow(ctx)->r3.s64 = ctx_arrow(ctx)->r3.s64 + -1;
	ctx_arrow(ctx)->r0.compare<int32_t>(ctx_arrow(ctx)->r3.s32, 0, xer);
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r6,80
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r6.s64 + 80;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r4,320
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r4.s64 + 320;
	// stw ctx_arrow(ctx)->r9,4(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 4, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,320
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + 320;
	// bne 0x823b185c
	if ((((((((((((((!ctx)))))))))))))->r0.eq()) goto loc_823B185C;
loc_823B1920:
	// ld ctx_arrow(ctx)->r31,-8(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r31.u64 = PPC_Read_U64(ctx,  ctx);
	// blr 
	return;
}

alias(__imp__sub_823B1928) PPC_WEAK_FUNC(sub_823B1928);
PPC_FUNC_IMPL(__imp__sub_823B1928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-31148(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -31148, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823B1938) PPC_WEAK_FUNC(sub_823B1938);
PPC_FUNC_IMPL(__imp__sub_823B1938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-29852(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -29852, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823B1948) PPC_WEAK_FUNC(sub_823B1948);
PPC_FUNC_IMPL(__imp__sub_823B1948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-31152(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -31152, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823B1958) PPC_WEAK_FUNC(sub_823B1958);
PPC_FUNC_IMPL(__imp__sub_823B1958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r3,-31160(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + -31160, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823B1968) PPC_WEAK_FUNC(sub_823B1968);
PPC_FUNC_IMPL(__imp__sub_823B1968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cntlzw ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r4
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r4.u32 == 0 ? 32 : __builtin_clz(ctx_arrow(ctx)->r4.u32);
	// mulli ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r9.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// rlwinm ctx_arrow(ctx)->r8,ctx_arrow(ctx)->r11,27,31,31
	ctx_arrow(ctx)->r8.u64 = __builtin_rotateleft64(ctx_arrow(ctx)->r11.u32 | (ctx_arrow(ctx)->r11.u64 << 32), 27) & 0x1;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r11,-29856
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r11.s64 + -29856;
	// lwz ctx_arrow(ctx)->r10,12(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r9,ctx_arrow(ctx)->r10
	ctx_arrow(ctx)->r9.u64 = ctx_arrow(ctx)->r9.u64 + ctx_arrow(ctx)->r10.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// xori ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r8,1
	ctx_arrow(ctx)->r10.u64 = ctx_arrow(ctx)->r8.u64 ^ 1;
	// stb ctx_arrow(ctx)->r10,318(ctx_arrow(ctx)->r9)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r9.u32 + 318, ctx_arrow(ctx)->r4.u8);
	// beqlr ctx_arrow(ctx)->r6
	if (ctx_arrow(ctx)->r6.eq()) return;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// clrlwi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r10,24
	ctx_arrow(ctx)->r4.u64 = ctx_arrow(ctx)->r10.u32 & 0xFF;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

alias(__imp__sub_823B19A8) PPC_WEAK_FUNC(sub_823B19A8);
PPC_FUNC_IMPL(__imp__sub_823B19A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

alias(__imp__sub_823B19B0) PPC_WEAK_FUNC(sub_823B19B0);
PPC_FUNC_IMPL(__imp__sub_823B19B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// lwz ctx_arrow(ctx)->r11,-29844(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r3,318(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r3.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// blr 
	return;
}

alias(__imp__sub_823B19C8) PPC_WEAK_FUNC(sub_823B19C8);
PPC_FUNC_IMPL(__imp__sub_823B19C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-31152
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -31152;
	// lwz ctx_arrow(ctx)->r11,4(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b1a14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B1A14;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,4
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 4;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1A14:
	// lwz ctx_arrow(ctx)->r11,1308(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,292
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 292;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,296
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 296;
	// stw ctx_arrow(ctx)->r10,276(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 276, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,280(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 280, ctx_arrow(ctx)->r4.u32);
	// lwa ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.s64 = int32_t(PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,292(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 292, ctx_arrow(ctx)->r4.u32);
	// lwa ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.s64 = int32_t(PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,296(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 296, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x823b1a84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B1A84;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1A84:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
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

alias(__imp__sub_823B1AA0) PPC_WEAK_FUNC(sub_823B1AA0);
PPC_FUNC_IMPL(__imp__sub_823B1AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// lwz ctx_arrow(ctx)->r11,-29844(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,276(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,280(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823B1AC8) PPC_WEAK_FUNC(sub_823B1AC8);
PPC_FUNC_IMPL(__imp__sub_823B1AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu ctx_arrow(ctx)->r1,-128(ctx_arrow(ctx)->r1)
	ea = -128 + ctx_arrow(ctx)->r1.u32;
	PPC_Write_U32(ctx, ea, ctx_arrow(ctx)->r4.u32);
	ctx_arrow(ctx)->r1.u32 = ea;
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stw ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u32);
	// mr ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r30.u64 = ctx_arrow(ctx)->r3.u64;
	// stw ctx_arrow(ctx)->r5,84(ctx_arrow(ctx)->r1)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r1.u32 + 84, ctx_arrow(ctx)->r4.u32);
	// addi ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r11,-31160
	ctx_arrow(ctx)->r31.s64 = ctx_arrow(ctx)->r11.s64 + -31160;
	// lwz ctx_arrow(ctx)->r11,1308(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b1b14
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B1B14;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r31,1308
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r31.s64 + 1308;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,84
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 84;
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1B14:
	// lwz ctx_arrow(ctx)->r11,1316(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r30,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r30.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r10,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r10.u32, 0, xer);
	// lwz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// addi ctx_arrow(ctx)->r4,ctx_arrow(ctx)->r11,300
	ctx_arrow(ctx)->r4.s64 = ctx_arrow(ctx)->r11.s64 + 300;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r11,304
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r11.s64 + 304;
	// stw ctx_arrow(ctx)->r10,284(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 284, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,288(ctx_arrow(ctx)->r11)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 288, ctx_arrow(ctx)->r4.u32);
	// lwa ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.s64 = int32_t(PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,300(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 300, ctx_arrow(ctx)->r4.u32);
	// lwa ctx_arrow(ctx)->r10,84(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.s64 = int32_t(PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// std ctx_arrow(ctx)->r10,88(ctx_arrow(ctx)->r1)
	PPC_Write_U64(ctx,  ctx, ctx_arrow(ctx)->r1.u32 + 88);
	// lfd f0,88(ctx_arrow(ctx)->r1)
	f0.u64 = PPC_Read_U64(ctx,  ctx);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,304(ctx_arrow(ctx)->r11)
	temp.f32 = float(f0.f64);
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r11.u32 + 304, ctx_arrow(ctx)->r4.u32);
	// beq ctx_arrow(ctx)->r6,0x823b1b84
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B1B84;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r31)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r30
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r30.u64;
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1B84:
	// addi ctx_arrow(ctx)->r1,ctx_arrow(ctx)->r1,128
	ctx_arrow(ctx)->r1.s64 = ctx_arrow(ctx)->r1.s64 + 128;
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

alias(__imp__sub_823B1BA0) PPC_WEAK_FUNC(sub_823B1BA0);
PPC_FUNC_IMPL(__imp__sub_823B1BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// lwz ctx_arrow(ctx)->r11,-29844(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lwz ctx_arrow(ctx)->r10,284(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// lwz ctx_arrow(ctx)->r11,288(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// stw ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	PPC_Write_U32(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx_arrow(ctx)->r4.u32);
	// blr 
	return;
}

alias(__imp__sub_823B1BC8) PPC_WEAK_FUNC(sub_823B1BC8);
PPC_FUNC_IMPL(__imp__sub_823B1BC8) {
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
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// stb ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 80, ctx_arrow(ctx)->r4.u8);
	// mr ctx_arrow(ctx)->r31,ctx_arrow(ctx)->r3
	ctx_arrow(ctx)->r31.u64 = ctx_arrow(ctx)->r3.u64;
	// stb ctx_arrow(ctx)->r5,81(ctx_arrow(ctx)->r1)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r1.u32 + 81, ctx_arrow(ctx)->r4.u8);
	// addi ctx_arrow(ctx)->r30,ctx_arrow(ctx)->r11,-29844
	ctx_arrow(ctx)->r30.s64 = ctx_arrow(ctx)->r11.s64 + -29844;
	// lwz ctx_arrow(ctx)->r11,-20(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// cmplwi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r11,0
	ctx_arrow(ctx)->r6.compare<uint32_t>(ctx_arrow(ctx)->r11.u32, 0, xer);
	// beq ctx_arrow(ctx)->r6,0x823b1c18
	if (ctx_arrow(ctx)->r6.eq()) goto loc_823B1C18;
	// addi ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r30,-20
	ctx_arrow(ctx)->r11.s64 = ctx_arrow(ctx)->r30.s64 + -20;
	// addi ctx_arrow(ctx)->r6,ctx_arrow(ctx)->r1,81
	ctx_arrow(ctx)->r6.s64 = ctx_arrow(ctx)->r1.s64 + 81;
	// addi ctx_arrow(ctx)->r5,ctx_arrow(ctx)->r1,80
	ctx_arrow(ctx)->r5.s64 = ctx_arrow(ctx)->r1.s64 + 80;
	// lis ctx_arrow(ctx)->r4,12288
	ctx_arrow(ctx)->r4.s64 = 805306368;
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mtctr ctx_arrow(ctx)->r11
	ctr.u64 = ctx_arrow(ctx)->r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B1C18:
	// lwz ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r30)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r31,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r31.s64 * 320;
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r10,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// lis ctx_arrow(ctx)->r6,4096
	ctx_arrow(ctx)->r6.s64 = 268435456;
	// li ctx_arrow(ctx)->r5,30
	ctx_arrow(ctx)->r5.s64 = 30;
	// mr ctx_arrow(ctx)->r3,ctx_arrow(ctx)->r31
	ctx_arrow(ctx)->r3.u64 = ctx_arrow(ctx)->r31.u64;
	// stb ctx_arrow(ctx)->r10,316(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 316, ctx_arrow(ctx)->r4.u8);
	// lbz ctx_arrow(ctx)->r10,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r10,317(ctx_arrow(ctx)->r11)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r11.u32 + 317, ctx_arrow(ctx)->r4.u8);
	// lbz ctx_arrow(ctx)->r4,80(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823b1790
	sub_823B1790(ctx, base);
	// lis ctx_arrow(ctx)->r6,8192
	ctx_arrow(ctx)->r6.s64 = 536870912;
	// lbz ctx_arrow(ctx)->r4,81(ctx_arrow(ctx)->r1)
	ctx_arrow(ctx)->r4.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// bl 0x823b1790
	sub_823B1790(ctx, base);
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

alias(__imp__sub_823B1C70) PPC_WEAK_FUNC(sub_823B1C70);
PPC_FUNC_IMPL(__imp__sub_823B1C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis ctx_arrow(ctx)->r11,-31987
	ctx_arrow(ctx)->r11.s64 = -2096300032;
	// mulli ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r3,320
	ctx_arrow(ctx)->r10.s64 = ctx_arrow(ctx)->r3.s64 * 320;
	// lwz ctx_arrow(ctx)->r11,-29844(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U32(ctx, ctx_arrow(ctx)->r1.u32);
	// add ctx_arrow(ctx)->r11,ctx_arrow(ctx)->r10,ctx_arrow(ctx)->r11
	ctx_arrow(ctx)->r11.u64 = ctx_arrow(ctx)->r10.u64 + ctx_arrow(ctx)->r11.u64;
	// lbz ctx_arrow(ctx)->r10,316(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r10.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r10,0(ctx_arrow(ctx)->r4)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r4.u32 + 0, ctx_arrow(ctx)->r4.u8);
	// lbz ctx_arrow(ctx)->r11,317(ctx_arrow(ctx)->r11)
	ctx_arrow(ctx)->r11.u64 = PPC_Read_U8(ctx, ctx_arrow(ctx)->r1.u32);
	// stb ctx_arrow(ctx)->r11,0(ctx_arrow(ctx)->r5)
	PPC_Write_U8(ctx, ctx_arrow(ctx)->r5.u32 + 0, ctx.u8);
	// blr 
	return;
}

